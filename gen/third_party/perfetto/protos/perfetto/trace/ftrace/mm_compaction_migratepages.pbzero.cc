// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mm_compaction_migratepages.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MmCompactionMigratepagesFtraceEvent[] = {
  {"nr_migrated", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"nr_failed", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
};

const ::protozero::ProtoFieldDescriptor* MmCompactionMigratepagesFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNrMigratedFieldNumber:
      return &kFields_MmCompactionMigratepagesFtraceEvent[0];
    case kNrFailedFieldNumber:
      return &kFields_MmCompactionMigratepagesFtraceEvent[1];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
