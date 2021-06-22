// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_do_submit_bio.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsDoSubmitBioFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"btype", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"sync", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
  {"size", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsDoSubmitBioFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsDoSubmitBioFtraceEvent[0];
    case kBtypeFieldNumber:
      return &kFields_F2fsDoSubmitBioFtraceEvent[1];
    case kSyncFieldNumber:
      return &kFields_F2fsDoSubmitBioFtraceEvent[2];
    case kSectorFieldNumber:
      return &kFields_F2fsDoSubmitBioFtraceEvent[3];
    case kSizeFieldNumber:
      return &kFields_F2fsDoSubmitBioFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
