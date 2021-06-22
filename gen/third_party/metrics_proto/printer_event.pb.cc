// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: printer_event.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "printer_event.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace metrics {
class PrinterEventProtoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PrinterEventProto> {
} _PrinterEventProto_default_instance_;

namespace protobuf_printer_5fevent_2eproto {

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
  _PrinterEventProto_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _PrinterEventProto_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_printer_5fevent_2eproto

bool PrinterEventProto_EventType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const PrinterEventProto_EventType PrinterEventProto::UNKNOWN;
const PrinterEventProto_EventType PrinterEventProto::SETUP_AUTOMATIC;
const PrinterEventProto_EventType PrinterEventProto::SETUP_MANUAL;
const PrinterEventProto_EventType PrinterEventProto::SETUP_ABANDONED;
const PrinterEventProto_EventType PrinterEventProto::PRINTER_DELETED;
const PrinterEventProto_EventType PrinterEventProto::EventType_MIN;
const PrinterEventProto_EventType PrinterEventProto::EventType_MAX;
const int PrinterEventProto::EventType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PrinterEventProto::kUsbPrinterManufacturerFieldNumber;
const int PrinterEventProto::kUsbPrinterModelFieldNumber;
const int PrinterEventProto::kUsbVendorIdFieldNumber;
const int PrinterEventProto::kUsbModelIdFieldNumber;
const int PrinterEventProto::kIppMakeAndModelFieldNumber;
const int PrinterEventProto::kUserPpdFieldNumber;
const int PrinterEventProto::kPpdIdentifierFieldNumber;
const int PrinterEventProto::kEventTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PrinterEventProto::PrinterEventProto()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_printer_5fevent_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PrinterEventProto)
}
PrinterEventProto::PrinterEventProto(const PrinterEventProto& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  usb_printer_manufacturer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_usb_printer_manufacturer()) {
    usb_printer_manufacturer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.usb_printer_manufacturer_);
  }
  usb_printer_model_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_usb_printer_model()) {
    usb_printer_model_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.usb_printer_model_);
  }
  ipp_make_and_model_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_ipp_make_and_model()) {
    ipp_make_and_model_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ipp_make_and_model_);
  }
  ppd_identifier_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_ppd_identifier()) {
    ppd_identifier_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ppd_identifier_);
  }
  ::memcpy(&usb_vendor_id_, &from.usb_vendor_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&event_type_) -
    reinterpret_cast<char*>(&usb_vendor_id_)) + sizeof(event_type_));
  // @@protoc_insertion_point(copy_constructor:metrics.PrinterEventProto)
}

void PrinterEventProto::SharedCtor() {
  _cached_size_ = 0;
  usb_printer_manufacturer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  usb_printer_model_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ipp_make_and_model_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ppd_identifier_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&usb_vendor_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&event_type_) -
      reinterpret_cast<char*>(&usb_vendor_id_)) + sizeof(event_type_));
}

PrinterEventProto::~PrinterEventProto() {
  // @@protoc_insertion_point(destructor:metrics.PrinterEventProto)
  SharedDtor();
}

