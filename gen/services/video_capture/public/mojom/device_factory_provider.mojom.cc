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

#include "services/video_capture/public/mojom/device_factory_provider.mojom.h"

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

#include "services/video_capture/public/mojom/device_factory_provider.mojom-shared-message-ids.h"
namespace video_capture {
namespace mojom {
const char DeviceFactoryProvider::Name_[] = "video_capture.mojom.DeviceFactoryProvider";

DeviceFactoryProviderProxy::DeviceFactoryProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DeviceFactoryProviderProxy::ConnectToDeviceFactory(
    ::video_capture::mojom::DeviceFactoryRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::DeviceFactoryProvider::ConnectToDeviceFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactoryProvider_ConnectToDeviceFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactoryProvider_ConnectToDeviceFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::video_capture::mojom::DeviceFactoryRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in DeviceFactoryProvider.ConnectToDeviceFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DeviceFactoryProviderProxy::SetShutdownDelayInSeconds(
    float in_seconds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::DeviceFactoryProvider::SetShutdownDelayInSeconds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::DeviceFactoryProvider_SetShutdownDelayInSeconds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->seconds = in_seconds;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DeviceFactoryProviderStubDispatch::Accept(
    DeviceFactoryProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDeviceFactoryProvider_ConnectToDeviceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactoryProvider::ConnectToDeviceFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DeviceFactoryProvider_ConnectToDeviceFactory_Params_Data* params =
          reinterpret_cast<internal::DeviceFactoryProvider_ConnectToDeviceFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::video_capture::mojom::DeviceFactoryRequest p_request{};
      DeviceFactoryProvider_ConnectToDeviceFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceFactoryProvider::ConnectToDeviceFactory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConnectToDeviceFactory(
std::move(p_request));
      return true;
    }
    case internal::kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactoryProvider::SetShutdownDelayInSeconds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DeviceFactoryProvider_SetShutdownDelayInSeconds_Params_Data* params =
          reinterpret_cast<internal::DeviceFactoryProvider_SetShutdownDelayInSeconds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      float p_seconds{};
      DeviceFactoryProvider_SetShutdownDelayInSeconds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_seconds = input_data_view.seconds();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceFactoryProvider::SetShutdownDelayInSeconds deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetShutdownDelayInSeconds(
std::move(p_seconds));
      return true;
    }
  }
  return false;
}

// static
bool DeviceFactoryProviderStubDispatch::AcceptWithResponder(
    DeviceFactoryProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDeviceFactoryProvider_ConnectToDeviceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactoryProvider::ConnectToDeviceFactory",
               "message", message->name());
#endif
      break;
    }
    case internal::kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::DeviceFactoryProvider::SetShutdownDelayInSeconds",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DeviceFactoryProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DeviceFactoryProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kDeviceFactoryProvider_ConnectToDeviceFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactoryProvider_ConnectToDeviceFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceFactoryProvider_SetShutdownDelayInSeconds_Params_Data>(
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

void DeviceFactoryProviderInterceptorForTesting::ConnectToDeviceFactory(::video_capture::mojom::DeviceFactoryRequest request) {
  GetForwardingInterface()->ConnectToDeviceFactory(std::move(request));
}
void DeviceFactoryProviderInterceptorForTesting::SetShutdownDelayInSeconds(float seconds) {
  GetForwardingInterface()->SetShutdownDelayInSeconds(std::move(seconds));
}
DeviceFactoryProviderAsyncWaiter::DeviceFactoryProviderAsyncWaiter(
    DeviceFactoryProvider* proxy) : proxy_(proxy) {}

DeviceFactoryProviderAsyncWaiter::~DeviceFactoryProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif