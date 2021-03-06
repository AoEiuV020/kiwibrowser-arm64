// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/cgroup_destroy_root.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_CgroupDestroyRootFtraceEvent[] = {
  {"root", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"ss_mask", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"name", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* CgroupDestroyRootFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kRootFieldNumber:
      return &kFields_CgroupDestroyRootFtraceEvent[0];
    case kSsMaskFieldNumber:
      return &kFields_CgroupDestroyRootFtraceEvent[1];
    case kNameFieldNumber:
      return &kFields_CgroupDestroyRootFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
