// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sampled_profile.proto

#ifndef PROTOBUF_sampled_5fprofile_2eproto__INCLUDED
#define PROTOBUF_sampled_5fprofile_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_util.h>
#include "execution_context.pb.h"
#include "perf_data.pb.h"
#include "perf_stat.pb.h"
#include "call_stack_profile.pb.h"
// @@protoc_insertion_point(includes)
namespace metrics {
class SampledProfile;
class SampledProfileDefaultTypeInternal;
extern SampledProfileDefaultTypeInternal _SampledProfile_default_instance_;
}  // namespace metrics

namespace metrics {

namespace protobuf_sampled_5fprofile_2eproto {
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
}  // namespace protobuf_sampled_5fprofile_2eproto

enum SampledProfile_TriggerEvent {
  SampledProfile_TriggerEvent_UNKNOWN_TRIGGER_EVENT = 0,
  SampledProfile_TriggerEvent_PERIODIC_COLLECTION = 1,
  SampledProfile_TriggerEvent_RESUME_FROM_SUSPEND = 2,
  SampledProfile_TriggerEvent_RESTORE_SESSION = 3,
  SampledProfile_TriggerEvent_PROCESS_STARTUP = 4,
  SampledProfile_TriggerEvent_JANKY_TASK = 5,
  SampledProfile_TriggerEvent_THREAD_HUNG = 6
};
bool SampledProfile_TriggerEvent_IsValid(int value);
const SampledProfile_TriggerEvent SampledProfile_TriggerEvent_TriggerEvent_MIN = SampledProfile_TriggerEvent_UNKNOWN_TRIGGER_EVENT;
const SampledProfile_TriggerEvent SampledProfile_TriggerEvent_TriggerEvent_MAX = SampledProfile_TriggerEvent_THREAD_HUNG;
const int SampledProfile_TriggerEvent_TriggerEvent_ARRAYSIZE = SampledProfile_TriggerEvent_TriggerEvent_MAX + 1;

// ===================================================================

class SampledProfile : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.SampledProfile) */ {
 public:
  SampledProfile();
  virtual ~SampledProfile();

  SampledProfile(const SampledProfile& from);

