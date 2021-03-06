// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/block_rq_abort.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_BlockRqAbortFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"nr_sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"errors", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 4, 0},
  {"rwbs", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 5, 0},
  {"cmd", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* BlockRqAbortFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_BlockRqAbortFtraceEvent[0];
    case kSectorFieldNumber:
      return &kFields_BlockRqAbortFtraceEvent[1];
    case kNrSectorFieldNumber:
      return &kFields_BlockRqAbortFtraceEvent[2];
    case kErrorsFieldNumber:
      return &kFields_BlockRqAbortFtraceEvent[3];
    case kRwbsFieldNumber:
      return &kFields_BlockRqAbortFtraceEvent[4];
    case kCmdFieldNumber:
      return &kFields_BlockRqAbortFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
