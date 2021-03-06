// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_da_write_pages.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4DaWritePagesFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"first_page", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"nr_to_write", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT64, 4, 0},
  {"sync_mode", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
  {"b_blocknr", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 6, 0},
  {"b_size", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 7, 0},
  {"b_state", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 8, 0},
  {"io_done", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 9, 0},
  {"pages_written", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 10, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4DaWritePagesFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[1];
    case kFirstPageFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[2];
    case kNrToWriteFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[3];
    case kSyncModeFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[4];
    case kBBlocknrFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[5];
    case kBSizeFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[6];
    case kBStateFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[7];
    case kIoDoneFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[8];
    case kPagesWrittenFieldNumber:
      return &kFields_Ext4DaWritePagesFtraceEvent[9];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
