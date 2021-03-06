// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: call_stack_profile.proto

#ifndef PROTOBUF_call_5fstack_5fprofile_2eproto__INCLUDED
#define PROTOBUF_call_5fstack_5fprofile_2eproto__INCLUDED

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
#include "execution_context.pb.h"
// @@protoc_insertion_point(includes)
namespace metrics {
class CallStackProfile;
class CallStackProfileDefaultTypeInternal;
extern CallStackProfileDefaultTypeInternal _CallStackProfile_default_instance_;
class CallStackProfile_Entry;
class CallStackProfile_EntryDefaultTypeInternal;
extern CallStackProfile_EntryDefaultTypeInternal _CallStackProfile_Entry_default_instance_;
class CallStackProfile_ModuleIdentifier;
class CallStackProfile_ModuleIdentifierDefaultTypeInternal;
extern CallStackProfile_ModuleIdentifierDefaultTypeInternal _CallStackProfile_ModuleIdentifier_default_instance_;
class CallStackProfile_Sample;
class CallStackProfile_SampleDefaultTypeInternal;
extern CallStackProfile_SampleDefaultTypeInternal _CallStackProfile_Sample_default_instance_;
}  // namespace metrics

namespace metrics {

namespace protobuf_call_5fstack_5fprofile_2eproto {
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
}  // namespace protobuf_call_5fstack_5fprofile_2eproto

// ===================================================================

class CallStackProfile_Entry : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.CallStackProfile.Entry) */ {
 public:
  CallStackProfile_Entry();
  virtual ~CallStackProfile_Entry();

  CallStackProfile_Entry(const CallStackProfile_Entry& from);

