// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ftrace_stats.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_FtraceStats[] = {
  {"phase", ::protozero::ProtoFieldDescriptor::Type::TYPE_ENUM, 1, 0},
  {"cpu_stats", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 2, 1},
};

const ::protozero::ProtoFieldDescriptor* FtraceStats::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPhaseFieldNumber:
      return &kFields_FtraceStats[0];
    case kCpuStatsFieldNumber:
      return &kFields_FtraceStats[1];
    default:
      return &kInvalidField;
  }
}

FtraceCpuStats* FtraceStats::add_cpu_stats() {
  return BeginNestedMessage<FtraceCpuStats>(2);
}

static const ::protozero::ProtoFieldDescriptor kFields_FtraceCpuStats[] = {
  {"cpu", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"entries", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"overrun", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
  {"commit_overrun", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
  {"bytes_read", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 5, 0},
  {"oldest_event_ts", ::protozero::ProtoFieldDescriptor::Type::TYPE_DOUBLE, 6, 0},
  {"now_ts", ::protozero::ProtoFieldDescriptor::Type::TYPE_DOUBLE, 7, 0},
  {"dropped_events", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 8, 0},
  {"read_events", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 9, 0},
};

const ::protozero::ProtoFieldDescriptor* FtraceCpuStats::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kCpuFieldNumber:
      return &kFields_FtraceCpuStats[0];
    case kEntriesFieldNumber:
      return &kFields_FtraceCpuStats[1];
    case kOverrunFieldNumber:
      return &kFields_FtraceCpuStats[2];
    case kCommitOverrunFieldNumber:
      return &kFields_FtraceCpuStats[3];
    case kBytesReadFieldNumber:
      return &kFields_FtraceCpuStats[4];
    case kOldestEventTsFieldNumber:
      return &kFields_FtraceCpuStats[5];
    case kNowTsFieldNumber:
      return &kFields_FtraceCpuStats[6];
    case kDroppedEventsFieldNumber:
      return &kFields_FtraceCpuStats[7];
    case kReadEventsFieldNumber:
      return &kFields_FtraceCpuStats[8];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.