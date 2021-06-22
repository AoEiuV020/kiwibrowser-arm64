// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_sync_file_exit.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsSyncFileExitFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"need_cp", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"datasync", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 4, 0},
  {"ret", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsSyncFileExitFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsSyncFileExitFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_F2fsSyncFileExitFtraceEvent[1];
    case kNeedCpFieldNumber:
      return &kFields_F2fsSyncFileExitFtraceEvent[2];
    case kDatasyncFieldNumber:
      return &kFields_F2fsSyncFileExitFtraceEvent[3];
    case kRetFieldNumber:
      return &kFields_F2fsSyncFileExitFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
