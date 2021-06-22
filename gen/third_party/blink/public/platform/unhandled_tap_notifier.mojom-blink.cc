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

#include "third_party/blink/public/platform/unhandled_tap_notifier.mojom-blink.h"

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

#include "third_party/blink/public/platform/unhandled_tap_notifier.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
UnhandledTapInfo::UnhandledTapInfo()
    : tapped_position_in_viewport(),
      font_size_in_pixels(0U),
      element_text_run_length(0U) {}

UnhandledTapInfo::UnhandledTapInfo(
    const ::blink::WebPoint& tapped_position_in_viewport_in,
    uint32_t font_size_in_pixels_in,
    uint32_t element_text_run_length_in)
    : tapped_position_in_viewport(std::move(tapped_position_in_viewport_in)),
      font_size_in_pixels(std::move(font_size_in_pixels_in)),
      element_text_run_length(std::move(element_text_run_length_in)) {}

UnhandledTapInfo::~UnhandledTapInfo() = default;

bool UnhandledTapInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char UnhandledTapNotifier::Name_[] = "blink.mojom.UnhandledTapNotifier";

UnhandledTapNotifierProxy::UnhandledTapNotifierProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UnhandledTapNotifierProxy::ShowUnhandledTapUIIfNeeded(
    UnhandledTapInfoPtr in_unhandled_tap_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::UnhandledTapNotifier::ShowUnhandledTapUIIfNeeded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->unhandled_tap_info)::BaseType::BufferWriter
      unhandled_tap_info_writer;
  mojo::internal::Serialize<::blink::mojom::UnhandledTapInfoDataView>(
      in_unhandled_tap_info, buffer, &unhandled_tap_info_writer, &serialization_context);
  params->unhandled_tap_info.Set(
      unhandled_tap_info_writer.is_null() ? nullptr : unhandled_tap_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->unhandled_tap_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null unhandled_tap_info in UnhandledTapNotifier.ShowUnhandledTapUIIfNeeded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UnhandledTapNotifierStubDispatch::Accept(
    UnhandledTapNotifier* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::UnhandledTapNotifier::ShowUnhandledTapUIIfNeeded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data* params =
          reinterpret_cast<internal::UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UnhandledTapInfoPtr p_unhandled_tap_info{};
      UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUnhandledTapInfo(&p_unhandled_tap_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UnhandledTapNotifier::ShowUnhandledTapUIIfNeeded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowUnhandledTapUIIfNeeded(
std::move(p_unhandled_tap_info));
      return true;
    }
  }
  return false;
}

// static
bool UnhandledTapNotifierStubDispatch::AcceptWithResponder(
    UnhandledTapNotifier* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::UnhandledTapNotifier::ShowUnhandledTapUIIfNeeded",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool UnhandledTapNotifierRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UnhandledTapNotifier RequestValidator");

  switch (message->header()->name) {
    case internal::kUnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data>(
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

void UnhandledTapNotifierInterceptorForTesting::ShowUnhandledTapUIIfNeeded(UnhandledTapInfoPtr unhandled_tap_info) {
  GetForwardingInterface()->ShowUnhandledTapUIIfNeeded(std::move(unhandled_tap_info));
}
UnhandledTapNotifierAsyncWaiter::UnhandledTapNotifierAsyncWaiter(
    UnhandledTapNotifier* proxy) : proxy_(proxy) {}

UnhandledTapNotifierAsyncWaiter::~UnhandledTapNotifierAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::UnhandledTapInfo::DataView, ::blink::mojom::blink::UnhandledTapInfoPtr>::Read(
    ::blink::mojom::blink::UnhandledTapInfo::DataView input,
    ::blink::mojom::blink::UnhandledTapInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::UnhandledTapInfoPtr result(::blink::mojom::blink::UnhandledTapInfo::New());
  
      if (!input.ReadTappedPositionInViewport(&result->tapped_position_in_viewport))
        success = false;
      result->font_size_in_pixels = input.font_size_in_pixels();
      result->element_text_run_length = input.element_text_run_length();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif