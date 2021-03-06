// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_mballoc_discard.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4MballocDiscardFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"result_start", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
  {"result_group", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"result_len", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4MballocDiscardFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4MballocDiscardFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4MballocDiscardFtraceEvent[1];
    case kResultStartFieldNumber:
      return &kFields_Ext4MballocDiscardFtraceEvent[2];
    case kResultGroupFieldNumber:
      return &kFields_Ext4MballocDiscardFtraceEvent[3];
    case kResultLenFieldNumber:
      return &kFields_Ext4MballocDiscardFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