  inline SampledProfile& operator=(const SampledProfile& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const SampledProfile& default_instance();

  static inline const SampledProfile* internal_default_instance() {
    return reinterpret_cast<const SampledProfile*>(
               &_SampledProfile_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(SampledProfile* other);

  // implements Message ----------------------------------------------

  inline SampledProfile* New() const PROTOBUF_FINAL { return New(NULL); }

  SampledProfile* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SampledProfile& from);
  void MergeFrom(const SampledProfile& from);
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
  void InternalSwap(SampledProfile* other);
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

  typedef SampledProfile_TriggerEvent TriggerEvent;
  static const TriggerEvent UNKNOWN_TRIGGER_EVENT =
    SampledProfile_TriggerEvent_UNKNOWN_TRIGGER_EVENT;
  static const TriggerEvent PERIODIC_COLLECTION =
    SampledProfile_TriggerEvent_PERIODIC_COLLECTION;
  static const TriggerEvent RESUME_FROM_SUSPEND =
    SampledProfile_TriggerEvent_RESUME_FROM_SUSPEND;
  static const TriggerEvent RESTORE_SESSION =
    SampledProfile_TriggerEvent_RESTORE_SESSION;
  static const TriggerEvent PROCESS_STARTUP =
    SampledProfile_TriggerEvent_PROCESS_STARTUP;
  static const TriggerEvent JANKY_TASK =
    SampledProfile_TriggerEvent_JANKY_TASK;
  static const TriggerEvent THREAD_HUNG =
    SampledProfile_TriggerEvent_THREAD_HUNG;
  static inline bool TriggerEvent_IsValid(int value) {
    return SampledProfile_TriggerEvent_IsValid(value);
  }
  static const TriggerEvent TriggerEvent_MIN =
    SampledProfile_TriggerEvent_TriggerEvent_MIN;
  static const TriggerEvent TriggerEvent_MAX =
    SampledProfile_TriggerEvent_TriggerEvent_MAX;
  static const int TriggerEvent_ARRAYSIZE =
    SampledProfile_TriggerEvent_TriggerEvent_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .metrics.PerfDataProto perf_data = 4;
  bool has_perf_data() const;
  void clear_perf_data();
  static const int kPerfDataFieldNumber = 4;
  const ::metrics::PerfDataProto& perf_data() const;
  ::metrics::PerfDataProto* mutable_perf_data();
  ::metrics::PerfDataProto* release_perf_data();
  void set_allocated_perf_data(::metrics::PerfDataProto* perf_data);

  // optional .metrics.CallStackProfile call_stack_profile = 9;
  bool has_call_stack_profile() const;
  void clear_call_stack_profile();
  static const int kCallStackProfileFieldNumber = 9;
  const ::metrics::CallStackProfile& call_stack_profile() const;
  ::metrics::CallStackProfile* mutable_call_stack_profile();
  ::metrics::CallStackProfile* release_call_stack_profile();
  void set_allocated_call_stack_profile(::metrics::CallStackProfile* call_stack_profile);

  // optional .metrics.PerfStatProto perf_stat = 10;
  bool has_perf_stat() const;
  void clear_perf_stat();
  static const int kPerfStatFieldNumber = 10;
  const ::metrics::PerfStatProto& perf_stat() const;
  ::metrics::PerfStatProto* mutable_perf_stat();
  ::metrics::PerfStatProto* release_perf_stat();
  void set_allocated_perf_stat(::metrics::PerfStatProto* perf_stat);

  // optional int64 ms_after_boot = 2;
  bool has_ms_after_boot() const;
  void clear_ms_after_boot();
  static const int kMsAfterBootFieldNumber = 2;
  ::google::protobuf::int64 ms_after_boot() const;
  void set_ms_after_boot(::google::protobuf::int64 value);

  // optional int64 ms_after_login = 3;
  bool has_ms_after_login() const;
  void clear_ms_after_login();
  static const int kMsAfterLoginFieldNumber = 3;
  ::google::protobuf::int64 ms_after_login() const;
  void set_ms_after_login(::google::protobuf::int64 value);

  // optional .metrics.SampledProfile.TriggerEvent trigger_event = 1;
  bool has_trigger_event() const;
  void clear_trigger_event();
  static const int kTriggerEventFieldNumber = 1;
  ::metrics::SampledProfile_TriggerEvent trigger_event() const;
  void set_trigger_event(::metrics::SampledProfile_TriggerEvent value);

  // optional int32 num_tabs_restored = 7;
  bool has_num_tabs_restored() const;
  void clear_num_tabs_restored();
  static const int kNumTabsRestoredFieldNumber = 7;
  ::google::protobuf::int32 num_tabs_restored() const;
  void set_num_tabs_restored(::google::protobuf::int32 value);

  // optional int64 suspend_duration_ms = 5;
  bool has_suspend_duration_ms() const;
  void clear_suspend_duration_ms();
  static const int kSuspendDurationMsFieldNumber = 5;
  ::google::protobuf::int64 suspend_duration_ms() const;
  void set_suspend_duration_ms(::google::protobuf::int64 value);

  // optional int64 ms_after_resume = 6;
  bool has_ms_after_resume() const;
  void clear_ms_after_resume();
  static const int kMsAfterResumeFieldNumber = 6;
  ::google::protobuf::int64 ms_after_resume() const;
  void set_ms_after_resume(::google::protobuf::int64 value);

  // optional int64 ms_after_restore = 8;
  bool has_ms_after_restore() const;
  void clear_ms_after_restore();
  static const int kMsAfterRestoreFieldNumber = 8;
  ::google::protobuf::int64 ms_after_restore() const;
  void set_ms_after_restore(::google::protobuf::int64 value);

  // optional .metrics.Process process = 11;
  bool has_process() const;
  void clear_process();
  static const int kProcessFieldNumber = 11;
  ::metrics::Process process() const;
  void set_process(::metrics::Process value);

  // optional .metrics.Thread thread = 12;
  bool has_thread() const;
  void clear_thread();
  static const int kThreadFieldNumber = 12;
  ::metrics::Thread thread() const;
  void set_thread(::metrics::Thread value);

  // @@protoc_insertion_point(class_scope:metrics.SampledProfile)
 private:
  void set_has_trigger_event();
  void clear_has_trigger_event();
  void set_has_process();
  void clear_has_process();
  void set_has_thread();
  void clear_has_thread();
  void set_has_ms_after_boot();
  void clear_has_ms_after_boot();
  void set_has_ms_after_login();
  void clear_has_ms_after_login();
  void set_has_suspend_duration_ms();
  void clear_has_suspend_duration_ms();
  void set_has_ms_after_resume();
  void clear_has_ms_after_resume();
  void set_has_num_tabs_restored();
  void clear_has_num_tabs_restored();
  void set_has_ms_after_restore();
  void clear_has_ms_after_restore();
  void set_has_perf_data();
  void clear_has_perf_data();
  void set_has_call_stack_profile();
  void clear_has_call_stack_profile();
  void set_has_perf_stat();
  void clear_has_perf_stat();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::metrics::PerfDataProto* perf_data_;
  ::metrics::CallStackProfile* call_stack_profile_;
  ::metrics::PerfStatProto* perf_stat_;
  ::google::protobuf::int64 ms_after_boot_;
  ::google::protobuf::int64 ms_after_login_;
  int trigger_event_;
  ::google::protobuf::int32 num_tabs_restored_;
  ::google::protobuf::int64 suspend_duration_ms_;
  ::google::protobuf::int64 ms_after_resume_;
  ::google::protobuf::int64 ms_after_restore_;
  int process_;
  int thread_;
  friend struct protobuf_sampled_5fprofile_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SampledProfile

// optional .metrics.SampledProfile.TriggerEvent trigger_event = 1;
inline bool SampledProfile::has_trigger_event() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SampledProfile::set_has_trigger_event() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SampledProfile::clear_has_trigger_event() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SampledProfile::clear_trigger_event() {
  trigger_event_ = 0;
  clear_has_trigger_event();
}
inline ::metrics::SampledProfile_TriggerEvent SampledProfile::trigger_event() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.trigger_event)
  return static_cast< ::metrics::SampledProfile_TriggerEvent >(trigger_event_);
}
inline void SampledProfile::set_trigger_event(::metrics::SampledProfile_TriggerEvent value) {
  assert(::metrics::SampledProfile_TriggerEvent_IsValid(value));
  set_has_trigger_event();
  trigger_event_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.trigger_event)
}

