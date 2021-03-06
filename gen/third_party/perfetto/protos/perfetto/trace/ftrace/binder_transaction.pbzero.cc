// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/binder_transaction.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_BinderTransactionFtraceEvent[] = {
  {"debug_id", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"target_node", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"to_proc", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
  {"to_thread", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 4, 0},
  {"reply", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 5, 0},
  {"code", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
  {"flags", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 7, 0},
};

const ::protozero::ProtoFieldDescriptor* BinderTransactionFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDebugIdFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[0];
    case kTargetNodeFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[1];
    case kToProcFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[2];
    case kToThreadFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[3];
    case kReplyFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[4];
    case kCodeFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[5];
    case kFlagsFieldNumber:
      return &kFields_BinderTransactionFtraceEvent[6];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
