// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_ext_convert_to_initialized_fastpath.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"m_lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"m_len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"u_lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
  {"u_len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
  {"u_pblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 7, 0},
  {"i_lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 8, 0},
  {"i_len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 9, 0},
  {"i_pblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 10, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4ExtConvertToInitializedFastpathFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[1];
    case kMLblkFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[2];
    case kMLenFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[3];
    case kULblkFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[4];
    case kULenFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[5];
    case kUPblkFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[6];
    case kILblkFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[7];
    case kILenFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[8];
    case kIPblkFieldNumber:
      return &kFields_Ext4ExtConvertToInitializedFastpathFtraceEvent[9];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
