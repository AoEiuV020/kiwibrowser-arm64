// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/chrome/chrome_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "perfetto/config/chrome/chrome_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace perfetto {
namespace protos {
class ChromeConfigDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ChromeConfig> {
} _ChromeConfig_default_instance_;

namespace protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto {

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
};


void TableStruct::Shutdown() {
  _ChromeConfig_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ChromeConfig_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChromeConfig::kTraceConfigFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChromeConfig::ChromeConfig()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.ChromeConfig)
}
ChromeConfig::ChromeConfig(const ChromeConfig& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  trace_config_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_trace_config()) {
    trace_config_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trace_config_);
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeConfig)
}

void ChromeConfig::SharedCtor() {
  _cached_size_ = 0;
  trace_config_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ChromeConfig::~ChromeConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeConfig)
  SharedDtor();
}

void ChromeConfig::SharedDtor() {
  trace_config_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ChromeConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ChromeConfig& ChromeConfig::default_instance() {
  protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

ChromeConfig* ChromeConfig::New(::google::protobuf::Arena* arena) const {
  ChromeConfig* n = new ChromeConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChromeConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeConfig)
  if (has_trace_config()) {
    GOOGLE_DCHECK(!trace_config_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*trace_config_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChromeConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.ChromeConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string trace_config = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_trace_config()));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.ChromeConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.ChromeConfig)
  return false;
#undef DO_
}

void ChromeConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.ChromeConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string trace_config = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->trace_config(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.ChromeConfig)
}

size_t ChromeConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeConfig)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // optional string trace_config = 1;
  if (has_trace_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->trace_config());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChromeConfig::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChromeConfig*>(&from));
}

void ChromeConfig::MergeFrom(const ChromeConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_trace_config()) {
    set_has_trace_config();
    trace_config_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trace_config_);
  }
}

void ChromeConfig::CopyFrom(const ChromeConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeConfig::IsInitialized() const {
  return true;
}

void ChromeConfig::Swap(ChromeConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChromeConfig::InternalSwap(ChromeConfig* other) {
  trace_config_.Swap(&other->trace_config_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ChromeConfig::GetTypeName() const {
  return "perfetto.protos.ChromeConfig";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChromeConfig

// optional string trace_config = 1;
bool ChromeConfig::has_trace_config() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ChromeConfig::set_has_trace_config() {
  _has_bits_[0] |= 0x00000001u;
}
void ChromeConfig::clear_has_trace_config() {
  _has_bits_[0] &= ~0x00000001u;
}
void ChromeConfig::clear_trace_config() {
  trace_config_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_trace_config();
}
const ::std::string& ChromeConfig::trace_config() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeConfig.trace_config)
  return trace_config_.GetNoArena();
}
void ChromeConfig::set_trace_config(const ::std::string& value) {
  set_has_trace_config();
  trace_config_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeConfig.trace_config)
}
#if LANG_CXX11
void ChromeConfig::set_trace_config(::std::string&& value) {
  set_has_trace_config();
  trace_config_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.ChromeConfig.trace_config)
}
#endif
void ChromeConfig::set_trace_config(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_trace_config();
  trace_config_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.ChromeConfig.trace_config)
}
void ChromeConfig::set_trace_config(const char* value, size_t size) {
  set_has_trace_config();
  trace_config_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.ChromeConfig.trace_config)
}
::std::string* ChromeConfig::mutable_trace_config() {
  set_has_trace_config();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeConfig.trace_config)
  return trace_config_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ChromeConfig::release_trace_config() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeConfig.trace_config)
  clear_has_trace_config();
  return trace_config_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ChromeConfig::set_allocated_trace_config(::std::string* trace_config) {
  if (trace_config != NULL) {
    set_has_trace_config();
  } else {
    clear_has_trace_config();
  }
  trace_config_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), trace_config);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeConfig.trace_config)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)