// optional .metrics.Process process = 11;
inline bool SampledProfile::has_process() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void SampledProfile::set_has_process() {
  _has_bits_[0] |= 0x00000400u;
}
inline void SampledProfile::clear_has_process() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void SampledProfile::clear_process() {
  process_ = 0;
  clear_has_process();
}
inline ::metrics::Process SampledProfile::process() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.process)
  return static_cast< ::metrics::Process >(process_);
}
inline void SampledProfile::set_process(::metrics::Process value) {
  assert(::metrics::Process_IsValid(value));
  set_has_process();
  process_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.process)
}

// optional .metrics.Thread thread = 12;
inline bool SampledProfile::has_thread() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void SampledProfile::set_has_thread() {
  _has_bits_[0] |= 0x00000800u;
}
inline void SampledProfile::clear_has_thread() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void SampledProfile::clear_thread() {
  thread_ = 0;
  clear_has_thread();
}
inline ::metrics::Thread SampledProfile::thread() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.thread)
  return static_cast< ::metrics::Thread >(thread_);
}
inline void SampledProfile::set_thread(::metrics::Thread value) {
  assert(::metrics::Thread_IsValid(value));
  set_has_thread();
  thread_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.thread)
}

// optional int64 ms_after_boot = 2;
inline bool SampledProfile::has_ms_after_boot() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SampledProfile::set_has_ms_after_boot() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SampledProfile::clear_has_ms_after_boot() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SampledProfile::clear_ms_after_boot() {
  ms_after_boot_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_boot();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_boot() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_boot)
  return ms_after_boot_;
}
inline void SampledProfile::set_ms_after_boot(::google::protobuf::int64 value) {
  set_has_ms_after_boot();
  ms_after_boot_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_boot)
}