void PrinterEventProto::SharedDtor() {
  usb_printer_manufacturer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  usb_printer_model_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ipp_make_and_model_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ppd_identifier_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PrinterEventProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PrinterEventProto& PrinterEventProto::default_instance() {
  protobuf_printer_5fevent_2eproto::InitDefaults();
  return *internal_default_instance();
}

PrinterEventProto* PrinterEventProto::New(::google::protobuf::Arena* arena) const {
  PrinterEventProto* n = new PrinterEventProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PrinterEventProto::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PrinterEventProto)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_usb_printer_manufacturer()) {
      GOOGLE_DCHECK(!usb_printer_manufacturer_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*usb_printer_manufacturer_.UnsafeRawStringPointer())->clear();
    }
    if (has_usb_printer_model()) {
      GOOGLE_DCHECK(!usb_printer_model_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*usb_printer_model_.UnsafeRawStringPointer())->clear();
    }
    if (has_ipp_make_and_model()) {
      GOOGLE_DCHECK(!ipp_make_and_model_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*ipp_make_and_model_.UnsafeRawStringPointer())->clear();
    }
    if (has_ppd_identifier()) {
      GOOGLE_DCHECK(!ppd_identifier_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*ppd_identifier_.UnsafeRawStringPointer())->clear();
    }
  }
  if (_has_bits_[0 / 32] & 240u) {
    ::memset(&usb_vendor_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&event_type_) -
        reinterpret_cast<char*>(&usb_vendor_id_)) + sizeof(event_type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PrinterEventProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:metrics.PrinterEventProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string usb_printer_manufacturer = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_usb_printer_manufacturer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string usb_printer_model = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_usb_printer_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 usb_vendor_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          set_has_usb_vendor_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &usb_vendor_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 usb_model_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          set_has_usb_model_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &usb_model_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string ipp_make_and_model = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ipp_make_and_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool user_ppd = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u)) {
          set_has_user_ppd();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &user_ppd_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string ppd_identifier = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ppd_identifier()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .metrics.PrinterEventProto.EventType event_type = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::metrics::PrinterEventProto_EventType_IsValid(value)) {
            set_event_type(static_cast< ::metrics::PrinterEventProto_EventType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(64u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
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
  // @@protoc_insertion_point(parse_success:metrics.PrinterEventProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PrinterEventProto)
  return false;
#undef DO_
}

void PrinterEventProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PrinterEventProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string usb_printer_manufacturer = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->usb_printer_manufacturer(), output);
  }

  // optional string usb_printer_model = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->usb_printer_model(), output);
  }

  // optional int32 usb_vendor_id = 3;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->usb_vendor_id(), output);
  }

  // optional int32 usb_model_id = 4;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->usb_model_id(), output);
  }

  // optional string ipp_make_and_model = 5;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->ipp_make_and_model(), output);
  }

  // optional bool user_ppd = 6;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->user_ppd(), output);
  }

  // optional string ppd_identifier = 7;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->ppd_identifier(), output);
  }

  // optional .metrics.PrinterEventProto.EventType event_type = 8;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->event_type(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PrinterEventProto)
}

size_t PrinterEventProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PrinterEventProto)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 255u) {
    // optional string usb_printer_manufacturer = 1;
    if (has_usb_printer_manufacturer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->usb_printer_manufacturer());
    }

    // optional string usb_printer_model = 2;
    if (has_usb_printer_model()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->usb_printer_model());
    }

    // optional string ipp_make_and_model = 5;
    if (has_ipp_make_and_model()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ipp_make_and_model());
    }

    // optional string ppd_identifier = 7;
    if (has_ppd_identifier()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ppd_identifier());
    }

    // optional int32 usb_vendor_id = 3;
    if (has_usb_vendor_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->usb_vendor_id());
    }

    // optional int32 usb_model_id = 4;
    if (has_usb_model_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->usb_model_id());
    }

    // optional bool user_ppd = 6;
    if (has_user_ppd()) {
      total_size += 1 + 1;
    }

    // optional .metrics.PrinterEventProto.EventType event_type = 8;
    if (has_event_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->event_type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrinterEventProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PrinterEventProto*>(&from));
}

