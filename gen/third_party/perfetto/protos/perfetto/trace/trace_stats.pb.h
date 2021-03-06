// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/trace/trace_stats.proto

#ifndef PROTOBUF_perfetto_2ftrace_2ftrace_5fstats_2eproto__INCLUDED
#define PROTOBUF_perfetto_2ftrace_2ftrace_5fstats_2eproto__INCLUDED

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
class TraceStats;
class TraceStatsDefaultTypeInternal;
extern TraceStatsDefaultTypeInternal _TraceStats_default_instance_;
class TraceStats_BufferStats;
class TraceStats_BufferStatsDefaultTypeInternal;
extern TraceStats_BufferStatsDefaultTypeInternal _TraceStats_BufferStats_default_instance_;
}  // namespace protos
}  // namespace perfetto

namespace perfetto {
namespace protos {

namespace protobuf_perfetto_2ftrace_2ftrace_5fstats_2eproto {
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
}  // namespace protobuf_perfetto_2ftrace_2ftrace_5fstats_2eproto

// ===================================================================

class TraceStats_BufferStats : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TraceStats.BufferStats) */ {
 public:
  TraceStats_BufferStats();
  virtual ~TraceStats_BufferStats();

  TraceStats_BufferStats(const TraceStats_BufferStats& from);

