// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mm_compaction_isolate_freepages.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MmCompactionIsolateFreepagesFtraceEvent[] = {
  {"start_pfn", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"end_pfn", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"nr_scanned", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"nr_taken", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
};

const ::protozero::ProtoFieldDescriptor* MmCompactionIsolateFreepagesFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kStartPfnFieldNumber:
      return &kFields_MmCompactionIsolateFreepagesFtraceEvent[0];
    case kEndPfnFieldNumber:
      return &kFields_MmCompactionIsolateFreepagesFtraceEvent[1];
    case kNrScannedFieldNumber:
      return &kFields_MmCompactionIsolateFreepagesFtraceEvent[2];
    case kNrTakenFieldNumber:
      return &kFields_MmCompactionIsolateFreepagesFtraceEvent[3];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