void PrinterEventProto::MergeFrom(const PrinterEventProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PrinterEventProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_usb_printer_manufacturer();
      usb_printer_manufacturer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.usb_printer_manufacturer_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_usb_printer_model();
      usb_printer_model_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.usb_printer_model_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_ipp_make_and_model();
      ipp_make_and_model_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ipp_make_and_model_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_ppd_identifier();
      ppd_identifier_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ppd_identifier_);
    }
    if (cached_has_bits & 0x00000010u) {
      usb_vendor_id_ = from.usb_vendor_id_;
    }
    if (cached_has_bits & 0x00000020u) {
      usb_model_id_ = from.usb_model_id_;
    }
    if (cached_has_bits & 0x00000040u) {
      user_ppd_ = from.user_ppd_;
    }
    if (cached_has_bits & 0x00000080u) {
      event_type_ = from.event_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PrinterEventProto::CopyFrom(const PrinterEventProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PrinterEventProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrinterEventProto::IsInitialized() const {
  return true;
}

void PrinterEventProto::Swap(PrinterEventProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PrinterEventProto::InternalSwap(PrinterEventProto* other) {
  usb_printer_manufacturer_.Swap(&other->usb_printer_manufacturer_);
  usb_printer_model_.Swap(&other->usb_printer_model_);
  ipp_make_and_model_.Swap(&other->ipp_make_and_model_);
  ppd_identifier_.Swap(&other->ppd_identifier_);
  std::swap(usb_vendor_id_, other->usb_vendor_id_);
  std::swap(usb_model_id_, other->usb_model_id_);
  std::swap(user_ppd_, other->user_ppd_);
  std::swap(event_type_, other->event_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PrinterEventProto::GetTypeName() const {
  return "metrics.PrinterEventProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PrinterEventProto

// optional string usb_printer_manufacturer = 1;
bool PrinterEventProto::has_usb_printer_manufacturer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PrinterEventProto::set_has_usb_printer_manufacturer() {
  _has_bits_[0] |= 0x00000001u;
}
void PrinterEventProto::clear_has_usb_printer_manufacturer() {
  _has_bits_[0] &= ~0x00000001u;
}
void PrinterEventProto::clear_usb_printer_manufacturer() {
  usb_printer_manufacturer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_usb_printer_manufacturer();
}
const ::std::string& PrinterEventProto::usb_printer_manufacturer() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.usb_printer_manufacturer)
  return usb_printer_manufacturer_.GetNoArena();
}
void PrinterEventProto::set_usb_printer_manufacturer(const ::std::string& value) {
  set_has_usb_printer_manufacturer();
  usb_printer_manufacturer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.usb_printer_manufacturer)
}
#if LANG_CXX11
void PrinterEventProto::set_usb_printer_manufacturer(::std::string&& value) {
  set_has_usb_printer_manufacturer();
  usb_printer_manufacturer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.PrinterEventProto.usb_printer_manufacturer)
}
#endif
void PrinterEventProto::set_usb_printer_manufacturer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_usb_printer_manufacturer();
  usb_printer_manufacturer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.PrinterEventProto.usb_printer_manufacturer)
}
void PrinterEventProto::set_usb_printer_manufacturer(const char* value, size_t size) {
  set_has_usb_printer_manufacturer();
  usb_printer_manufacturer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.PrinterEventProto.usb_printer_manufacturer)
}
::std::string* PrinterEventProto::mutable_usb_printer_manufacturer() {
  set_has_usb_printer_manufacturer();
  // @@protoc_insertion_point(field_mutable:metrics.PrinterEventProto.usb_printer_manufacturer)
  return usb_printer_manufacturer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PrinterEventProto::release_usb_printer_manufacturer() {
  // @@protoc_insertion_point(field_release:metrics.PrinterEventProto.usb_printer_manufacturer)
  clear_has_usb_printer_manufacturer();
  return usb_printer_manufacturer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PrinterEventProto::set_allocated_usb_printer_manufacturer(::std::string* usb_printer_manufacturer) {
  if (usb_printer_manufacturer != NULL) {
    set_has_usb_printer_manufacturer();
  } else {
    clear_has_usb_printer_manufacturer();
  }
  usb_printer_manufacturer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), usb_printer_manufacturer);
  // @@protoc_insertion_point(field_set_allocated:metrics.PrinterEventProto.usb_printer_manufacturer)
}

// optional string usb_printer_model = 2;
bool PrinterEventProto::has_usb_printer_model() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PrinterEventProto::set_has_usb_printer_model() {
  _has_bits_[0] |= 0x00000002u;
}
void PrinterEventProto::clear_has_usb_printer_model() {
  _has_bits_[0] &= ~0x00000002u;
}
void PrinterEventProto::clear_usb_printer_model() {
  usb_printer_model_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_usb_printer_model();
}
const ::std::string& PrinterEventProto::usb_printer_model() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.usb_printer_model)
  return usb_printer_model_.GetNoArena();
}
void PrinterEventProto::set_usb_printer_model(const ::std::string& value) {
  set_has_usb_printer_model();
  usb_printer_model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.usb_printer_model)
}
#if LANG_CXX11
void PrinterEventProto::set_usb_printer_model(::std::string&& value) {
  set_has_usb_printer_model();
  usb_printer_model_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.PrinterEventProto.usb_printer_model)
}
#endif
void PrinterEventProto::set_usb_printer_model(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_usb_printer_model();
  usb_printer_model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.PrinterEventProto.usb_printer_model)
}
void PrinterEventProto::set_usb_printer_model(const char* value, size_t size) {
  set_has_usb_printer_model();
  usb_printer_model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.PrinterEventProto.usb_printer_model)
}
::std::string* PrinterEventProto::mutable_usb_printer_model() {
  set_has_usb_printer_model();
  // @@protoc_insertion_point(field_mutable:metrics.PrinterEventProto.usb_printer_model)
  return usb_printer_model_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PrinterEventProto::release_usb_printer_model() {
  // @@protoc_insertion_point(field_release:metrics.PrinterEventProto.usb_printer_model)
  clear_has_usb_printer_model();
  return usb_printer_model_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PrinterEventProto::set_allocated_usb_printer_model(::std::string* usb_printer_model) {
  if (usb_printer_model != NULL) {
    set_has_usb_printer_model();
  } else {
    clear_has_usb_printer_model();
  }
  usb_printer_model_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), usb_printer_model);
  // @@protoc_insertion_point(field_set_allocated:metrics.PrinterEventProto.usb_printer_model)
}