  inline TraceStats_BufferStats& operator=(const TraceStats_BufferStats& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const TraceStats_BufferStats& default_instance();

  static inline const TraceStats_BufferStats* internal_default_instance() {
    return reinterpret_cast<const TraceStats_BufferStats*>(
               &_TraceStats_BufferStats_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(TraceStats_BufferStats* other);

  // implements Message ----------------------------------------------

  inline TraceStats_BufferStats* New() const PROTOBUF_FINAL { return New(NULL); }

  TraceStats_BufferStats* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const TraceStats_BufferStats& from);
  void MergeFrom(const TraceStats_BufferStats& from);
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
  void InternalSwap(TraceStats_BufferStats* other);
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

  // optional uint64 bytes_written = 1;
  bool has_bytes_written() const;
  void clear_bytes_written();
  static const int kBytesWrittenFieldNumber = 1;
  ::google::protobuf::uint64 bytes_written() const;
  void set_bytes_written(::google::protobuf::uint64 value);

  // optional uint64 chunks_written = 2;
  bool has_chunks_written() const;
  void clear_chunks_written();
  static const int kChunksWrittenFieldNumber = 2;
  ::google::protobuf::uint64 chunks_written() const;
  void set_chunks_written(::google::protobuf::uint64 value);

  // optional uint64 chunks_overwritten = 3;
  bool has_chunks_overwritten() const;
  void clear_chunks_overwritten();
  static const int kChunksOverwrittenFieldNumber = 3;
  ::google::protobuf::uint64 chunks_overwritten() const;
  void set_chunks_overwritten(::google::protobuf::uint64 value);

  // optional uint64 write_wrap_count = 4;
  bool has_write_wrap_count() const;
  void clear_write_wrap_count();
  static const int kWriteWrapCountFieldNumber = 4;
  ::google::protobuf::uint64 write_wrap_count() const;
  void set_write_wrap_count(::google::protobuf::uint64 value);

  // optional uint64 patches_succeeded = 5;
  bool has_patches_succeeded() const;
  void clear_patches_succeeded();
  static const int kPatchesSucceededFieldNumber = 5;
  ::google::protobuf::uint64 patches_succeeded() const;
  void set_patches_succeeded(::google::protobuf::uint64 value);

  // optional uint64 patches_failed = 6;
  bool has_patches_failed() const;
  void clear_patches_failed();
  static const int kPatchesFailedFieldNumber = 6;
  ::google::protobuf::uint64 patches_failed() const;
  void set_patches_failed(::google::protobuf::uint64 value);

  // optional uint64 readaheads_succeeded = 7;
  bool has_readaheads_succeeded() const;
  void clear_readaheads_succeeded();
  static const int kReadaheadsSucceededFieldNumber = 7;
  ::google::protobuf::uint64 readaheads_succeeded() const;
  void set_readaheads_succeeded(::google::protobuf::uint64 value);

  // optional uint64 readaheads_failed = 8;
  bool has_readaheads_failed() const;
  void clear_readaheads_failed();
  static const int kReadaheadsFailedFieldNumber = 8;
  ::google::protobuf::uint64 readaheads_failed() const;
  void set_readaheads_failed(::google::protobuf::uint64 value);

  // optional uint64 abi_violations = 9;
  bool has_abi_violations() const;
  void clear_abi_violations();
  static const int kAbiViolationsFieldNumber = 9;
  ::google::protobuf::uint64 abi_violations() const;
  void set_abi_violations(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.TraceStats.BufferStats)
 private:
  void set_has_bytes_written();
  void clear_has_bytes_written();
  void set_has_chunks_written();
  void clear_has_chunks_written();
  void set_has_chunks_overwritten();
  void clear_has_chunks_overwritten();
  void set_has_write_wrap_count();
  void clear_has_write_wrap_count();
  void set_has_patches_succeeded();
  void clear_has_patches_succeeded();
  void set_has_patches_failed();
  void clear_has_patches_failed();
  void set_has_readaheads_succeeded();
  void clear_has_readaheads_succeeded();
  void set_has_readaheads_failed();
  void clear_has_readaheads_failed();
  void set_has_abi_violations();
  void clear_has_abi_violations();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 bytes_written_;
  ::google::protobuf::uint64 chunks_written_;
  ::google::protobuf::uint64 chunks_overwritten_;
  ::google::protobuf::uint64 write_wrap_count_;
  ::google::protobuf::uint64 patches_succeeded_;
  ::google::protobuf::uint64 patches_failed_;
  ::google::protobuf::uint64 readaheads_succeeded_;
  ::google::protobuf::uint64 readaheads_failed_;
  ::google::protobuf::uint64 abi_violations_;
  friend struct protobuf_perfetto_2ftrace_2ftrace_5fstats_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TraceStats : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TraceStats) */ {
 public:
  TraceStats();
  virtual ~TraceStats();

  TraceStats(const TraceStats& from);

  inline TraceStats& operator=(const TraceStats& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const TraceStats& default_instance();

  static inline const TraceStats* internal_default_instance() {
    return reinterpret_cast<const TraceStats*>(
               &_TraceStats_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(TraceStats* other);

  // implements Message ----------------------------------------------

  inline TraceStats* New() const PROTOBUF_FINAL { return New(NULL); }

  TraceStats* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const TraceStats& from);
  void MergeFrom(const TraceStats& from);
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
  void InternalSwap(TraceStats* other);
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

  typedef TraceStats_BufferStats BufferStats;

  // accessors -------------------------------------------------------

  // repeated .perfetto.protos.TraceStats.BufferStats buffer_stats = 1;
  int buffer_stats_size() const;
  void clear_buffer_stats();
  static const int kBufferStatsFieldNumber = 1;
  const ::perfetto::protos::TraceStats_BufferStats& buffer_stats(int index) const;
  ::perfetto::protos::TraceStats_BufferStats* mutable_buffer_stats(int index);
  ::perfetto::protos::TraceStats_BufferStats* add_buffer_stats();
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::TraceStats_BufferStats >*
      mutable_buffer_stats();
  const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::TraceStats_BufferStats >&
      buffer_stats() const;

  // optional uint64 producers_seen = 3;
  bool has_producers_seen() const;
  void clear_producers_seen();
  static const int kProducersSeenFieldNumber = 3;
  ::google::protobuf::uint64 producers_seen() const;
  void set_producers_seen(::google::protobuf::uint64 value);

  // optional uint32 producers_connected = 2;
  bool has_producers_connected() const;
  void clear_producers_connected();
  static const int kProducersConnectedFieldNumber = 2;
  ::google::protobuf::uint32 producers_connected() const;
  void set_producers_connected(::google::protobuf::uint32 value);

  // optional uint32 data_sources_registered = 4;
  bool has_data_sources_registered() const;
  void clear_data_sources_registered();
  static const int kDataSourcesRegisteredFieldNumber = 4;
  ::google::protobuf::uint32 data_sources_registered() const;
  void set_data_sources_registered(::google::protobuf::uint32 value);

  // optional uint64 data_sources_seen = 5;
  bool has_data_sources_seen() const;
  void clear_data_sources_seen();
  static const int kDataSourcesSeenFieldNumber = 5;
  ::google::protobuf::uint64 data_sources_seen() const;
  void set_data_sources_seen(::google::protobuf::uint64 value);

  // optional uint32 tracing_sessions = 6;
  bool has_tracing_sessions() const;
  void clear_tracing_sessions();
  static const int kTracingSessionsFieldNumber = 6;
  ::google::protobuf::uint32 tracing_sessions() const;
  void set_tracing_sessions(::google::protobuf::uint32 value);

  // optional uint32 total_buffers = 7;
  bool has_total_buffers() const;
  void clear_total_buffers();
  static const int kTotalBuffersFieldNumber = 7;
  ::google::protobuf::uint32 total_buffers() const;
  void set_total_buffers(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.TraceStats)
 private:
  void set_has_producers_connected();
  void clear_has_producers_connected();
  void set_has_producers_seen();
  void clear_has_producers_seen();
  void set_has_data_sources_registered();
  void clear_has_data_sources_registered();
  void set_has_data_sources_seen();
  void clear_has_data_sources_seen();
  void set_has_tracing_sessions();
  void clear_has_tracing_sessions();
  void set_has_total_buffers();
  void clear_has_total_buffers();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::TraceStats_BufferStats > buffer_stats_;
  ::google::protobuf::uint64 producers_seen_;
  ::google::protobuf::uint32 producers_connected_;
  ::google::protobuf::uint32 data_sources_registered_;
  ::google::protobuf::uint64 data_sources_seen_;
  ::google::protobuf::uint32 tracing_sessions_;
  ::google::protobuf::uint32 total_buffers_;
  friend struct protobuf_perfetto_2ftrace_2ftrace_5fstats_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TraceStats_BufferStats

// optional uint64 bytes_written = 1;
inline bool TraceStats_BufferStats::has_bytes_written() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TraceStats_BufferStats::set_has_bytes_written() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TraceStats_BufferStats::clear_has_bytes_written() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TraceStats_BufferStats::clear_bytes_written() {
  bytes_written_ = GOOGLE_ULONGLONG(0);
  clear_has_bytes_written();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::bytes_written() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.bytes_written)
  return bytes_written_;
}
inline void TraceStats_BufferStats::set_bytes_written(::google::protobuf::uint64 value) {
  set_has_bytes_written();
  bytes_written_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.bytes_written)
}

// optional uint64 chunks_written = 2;
inline bool TraceStats_BufferStats::has_chunks_written() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TraceStats_BufferStats::set_has_chunks_written() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TraceStats_BufferStats::clear_has_chunks_written() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TraceStats_BufferStats::clear_chunks_written() {
  chunks_written_ = GOOGLE_ULONGLONG(0);
  clear_has_chunks_written();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::chunks_written() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.chunks_written)
  return chunks_written_;
}
inline void TraceStats_BufferStats::set_chunks_written(::google::protobuf::uint64 value) {
  set_has_chunks_written();
  chunks_written_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.chunks_written)
}

// optional uint64 chunks_overwritten = 3;
inline bool TraceStats_BufferStats::has_chunks_overwritten() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TraceStats_BufferStats::set_has_chunks_overwritten() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TraceStats_BufferStats::clear_has_chunks_overwritten() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TraceStats_BufferStats::clear_chunks_overwritten() {
  chunks_overwritten_ = GOOGLE_ULONGLONG(0);
  clear_has_chunks_overwritten();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::chunks_overwritten() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.chunks_overwritten)
  return chunks_overwritten_;
}
inline void TraceStats_BufferStats::set_chunks_overwritten(::google::protobuf::uint64 value) {
  set_has_chunks_overwritten();
  chunks_overwritten_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.chunks_overwritten)
}

