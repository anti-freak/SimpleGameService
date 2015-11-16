#pragma once

#include "NetworkMessage.hpp"

namespace network
{
	class Connection : public QObject, boost::noncopyable
	{
		Q_OBJECT

	private:
		using super = QObject;
		QTcpSocket& m_Socket;
		std::unique_ptr<IMessage> m_NewMessage;
		std::queue<QByteArray> m_OutBuffers;

		QByteArray m_PreviousBuffer;	// If an exception is thrown, because of invalid header, it could be partial available. Because of this, we store the
										// buffer here, if an IMessageHeaderError exception was thrown.

		void _createNewMessage(QByteArray& _buffer);

	public:
		Connection(QTcpSocket& _socket, QObject* _parent);

		void close();
		void send(QByteArray _msg);

	signals:
		void messageReceived(const network::IMessage&);

	private slots:
		void _onDisconnected();
		void _onReadyRead();
		void _onBytesWritten(qint64 _bytes);
	};
}