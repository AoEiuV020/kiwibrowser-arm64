// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/cgroup_attach_task.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_CgroupAttachTaskFtraceEvent[] = {
  {"dst_root", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"dst_id", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"pid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
  {"comm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 4, 0},
  {"cname", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* CgroupAttachTaskFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDstRootFieldNumber:
      return &kFields_CgroupAttachTaskFtraceEvent[0];
    case kDstIdFieldNumber:
      return &kFields_CgroupAttachTaskFtraceEvent[1];
    case kPidFieldNumber:
      return &kFields_CgroupAttachTaskFtraceEvent[2];
    case kCommFieldNumber:
      return &kFields_CgroupAttachTaskFtraceEvent[3];
    case kCnameFieldNumber:
      return &kFields_CgroupAttachTaskFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