// optional uint64 write_wrap_count = 4;
inline bool TraceStats_BufferStats::has_write_wrap_count() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TraceStats_BufferStats::set_has_write_wrap_count() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TraceStats_BufferStats::clear_has_write_wrap_count() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TraceStats_BufferStats::clear_write_wrap_count() {
  write_wrap_count_ = GOOGLE_ULONGLONG(0);
  clear_has_write_wrap_count();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::write_wrap_count() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.write_wrap_count)
  return write_wrap_count_;
}
inline void TraceStats_BufferStats::set_write_wrap_count(::google::protobuf::uint64 value) {
  set_has_write_wrap_count();
  write_wrap_count_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.write_wrap_count)
}

// optional uint64 patches_succeeded = 5;
inline bool TraceStats_BufferStats::has_patches_succeeded() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TraceStats_BufferStats::set_has_patches_succeeded() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TraceStats_BufferStats::clear_has_patches_succeeded() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TraceStats_BufferStats::clear_patches_succeeded() {
  patches_succeeded_ = GOOGLE_ULONGLONG(0);
  clear_has_patches_succeeded();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::patches_succeeded() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.patches_succeeded)
  return patches_succeeded_;
}
inline void TraceStats_BufferStats::set_patches_succeeded(::google::protobuf::uint64 value) {
  set_has_patches_succeeded();
  patches_succeeded_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.patches_succeeded)
}

