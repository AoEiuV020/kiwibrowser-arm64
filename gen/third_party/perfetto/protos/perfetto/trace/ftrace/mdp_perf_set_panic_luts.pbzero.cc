// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mdp_perf_set_panic_luts.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MdpPerfSetPanicLutsFtraceEvent[] = {
  {"pnum", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"fmt", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"mode", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"panic_lut", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"robust_lut", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
};

const ::protozero::ProtoFieldDescriptor* MdpPerfSetPanicLutsFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPnumFieldNumber:
      return &kFields_MdpPerfSetPanicLutsFtraceEvent[0];
    case kFmtFieldNumber:
      return &kFields_MdpPerfSetPanicLutsFtraceEvent[1];
    case kModeFieldNumber:
      return &kFields_MdpPerfSetPanicLutsFtraceEvent[2];
    case kPanicLutFieldNumber:
      return &kFields_MdpPerfSetPanicLutsFtraceEvent[3];
    case kRobustLutFieldNumber:
      return &kFields_MdpPerfSetPanicLutsFtraceEvent[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
