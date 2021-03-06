// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: variations_seed.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "variations_seed.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace variations {
class VariationsSeedDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VariationsSeed> {
} _VariationsSeed_default_instance_;

namespace protobuf_variations_5fseed_2eproto {

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
  _VariationsSeed_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::variations::protobuf_study_2eproto::InitDefaults();
  _VariationsSeed_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::variations::protobuf_study_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_variations_5fseed_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VariationsSeed::kSerialNumberFieldNumber;
const int VariationsSeed::kStudyFieldNumber;
const int VariationsSeed::kCountryCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VariationsSeed::VariationsSeed()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_variations_5fseed_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:variations.VariationsSeed)
}
VariationsSeed::VariationsSeed(const VariationsSeed& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      study_(from.study_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serial_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serial_number()) {
    serial_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serial_number_);
  }
  country_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_country_code()) {
    country_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.country_code_);
  }
  // @@protoc_insertion_point(copy_constructor:variations.VariationsSeed)
}

void VariationsSeed::SharedCtor() {
  _cached_size_ = 0;
  serial_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  country_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

VariationsSeed::~VariationsSeed() {
  // @@protoc_insertion_point(destructor:variations.VariationsSeed)
  SharedDtor();
}

void VariationsSeed::SharedDtor() {
  serial_number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  country_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VariationsSeed::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const VariationsSeed& VariationsSeed::default_instance() {
  protobuf_variations_5fseed_2eproto::InitDefaults();
  return *internal_default_instance();
}

VariationsSeed* VariationsSeed::New(::google::protobuf::Arena* arena) const {
  VariationsSeed* n = new VariationsSeed;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VariationsSeed::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.VariationsSeed)
  study_.Clear();
  if (_has_bits_[0 / 32] & 3u) {
    if (has_serial_number()) {
      GOOGLE_DCHECK(!serial_number_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*serial_number_.UnsafeRawStringPointer())->clear();
    }
    if (has_country_code()) {
      GOOGLE_DCHECK(!country_code_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*country_code_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VariationsSeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:variations.VariationsSeed)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string serial_number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serial_number()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .variations.Study study = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_study()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string country_code = 3 [deprecated = true];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country_code()));
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
  // @@protoc_insertion_point(parse_success:variations.VariationsSeed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:variations.VariationsSeed)
  return false;
#undef DO_
}

void VariationsSeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:variations.VariationsSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string serial_number = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->serial_number(), output);
  }

  // repeated .variations.Study study = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->study_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->study(static_cast<int>(i)), output);
  }

  // optional string country_code = 3 [deprecated = true];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->country_code(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:variations.VariationsSeed)
}

size_t VariationsSeed::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.VariationsSeed)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated .variations.Study study = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->study_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->study(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional string serial_number = 1;
    if (has_serial_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serial_number());
    }

    // optional string country_code = 3 [deprecated = true];
    if (has_country_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->country_code());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VariationsSeed::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const VariationsSeed*>(&from));
}

void VariationsSeed::MergeFrom(const VariationsSeed& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.VariationsSeed)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  study_.MergeFrom(from.study_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_serial_number();
      serial_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serial_number_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_country_code();
      country_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.country_code_);
    }
  }
}

void VariationsSeed::CopyFrom(const VariationsSeed& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.VariationsSeed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VariationsSeed::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->study())) return false;
  return true;
}