// optional uint64 patches_failed = 6;
inline bool TraceStats_BufferStats::has_patches_failed() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TraceStats_BufferStats::set_has_patches_failed() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TraceStats_BufferStats::clear_has_patches_failed() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TraceStats_BufferStats::clear_patches_failed() {
  patches_failed_ = GOOGLE_ULONGLONG(0);
  clear_has_patches_failed();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::patches_failed() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.patches_failed)
  return patches_failed_;
}
inline void TraceStats_BufferStats::set_patches_failed(::google::protobuf::uint64 value) {
  set_has_patches_failed();
  patches_failed_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.patches_failed)
}

// optional uint64 readaheads_succeeded = 7;
inline bool TraceStats_BufferStats::has_readaheads_succeeded() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TraceStats_BufferStats::set_has_readaheads_succeeded() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TraceStats_BufferStats::clear_has_readaheads_succeeded() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TraceStats_BufferStats::clear_readaheads_succeeded() {
  readaheads_succeeded_ = GOOGLE_ULONGLONG(0);
  clear_has_readaheads_succeeded();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::readaheads_succeeded() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.readaheads_succeeded)
  return readaheads_succeeded_;
}
inline void TraceStats_BufferStats::set_readaheads_succeeded(::google::protobuf::uint64 value) {
  set_has_readaheads_succeeded();
  readaheads_succeeded_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.readaheads_succeeded)
}

// optional uint64 readaheads_failed = 8;
inline bool TraceStats_BufferStats::has_readaheads_failed() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TraceStats_BufferStats::set_has_readaheads_failed() {
  _has_bits_[0] |= 0x00000080u;
}
inline void TraceStats_BufferStats::clear_has_readaheads_failed() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void TraceStats_BufferStats::clear_readaheads_failed() {
  readaheads_failed_ = GOOGLE_ULONGLONG(0);
  clear_has_readaheads_failed();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::readaheads_failed() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.readaheads_failed)
  return readaheads_failed_;
}
inline void TraceStats_BufferStats::set_readaheads_failed(::google::protobuf::uint64 value) {
  set_has_readaheads_failed();
  readaheads_failed_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.readaheads_failed)
}

// optional uint64 abi_violations = 9;
inline bool TraceStats_BufferStats::has_abi_violations() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void TraceStats_BufferStats::set_has_abi_violations() {
  _has_bits_[0] |= 0x00000100u;
}
inline void TraceStats_BufferStats::clear_has_abi_violations() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void TraceStats_BufferStats::clear_abi_violations() {
  abi_violations_ = GOOGLE_ULONGLONG(0);
  clear_has_abi_violations();
}
inline ::google::protobuf::uint64 TraceStats_BufferStats::abi_violations() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.BufferStats.abi_violations)
  return abi_violations_;
}
inline void TraceStats_BufferStats::set_abi_violations(::google::protobuf::uint64 value) {
  set_has_abi_violations();
  abi_violations_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.BufferStats.abi_violations)
}

// -------------------------------------------------------------------

// TraceStats

// repeated .perfetto.protos.TraceStats.BufferStats buffer_stats = 1;
inline int TraceStats::buffer_stats_size() const {
  return buffer_stats_.size();
}
inline void TraceStats::clear_buffer_stats() {
  buffer_stats_.Clear();
}
inline const ::perfetto::protos::TraceStats_BufferStats& TraceStats::buffer_stats(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.buffer_stats)
  return buffer_stats_.Get(index);
}
inline ::perfetto::protos::TraceStats_BufferStats* TraceStats::mutable_buffer_stats(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TraceStats.buffer_stats)
  return buffer_stats_.Mutable(index);
}
inline ::perfetto::protos::TraceStats_BufferStats* TraceStats::add_buffer_stats() {
  // @@protoc_insertion_point(field_add:perfetto.protos.TraceStats.buffer_stats)
  return buffer_stats_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::perfetto::protos::TraceStats_BufferStats >*
TraceStats::mutable_buffer_stats() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.TraceStats.buffer_stats)
  return &buffer_stats_;
}
inline const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::TraceStats_BufferStats >&
TraceStats::buffer_stats() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.TraceStats.buffer_stats)
  return buffer_stats_;
}

// optional uint32 producers_connected = 2;
inline bool TraceStats::has_producers_connected() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TraceStats::set_has_producers_connected() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TraceStats::clear_has_producers_connected() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TraceStats::clear_producers_connected() {
  producers_connected_ = 0u;
  clear_has_producers_connected();
}
inline ::google::protobuf::uint32 TraceStats::producers_connected() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.producers_connected)
  return producers_connected_;
}
inline void TraceStats::set_producers_connected(::google::protobuf::uint32 value) {
  set_has_producers_connected();
  producers_connected_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.producers_connected)
}

// optional uint64 producers_seen = 3;
inline bool TraceStats::has_producers_seen() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TraceStats::set_has_producers_seen() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TraceStats::clear_has_producers_seen() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TraceStats::clear_producers_seen() {
  producers_seen_ = GOOGLE_ULONGLONG(0);
  clear_has_producers_seen();
}
inline ::google::protobuf::uint64 TraceStats::producers_seen() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.producers_seen)
  return producers_seen_;
}
inline void TraceStats::set_producers_seen(::google::protobuf::uint64 value) {
  set_has_producers_seen();
  producers_seen_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.producers_seen)
}

// optional uint32 data_sources_registered = 4;
inline bool TraceStats::has_data_sources_registered() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TraceStats::set_has_data_sources_registered() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TraceStats::clear_has_data_sources_registered() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TraceStats::clear_data_sources_registered() {
  data_sources_registered_ = 0u;
  clear_has_data_sources_registered();
}
inline ::google::protobuf::uint32 TraceStats::data_sources_registered() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.data_sources_registered)
  return data_sources_registered_;
}
inline void TraceStats::set_data_sources_registered(::google::protobuf::uint32 value) {
  set_has_data_sources_registered();
  data_sources_registered_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.data_sources_registered)
}

// optional uint64 data_sources_seen = 5;
inline bool TraceStats::has_data_sources_seen() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TraceStats::set_has_data_sources_seen() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TraceStats::clear_has_data_sources_seen() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TraceStats::clear_data_sources_seen() {
  data_sources_seen_ = GOOGLE_ULONGLONG(0);
  clear_has_data_sources_seen();
}
inline ::google::protobuf::uint64 TraceStats::data_sources_seen() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.data_sources_seen)
  return data_sources_seen_;
}
inline void TraceStats::set_data_sources_seen(::google::protobuf::uint64 value) {
  set_has_data_sources_seen();
  data_sources_seen_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.data_sources_seen)
}

// optional uint32 tracing_sessions = 6;
inline bool TraceStats::has_tracing_sessions() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TraceStats::set_has_tracing_sessions() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TraceStats::clear_has_tracing_sessions() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TraceStats::clear_tracing_sessions() {
  tracing_sessions_ = 0u;
  clear_has_tracing_sessions();
}
inline ::google::protobuf::uint32 TraceStats::tracing_sessions() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.tracing_sessions)
  return tracing_sessions_;
}
inline void TraceStats::set_tracing_sessions(::google::protobuf::uint32 value) {
  set_has_tracing_sessions();
  tracing_sessions_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.tracing_sessions)
}

// optional uint32 total_buffers = 7;
inline bool TraceStats::has_total_buffers() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TraceStats::set_has_total_buffers() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TraceStats::clear_has_total_buffers() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TraceStats::clear_total_buffers() {
  total_buffers_ = 0u;
  clear_has_total_buffers();
}
inline ::google::protobuf::uint32 TraceStats::total_buffers() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TraceStats.total_buffers)
  return total_buffers_;
}
inline void TraceStats::set_total_buffers(::google::protobuf::uint32 value) {
  set_has_total_buffers();
  total_buffers_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TraceStats.total_buffers)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perfetto_2ftrace_2ftrace_5fstats_2eproto__INCLUDED