// optional int32 usb_vendor_id = 3;
bool PrinterEventProto::has_usb_vendor_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void PrinterEventProto::set_has_usb_vendor_id() {
  _has_bits_[0] |= 0x00000010u;
}
void PrinterEventProto::clear_has_usb_vendor_id() {
  _has_bits_[0] &= ~0x00000010u;
}
void PrinterEventProto::clear_usb_vendor_id() {
  usb_vendor_id_ = 0;
  clear_has_usb_vendor_id();
}
::google::protobuf::int32 PrinterEventProto::usb_vendor_id() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.usb_vendor_id)
  return usb_vendor_id_;
}
void PrinterEventProto::set_usb_vendor_id(::google::protobuf::int32 value) {
  set_has_usb_vendor_id();
  usb_vendor_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.usb_vendor_id)
}

// optional int32 usb_model_id = 4;
bool PrinterEventProto::has_usb_model_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void PrinterEventProto::set_has_usb_model_id() {
  _has_bits_[0] |= 0x00000020u;
}
void PrinterEventProto::clear_has_usb_model_id() {
  _has_bits_[0] &= ~0x00000020u;
}
void PrinterEventProto::clear_usb_model_id() {
  usb_model_id_ = 0;
  clear_has_usb_model_id();
}
::google::protobuf::int32 PrinterEventProto::usb_model_id() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.usb_model_id)
  return usb_model_id_;
}
void PrinterEventProto::set_usb_model_id(::google::protobuf::int32 value) {
  set_has_usb_model_id();
  usb_model_id_ = value;
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.usb_model_id)
}

// optional string ipp_make_and_model = 5;
bool PrinterEventProto::has_ipp_make_and_model() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PrinterEventProto::set_has_ipp_make_and_model() {
  _has_bits_[0] |= 0x00000004u;
}
void PrinterEventProto::clear_has_ipp_make_and_model() {
  _has_bits_[0] &= ~0x00000004u;
}
void PrinterEventProto::clear_ipp_make_and_model() {
  ipp_make_and_model_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ipp_make_and_model();
}
const ::std::string& PrinterEventProto::ipp_make_and_model() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.ipp_make_and_model)
  return ipp_make_and_model_.GetNoArena();
}
void PrinterEventProto::set_ipp_make_and_model(const ::std::string& value) {
  set_has_ipp_make_and_model();
  ipp_make_and_model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.ipp_make_and_model)
}
#if LANG_CXX11
void PrinterEventProto::set_ipp_make_and_model(::std::string&& value) {
  set_has_ipp_make_and_model();
  ipp_make_and_model_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.PrinterEventProto.ipp_make_and_model)
}
#endif
void PrinterEventProto::set_ipp_make_and_model(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ipp_make_and_model();
  ipp_make_and_model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.PrinterEventProto.ipp_make_and_model)
}
void PrinterEventProto::set_ipp_make_and_model(const char* value, size_t size) {
  set_has_ipp_make_and_model();
  ipp_make_and_model_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.PrinterEventProto.ipp_make_and_model)
}
::std::string* PrinterEventProto::mutable_ipp_make_and_model() {
  set_has_ipp_make_and_model();
  // @@protoc_insertion_point(field_mutable:metrics.PrinterEventProto.ipp_make_and_model)
  return ipp_make_and_model_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PrinterEventProto::release_ipp_make_and_model() {
  // @@protoc_insertion_point(field_release:metrics.PrinterEventProto.ipp_make_and_model)
  clear_has_ipp_make_and_model();
  return ipp_make_and_model_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PrinterEventProto::set_allocated_ipp_make_and_model(::std::string* ipp_make_and_model) {
  if (ipp_make_and_model != NULL) {
    set_has_ipp_make_and_model();
  } else {
    clear_has_ipp_make_and_model();
  }
  ipp_make_and_model_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ipp_make_and_model);
  // @@protoc_insertion_point(field_set_allocated:metrics.PrinterEventProto.ipp_make_and_model)
}

// optional bool user_ppd = 6;
bool PrinterEventProto::has_user_ppd() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void PrinterEventProto::set_has_user_ppd() {
  _has_bits_[0] |= 0x00000040u;
}
void PrinterEventProto::clear_has_user_ppd() {
  _has_bits_[0] &= ~0x00000040u;
}
void PrinterEventProto::clear_user_ppd() {
  user_ppd_ = false;
  clear_has_user_ppd();
}
bool PrinterEventProto::user_ppd() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.user_ppd)
  return user_ppd_;
}
void PrinterEventProto::set_user_ppd(bool value) {
  set_has_user_ppd();
  user_ppd_ = value;
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.user_ppd)
}

