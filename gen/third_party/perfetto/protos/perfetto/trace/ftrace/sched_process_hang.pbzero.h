// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_SCHED_PROCESS_HANG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_SCHED_PROCESS_HANG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class SchedProcessHangFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kCommFieldNumber = 1,
    kPidFieldNumber = 2,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_comm(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_pid(int32_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
