// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_write_begin.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsWriteBeginFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"pos", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 3, 0},
  {"len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"flags", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsWriteBeginFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsWriteBeginFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_F2fsWriteBeginFtraceEvent[1];
    case kPosFieldNumber:
      return &kFields_F2fsWriteBeginFtraceEvent[2];
    case kLenFieldNumber:
      return &kFields_F2fsWriteBeginFtraceEvent[3];
    case kFlagsFieldNumber:
      return &kFields_F2fsWriteBeginFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
