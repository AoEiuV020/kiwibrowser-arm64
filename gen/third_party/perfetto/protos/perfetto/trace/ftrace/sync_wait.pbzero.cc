// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/sync_wait.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_SyncWaitFtraceEvent[] = {
  {"name", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"status", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"begin", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* SyncWaitFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNameFieldNumber:
      return &kFields_SyncWaitFtraceEvent[0];
    case kStatusFieldNumber:
      return &kFields_SyncWaitFtraceEvent[1];
    case kBeginFieldNumber:
      return &kFields_SyncWaitFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
