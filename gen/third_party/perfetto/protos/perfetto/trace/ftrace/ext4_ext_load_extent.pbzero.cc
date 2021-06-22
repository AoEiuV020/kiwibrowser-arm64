// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_ext_load_extent.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4ExtLoadExtentFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"pblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4ExtLoadExtentFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4ExtLoadExtentFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4ExtLoadExtentFtraceEvent[1];
    case kPblkFieldNumber:
      return &kFields_Ext4ExtLoadExtentFtraceEvent[2];
    case kLblkFieldNumber:
      return &kFields_Ext4ExtLoadExtentFtraceEvent[3];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.