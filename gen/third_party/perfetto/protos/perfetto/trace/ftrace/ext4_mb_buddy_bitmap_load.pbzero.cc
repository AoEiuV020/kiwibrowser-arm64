// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_mb_buddy_bitmap_load.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4MbBuddyBitmapLoadFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"group", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4MbBuddyBitmapLoadFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4MbBuddyBitmapLoadFtraceEvent[0];
    case kGroupFieldNumber:
      return &kFields_Ext4MbBuddyBitmapLoadFtraceEvent[1];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
