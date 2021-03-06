// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mm_compaction_defer_compaction.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MmCompactionDeferCompactionFtraceEvent[] = {
  {"nid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"idx", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"order", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
  {"considered", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"defer_shift", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
  {"order_failed", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* MmCompactionDeferCompactionFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNidFieldNumber:
      return &kFields_MmCompactionDeferCompactionFtraceEvent[0];
    case kIdxFieldNumber:
      return &kFields_MmCompactionDeferCompactionFtraceEvent[1];
    case kOrderFieldNumber:
      return &kFields_MmCompactionDeferCompactionFtraceEvent[2];
    case kConsideredFieldNumber:
      return &kFields_MmCompactionDeferCompactionFtraceEvent[3];
    case kDeferShiftFieldNumber:
      return &kFields_MmCompactionDeferCompactionFtraceEvent[4];
    case kOrderFailedFieldNumber:
      return &kFields_MmCompactionDeferCompactionFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
