// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/data_source_descriptor.proto

#ifndef PROTOBUF_perfetto_2fconfig_2fdata_5fsource_5fdescriptor_2eproto__INCLUDED
#define PROTOBUF_perfetto_2fconfig_2fdata_5fsource_5fdescriptor_2eproto__INCLUDED

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
namespace perfetto {
namespace protos {
class DataSourceDescriptor;
class DataSourceDescriptorDefaultTypeInternal;
extern DataSourceDescriptorDefaultTypeInternal _DataSourceDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto

namespace perfetto {
namespace protos {

namespace protobuf_perfetto_2fconfig_2fdata_5fsource_5fdescriptor_2eproto {
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
}  // namespace protobuf_perfetto_2fconfig_2fdata_5fsource_5fdescriptor_2eproto

// ===================================================================

class DataSourceDescriptor : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.DataSourceDescriptor) */ {
 public:
  DataSourceDescriptor();
  virtual ~DataSourceDescriptor();

  DataSourceDescriptor(const DataSourceDescriptor& from);

  inline DataSourceDescriptor& operator=(const DataSourceDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const DataSourceDescriptor& default_instance();

  static inline const DataSourceDescriptor* internal_default_instance() {
    return reinterpret_cast<const DataSourceDescriptor*>(
               &_DataSourceDescriptor_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(DataSourceDescriptor* other);

  // implements Message ----------------------------------------------

  inline DataSourceDescriptor* New() const PROTOBUF_FINAL { return New(NULL); }

  DataSourceDescriptor* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const DataSourceDescriptor& from);
  void MergeFrom(const DataSourceDescriptor& from);
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
  void InternalSwap(DataSourceDescriptor* other);
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

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:perfetto.protos.DataSourceDescriptor)
 private:
  void set_has_name();
  void clear_has_name();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  friend struct protobuf_perfetto_2fconfig_2fdata_5fsource_5fdescriptor_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DataSourceDescriptor

// optional string name = 1;
inline bool DataSourceDescriptor::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataSourceDescriptor::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataSourceDescriptor::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataSourceDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& DataSourceDescriptor::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.name)
  return name_.GetNoArena();
}
inline void DataSourceDescriptor::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DataSourceDescriptor.name)
}
#if LANG_CXX11
inline void DataSourceDescriptor::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.DataSourceDescriptor.name)
}
#endif
inline void DataSourceDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.DataSourceDescriptor.name)
}
inline void DataSourceDescriptor::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.DataSourceDescriptor.name)
}
inline ::std::string* DataSourceDescriptor::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.DataSourceDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataSourceDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.DataSourceDescriptor.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataSourceDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.DataSourceDescriptor.name)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perfetto_2fconfig_2fdata_5fsource_5fdescriptor_2eproto__INCLUDED
