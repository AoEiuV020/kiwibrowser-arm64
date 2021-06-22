// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MM_FILEMAP_DELETE_FROM_PAGE_CACHE_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MM_FILEMAP_DELETE_FROM_PAGE_CACHE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class MmFilemapDeleteFromPageCacheFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kPfnFieldNumber = 1,
    kIInoFieldNumber = 2,
    kIndexFieldNumber = 3,
    kSDevFieldNumber = 4,
    kPageFieldNumber = 5,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_pfn(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_i_ino(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_index(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_s_dev(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_page(uint64_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
