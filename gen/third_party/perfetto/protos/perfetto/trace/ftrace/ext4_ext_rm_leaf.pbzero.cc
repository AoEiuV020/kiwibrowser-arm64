// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_ext_rm_leaf.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4ExtRmLeafFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"partial", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 3, 0},
  {"start", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"ee_lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
  {"ee_pblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 6, 0},
  {"ee_len", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 7, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4ExtRmLeafFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[1];
    case kPartialFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[2];
    case kStartFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[3];
    case kEeLblkFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[4];
    case kEePblkFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[5];
    case kEeLenFieldNumber:
      return &kFields_Ext4ExtRmLeafFtraceEvent[6];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
