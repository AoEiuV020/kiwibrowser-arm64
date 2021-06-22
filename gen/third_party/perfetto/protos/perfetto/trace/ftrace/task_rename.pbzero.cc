// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/task_rename.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_TaskRenameFtraceEvent[] = {
  {"pid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"oldcomm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 2, 0},
  {"newcomm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 3, 0},
  {"oom_score_adj", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 4, 0},
};

const ::protozero::ProtoFieldDescriptor* TaskRenameFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPidFieldNumber:
      return &kFields_TaskRenameFtraceEvent[0];
    case kOldcommFieldNumber:
      return &kFields_TaskRenameFtraceEvent[1];
    case kNewcommFieldNumber:
      return &kFields_TaskRenameFtraceEvent[2];
    case kOomScoreAdjFieldNumber:
      return &kFields_TaskRenameFtraceEvent[3];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