void VariationsSeed::Swap(VariationsSeed* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VariationsSeed::InternalSwap(VariationsSeed* other) {
  study_.InternalSwap(&other->study_);
  serial_number_.Swap(&other->serial_number_);
  country_code_.Swap(&other->country_code_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string VariationsSeed::GetTypeName() const {
  return "variations.VariationsSeed";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VariationsSeed

// optional string serial_number = 1;
bool VariationsSeed::has_serial_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void VariationsSeed::set_has_serial_number() {
  _has_bits_[0] |= 0x00000001u;
}
void VariationsSeed::clear_has_serial_number() {
  _has_bits_[0] &= ~0x00000001u;
}
void VariationsSeed::clear_serial_number() {
  serial_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_serial_number();
}
const ::std::string& VariationsSeed::serial_number() const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.serial_number)
  return serial_number_.GetNoArena();
}
void VariationsSeed::set_serial_number(const ::std::string& value) {
  set_has_serial_number();
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:variations.VariationsSeed.serial_number)
}
#if LANG_CXX11
void VariationsSeed::set_serial_number(::std::string&& value) {
  set_has_serial_number();
  serial_number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:variations.VariationsSeed.serial_number)
}
#endif
void VariationsSeed::set_serial_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_serial_number();
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:variations.VariationsSeed.serial_number)
}
void VariationsSeed::set_serial_number(const char* value, size_t size) {
  set_has_serial_number();
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:variations.VariationsSeed.serial_number)
}
::std::string* VariationsSeed::mutable_serial_number() {
  set_has_serial_number();
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.serial_number)
  return serial_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VariationsSeed::release_serial_number() {
  // @@protoc_insertion_point(field_release:variations.VariationsSeed.serial_number)
  clear_has_serial_number();
  return serial_number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VariationsSeed::set_allocated_serial_number(::std::string* serial_number) {
  if (serial_number != NULL) {
    set_has_serial_number();
  } else {
    clear_has_serial_number();
  }
  serial_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serial_number);
  // @@protoc_insertion_point(field_set_allocated:variations.VariationsSeed.serial_number)
}

// repeated .variations.Study study = 2;
int VariationsSeed::study_size() const {
  return study_.size();
}
void VariationsSeed::clear_study() {
  study_.Clear();
}
const ::variations::Study& VariationsSeed::study(int index) const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.study)
  return study_.Get(index);
}
::variations::Study* VariationsSeed::mutable_study(int index) {
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.study)
  return study_.Mutable(index);
}
::variations::Study* VariationsSeed::add_study() {
  // @@protoc_insertion_point(field_add:variations.VariationsSeed.study)
  return study_.Add();
}
::google::protobuf::RepeatedPtrField< ::variations::Study >*
VariationsSeed::mutable_study() {
  // @@protoc_insertion_point(field_mutable_list:variations.VariationsSeed.study)
  return &study_;
}
const ::google::protobuf::RepeatedPtrField< ::variations::Study >&
VariationsSeed::study() const {
  // @@protoc_insertion_point(field_list:variations.VariationsSeed.study)
  return study_;
}

// optional string country_code = 3 [deprecated = true];
bool VariationsSeed::has_country_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void VariationsSeed::set_has_country_code() {
  _has_bits_[0] |= 0x00000002u;
}
void VariationsSeed::clear_has_country_code() {
  _has_bits_[0] &= ~0x00000002u;
}
void VariationsSeed::clear_country_code() {
  country_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_country_code();
}
const ::std::string& VariationsSeed::country_code() const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.country_code)
  return country_code_.GetNoArena();
}
void VariationsSeed::set_country_code(const ::std::string& value) {
  set_has_country_code();
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:variations.VariationsSeed.country_code)
}
#if LANG_CXX11
void VariationsSeed::set_country_code(::std::string&& value) {
  set_has_country_code();
  country_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:variations.VariationsSeed.country_code)
}
#endif
void VariationsSeed::set_country_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_country_code();
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:variations.VariationsSeed.country_code)
}
void VariationsSeed::set_country_code(const char* value, size_t size) {
  set_has_country_code();
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:variations.VariationsSeed.country_code)
}
::std::string* VariationsSeed::mutable_country_code() {
  set_has_country_code();
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.country_code)
  return country_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VariationsSeed::release_country_code() {
  // @@protoc_insertion_point(field_release:variations.VariationsSeed.country_code)
  clear_has_country_code();
  return country_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VariationsSeed::set_allocated_country_code(::std::string* country_code) {
  if (country_code != NULL) {
    set_has_country_code();
  } else {
    clear_has_country_code();
  }
  country_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), country_code);
  // @@protoc_insertion_point(field_set_allocated:variations.VariationsSeed.country_code)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace variations

// @@protoc_insertion_point(global_scope)
