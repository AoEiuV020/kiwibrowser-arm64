// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/clock_disable.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_ClockDisableFtraceEvent[] = {
  {"name", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"state", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"cpu_id", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* ClockDisableFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNameFieldNumber:
      return &kFields_ClockDisableFtraceEvent[0];
    case kStateFieldNumber:
      return &kFields_ClockDisableFtraceEvent[1];
    case kCpuIdFieldNumber:
      return &kFields_ClockDisableFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.