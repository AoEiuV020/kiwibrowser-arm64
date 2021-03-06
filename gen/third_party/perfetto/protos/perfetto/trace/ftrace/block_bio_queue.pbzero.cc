// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/block_bio_queue.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_BlockBioQueueFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"nr_sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"rwbs", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 4, 0},
  {"comm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* BlockBioQueueFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_BlockBioQueueFtraceEvent[0];
    case kSectorFieldNumber:
      return &kFields_BlockBioQueueFtraceEvent[1];
    case kNrSectorFieldNumber:
      return &kFields_BlockBioQueueFtraceEvent[2];
    case kRwbsFieldNumber:
      return &kFields_BlockBioQueueFtraceEvent[3];
    case kCommFieldNumber:
      return &kFields_BlockBioQueueFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
