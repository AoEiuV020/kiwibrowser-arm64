// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/trace.pbzero.h"
#include "perfetto/trace/trace_packet.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Trace[] = {
  {"packet", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 1, 1},
};

const ::protozero::ProtoFieldDescriptor* Trace::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPacketFieldNumber:
      return &kFields_Trace[0];
    default:
      return &kInvalidField;
  }
}

TracePacket* Trace::add_packet() {
  return BeginNestedMessage<TracePacket>(1);
}

} // Namespace.
} // Namespace.
} // Namespace.
