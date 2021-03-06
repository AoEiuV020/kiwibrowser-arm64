// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_readpage.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsReadpageFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"index", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"blkaddr", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
  {"type", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsReadpageFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsReadpageFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_F2fsReadpageFtraceEvent[1];
    case kIndexFieldNumber:
      return &kFields_F2fsReadpageFtraceEvent[2];
    case kBlkaddrFieldNumber:
      return &kFields_F2fsReadpageFtraceEvent[3];
    case kTypeFieldNumber:
      return &kFields_F2fsReadpageFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
