// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/cpufreq_interactive_boost.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_CpufreqInteractiveBoostFtraceEvent[] = {
  {"s", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
};

const ::protozero::ProtoFieldDescriptor* CpufreqInteractiveBoostFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kSFieldNumber:
      return &kFields_CpufreqInteractiveBoostFtraceEvent[0];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