  inline CallStackProfile_Entry& operator=(const CallStackProfile_Entry& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const CallStackProfile_Entry& default_instance();

  static inline const CallStackProfile_Entry* internal_default_instance() {
    return reinterpret_cast<const CallStackProfile_Entry*>(
               &_CallStackProfile_Entry_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(CallStackProfile_Entry* other);

  // implements Message ----------------------------------------------

  inline CallStackProfile_Entry* New() const PROTOBUF_FINAL { return New(NULL); }

  CallStackProfile_Entry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CallStackProfile_Entry& from);
  void MergeFrom(const CallStackProfile_Entry& from);
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
  void InternalSwap(CallStackProfile_Entry* other);
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

  // optional uint64 address = 1;
  bool has_address() const;
  void clear_address();
  static const int kAddressFieldNumber = 1;
  ::google::protobuf::uint64 address() const;
  void set_address(::google::protobuf::uint64 value);

  // optional int32 module_id_index = 2;
  bool has_module_id_index() const;
  void clear_module_id_index();
  static const int kModuleIdIndexFieldNumber = 2;
  ::google::protobuf::int32 module_id_index() const;
  void set_module_id_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:metrics.CallStackProfile.Entry)
 private:
  void set_has_address();
  void clear_has_address();
  void set_has_module_id_index();
  void clear_has_module_id_index();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 address_;
  ::google::protobuf::int32 module_id_index_;
  friend struct protobuf_call_5fstack_5fprofile_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CallStackProfile_Sample : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.CallStackProfile.Sample) */ {
 public:
  CallStackProfile_Sample();
  virtual ~CallStackProfile_Sample();

  CallStackProfile_Sample(const CallStackProfile_Sample& from);

  inline CallStackProfile_Sample& operator=(const CallStackProfile_Sample& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const CallStackProfile_Sample& default_instance();

  static inline const CallStackProfile_Sample* internal_default_instance() {
    return reinterpret_cast<const CallStackProfile_Sample*>(
               &_CallStackProfile_Sample_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(CallStackProfile_Sample* other);

  // implements Message ----------------------------------------------

  inline CallStackProfile_Sample* New() const PROTOBUF_FINAL { return New(NULL); }

  CallStackProfile_Sample* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CallStackProfile_Sample& from);
  void MergeFrom(const CallStackProfile_Sample& from);
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
  void InternalSwap(CallStackProfile_Sample* other);
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

  // repeated .metrics.CallStackProfile.Entry entry = 1;
  int entry_size() const;
  void clear_entry();
  static const int kEntryFieldNumber = 1;
  const ::metrics::CallStackProfile_Entry& entry(int index) const;
  ::metrics::CallStackProfile_Entry* mutable_entry(int index);
  ::metrics::CallStackProfile_Entry* add_entry();
  ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Entry >*
      mutable_entry();
  const ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Entry >&
      entry() const;

  // repeated .metrics.ProcessPhase process_phase = 3;
  int process_phase_size() const;
  void clear_process_phase();
  static const int kProcessPhaseFieldNumber = 3;
  ::metrics::ProcessPhase process_phase(int index) const;
  void set_process_phase(int index, ::metrics::ProcessPhase value);
  void add_process_phase(::metrics::ProcessPhase value);
  const ::google::protobuf::RepeatedField<int>& process_phase() const;
  ::google::protobuf::RepeatedField<int>* mutable_process_phase();

  // optional int64 count = 2;
  bool has_count() const;
  void clear_count();
  static const int kCountFieldNumber = 2;
  ::google::protobuf::int64 count() const;
  void set_count(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:metrics.CallStackProfile.Sample)
 private:
  void set_has_count();
  void clear_has_count();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Entry > entry_;
  ::google::protobuf::RepeatedField<int> process_phase_;
  ::google::protobuf::int64 count_;
  friend struct protobuf_call_5fstack_5fprofile_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CallStackProfile_ModuleIdentifier : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.CallStackProfile.ModuleIdentifier) */ {
 public:
  CallStackProfile_ModuleIdentifier();
  virtual ~CallStackProfile_ModuleIdentifier();

  CallStackProfile_ModuleIdentifier(const CallStackProfile_ModuleIdentifier& from);

  inline CallStackProfile_ModuleIdentifier& operator=(const CallStackProfile_ModuleIdentifier& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const CallStackProfile_ModuleIdentifier& default_instance();

  static inline const CallStackProfile_ModuleIdentifier* internal_default_instance() {
    return reinterpret_cast<const CallStackProfile_ModuleIdentifier*>(
               &_CallStackProfile_ModuleIdentifier_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(CallStackProfile_ModuleIdentifier* other);

  // implements Message ----------------------------------------------

  inline CallStackProfile_ModuleIdentifier* New() const PROTOBUF_FINAL { return New(NULL); }

  CallStackProfile_ModuleIdentifier* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CallStackProfile_ModuleIdentifier& from);
  void MergeFrom(const CallStackProfile_ModuleIdentifier& from);
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
  void InternalSwap(CallStackProfile_ModuleIdentifier* other);
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

  // optional string build_id = 1;
  bool has_build_id() const;
  void clear_build_id();
  static const int kBuildIdFieldNumber = 1;
  const ::std::string& build_id() const;
  void set_build_id(const ::std::string& value);
  #if LANG_CXX11
  void set_build_id(::std::string&& value);
  #endif
  void set_build_id(const char* value);
  void set_build_id(const char* value, size_t size);
  ::std::string* mutable_build_id();
  ::std::string* release_build_id();
  void set_allocated_build_id(::std::string* build_id);

  // optional fixed64 name_md5_prefix = 2;
  bool has_name_md5_prefix() const;
  void clear_name_md5_prefix();
  static const int kNameMd5PrefixFieldNumber = 2;
  ::google::protobuf::uint64 name_md5_prefix() const;
  void set_name_md5_prefix(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:metrics.CallStackProfile.ModuleIdentifier)
 private:
  void set_has_build_id();
  void clear_has_build_id();
  void set_has_name_md5_prefix();
  void clear_has_name_md5_prefix();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr build_id_;
  ::google::protobuf::uint64 name_md5_prefix_;
  friend struct protobuf_call_5fstack_5fprofile_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CallStackProfile : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.CallStackProfile) */ {
 public:
  CallStackProfile();
  virtual ~CallStackProfile();

  CallStackProfile(const CallStackProfile& from);

  inline CallStackProfile& operator=(const CallStackProfile& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const CallStackProfile& default_instance();

  static inline const CallStackProfile* internal_default_instance() {
    return reinterpret_cast<const CallStackProfile*>(
               &_CallStackProfile_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(CallStackProfile* other);

  // implements Message ----------------------------------------------

  inline CallStackProfile* New() const PROTOBUF_FINAL { return New(NULL); }

  CallStackProfile* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CallStackProfile& from);
  void MergeFrom(const CallStackProfile& from);
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
  void InternalSwap(CallStackProfile* other);
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

  typedef CallStackProfile_Entry Entry;
  typedef CallStackProfile_Sample Sample;
  typedef CallStackProfile_ModuleIdentifier ModuleIdentifier;

  // accessors -------------------------------------------------------

  // repeated .metrics.CallStackProfile.Sample sample = 1;
  int sample_size() const;
  void clear_sample();
  static const int kSampleFieldNumber = 1;
  const ::metrics::CallStackProfile_Sample& sample(int index) const;
  ::metrics::CallStackProfile_Sample* mutable_sample(int index);
  ::metrics::CallStackProfile_Sample* add_sample();
  ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Sample >*
      mutable_sample();
  const ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Sample >&
      sample() const;

  // repeated .metrics.CallStackProfile.ModuleIdentifier module_id = 2;
  int module_id_size() const;
  void clear_module_id();
  static const int kModuleIdFieldNumber = 2;
  const ::metrics::CallStackProfile_ModuleIdentifier& module_id(int index) const;
  ::metrics::CallStackProfile_ModuleIdentifier* mutable_module_id(int index);
  ::metrics::CallStackProfile_ModuleIdentifier* add_module_id();
  ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_ModuleIdentifier >*
      mutable_module_id();
  const ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_ModuleIdentifier >&
      module_id() const;

  // optional int32 profile_duration_ms = 3;
  bool has_profile_duration_ms() const;
  void clear_profile_duration_ms();
  static const int kProfileDurationMsFieldNumber = 3;
  ::google::protobuf::int32 profile_duration_ms() const;
  void set_profile_duration_ms(::google::protobuf::int32 value);

  // optional int32 sampling_period_ms = 4;
  bool has_sampling_period_ms() const;
  void clear_sampling_period_ms();
  static const int kSamplingPeriodMsFieldNumber = 4;
  ::google::protobuf::int32 sampling_period_ms() const;
  void set_sampling_period_ms(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:metrics.CallStackProfile)
 private:
  void set_has_profile_duration_ms();
  void clear_has_profile_duration_ms();
  void set_has_sampling_period_ms();
  void clear_has_sampling_period_ms();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Sample > sample_;
  ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_ModuleIdentifier > module_id_;
  ::google::protobuf::int32 profile_duration_ms_;
  ::google::protobuf::int32 sampling_period_ms_;
  friend struct protobuf_call_5fstack_5fprofile_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CallStackProfile_Entry

// optional uint64 address = 1;
inline bool CallStackProfile_Entry::has_address() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CallStackProfile_Entry::set_has_address() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CallStackProfile_Entry::clear_has_address() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CallStackProfile_Entry::clear_address() {
  address_ = GOOGLE_ULONGLONG(0);
  clear_has_address();
}
inline ::google::protobuf::uint64 CallStackProfile_Entry::address() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.Entry.address)
  return address_;
}
inline void CallStackProfile_Entry::set_address(::google::protobuf::uint64 value) {
  set_has_address();
  address_ = value;
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.Entry.address)
}

// optional int32 module_id_index = 2;
inline bool CallStackProfile_Entry::has_module_id_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CallStackProfile_Entry::set_has_module_id_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CallStackProfile_Entry::clear_has_module_id_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CallStackProfile_Entry::clear_module_id_index() {
  module_id_index_ = 0;
  clear_has_module_id_index();
}
inline ::google::protobuf::int32 CallStackProfile_Entry::module_id_index() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.Entry.module_id_index)
  return module_id_index_;
}
inline void CallStackProfile_Entry::set_module_id_index(::google::protobuf::int32 value) {
  set_has_module_id_index();
  module_id_index_ = value;
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.Entry.module_id_index)
}

// -------------------------------------------------------------------

// CallStackProfile_Sample

// repeated .metrics.CallStackProfile.Entry entry = 1;
inline int CallStackProfile_Sample::entry_size() const {
  return entry_.size();
}
inline void CallStackProfile_Sample::clear_entry() {
  entry_.Clear();
}
inline const ::metrics::CallStackProfile_Entry& CallStackProfile_Sample::entry(int index) const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.Sample.entry)
  return entry_.Get(index);
}
inline ::metrics::CallStackProfile_Entry* CallStackProfile_Sample::mutable_entry(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.CallStackProfile.Sample.entry)
  return entry_.Mutable(index);
}
inline ::metrics::CallStackProfile_Entry* CallStackProfile_Sample::add_entry() {
  // @@protoc_insertion_point(field_add:metrics.CallStackProfile.Sample.entry)
  return entry_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Entry >*
CallStackProfile_Sample::mutable_entry() {
  // @@protoc_insertion_point(field_mutable_list:metrics.CallStackProfile.Sample.entry)
  return &entry_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Entry >&
CallStackProfile_Sample::entry() const {
  // @@protoc_insertion_point(field_list:metrics.CallStackProfile.Sample.entry)
  return entry_;
}

// optional int64 count = 2;
inline bool CallStackProfile_Sample::has_count() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CallStackProfile_Sample::set_has_count() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CallStackProfile_Sample::clear_has_count() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CallStackProfile_Sample::clear_count() {
  count_ = GOOGLE_LONGLONG(0);
  clear_has_count();
}
inline ::google::protobuf::int64 CallStackProfile_Sample::count() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.Sample.count)
  return count_;
}
inline void CallStackProfile_Sample::set_count(::google::protobuf::int64 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.Sample.count)
}

