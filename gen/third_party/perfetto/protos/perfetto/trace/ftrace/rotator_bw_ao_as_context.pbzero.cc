// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/rotator_bw_ao_as_context.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_RotatorBwAoAsContextFtraceEvent[] = {
  {"state", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
};

const ::protozero::ProtoFieldDescriptor* RotatorBwAoAsContextFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kStateFieldNumber:
      return &kFields_RotatorBwAoAsContextFtraceEvent[0];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
