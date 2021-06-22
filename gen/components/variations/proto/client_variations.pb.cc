// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_variations.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client_variations.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace variations {
class ClientVariationsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ClientVariations> {
} _ClientVariations_default_instance_;

namespace protobuf_client_5fvariations_2eproto {

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
  _ClientVariations_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ClientVariations_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_client_5fvariations_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientVariations::kVariationIdFieldNumber;
const int ClientVariations::kTriggerVariationIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClientVariations::ClientVariations()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_client_5fvariations_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:variations.ClientVariations)
}
ClientVariations::ClientVariations(const ClientVariations& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      variation_id_(from.variation_id_),
      trigger_variation_id_(from.trigger_variation_id_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:variations.ClientVariations)
}

void ClientVariations::SharedCtor() {
  _cached_size_ = 0;
}

ClientVariations::~ClientVariations() {
  // @@protoc_insertion_point(destructor:variations.ClientVariations)
  SharedDtor();
}

void ClientVariations::SharedDtor() {
}

void ClientVariations::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientVariations& ClientVariations::default_instance() {
  protobuf_client_5fvariations_2eproto::InitDefaults();
  return *internal_default_instance();
}

ClientVariations* ClientVariations::New(::google::protobuf::Arena* arena) const {
  ClientVariations* n = new ClientVariations;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClientVariations::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.ClientVariations)
  variation_id_.Clear();
  trigger_variation_id_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ClientVariations::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:variations.ClientVariations)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 variation_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8u, input, this->mutable_variation_id())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(10u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_variation_id())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 trigger_variation_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24u, input, this->mutable_trigger_variation_id())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(26u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_trigger_variation_id())));
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
  // @@protoc_insertion_point(parse_success:variations.ClientVariations)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:variations.ClientVariations)
  return false;
#undef DO_
}

void ClientVariations::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:variations.ClientVariations)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 variation_id = 1;
  for (int i = 0, n = this->variation_id_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->variation_id(i), output);
  }

  // repeated int32 trigger_variation_id = 3;
  for (int i = 0, n = this->trigger_variation_id_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->trigger_variation_id(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:variations.ClientVariations)
}

size_t ClientVariations::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.ClientVariations)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated int32 variation_id = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->variation_id_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->variation_id_size());
    total_size += data_size;
  }

  // repeated int32 trigger_variation_id = 3;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->trigger_variation_id_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->trigger_variation_id_size());
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientVariations::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientVariations*>(&from));
}

void ClientVariations::MergeFrom(const ClientVariations& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.ClientVariations)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  variation_id_.MergeFrom(from.variation_id_);
  trigger_variation_id_.MergeFrom(from.trigger_variation_id_);
}

void ClientVariations::CopyFrom(const ClientVariations& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.ClientVariations)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientVariations::IsInitialized() const {
  return true;
}

void ClientVariations::Swap(ClientVariations* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClientVariations::InternalSwap(ClientVariations* other) {
  variation_id_.InternalSwap(&other->variation_id_);
  trigger_variation_id_.InternalSwap(&other->trigger_variation_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ClientVariations::GetTypeName() const {
  return "variations.ClientVariations";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientVariations

// repeated int32 variation_id = 1;
int ClientVariations::variation_id_size() const {
  return variation_id_.size();
}
void ClientVariations::clear_variation_id() {
  variation_id_.Clear();
}
::google::protobuf::int32 ClientVariations::variation_id(int index) const {
  // @@protoc_insertion_point(field_get:variations.ClientVariations.variation_id)
  return variation_id_.Get(index);
}
void ClientVariations::set_variation_id(int index, ::google::protobuf::int32 value) {
  variation_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:variations.ClientVariations.variation_id)
}
void ClientVariations::add_variation_id(::google::protobuf::int32 value) {
  variation_id_.Add(value);
  // @@protoc_insertion_point(field_add:variations.ClientVariations.variation_id)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ClientVariations::variation_id() const {
  // @@protoc_insertion_point(field_list:variations.ClientVariations.variation_id)
  return variation_id_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ClientVariations::mutable_variation_id() {
  // @@protoc_insertion_point(field_mutable_list:variations.ClientVariations.variation_id)
  return &variation_id_;
}

// repeated int32 trigger_variation_id = 3;
int ClientVariations::trigger_variation_id_size() const {
  return trigger_variation_id_.size();
}
void ClientVariations::clear_trigger_variation_id() {
  trigger_variation_id_.Clear();
}
::google::protobuf::int32 ClientVariations::trigger_variation_id(int index) const {
  // @@protoc_insertion_point(field_get:variations.ClientVariations.trigger_variation_id)
  return trigger_variation_id_.Get(index);
}
void ClientVariations::set_trigger_variation_id(int index, ::google::protobuf::int32 value) {
  trigger_variation_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:variations.ClientVariations.trigger_variation_id)
}
void ClientVariations::add_trigger_variation_id(::google::protobuf::int32 value) {
  trigger_variation_id_.Add(value);
  // @@protoc_insertion_point(field_add:variations.ClientVariations.trigger_variation_id)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ClientVariations::trigger_variation_id() const {
  // @@protoc_insertion_point(field_list:variations.ClientVariations.trigger_variation_id)
  return trigger_variation_id_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ClientVariations::mutable_trigger_variation_id() {
  // @@protoc_insertion_point(field_mutable_list:variations.ClientVariations.trigger_variation_id)
  return &trigger_variation_id_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace variations

// @@protoc_insertion_point(global_scope)