// repeated .metrics.ProcessPhase process_phase = 3;
inline int CallStackProfile_Sample::process_phase_size() const {
  return process_phase_.size();
}
inline void CallStackProfile_Sample::clear_process_phase() {
  process_phase_.Clear();
}
inline ::metrics::ProcessPhase CallStackProfile_Sample::process_phase(int index) const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.Sample.process_phase)
  return static_cast< ::metrics::ProcessPhase >(process_phase_.Get(index));
}
inline void CallStackProfile_Sample::set_process_phase(int index, ::metrics::ProcessPhase value) {
  assert(::metrics::ProcessPhase_IsValid(value));
  process_phase_.Set(index, value);
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.Sample.process_phase)
}
inline void CallStackProfile_Sample::add_process_phase(::metrics::ProcessPhase value) {
  assert(::metrics::ProcessPhase_IsValid(value));
  process_phase_.Add(value);
  // @@protoc_insertion_point(field_add:metrics.CallStackProfile.Sample.process_phase)
}
inline const ::google::protobuf::RepeatedField<int>&
CallStackProfile_Sample::process_phase() const {
  // @@protoc_insertion_point(field_list:metrics.CallStackProfile.Sample.process_phase)
  return process_phase_;
}
inline ::google::protobuf::RepeatedField<int>*
CallStackProfile_Sample::mutable_process_phase() {
  // @@protoc_insertion_point(field_mutable_list:metrics.CallStackProfile.Sample.process_phase)
  return &process_phase_;
}

