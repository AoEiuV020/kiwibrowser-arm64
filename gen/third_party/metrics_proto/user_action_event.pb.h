// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_action_event.proto

#ifndef PROTOBUF_user_5faction_5fevent_2eproto__INCLUDED
#define PROTOBUF_user_5faction_5fevent_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace metrics {
class UserActionEventProto;
class UserActionEventProtoDefaultTypeInternal;
extern UserActionEventProtoDefaultTypeInternal _UserActionEventProto_default_instance_;
}  // namespace metrics

namespace metrics {

namespace protobuf_user_5faction_5fevent_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_user_5faction_5fevent_2eproto

// ===================================================================

class UserActionEventProto : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.UserActionEventProto) */ {
 public:
  UserActionEventProto();
  virtual ~UserActionEventProto();

  UserActionEventProto(const UserActionEventProto& from);

  inline UserActionEventProto& operator=(const UserActionEventProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const UserActionEventProto& default_instance();

  static inline const UserActionEventProto* internal_default_instance() {
    return reinterpret_cast<const UserActionEventProto*>(
               &_UserActionEventProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(UserActionEventProto* other);

  // implements Message ----------------------------------------------

  inline UserActionEventProto* New() const PROTOBUF_FINAL { return New(NULL); }

  UserActionEventProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const UserActionEventProto& from);
  void MergeFrom(const UserActionEventProto& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UserActionEventProto* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional fixed64 name_hash = 1;
  bool has_name_hash() const;
  void clear_name_hash();
  static const int kNameHashFieldNumber = 1;
  ::google::protobuf::uint64 name_hash() const;
  void set_name_hash(::google::protobuf::uint64 value);

  // optional int64 time_sec = 2;
  bool has_time_sec() const;
  void clear_time_sec();
  static const int kTimeSecFieldNumber = 2;
  ::google::protobuf::int64 time_sec() const;
  void set_time_sec(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:metrics.UserActionEventProto)
 private:
  void set_has_name_hash();
  void clear_has_name_hash();
  void set_has_time_sec();
  void clear_has_time_sec();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 name_hash_;
  ::google::protobuf::int64 time_sec_;
  friend struct protobuf_user_5faction_5fevent_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UserActionEventProto

// optional fixed64 name_hash = 1;
inline bool UserActionEventProto::has_name_hash() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserActionEventProto::set_has_name_hash() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserActionEventProto::clear_has_name_hash() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserActionEventProto::clear_name_hash() {
  name_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_name_hash();
}
inline ::google::protobuf::uint64 UserActionEventProto::name_hash() const {
  // @@protoc_insertion_point(field_get:metrics.UserActionEventProto.name_hash)
  return name_hash_;
}
inline void UserActionEventProto::set_name_hash(::google::protobuf::uint64 value) {
  set_has_name_hash();
  name_hash_ = value;
  // @@protoc_insertion_point(field_set:metrics.UserActionEventProto.name_hash)
}

// optional int64 time_sec = 2;
inline bool UserActionEventProto::has_time_sec() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserActionEventProto::set_has_time_sec() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserActionEventProto::clear_has_time_sec() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserActionEventProto::clear_time_sec() {
  time_sec_ = GOOGLE_LONGLONG(0);
  clear_has_time_sec();
}
inline ::google::protobuf::int64 UserActionEventProto::time_sec() const {
  // @@protoc_insertion_point(field_get:metrics.UserActionEventProto.time_sec)
  return time_sec_;
}
inline void UserActionEventProto::set_time_sec(::google::protobuf::int64 value) {
  set_has_time_sec();
  time_sec_ = value;
  // @@protoc_insertion_point(field_set:metrics.UserActionEventProto.time_sec)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace metrics

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_user_5faction_5fevent_2eproto__INCLUDED
