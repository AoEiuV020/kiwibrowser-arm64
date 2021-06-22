// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/sched_blocked_reason.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_SchedBlockedReasonFtraceEvent[] = {
  {"pid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"caller", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"io_wait", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* SchedBlockedReasonFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPidFieldNumber:
      return &kFields_SchedBlockedReasonFtraceEvent[0];
    case kCallerFieldNumber:
      return &kFields_SchedBlockedReasonFtraceEvent[1];
    case kIoWaitFieldNumber:
      return &kFields_SchedBlockedReasonFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.