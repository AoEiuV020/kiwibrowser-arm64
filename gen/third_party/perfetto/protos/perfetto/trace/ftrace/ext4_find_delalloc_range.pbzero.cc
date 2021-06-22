// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_find_delalloc_range.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4FindDelallocRangeFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"from", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"to", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"reverse", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
  {"found", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 6, 0},
  {"found_blk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 7, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4FindDelallocRangeFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[1];
    case kFromFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[2];
    case kToFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[3];
    case kReverseFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[4];
    case kFoundFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[5];
    case kFoundBlkFieldNumber:
      return &kFields_Ext4FindDelallocRangeFtraceEvent[6];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