// optional int64 ms_after_login = 3;
inline bool SampledProfile::has_ms_after_login() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SampledProfile::set_has_ms_after_login() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SampledProfile::clear_has_ms_after_login() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SampledProfile::clear_ms_after_login() {
  ms_after_login_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_login();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_login() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_login)
  return ms_after_login_;
}
inline void SampledProfile::set_ms_after_login(::google::protobuf::int64 value) {
  set_has_ms_after_login();
  ms_after_login_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_login)
}

// optional int64 suspend_duration_ms = 5;
inline bool SampledProfile::has_suspend_duration_ms() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SampledProfile::set_has_suspend_duration_ms() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SampledProfile::clear_has_suspend_duration_ms() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SampledProfile::clear_suspend_duration_ms() {
  suspend_duration_ms_ = GOOGLE_LONGLONG(0);
  clear_has_suspend_duration_ms();
}
inline ::google::protobuf::int64 SampledProfile::suspend_duration_ms() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.suspend_duration_ms)
  return suspend_duration_ms_;
}
inline void SampledProfile::set_suspend_duration_ms(::google::protobuf::int64 value) {
  set_has_suspend_duration_ms();
  suspend_duration_ms_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.suspend_duration_ms)
}

// optional int64 ms_after_resume = 6;
inline bool SampledProfile::has_ms_after_resume() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SampledProfile::set_has_ms_after_resume() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SampledProfile::clear_has_ms_after_resume() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SampledProfile::clear_ms_after_resume() {
  ms_after_resume_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_resume();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_resume() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_resume)
  return ms_after_resume_;
}
inline void SampledProfile::set_ms_after_resume(::google::protobuf::int64 value) {
  set_has_ms_after_resume();
  ms_after_resume_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_resume)
}

// optional int32 num_tabs_restored = 7;
inline bool SampledProfile::has_num_tabs_restored() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SampledProfile::set_has_num_tabs_restored() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SampledProfile::clear_has_num_tabs_restored() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SampledProfile::clear_num_tabs_restored() {
  num_tabs_restored_ = 0;
  clear_has_num_tabs_restored();
}
inline ::google::protobuf::int32 SampledProfile::num_tabs_restored() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.num_tabs_restored)
  return num_tabs_restored_;
}
inline void SampledProfile::set_num_tabs_restored(::google::protobuf::int32 value) {
  set_has_num_tabs_restored();
  num_tabs_restored_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.num_tabs_restored)
}

// optional int64 ms_after_restore = 8;
inline bool SampledProfile::has_ms_after_restore() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void SampledProfile::set_has_ms_after_restore() {
  _has_bits_[0] |= 0x00000200u;
}
inline void SampledProfile::clear_has_ms_after_restore() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void SampledProfile::clear_ms_after_restore() {
  ms_after_restore_ = GOOGLE_LONGLONG(0);
  clear_has_ms_after_restore();
}
inline ::google::protobuf::int64 SampledProfile::ms_after_restore() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.ms_after_restore)
  return ms_after_restore_;
}
inline void SampledProfile::set_ms_after_restore(::google::protobuf::int64 value) {
  set_has_ms_after_restore();
  ms_after_restore_ = value;
  // @@protoc_insertion_point(field_set:metrics.SampledProfile.ms_after_restore)
}

// optional .metrics.PerfDataProto perf_data = 4;
inline bool SampledProfile::has_perf_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SampledProfile::set_has_perf_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SampledProfile::clear_has_perf_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SampledProfile::clear_perf_data() {
  if (perf_data_ != NULL) perf_data_->::metrics::PerfDataProto::Clear();
  clear_has_perf_data();
}
inline const ::metrics::PerfDataProto& SampledProfile::perf_data() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.perf_data)
  return perf_data_ != NULL ? *perf_data_
                         : *::metrics::PerfDataProto::internal_default_instance();
}
inline ::metrics::PerfDataProto* SampledProfile::mutable_perf_data() {
  set_has_perf_data();
  if (perf_data_ == NULL) {
    perf_data_ = new ::metrics::PerfDataProto;
  }
  // @@protoc_insertion_point(field_mutable:metrics.SampledProfile.perf_data)
  return perf_data_;
}
inline ::metrics::PerfDataProto* SampledProfile::release_perf_data() {
  // @@protoc_insertion_point(field_release:metrics.SampledProfile.perf_data)
  clear_has_perf_data();
  ::metrics::PerfDataProto* temp = perf_data_;
  perf_data_ = NULL;
  return temp;
}
inline void SampledProfile::set_allocated_perf_data(::metrics::PerfDataProto* perf_data) {
  delete perf_data_;
  perf_data_ = perf_data;
  if (perf_data) {
    set_has_perf_data();
  } else {
    clear_has_perf_data();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.SampledProfile.perf_data)
}

