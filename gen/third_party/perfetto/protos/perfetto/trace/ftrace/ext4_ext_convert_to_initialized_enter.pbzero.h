// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_EXT4_EXT_CONVERT_TO_INITIALIZED_ENTER_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_EXT4_EXT_CONVERT_TO_INITIALIZED_ENTER_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class Ext4ExtConvertToInitializedEnterFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kInoFieldNumber = 2,
    kMLblkFieldNumber = 3,
    kMLenFieldNumber = 4,
    kULblkFieldNumber = 5,
    kULenFieldNumber = 6,
    kUPblkFieldNumber = 7,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_ino(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_m_lblk(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_m_len(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_u_lblk(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_u_len(uint32_t value) {
    AppendVarInt(6, value);
  }
  void set_u_pblk(uint64_t value) {
    AppendVarInt(7, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
