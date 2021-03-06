// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_es_shrink.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4EsShrinkFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"nr_shrunk", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"scan_time", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"nr_skipped", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 4, 0},
  {"retried", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4EsShrinkFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4EsShrinkFtraceEvent[0];
    case kNrShrunkFieldNumber:
      return &kFields_Ext4EsShrinkFtraceEvent[1];
    case kScanTimeFieldNumber:
      return &kFields_Ext4EsShrinkFtraceEvent[2];
    case kNrSkippedFieldNumber:
      return &kFields_Ext4EsShrinkFtraceEvent[3];
    case kRetriedFieldNumber:
      return &kFields_Ext4EsShrinkFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
