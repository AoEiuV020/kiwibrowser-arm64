// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_get_data_block.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsGetDataBlockFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"iblock", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"bh_start", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
  {"bh_size", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 5, 0},
  {"ret", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsGetDataBlockFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsGetDataBlockFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_F2fsGetDataBlockFtraceEvent[1];
    case kIblockFieldNumber:
      return &kFields_F2fsGetDataBlockFtraceEvent[2];
    case kBhStartFieldNumber:
      return &kFields_F2fsGetDataBlockFtraceEvent[3];
    case kBhSizeFieldNumber:
      return &kFields_F2fsGetDataBlockFtraceEvent[4];
    case kRetFieldNumber:
      return &kFields_F2fsGetDataBlockFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