// -------------------------------------------------------------------

// CallStackProfile_ModuleIdentifier

// optional string build_id = 1;
inline bool CallStackProfile_ModuleIdentifier::has_build_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CallStackProfile_ModuleIdentifier::set_has_build_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CallStackProfile_ModuleIdentifier::clear_has_build_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CallStackProfile_ModuleIdentifier::clear_build_id() {
  build_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_build_id();
}
inline const ::std::string& CallStackProfile_ModuleIdentifier::build_id() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.ModuleIdentifier.build_id)
  return build_id_.GetNoArena();
}
inline void CallStackProfile_ModuleIdentifier::set_build_id(const ::std::string& value) {
  set_has_build_id();
  build_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.ModuleIdentifier.build_id)
}
#if LANG_CXX11
inline void CallStackProfile_ModuleIdentifier::set_build_id(::std::string&& value) {
  set_has_build_id();
  build_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.CallStackProfile.ModuleIdentifier.build_id)
}
#endif
inline void CallStackProfile_ModuleIdentifier::set_build_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_build_id();
  build_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.CallStackProfile.ModuleIdentifier.build_id)
}
inline void CallStackProfile_ModuleIdentifier::set_build_id(const char* value, size_t size) {
  set_has_build_id();
  build_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.CallStackProfile.ModuleIdentifier.build_id)
}
inline ::std::string* CallStackProfile_ModuleIdentifier::mutable_build_id() {
  set_has_build_id();
  // @@protoc_insertion_point(field_mutable:metrics.CallStackProfile.ModuleIdentifier.build_id)
  return build_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CallStackProfile_ModuleIdentifier::release_build_id() {
  // @@protoc_insertion_point(field_release:metrics.CallStackProfile.ModuleIdentifier.build_id)
  clear_has_build_id();
  return build_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CallStackProfile_ModuleIdentifier::set_allocated_build_id(::std::string* build_id) {
  if (build_id != NULL) {
    set_has_build_id();
  } else {
    clear_has_build_id();
  }
  build_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), build_id);
  // @@protoc_insertion_point(field_set_allocated:metrics.CallStackProfile.ModuleIdentifier.build_id)
}

