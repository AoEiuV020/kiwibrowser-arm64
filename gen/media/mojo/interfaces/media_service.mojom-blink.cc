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

#include "media/mojo/interfaces/media_service.mojom-blink.h"

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

#include "media/mojo/interfaces/media_service.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace media {
namespace mojom {
namespace blink {
const char MediaService::Name_[] = "media.mojom.MediaService";

MediaServiceProxy::MediaServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaServiceProxy::CreateInterfaceFactory(
    ::media::mojom::blink::InterfaceFactoryRequest in_factory, ::service_manager::mojom::blink::InterfaceProviderPtr in_host_interfaces) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaService::CreateInterfaceFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaService_CreateInterfaceFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaService_CreateInterfaceFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::InterfaceFactoryRequestDataView>(
      in_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in MediaService.CreateInterfaceFactory request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_host_interfaces, &params->host_interfaces, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaServiceStubDispatch::Accept(
    MediaService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaService_CreateInterfaceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaService::CreateInterfaceFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaService_CreateInterfaceFactory_Params_Data* params =
          reinterpret_cast<internal::MediaService_CreateInterfaceFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::InterfaceFactoryRequest p_factory{};
      ::service_manager::mojom::blink::InterfaceProviderPtr p_host_interfaces{};
      MediaService_CreateInterfaceFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      p_host_interfaces =
          input_data_view.TakeHostInterfaces<decltype(p_host_interfaces)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaService::CreateInterfaceFactory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateInterfaceFactory(
std::move(p_factory), 
std::move(p_host_interfaces));
      return true;
    }
  }
  return false;
}

// static
bool MediaServiceStubDispatch::AcceptWithResponder(
    MediaService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaService_CreateInterfaceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaService::CreateInterfaceFactory",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MediaServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaService RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaService_CreateInterfaceFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaService_CreateInterfaceFactory_Params_Data>(
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

void MediaServiceInterceptorForTesting::CreateInterfaceFactory(::media::mojom::blink::InterfaceFactoryRequest factory, ::service_manager::mojom::blink::InterfaceProviderPtr host_interfaces) {
  GetForwardingInterface()->CreateInterfaceFactory(std::move(factory), std::move(host_interfaces));
}
MediaServiceAsyncWaiter::MediaServiceAsyncWaiter(
    MediaService* proxy) : proxy_(proxy) {}

MediaServiceAsyncWaiter::~MediaServiceAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif