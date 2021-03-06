// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_COMPARE_BW_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_COMPARE_BW_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class MdpCompareBwFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNewAbFieldNumber = 1,
    kNewIbFieldNumber = 2,
    kNewWbFieldNumber = 3,
    kOldAbFieldNumber = 4,
    kOldIbFieldNumber = 5,
    kOldWbFieldNumber = 6,
    kParamsChangedFieldNumber = 7,
    kUpdateBwFieldNumber = 8,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_new_ab(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_new_ib(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_new_wb(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_old_ab(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_old_ib(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_old_wb(uint64_t value) {
    AppendVarInt(6, value);
  }
  void set_params_changed(uint32_t value) {
    AppendVarInt(7, value);
  }
  void set_update_bw(uint32_t value) {
    AppendVarInt(8, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