// optional fixed64 name_md5_prefix = 2;
inline bool CallStackProfile_ModuleIdentifier::has_name_md5_prefix() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CallStackProfile_ModuleIdentifier::set_has_name_md5_prefix() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CallStackProfile_ModuleIdentifier::clear_has_name_md5_prefix() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CallStackProfile_ModuleIdentifier::clear_name_md5_prefix() {
  name_md5_prefix_ = GOOGLE_ULONGLONG(0);
  clear_has_name_md5_prefix();
}
inline ::google::protobuf::uint64 CallStackProfile_ModuleIdentifier::name_md5_prefix() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.ModuleIdentifier.name_md5_prefix)
  return name_md5_prefix_;
}
inline void CallStackProfile_ModuleIdentifier::set_name_md5_prefix(::google::protobuf::uint64 value) {
  set_has_name_md5_prefix();
  name_md5_prefix_ = value;
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.ModuleIdentifier.name_md5_prefix)
}

// -------------------------------------------------------------------

// CallStackProfile

// repeated .metrics.CallStackProfile.Sample sample = 1;
inline int CallStackProfile::sample_size() const {
  return sample_.size();
}
inline void CallStackProfile::clear_sample() {
  sample_.Clear();
}
inline const ::metrics::CallStackProfile_Sample& CallStackProfile::sample(int index) const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.sample)
  return sample_.Get(index);
}
inline ::metrics::CallStackProfile_Sample* CallStackProfile::mutable_sample(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.CallStackProfile.sample)
  return sample_.Mutable(index);
}
inline ::metrics::CallStackProfile_Sample* CallStackProfile::add_sample() {
  // @@protoc_insertion_point(field_add:metrics.CallStackProfile.sample)
  return sample_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Sample >*
CallStackProfile::mutable_sample() {
  // @@protoc_insertion_point(field_mutable_list:metrics.CallStackProfile.sample)
  return &sample_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_Sample >&
CallStackProfile::sample() const {
  // @@protoc_insertion_point(field_list:metrics.CallStackProfile.sample)
  return sample_;
}

// repeated .metrics.CallStackProfile.ModuleIdentifier module_id = 2;
inline int CallStackProfile::module_id_size() const {
  return module_id_.size();
}
inline void CallStackProfile::clear_module_id() {
  module_id_.Clear();
}
inline const ::metrics::CallStackProfile_ModuleIdentifier& CallStackProfile::module_id(int index) const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.module_id)
  return module_id_.Get(index);
}
inline ::metrics::CallStackProfile_ModuleIdentifier* CallStackProfile::mutable_module_id(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.CallStackProfile.module_id)
  return module_id_.Mutable(index);
}
inline ::metrics::CallStackProfile_ModuleIdentifier* CallStackProfile::add_module_id() {
  // @@protoc_insertion_point(field_add:metrics.CallStackProfile.module_id)
  return module_id_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_ModuleIdentifier >*
CallStackProfile::mutable_module_id() {
  // @@protoc_insertion_point(field_mutable_list:metrics.CallStackProfile.module_id)
  return &module_id_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::CallStackProfile_ModuleIdentifier >&
CallStackProfile::module_id() const {
  // @@protoc_insertion_point(field_list:metrics.CallStackProfile.module_id)
  return module_id_;
}

// optional int32 profile_duration_ms = 3;
inline bool CallStackProfile::has_profile_duration_ms() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CallStackProfile::set_has_profile_duration_ms() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CallStackProfile::clear_has_profile_duration_ms() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CallStackProfile::clear_profile_duration_ms() {
  profile_duration_ms_ = 0;
  clear_has_profile_duration_ms();
}
inline ::google::protobuf::int32 CallStackProfile::profile_duration_ms() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.profile_duration_ms)
  return profile_duration_ms_;
}
inline void CallStackProfile::set_profile_duration_ms(::google::protobuf::int32 value) {
  set_has_profile_duration_ms();
  profile_duration_ms_ = value;
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.profile_duration_ms)
}

// optional int32 sampling_period_ms = 4;
inline bool CallStackProfile::has_sampling_period_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CallStackProfile::set_has_sampling_period_ms() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CallStackProfile::clear_has_sampling_period_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CallStackProfile::clear_sampling_period_ms() {
  sampling_period_ms_ = 0;
  clear_has_sampling_period_ms();
}
inline ::google::protobuf::int32 CallStackProfile::sampling_period_ms() const {
  // @@protoc_insertion_point(field_get:metrics.CallStackProfile.sampling_period_ms)
  return sampling_period_ms_;
}
inline void CallStackProfile::set_sampling_period_ms(::google::protobuf::int32 value) {
  set_has_sampling_period_ms();
  sampling_period_ms_ = value;
  // @@protoc_insertion_point(field_set:metrics.CallStackProfile.sampling_period_ms)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace metrics

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_call_5fstack_5fprofile_2eproto__INCLUDED
