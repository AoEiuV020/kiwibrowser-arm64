// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ftrace_event_bundle.pbzero.h"
#include "perfetto/trace/ftrace/ftrace_event.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_FtraceEventBundle[] = {
  {"cpu", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"event", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 2, 1},
  {"overwrite_count", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* FtraceEventBundle::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kCpuFieldNumber:
      return &kFields_FtraceEventBundle[0];
    case kEventFieldNumber:
      return &kFields_FtraceEventBundle[1];
    case kOverwriteCountFieldNumber:
      return &kFields_FtraceEventBundle[2];
    default:
      return &kInvalidField;
  }
}

FtraceEvent* FtraceEventBundle::add_event() {
  return BeginNestedMessage<FtraceEvent>(2);
}

} // Namespace.
} // Namespace.
} // Namespace.