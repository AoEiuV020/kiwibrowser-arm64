// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perf_stat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "perf_stat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace metrics {
class PerfStatProto_PerfStatLineDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PerfStatProto_PerfStatLine> {
} _PerfStatProto_PerfStatLine_default_instance_;
class PerfStatProtoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PerfStatProto> {
} _PerfStatProto_default_instance_;

namespace protobuf_perf_5fstat_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _PerfStatProto_PerfStatLine_default_instance_.Shutdown();
  _PerfStatProto_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _PerfStatProto_PerfStatLine_default_instance_.DefaultConstruct();
  _PerfStatProto_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_perf_5fstat_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PerfStatProto_PerfStatLine::kTimeMsFieldNumber;
const int PerfStatProto_PerfStatLine::kCountFieldNumber;
const int PerfStatProto_PerfStatLine::kEventNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PerfStatProto_PerfStatLine::PerfStatProto_PerfStatLine()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_perf_5fstat_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PerfStatProto.PerfStatLine)
}
PerfStatProto_PerfStatLine::PerfStatProto_PerfStatLine(const PerfStatProto_PerfStatLine& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  event_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_event_name()) {
    event_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_name_);
  }
  ::memcpy(&time_ms_, &from.time_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&count_) -
    reinterpret_cast<char*>(&time_ms_)) + sizeof(count_));
  // @@protoc_insertion_point(copy_constructor:metrics.PerfStatProto.PerfStatLine)
}

void PerfStatProto_PerfStatLine::SharedCtor() {
  _cached_size_ = 0;
  event_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_ms_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&count_) -
      reinterpret_cast<char*>(&time_ms_)) + sizeof(count_));
}

PerfStatProto_PerfStatLine::~PerfStatProto_PerfStatLine() {
  // @@protoc_insertion_point(destructor:metrics.PerfStatProto.PerfStatLine)
  SharedDtor();
}

void PerfStatProto_PerfStatLine::SharedDtor() {
  event_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PerfStatProto_PerfStatLine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PerfStatProto_PerfStatLine& PerfStatProto_PerfStatLine::default_instance() {
  protobuf_perf_5fstat_2eproto::InitDefaults();
  return *internal_default_instance();
}

PerfStatProto_PerfStatLine* PerfStatProto_PerfStatLine::New(::google::protobuf::Arena* arena) const {
  PerfStatProto_PerfStatLine* n = new PerfStatProto_PerfStatLine;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PerfStatProto_PerfStatLine::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PerfStatProto.PerfStatLine)
  if (has_event_name()) {
    GOOGLE_DCHECK(!event_name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*event_name_.UnsafeRawStringPointer())->clear();
  }
  if (_has_bits_[0 / 32] & 6u) {
    ::memset(&time_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&count_) -
        reinterpret_cast<char*>(&time_ms_)) + sizeof(count_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PerfStatProto_PerfStatLine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:metrics.PerfStatProto.PerfStatLine)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 time_ms = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_time_ms();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_ms_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 count = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string event_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_event_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:metrics.PerfStatProto.PerfStatLine)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PerfStatProto.PerfStatLine)
  return false;
#undef DO_
}

void PerfStatProto_PerfStatLine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PerfStatProto.PerfStatLine)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 time_ms = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->time_ms(), output);
  }

  // optional uint64 count = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->count(), output);
  }

  // optional string event_name = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->event_name(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PerfStatProto.PerfStatLine)
}

size_t PerfStatProto_PerfStatLine::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PerfStatProto.PerfStatLine)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional string event_name = 3;
    if (has_event_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->event_name());
    }

    // optional uint64 time_ms = 1;
    if (has_time_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->time_ms());
    }

    // optional uint64 count = 2;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->count());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PerfStatProto_PerfStatLine::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PerfStatProto_PerfStatLine*>(&from));
}

