// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_direct_IO_enter.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4DirectIOEnterFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"pos", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 3, 0},
  {"len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
  {"rw", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4DirectIOEnterFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4DirectIOEnterFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4DirectIOEnterFtraceEvent[1];
    case kPosFieldNumber:
      return &kFields_Ext4DirectIOEnterFtraceEvent[2];
    case kLenFieldNumber:
      return &kFields_Ext4DirectIOEnterFtraceEvent[3];
    case kRwFieldNumber:
      return &kFields_Ext4DirectIOEnterFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
