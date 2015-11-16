// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#ifndef PROTOBUF_Message_2eproto__INCLUDED
#define PROTOBUF_Message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace network {
namespace protobuf {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Message_2eproto();
void protobuf_AssignDesc_Message_2eproto();
void protobuf_ShutdownFile_Message_2eproto();

class Achievement;
class GameAchievement;
class GameIdent;
class Login;

enum Achievement_Type {
  Achievement_Type_COMPLETE = 0,
  Achievement_Type_ADD = 1,
  Achievement_Type_Achievement_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Achievement_Type_Achievement_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Achievement_Type_IsValid(int value);
const Achievement_Type Achievement_Type_Type_MIN = Achievement_Type_COMPLETE;
const Achievement_Type Achievement_Type_Type_MAX = Achievement_Type_ADD;
const int Achievement_Type_Type_ARRAYSIZE = Achievement_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Achievement_Type_descriptor();
inline const ::std::string& Achievement_Type_Name(Achievement_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Achievement_Type_descriptor(), value);
}
inline bool Achievement_Type_Parse(
    const ::std::string& name, Achievement_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Achievement_Type>(
    Achievement_Type_descriptor(), name, value);
}
// ===================================================================

class Login : public ::google::protobuf::Message {
 public:
  Login();
  virtual ~Login();

  Login(const Login& from);

  inline Login& operator=(const Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Login& default_instance();

  void Swap(Login* other);

  // implements Message ----------------------------------------------

  inline Login* New() const { return New(NULL); }

  Login* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Login& from);
  void MergeFrom(const Login& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Login* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string password = 2;
  void clear_password();
  static const int kPasswordFieldNumber = 2;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:network.protobuf.Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static Login* default_instance_;
};
// -------------------------------------------------------------------

class GameAchievement : public ::google::protobuf::Message {
 public:
  GameAchievement();
  virtual ~GameAchievement();

  GameAchievement(const GameAchievement& from);

  inline GameAchievement& operator=(const GameAchievement& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GameAchievement& default_instance();

  void Swap(GameAchievement* other);

  // implements Message ----------------------------------------------

  inline GameAchievement* New() const { return New(NULL); }

  GameAchievement* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GameAchievement& from);
  void MergeFrom(const GameAchievement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GameAchievement* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .network.protobuf.GameIdent gameID = 1;
  bool has_gameid() const;
  void clear_gameid();
  static const int kGameIDFieldNumber = 1;
  const ::network::protobuf::GameIdent& gameid() const;
  ::network::protobuf::GameIdent* mutable_gameid();
  ::network::protobuf::GameIdent* release_gameid();
  void set_allocated_gameid(::network::protobuf::GameIdent* gameid);

  // repeated .network.protobuf.Achievement achievements = 2;
  int achievements_size() const;
  void clear_achievements();
  static const int kAchievementsFieldNumber = 2;
  const ::network::protobuf::Achievement& achievements(int index) const;
  ::network::protobuf::Achievement* mutable_achievements(int index);
  ::network::protobuf::Achievement* add_achievements();
  ::google::protobuf::RepeatedPtrField< ::network::protobuf::Achievement >*
      mutable_achievements();
  const ::google::protobuf::RepeatedPtrField< ::network::protobuf::Achievement >&
      achievements() const;

  // @@protoc_insertion_point(class_scope:network.protobuf.GameAchievement)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::network::protobuf::GameIdent* gameid_;
  ::google::protobuf::RepeatedPtrField< ::network::protobuf::Achievement > achievements_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static GameAchievement* default_instance_;
};
// -------------------------------------------------------------------

class GameIdent : public ::google::protobuf::Message {
 public:
  GameIdent();
  virtual ~GameIdent();

  GameIdent(const GameIdent& from);

  inline GameIdent& operator=(const GameIdent& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GameIdent& default_instance();

  void Swap(GameIdent* other);

  // implements Message ----------------------------------------------

  inline GameIdent* New() const { return New(NULL); }

  GameIdent* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GameIdent& from);
  void MergeFrom(const GameIdent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GameIdent* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 gameID = 1;
  void clear_gameid();
  static const int kGameIDFieldNumber = 1;
  ::google::protobuf::uint64 gameid() const;
  void set_gameid(::google::protobuf::uint64 value);

  // optional bytes hash = 2;
  void clear_hash();
  static const int kHashFieldNumber = 2;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  void set_hash(const char* value);
  void set_hash(const void* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // @@protoc_insertion_point(class_scope:network.protobuf.GameIdent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 gameid_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static GameIdent* default_instance_;
};
// -------------------------------------------------------------------

class Achievement : public ::google::protobuf::Message {
 public:
  Achievement();
  virtual ~Achievement();

  Achievement(const Achievement& from);

  inline Achievement& operator=(const Achievement& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Achievement& default_instance();

  void Swap(Achievement* other);

  // implements Message ----------------------------------------------

  inline Achievement* New() const { return New(NULL); }

  Achievement* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Achievement& from);
  void MergeFrom(const Achievement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Achievement* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Achievement_Type Type;
  static const Type COMPLETE = Achievement_Type_COMPLETE;
  static const Type ADD = Achievement_Type_ADD;
  static inline bool Type_IsValid(int value) {
    return Achievement_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Achievement_Type_Type_MIN;
  static const Type Type_MAX =
    Achievement_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Achievement_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Achievement_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Achievement_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Achievement_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional uint32 ID = 1;
  void clear_id();
  static const int kIDFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional .network.protobuf.Achievement.Type type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::network::protobuf::Achievement_Type type() const;
  void set_type(::network::protobuf::Achievement_Type value);

  // @@protoc_insertion_point(class_scope:network.protobuf.Achievement)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 id_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static Achievement* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Login

// optional string name = 1;
inline void Login::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Login::name() const {
  // @@protoc_insertion_point(field_get:network.protobuf.Login.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Login::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:network.protobuf.Login.name)
}
inline void Login::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:network.protobuf.Login.name)
}
inline void Login::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:network.protobuf.Login.name)
}
inline ::std::string* Login::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:network.protobuf.Login.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Login::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Login::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:network.protobuf.Login.name)
}

// optional string password = 2;
inline void Login::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Login::password() const {
  // @@protoc_insertion_point(field_get:network.protobuf.Login.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Login::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:network.protobuf.Login.password)
}
inline void Login::set_password(const char* value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:network.protobuf.Login.password)
}
inline void Login::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:network.protobuf.Login.password)
}
inline ::std::string* Login::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:network.protobuf.Login.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Login::release_password() {
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Login::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:network.protobuf.Login.password)
}