// optional string ppd_identifier = 7;
bool PrinterEventProto::has_ppd_identifier() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void PrinterEventProto::set_has_ppd_identifier() {
  _has_bits_[0] |= 0x00000008u;
}
void PrinterEventProto::clear_has_ppd_identifier() {
  _has_bits_[0] &= ~0x00000008u;
}
void PrinterEventProto::clear_ppd_identifier() {
  ppd_identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ppd_identifier();
}
const ::std::string& PrinterEventProto::ppd_identifier() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.ppd_identifier)
  return ppd_identifier_.GetNoArena();
}
void PrinterEventProto::set_ppd_identifier(const ::std::string& value) {
  set_has_ppd_identifier();
  ppd_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.ppd_identifier)
}
#if LANG_CXX11
void PrinterEventProto::set_ppd_identifier(::std::string&& value) {
  set_has_ppd_identifier();
  ppd_identifier_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.PrinterEventProto.ppd_identifier)
}
#endif
void PrinterEventProto::set_ppd_identifier(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ppd_identifier();
  ppd_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.PrinterEventProto.ppd_identifier)
}
void PrinterEventProto::set_ppd_identifier(const char* value, size_t size) {
  set_has_ppd_identifier();
  ppd_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.PrinterEventProto.ppd_identifier)
}
::std::string* PrinterEventProto::mutable_ppd_identifier() {
  set_has_ppd_identifier();
  // @@protoc_insertion_point(field_mutable:metrics.PrinterEventProto.ppd_identifier)
  return ppd_identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PrinterEventProto::release_ppd_identifier() {
  // @@protoc_insertion_point(field_release:metrics.PrinterEventProto.ppd_identifier)
  clear_has_ppd_identifier();
  return ppd_identifier_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PrinterEventProto::set_allocated_ppd_identifier(::std::string* ppd_identifier) {
  if (ppd_identifier != NULL) {
    set_has_ppd_identifier();
  } else {
    clear_has_ppd_identifier();
  }
  ppd_identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ppd_identifier);
  // @@protoc_insertion_point(field_set_allocated:metrics.PrinterEventProto.ppd_identifier)
}

// optional .metrics.PrinterEventProto.EventType event_type = 8;
bool PrinterEventProto::has_event_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void PrinterEventProto::set_has_event_type() {
  _has_bits_[0] |= 0x00000080u;
}
void PrinterEventProto::clear_has_event_type() {
  _has_bits_[0] &= ~0x00000080u;
}
void PrinterEventProto::clear_event_type() {
  event_type_ = 0;
  clear_has_event_type();
}
::metrics::PrinterEventProto_EventType PrinterEventProto::event_type() const {
  // @@protoc_insertion_point(field_get:metrics.PrinterEventProto.event_type)
  return static_cast< ::metrics::PrinterEventProto_EventType >(event_type_);
}
void PrinterEventProto::set_event_type(::metrics::PrinterEventProto_EventType value) {
  assert(::metrics::PrinterEventProto_EventType_IsValid(value));
  set_has_event_type();
  event_type_ = value;
  // @@protoc_insertion_point(field_set:metrics.PrinterEventProto.event_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)