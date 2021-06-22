// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/sched_process_wait.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_SchedProcessWaitFtraceEvent[] = {
  {"comm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"pid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"prio", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* SchedProcessWaitFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kCommFieldNumber:
      return &kFields_SchedProcessWaitFtraceEvent[0];
    case kPidFieldNumber:
      return &kFields_SchedProcessWaitFtraceEvent[1];
    case kPrioFieldNumber:
      return &kFields_SchedProcessWaitFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.