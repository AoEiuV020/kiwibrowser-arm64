// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/cpufreq_interactive_setspeed.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_CpufreqInteractiveSetspeedFtraceEvent[] = {
  {"cpu_id", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"targfreq", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"actualfreq", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* CpufreqInteractiveSetspeedFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kCpuIdFieldNumber:
      return &kFields_CpufreqInteractiveSetspeedFtraceEvent[0];
    case kTargfreqFieldNumber:
      return &kFields_CpufreqInteractiveSetspeedFtraceEvent[1];
    case kActualfreqFieldNumber:
      return &kFields_CpufreqInteractiveSetspeedFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
