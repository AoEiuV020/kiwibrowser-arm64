// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/regulator_disable_complete.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_RegulatorDisableCompleteFtraceEvent[] = {
  {"name", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
};

const ::protozero::ProtoFieldDescriptor* RegulatorDisableCompleteFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNameFieldNumber:
      return &kFields_RegulatorDisableCompleteFtraceEvent[0];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