// optional .metrics.CallStackProfile call_stack_profile = 9;
inline bool SampledProfile::has_call_stack_profile() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SampledProfile::set_has_call_stack_profile() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SampledProfile::clear_has_call_stack_profile() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SampledProfile::clear_call_stack_profile() {
  if (call_stack_profile_ != NULL) call_stack_profile_->::metrics::CallStackProfile::Clear();
  clear_has_call_stack_profile();
}
inline const ::metrics::CallStackProfile& SampledProfile::call_stack_profile() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.call_stack_profile)
  return call_stack_profile_ != NULL ? *call_stack_profile_
                         : *::metrics::CallStackProfile::internal_default_instance();
}
inline ::metrics::CallStackProfile* SampledProfile::mutable_call_stack_profile() {
  set_has_call_stack_profile();
  if (call_stack_profile_ == NULL) {
    call_stack_profile_ = new ::metrics::CallStackProfile;
  }
  // @@protoc_insertion_point(field_mutable:metrics.SampledProfile.call_stack_profile)
  return call_stack_profile_;
}
inline ::metrics::CallStackProfile* SampledProfile::release_call_stack_profile() {
  // @@protoc_insertion_point(field_release:metrics.SampledProfile.call_stack_profile)
  clear_has_call_stack_profile();
  ::metrics::CallStackProfile* temp = call_stack_profile_;
  call_stack_profile_ = NULL;
  return temp;
}
inline void SampledProfile::set_allocated_call_stack_profile(::metrics::CallStackProfile* call_stack_profile) {
  delete call_stack_profile_;
  call_stack_profile_ = call_stack_profile;
  if (call_stack_profile) {
    set_has_call_stack_profile();
  } else {
    clear_has_call_stack_profile();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.SampledProfile.call_stack_profile)
}

// optional .metrics.PerfStatProto perf_stat = 10;
inline bool SampledProfile::has_perf_stat() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SampledProfile::set_has_perf_stat() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SampledProfile::clear_has_perf_stat() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SampledProfile::clear_perf_stat() {
  if (perf_stat_ != NULL) perf_stat_->::metrics::PerfStatProto::Clear();
  clear_has_perf_stat();
}
inline const ::metrics::PerfStatProto& SampledProfile::perf_stat() const {
  // @@protoc_insertion_point(field_get:metrics.SampledProfile.perf_stat)
  return perf_stat_ != NULL ? *perf_stat_
                         : *::metrics::PerfStatProto::internal_default_instance();
}
inline ::metrics::PerfStatProto* SampledProfile::mutable_perf_stat() {
  set_has_perf_stat();
  if (perf_stat_ == NULL) {
    perf_stat_ = new ::metrics::PerfStatProto;
  }
  // @@protoc_insertion_point(field_mutable:metrics.SampledProfile.perf_stat)
  return perf_stat_;
}
inline ::metrics::PerfStatProto* SampledProfile::release_perf_stat() {
  // @@protoc_insertion_point(field_release:metrics.SampledProfile.perf_stat)
  clear_has_perf_stat();
  ::metrics::PerfStatProto* temp = perf_stat_;
  perf_stat_ = NULL;
  return temp;
}
inline void SampledProfile::set_allocated_perf_stat(::metrics::PerfStatProto* perf_stat) {
  delete perf_stat_;
  perf_stat_ = perf_stat;
  if (perf_stat) {
    set_has_perf_stat();
  } else {
    clear_has_perf_stat();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.SampledProfile.perf_stat)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace metrics

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metrics::SampledProfile_TriggerEvent> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sampled_5fprofile_2eproto__INCLUDED