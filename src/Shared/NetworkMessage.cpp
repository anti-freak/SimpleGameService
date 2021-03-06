#include "stdafx.h"
#include "NetworkMessage.hpp"
#include "moc_NetworkMessage.hpp"
#include "NetworkExceptions.hpp"

namespace network
{
	/*#####
	# OMessage
	#####*/
	IMessage::IMessage(QObject* _parent) :
		super(_parent)
	{
	}

	int IMessage::setupHeader(const char* _c, int _size)
	{
		auto buffer = QByteArray::fromRawData(_c, _size);
		auto index = buffer.indexOf(PacketBegin.data());
		if (index < 0)
			throw IMessageHeaderError("Invalid packet received.");
		QDataStream in(buffer);
		in.skipRawData(index + PacketBegin.size());
		in >> m_Version;
		if (m_Version <= 0)
			throw IMessageError("Invalid version received.");
		in >> m_MessageType;
		if (m_MessageType <= 0)
			throw IMessageError("Invalid type received.");
		in >> m_ExpectedSize;
		if (m_ExpectedSize <= 0)
			throw IMessageError("Invalid packet size received.");
		m_Bytes.resize(m_ExpectedSize);
		return (int)PacketBegin.size() + sizeof(m_ExpectedSize) + sizeof(m_Version) + sizeof(m_MessageType);
	}

	int IMessage::append(const char* _c, int _size)
	{
		if (m_ExpectedSize == 0)
			throw IMessageError("Message has not been established.");
		auto buffer = QByteArray::fromRawData(_c, _size);
		QDataStream in(buffer);
		auto bytesRead = in.readRawData(m_Bytes.data() + m_CurrentByte, m_ExpectedSize - m_CurrentByte);
		if (bytesRead < 0)
			throw IMessageError("Error while buffer reading.");
		m_CurrentByte += bytesRead;
		return bytesRead;
	}

	QByteArray IMessage::getBytes() const
	{
		return m_Bytes;
	}

	bool IMessage::isComplete() const
	{
		return m_CurrentByte == m_ExpectedSize;
	}

	MessageType IMessage::getMessageType() const
	{
		return m_MessageType;
	}

	VersionType IMessage::getVersion() const
	{
		return m_Version;
	}

	/*#####
	# OMessage
	#####*/
	OMessage::OMessage(QObject* _parent) :
		super(_parent)
	{
	}

	void OMessage::setup(VersionType _version, MessageType _type, QByteArray _buffer)
	{
		m_Bytes.clear();
		QDataStream out(&m_Bytes, QIODevice::WriteOnly);
		out.writeRawData(network::PacketBegin.data(), network::PacketBegin.size());
		out << _version;
		out << _type;
		out << (network::MessageSizeType)_buffer.size();
		m_Bytes += _buffer;
	}

	QByteArray OMessage::getBytes() const
	{
		if (m_Bytes.isEmpty())
			throw OMessageError("OMessage buffer is empty.");
		return m_Bytes;
	}
} // namespace network;
