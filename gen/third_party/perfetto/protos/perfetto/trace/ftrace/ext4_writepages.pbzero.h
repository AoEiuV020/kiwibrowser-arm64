// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_EXT4_WRITEPAGES_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_EXT4_WRITEPAGES_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class Ext4WritepagesFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kInoFieldNumber = 2,
    kNrToWriteFieldNumber = 3,
    kPagesSkippedFieldNumber = 4,
    kRangeStartFieldNumber = 5,
    kRangeEndFieldNumber = 6,
    kWritebackIndexFieldNumber = 7,
    kSyncModeFieldNumber = 8,
    kForKupdateFieldNumber = 9,
    kRangeCyclicFieldNumber = 10,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_ino(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_to_write(int64_t value) {
    AppendVarInt(3, value);
  }
  void set_pages_skipped(int64_t value) {
    AppendVarInt(4, value);
  }
  void set_range_start(int64_t value) {
    AppendVarInt(5, value);
  }
  void set_range_end(int64_t value) {
    AppendVarInt(6, value);
  }
  void set_writeback_index(uint64_t value) {
    AppendVarInt(7, value);
  }
  void set_sync_mode(int32_t value) {
    AppendVarInt(8, value);
  }
  void set_for_kupdate(uint32_t value) {
    AppendVarInt(9, value);
  }
  void set_range_cyclic(uint32_t value) {
    AppendVarInt(10, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
