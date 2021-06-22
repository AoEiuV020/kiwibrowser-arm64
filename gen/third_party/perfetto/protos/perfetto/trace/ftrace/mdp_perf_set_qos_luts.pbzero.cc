// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mdp_perf_set_qos_luts.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MdpPerfSetQosLutsFtraceEvent[] = {
  {"pnum", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"fmt", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"intf", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"rot", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"fl", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
  {"lut", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
  {"linear", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 7, 0},
};

const ::protozero::ProtoFieldDescriptor* MdpPerfSetQosLutsFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPnumFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[0];
    case kFmtFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[1];
    case kIntfFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[2];
    case kRotFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[3];
    case kFlFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[4];
    case kLutFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[5];
    case kLinearFieldNumber:
      return &kFields_MdpPerfSetQosLutsFtraceEvent[6];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