void PerfStatProto_PerfStatLine::MergeFrom(const PerfStatProto_PerfStatLine& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PerfStatProto.PerfStatLine)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_event_name();
      event_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      time_ms_ = from.time_ms_;
    }
    if (cached_has_bits & 0x00000004u) {
      count_ = from.count_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PerfStatProto_PerfStatLine::CopyFrom(const PerfStatProto_PerfStatLine& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PerfStatProto.PerfStatLine)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerfStatProto_PerfStatLine::IsInitialized() const {
  return true;
}

void PerfStatProto_PerfStatLine::Swap(PerfStatProto_PerfStatLine* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PerfStatProto_PerfStatLine::InternalSwap(PerfStatProto_PerfStatLine* other) {
  event_name_.Swap(&other->event_name_);
  std::swap(time_ms_, other->time_ms_);
  std::swap(count_, other->count_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PerfStatProto_PerfStatLine::GetTypeName() const {
  return "metrics.PerfStatProto.PerfStatLine";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PerfStatProto_PerfStatLine

// optional uint64 time_ms = 1;
bool PerfStatProto_PerfStatLine::has_time_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PerfStatProto_PerfStatLine::set_has_time_ms() {
  _has_bits_[0] |= 0x00000002u;
}
void PerfStatProto_PerfStatLine::clear_has_time_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
void PerfStatProto_PerfStatLine::clear_time_ms() {
  time_ms_ = GOOGLE_ULONGLONG(0);
  clear_has_time_ms();
}
::google::protobuf::uint64 PerfStatProto_PerfStatLine::time_ms() const {
  // @@protoc_insertion_point(field_get:metrics.PerfStatProto.PerfStatLine.time_ms)
  return time_ms_;
}
void PerfStatProto_PerfStatLine::set_time_ms(::google::protobuf::uint64 value) {
  set_has_time_ms();
  time_ms_ = value;
  // @@protoc_insertion_point(field_set:metrics.PerfStatProto.PerfStatLine.time_ms)
}

// optional uint64 count = 2;
bool PerfStatProto_PerfStatLine::has_count() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PerfStatProto_PerfStatLine::set_has_count() {
  _has_bits_[0] |= 0x00000004u;
}
void PerfStatProto_PerfStatLine::clear_has_count() {
  _has_bits_[0] &= ~0x00000004u;
}
void PerfStatProto_PerfStatLine::clear_count() {
  count_ = GOOGLE_ULONGLONG(0);
  clear_has_count();
}
::google::protobuf::uint64 PerfStatProto_PerfStatLine::count() const {
  // @@protoc_insertion_point(field_get:metrics.PerfStatProto.PerfStatLine.count)
  return count_;
}
void PerfStatProto_PerfStatLine::set_count(::google::protobuf::uint64 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:metrics.PerfStatProto.PerfStatLine.count)
}

// optional string event_name = 3;
bool PerfStatProto_PerfStatLine::has_event_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PerfStatProto_PerfStatLine::set_has_event_name() {
  _has_bits_[0] |= 0x00000001u;
}
void PerfStatProto_PerfStatLine::clear_has_event_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void PerfStatProto_PerfStatLine::clear_event_name() {
  event_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_event_name();
}
const ::std::string& PerfStatProto_PerfStatLine::event_name() const {
  // @@protoc_insertion_point(field_get:metrics.PerfStatProto.PerfStatLine.event_name)
  return event_name_.GetNoArena();
}
void PerfStatProto_PerfStatLine::set_event_name(const ::std::string& value) {
  set_has_event_name();
  event_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.PerfStatProto.PerfStatLine.event_name)
}
#if LANG_CXX11
void PerfStatProto_PerfStatLine::set_event_name(::std::string&& value) {
  set_has_event_name();
  event_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.PerfStatProto.PerfStatLine.event_name)
}
#endif
void PerfStatProto_PerfStatLine::set_event_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_event_name();
  event_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.PerfStatProto.PerfStatLine.event_name)
}
void PerfStatProto_PerfStatLine::set_event_name(const char* value, size_t size) {
  set_has_event_name();
  event_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.PerfStatProto.PerfStatLine.event_name)
}
::std::string* PerfStatProto_PerfStatLine::mutable_event_name() {
  set_has_event_name();
  // @@protoc_insertion_point(field_mutable:metrics.PerfStatProto.PerfStatLine.event_name)
  return event_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PerfStatProto_PerfStatLine::release_event_name() {
  // @@protoc_insertion_point(field_release:metrics.PerfStatProto.PerfStatLine.event_name)
  clear_has_event_name();
  return event_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PerfStatProto_PerfStatLine::set_allocated_event_name(::std::string* event_name) {
  if (event_name != NULL) {
    set_has_event_name();
  } else {
    clear_has_event_name();
  }
  event_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), event_name);
  // @@protoc_insertion_point(field_set_allocated:metrics.PerfStatProto.PerfStatLine.event_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PerfStatProto::kLineFieldNumber;
const int PerfStatProto::kCommandLineFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PerfStatProto::PerfStatProto()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_perf_5fstat_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PerfStatProto)
}
PerfStatProto::PerfStatProto(const PerfStatProto& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      line_(from.line_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  command_line_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_command_line()) {
    command_line_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.command_line_);
  }
  // @@protoc_insertion_point(copy_constructor:metrics.PerfStatProto)
}

void PerfStatProto::SharedCtor() {
  _cached_size_ = 0;
  command_line_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PerfStatProto::~PerfStatProto() {
  // @@protoc_insertion_point(destructor:metrics.PerfStatProto)
  SharedDtor();
}

void PerfStatProto::SharedDtor() {
  command_line_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PerfStatProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PerfStatProto& PerfStatProto::default_instance() {
  protobuf_perf_5fstat_2eproto::InitDefaults();
  return *internal_default_instance();
}

PerfStatProto* PerfStatProto::New(::google::protobuf::Arena* arena) const {
  PerfStatProto* n = new PerfStatProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PerfStatProto::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PerfStatProto)
  line_.Clear();
  if (has_command_line()) {
    GOOGLE_DCHECK(!command_line_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*command_line_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PerfStatProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:metrics.PerfStatProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .metrics.PerfStatProto.PerfStatLine line = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_line()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string command_line = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_command_line()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:metrics.PerfStatProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PerfStatProto)
  return false;
#undef DO_
}

void PerfStatProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PerfStatProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .metrics.PerfStatProto.PerfStatLine line = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->line_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->line(static_cast<int>(i)), output);
  }

  cached_has_bits = _has_bits_[0];
  // optional string command_line = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->command_line(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PerfStatProto)
}

size_t PerfStatProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PerfStatProto)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated .metrics.PerfStatProto.PerfStatLine line = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->line_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->line(static_cast<int>(i)));
    }
  }

  // optional string command_line = 2;
  if (has_command_line()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->command_line());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PerfStatProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PerfStatProto*>(&from));
}

void PerfStatProto::MergeFrom(const PerfStatProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PerfStatProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  line_.MergeFrom(from.line_);
  if (from.has_command_line()) {
    set_has_command_line();
    command_line_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.command_line_);
  }
}

void PerfStatProto::CopyFrom(const PerfStatProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PerfStatProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerfStatProto::IsInitialized() const {
  return true;
}

void PerfStatProto::Swap(PerfStatProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PerfStatProto::InternalSwap(PerfStatProto* other) {
  line_.InternalSwap(&other->line_);
  command_line_.Swap(&other->command_line_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PerfStatProto::GetTypeName() const {
  return "metrics.PerfStatProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PerfStatProto

// repeated .metrics.PerfStatProto.PerfStatLine line = 1;
int PerfStatProto::line_size() const {
  return line_.size();
}
void PerfStatProto::clear_line() {
  line_.Clear();
}
const ::metrics::PerfStatProto_PerfStatLine& PerfStatProto::line(int index) const {
  // @@protoc_insertion_point(field_get:metrics.PerfStatProto.line)
  return line_.Get(index);
}
::metrics::PerfStatProto_PerfStatLine* PerfStatProto::mutable_line(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.PerfStatProto.line)
  return line_.Mutable(index);
}
::metrics::PerfStatProto_PerfStatLine* PerfStatProto::add_line() {
  // @@protoc_insertion_point(field_add:metrics.PerfStatProto.line)
  return line_.Add();
}
::google::protobuf::RepeatedPtrField< ::metrics::PerfStatProto_PerfStatLine >*
PerfStatProto::mutable_line() {
  // @@protoc_insertion_point(field_mutable_list:metrics.PerfStatProto.line)
  return &line_;
}
const ::google::protobuf::RepeatedPtrField< ::metrics::PerfStatProto_PerfStatLine >&
PerfStatProto::line() const {
  // @@protoc_insertion_point(field_list:metrics.PerfStatProto.line)
  return line_;
}

// optional string command_line = 2;
bool PerfStatProto::has_command_line() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PerfStatProto::set_has_command_line() {
  _has_bits_[0] |= 0x00000001u;
}
void PerfStatProto::clear_has_command_line() {
  _has_bits_[0] &= ~0x00000001u;
}
void PerfStatProto::clear_command_line() {
  command_line_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_command_line();
}
const ::std::string& PerfStatProto::command_line() const {
  // @@protoc_insertion_point(field_get:metrics.PerfStatProto.command_line)
  return command_line_.GetNoArena();
}
void PerfStatProto::set_command_line(const ::std::string& value) {
  set_has_command_line();
  command_line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.PerfStatProto.command_line)
}
#if LANG_CXX11
void PerfStatProto::set_command_line(::std::string&& value) {
  set_has_command_line();
  command_line_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.PerfStatProto.command_line)
}
#endif
void PerfStatProto::set_command_line(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_command_line();
  command_line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.PerfStatProto.command_line)
}
void PerfStatProto::set_command_line(const char* value, size_t size) {
  set_has_command_line();
  command_line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.PerfStatProto.command_line)
}
::std::string* PerfStatProto::mutable_command_line() {
  set_has_command_line();
  // @@protoc_insertion_point(field_mutable:metrics.PerfStatProto.command_line)
  return command_line_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PerfStatProto::release_command_line() {
  // @@protoc_insertion_point(field_release:metrics.PerfStatProto.command_line)
  clear_has_command_line();
  return command_line_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PerfStatProto::set_allocated_command_line(::std::string* command_line) {
  if (command_line != NULL) {
    set_has_command_line();
  } else {
    clear_has_command_line();
  }
  command_line_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), command_line);
  // @@protoc_insertion_point(field_set_allocated:metrics.PerfStatProto.command_line)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)