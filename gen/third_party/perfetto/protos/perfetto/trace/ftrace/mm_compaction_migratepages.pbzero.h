// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MM_COMPACTION_MIGRATEPAGES_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MM_COMPACTION_MIGRATEPAGES_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class MmCompactionMigratepagesFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNrMigratedFieldNumber = 1,
    kNrFailedFieldNumber = 2,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_nr_migrated(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_nr_failed(uint64_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
