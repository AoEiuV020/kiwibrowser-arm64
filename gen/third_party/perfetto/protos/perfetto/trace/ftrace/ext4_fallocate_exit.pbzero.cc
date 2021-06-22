// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_fallocate_exit.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4FallocateExitFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"pos", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 3, 0},
  {"blocks", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"ret", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4FallocateExitFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4FallocateExitFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4FallocateExitFtraceEvent[1];
    case kPosFieldNumber:
      return &kFields_Ext4FallocateExitFtraceEvent[2];
    case kBlocksFieldNumber:
      return &kFields_Ext4FallocateExitFtraceEvent[3];
    case kRetFieldNumber:
      return &kFields_Ext4FallocateExitFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
