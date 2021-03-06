// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/field_trial_recorder.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/common/field_trial_recorder.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char FieldTrialRecorder::Name_[] = "content.mojom.FieldTrialRecorder";

FieldTrialRecorderProxy::FieldTrialRecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FieldTrialRecorderProxy::FieldTrialActivated(
    const std::string& in_trial_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FieldTrialRecorder::FieldTrialActivated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFieldTrialRecorder_FieldTrialActivated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FieldTrialRecorder_FieldTrialActivated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->trial_name)::BaseType::BufferWriter
      trial_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_trial_name, buffer, &trial_name_writer, &serialization_context);
  params->trial_name.Set(
      trial_name_writer.is_null() ? nullptr : trial_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->trial_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null trial_name in FieldTrialRecorder.FieldTrialActivated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FieldTrialRecorderStubDispatch::Accept(
    FieldTrialRecorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFieldTrialRecorder_FieldTrialActivated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FieldTrialRecorder::FieldTrialActivated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FieldTrialRecorder_FieldTrialActivated_Params_Data* params =
          reinterpret_cast<internal::FieldTrialRecorder_FieldTrialActivated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_trial_name{};
      FieldTrialRecorder_FieldTrialActivated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTrialName(&p_trial_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FieldTrialRecorder::FieldTrialActivated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FieldTrialActivated(
std::move(p_trial_name));
      return true;
    }
  }
  return false;
}

// static
bool FieldTrialRecorderStubDispatch::AcceptWithResponder(
    FieldTrialRecorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFieldTrialRecorder_FieldTrialActivated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FieldTrialRecorder::FieldTrialActivated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FieldTrialRecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FieldTrialRecorder RequestValidator");

  switch (message->header()->name) {
    case internal::kFieldTrialRecorder_FieldTrialActivated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FieldTrialRecorder_FieldTrialActivated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void FieldTrialRecorderInterceptorForTesting::FieldTrialActivated(const std::string& trial_name) {
  GetForwardingInterface()->FieldTrialActivated(std::move(trial_name));
}
FieldTrialRecorderAsyncWaiter::FieldTrialRecorderAsyncWaiter(
    FieldTrialRecorder* proxy) : proxy_(proxy) {}

FieldTrialRecorderAsyncWaiter::~FieldTrialRecorderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif