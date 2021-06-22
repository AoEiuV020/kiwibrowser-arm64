// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_SSPP_SET_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_SSPP_SET_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class MdpSsppSetFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNumFieldNumber = 1,
    kPlayCntFieldNumber = 2,
    kMixerFieldNumber = 3,
    kStageFieldNumber = 4,
    kFlagsFieldNumber = 5,
    kFormatFieldNumber = 6,
    kImgWFieldNumber = 7,
    kImgHFieldNumber = 8,
    kSrcXFieldNumber = 9,
    kSrcYFieldNumber = 10,
    kSrcWFieldNumber = 11,
    kSrcHFieldNumber = 12,
    kDstXFieldNumber = 13,
    kDstYFieldNumber = 14,
    kDstWFieldNumber = 15,
    kDstHFieldNumber = 16,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_num(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_play_cnt(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_mixer(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_stage(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_format(uint32_t value) {
    AppendVarInt(6, value);
  }
  void set_img_w(uint32_t value) {
    AppendVarInt(7, value);
  }
  void set_img_h(uint32_t value) {
    AppendVarInt(8, value);
  }
  void set_src_x(uint32_t value) {
    AppendVarInt(9, value);
  }
  void set_src_y(uint32_t value) {
    AppendVarInt(10, value);
  }
  void set_src_w(uint32_t value) {
    AppendVarInt(11, value);
  }
  void set_src_h(uint32_t value) {
    AppendVarInt(12, value);
  }
  void set_dst_x(uint32_t value) {
    AppendVarInt(13, value);
  }
  void set_dst_y(uint32_t value) {
    AppendVarInt(14, value);
  }
  void set_dst_w(uint32_t value) {
    AppendVarInt(15, value);
  }
  void set_dst_h(uint32_t value) {
    AppendVarInt(16, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.