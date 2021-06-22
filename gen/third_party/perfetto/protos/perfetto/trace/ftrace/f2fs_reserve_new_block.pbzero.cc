// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_reserve_new_block.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsReserveNewBlockFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"nid", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"ofs_in_node", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsReserveNewBlockFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsReserveNewBlockFtraceEvent[0];
    case kNidFieldNumber:
      return &kFields_F2fsReserveNewBlockFtraceEvent[1];
    case kOfsInNodeFieldNumber:
      return &kFields_F2fsReserveNewBlockFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
