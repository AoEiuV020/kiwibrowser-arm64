// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mm_compaction_kcompactd_wake.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MmCompactionKcompactdWakeFtraceEvent[] = {
  {"nid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"order", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"classzone_idx", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* MmCompactionKcompactdWakeFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNidFieldNumber:
      return &kFields_MmCompactionKcompactdWakeFtraceEvent[0];
    case kOrderFieldNumber:
      return &kFields_MmCompactionKcompactdWakeFtraceEvent[1];
    case kClasszoneIdxFieldNumber:
      return &kFields_MmCompactionKcompactdWakeFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
