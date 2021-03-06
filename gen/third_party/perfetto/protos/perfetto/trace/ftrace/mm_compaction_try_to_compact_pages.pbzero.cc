// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mm_compaction_try_to_compact_pages.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MmCompactionTryToCompactPagesFtraceEvent[] = {
  {"order", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"gfp_mask", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"mode", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* MmCompactionTryToCompactPagesFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kOrderFieldNumber:
      return &kFields_MmCompactionTryToCompactPagesFtraceEvent[0];
    case kGfpMaskFieldNumber:
      return &kFields_MmCompactionTryToCompactPagesFtraceEvent[1];
    case kModeFieldNumber:
      return &kFields_MmCompactionTryToCompactPagesFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
