// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_SCHED_CPU_HOTPLUG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_SCHED_CPU_HOTPLUG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class SchedCpuHotplugFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAffectedCpuFieldNumber = 1,
    kErrorFieldNumber = 2,
    kStatusFieldNumber = 3,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_affected_cpu(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_error(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_status(int32_t value) {
    AppendVarInt(3, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