// -------------------------------------------------------------------

// GameAchievement

// optional .network.protobuf.GameIdent gameID = 1;
inline bool GameAchievement::has_gameid() const {
  return !_is_default_instance_ && gameid_ != NULL;
}
inline void GameAchievement::clear_gameid() {
  if (GetArenaNoVirtual() == NULL && gameid_ != NULL) delete gameid_;
  gameid_ = NULL;
}
inline const ::network::protobuf::GameIdent& GameAchievement::gameid() const {
  // @@protoc_insertion_point(field_get:network.protobuf.GameAchievement.gameID)
  return gameid_ != NULL ? *gameid_ : *default_instance_->gameid_;
}
inline ::network::protobuf::GameIdent* GameAchievement::mutable_gameid() {
  
  if (gameid_ == NULL) {
    gameid_ = new ::network::protobuf::GameIdent;
  }
  // @@protoc_insertion_point(field_mutable:network.protobuf.GameAchievement.gameID)
  return gameid_;
}
inline ::network::protobuf::GameIdent* GameAchievement::release_gameid() {
  
  ::network::protobuf::GameIdent* temp = gameid_;
  gameid_ = NULL;
  return temp;
}
inline void GameAchievement::set_allocated_gameid(::network::protobuf::GameIdent* gameid) {
  delete gameid_;
  gameid_ = gameid;
  if (gameid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:network.protobuf.GameAchievement.gameID)
}

// repeated .network.protobuf.Achievement achievements = 2;
inline int GameAchievement::achievements_size() const {
  return achievements_.size();
}
inline void GameAchievement::clear_achievements() {
  achievements_.Clear();
}
inline const ::network::protobuf::Achievement& GameAchievement::achievements(int index) const {
  // @@protoc_insertion_point(field_get:network.protobuf.GameAchievement.achievements)
  return achievements_.Get(index);
}
inline ::network::protobuf::Achievement* GameAchievement::mutable_achievements(int index) {
  // @@protoc_insertion_point(field_mutable:network.protobuf.GameAchievement.achievements)
  return achievements_.Mutable(index);
}
inline ::network::protobuf::Achievement* GameAchievement::add_achievements() {
  // @@protoc_insertion_point(field_add:network.protobuf.GameAchievement.achievements)
  return achievements_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::network::protobuf::Achievement >*
GameAchievement::mutable_achievements() {
  // @@protoc_insertion_point(field_mutable_list:network.protobuf.GameAchievement.achievements)
  return &achievements_;
}
inline const ::google::protobuf::RepeatedPtrField< ::network::protobuf::Achievement >&
GameAchievement::achievements() const {
  // @@protoc_insertion_point(field_list:network.protobuf.GameAchievement.achievements)
  return achievements_;
}

// -------------------------------------------------------------------

// GameIdent

// optional uint64 gameID = 1;
inline void GameIdent::clear_gameid() {
  gameid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 GameIdent::gameid() const {
  // @@protoc_insertion_point(field_get:network.protobuf.GameIdent.gameID)
  return gameid_;
}
inline void GameIdent::set_gameid(::google::protobuf::uint64 value) {
  
  gameid_ = value;
  // @@protoc_insertion_point(field_set:network.protobuf.GameIdent.gameID)
}

// optional bytes hash = 2;
inline void GameIdent::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GameIdent::hash() const {
  // @@protoc_insertion_point(field_get:network.protobuf.GameIdent.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GameIdent::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:network.protobuf.GameIdent.hash)
}
inline void GameIdent::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:network.protobuf.GameIdent.hash)
}
inline void GameIdent::set_hash(const void* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:network.protobuf.GameIdent.hash)
}
inline ::std::string* GameIdent::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:network.protobuf.GameIdent.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GameIdent::release_hash() {
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GameIdent::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:network.protobuf.GameIdent.hash)
}

// -------------------------------------------------------------------

// Achievement

// optional uint32 ID = 1;
inline void Achievement::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 Achievement::id() const {
  // @@protoc_insertion_point(field_get:network.protobuf.Achievement.ID)
  return id_;
}
inline void Achievement::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:network.protobuf.Achievement.ID)
}

// optional .network.protobuf.Achievement.Type type = 2;
inline void Achievement::clear_type() {
  type_ = 0;
}
inline ::network::protobuf::Achievement_Type Achievement::type() const {
  // @@protoc_insertion_point(field_get:network.protobuf.Achievement.type)
  return static_cast< ::network::protobuf::Achievement_Type >(type_);
}
inline void Achievement::set_type(::network::protobuf::Achievement_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:network.protobuf.Achievement.type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace network

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::network::protobuf::Achievement_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::network::protobuf::Achievement_Type>() {
  return ::network::protobuf::Achievement_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Message_2eproto__INCLUDED