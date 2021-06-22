// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_CGROUP_MKDIR_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_CGROUP_MKDIR_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class CgroupMkdirFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kRootFieldNumber = 1,
    kIdFieldNumber = 2,
    kCnameFieldNumber = 3,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_cname(const char* value) {
    AppendString(3, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_cname(const char* value, size_t size) {
    AppendBytes(3, value, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
