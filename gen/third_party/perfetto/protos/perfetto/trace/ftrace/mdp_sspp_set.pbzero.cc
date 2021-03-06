// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mdp_sspp_set.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MdpSsppSetFtraceEvent[] = {
  {"num", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"play_cnt", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"mixer", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"stage", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"flags", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
  {"format", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
  {"img_w", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 7, 0},
  {"img_h", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 8, 0},
  {"src_x", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 9, 0},
  {"src_y", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 10, 0},
  {"src_w", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 11, 0},
  {"src_h", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 12, 0},
  {"dst_x", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 13, 0},
  {"dst_y", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 14, 0},
  {"dst_w", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 15, 0},
  {"dst_h", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 16, 0},
};

const ::protozero::ProtoFieldDescriptor* MdpSsppSetFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNumFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[0];
    case kPlayCntFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[1];
    case kMixerFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[2];
    case kStageFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[3];
    case kFlagsFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[4];
    case kFormatFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[5];
    case kImgWFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[6];
    case kImgHFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[7];
    case kSrcXFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[8];
    case kSrcYFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[9];
    case kSrcWFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[10];
    case kSrcHFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[11];
    case kDstXFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[12];
    case kDstYFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[13];
    case kDstWFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[14];
    case kDstHFieldNumber:
      return &kFields_MdpSsppSetFtraceEvent[15];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
