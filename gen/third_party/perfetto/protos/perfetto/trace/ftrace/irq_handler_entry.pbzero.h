// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_IRQ_HANDLER_ENTRY_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_IRQ_HANDLER_ENTRY_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class IrqHandlerEntryFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kIrqFieldNumber = 1,
    kNameFieldNumber = 2,
    kHandlerFieldNumber = 3,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_irq(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_name(const char* value) {
    AppendString(2, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_name(const char* value, size_t size) {
    AppendBytes(2, value, size);
  }
  void set_handler(uint32_t value) {
    AppendVarInt(3, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
