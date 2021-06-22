// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_es_remove_extent.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4EsRemoveExtentFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 3, 0},
  {"len", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 4, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4EsRemoveExtentFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4EsRemoveExtentFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4EsRemoveExtentFtraceEvent[1];
    case kLblkFieldNumber:
      return &kFields_Ext4EsRemoveExtentFtraceEvent[2];
    case kLenFieldNumber:
      return &kFields_Ext4EsRemoveExtentFtraceEvent[3];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
