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

#include "media/mojo/interfaces/android_overlay.mojom.h"

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

#include "media/mojo/interfaces/android_overlay.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
AndroidOverlayConfig::AndroidOverlayConfig()
    : routing_token(),
      rect(),
      secure(),
      power_efficient() {}

AndroidOverlayConfig::AndroidOverlayConfig(
    const base::UnguessableToken& routing_token_in,
    const gfx::Rect& rect_in,
    bool secure_in,
    bool power_efficient_in)
    : routing_token(std::move(routing_token_in)),
      rect(std::move(rect_in)),
      secure(std::move(secure_in)),
      power_efficient(std::move(power_efficient_in)) {}

AndroidOverlayConfig::~AndroidOverlayConfig() = default;

bool AndroidOverlayConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AndroidOverlayProvider::Name_[] = "media.mojom.AndroidOverlayProvider";

AndroidOverlayProviderProxy::AndroidOverlayProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AndroidOverlayProviderProxy::CreateOverlay(
    AndroidOverlayRequest in_overlay, AndroidOverlayClientPtr in_client, AndroidOverlayConfigPtr in_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AndroidOverlayProvider::CreateOverlay");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAndroidOverlayProvider_CreateOverlay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AndroidOverlayProvider_CreateOverlay_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AndroidOverlayRequestDataView>(
      in_overlay, &params->overlay, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->overlay),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid overlay in AndroidOverlayProvider.CreateOverlay request");
  mojo::internal::Serialize<::media::mojom::AndroidOverlayClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in AndroidOverlayProvider.CreateOverlay request");
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::AndroidOverlayConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in AndroidOverlayProvider.CreateOverlay request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AndroidOverlayProviderStubDispatch::Accept(
    AndroidOverlayProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAndroidOverlayProvider_CreateOverlay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayProvider::CreateOverlay",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AndroidOverlayProvider_CreateOverlay_Params_Data* params =
          reinterpret_cast<internal::AndroidOverlayProvider_CreateOverlay_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AndroidOverlayRequest p_overlay{};
      AndroidOverlayClientPtr p_client{};
      AndroidOverlayConfigPtr p_config{};
      AndroidOverlayProvider_CreateOverlay_ParamsDataView input_data_view(params, &serialization_context);
      
      p_overlay =
          input_data_view.TakeOverlay<decltype(p_overlay)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AndroidOverlayProvider::CreateOverlay deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateOverlay(
std::move(p_overlay), 
std::move(p_client), 
std::move(p_config));
      return true;
    }
  }
  return false;
}

// static
bool AndroidOverlayProviderStubDispatch::AcceptWithResponder(
    AndroidOverlayProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAndroidOverlayProvider_CreateOverlay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayProvider::CreateOverlay",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AndroidOverlayProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AndroidOverlayProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kAndroidOverlayProvider_CreateOverlay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AndroidOverlayProvider_CreateOverlay_Params_Data>(
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

void AndroidOverlayProviderInterceptorForTesting::CreateOverlay(AndroidOverlayRequest overlay, AndroidOverlayClientPtr client, AndroidOverlayConfigPtr config) {
  GetForwardingInterface()->CreateOverlay(std::move(overlay), std::move(client), std::move(config));
}
AndroidOverlayProviderAsyncWaiter::AndroidOverlayProviderAsyncWaiter(
    AndroidOverlayProvider* proxy) : proxy_(proxy) {}

AndroidOverlayProviderAsyncWaiter::~AndroidOverlayProviderAsyncWaiter() = default;


const char AndroidOverlay::Name_[] = "media.mojom.AndroidOverlay";

AndroidOverlayProxy::AndroidOverlayProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AndroidOverlayProxy::ScheduleLayout(
    const gfx::Rect& in_rect) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AndroidOverlay::ScheduleLayout");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAndroidOverlay_ScheduleLayout_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AndroidOverlay_ScheduleLayout_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rect)::BaseType::BufferWriter
      rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_rect, buffer, &rect_writer, &serialization_context);
  params->rect.Set(
      rect_writer.is_null() ? nullptr : rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rect in AndroidOverlay.ScheduleLayout request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AndroidOverlayStubDispatch::Accept(
    AndroidOverlay* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAndroidOverlay_ScheduleLayout_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlay::ScheduleLayout",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AndroidOverlay_ScheduleLayout_Params_Data* params =
          reinterpret_cast<internal::AndroidOverlay_ScheduleLayout_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Rect p_rect{};
      AndroidOverlay_ScheduleLayout_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRect(&p_rect))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AndroidOverlay::ScheduleLayout deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ScheduleLayout(
std::move(p_rect));
      return true;
    }
  }
  return false;
}

// static
bool AndroidOverlayStubDispatch::AcceptWithResponder(
    AndroidOverlay* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAndroidOverlay_ScheduleLayout_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlay::ScheduleLayout",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AndroidOverlayRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AndroidOverlay RequestValidator");

  switch (message->header()->name) {
    case internal::kAndroidOverlay_ScheduleLayout_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AndroidOverlay_ScheduleLayout_Params_Data>(
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

void AndroidOverlayInterceptorForTesting::ScheduleLayout(const gfx::Rect& rect) {
  GetForwardingInterface()->ScheduleLayout(std::move(rect));
}
AndroidOverlayAsyncWaiter::AndroidOverlayAsyncWaiter(
    AndroidOverlay* proxy) : proxy_(proxy) {}

AndroidOverlayAsyncWaiter::~AndroidOverlayAsyncWaiter() = default;


const char AndroidOverlayClient::Name_[] = "media.mojom.AndroidOverlayClient";

AndroidOverlayClientProxy::AndroidOverlayClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AndroidOverlayClientProxy::OnSurfaceReady(
    uint64_t in_surface_key) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AndroidOverlayClient::OnSurfaceReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAndroidOverlayClient_OnSurfaceReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AndroidOverlayClient_OnSurfaceReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->surface_key = in_surface_key;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AndroidOverlayClientProxy::OnDestroyed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AndroidOverlayClient::OnDestroyed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAndroidOverlayClient_OnDestroyed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AndroidOverlayClient_OnDestroyed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AndroidOverlayClientProxy::OnPowerEfficientState(
    bool in_is_power_efficient) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AndroidOverlayClient::OnPowerEfficientState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAndroidOverlayClient_OnPowerEfficientState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AndroidOverlayClient_OnPowerEfficientState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_power_efficient = in_is_power_efficient;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AndroidOverlayClientStubDispatch::Accept(
    AndroidOverlayClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAndroidOverlayClient_OnSurfaceReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayClient::OnSurfaceReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AndroidOverlayClient_OnSurfaceReady_Params_Data* params =
          reinterpret_cast<internal::AndroidOverlayClient_OnSurfaceReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_surface_key{};
      AndroidOverlayClient_OnSurfaceReady_ParamsDataView input_data_view(params, &serialization_context);
      
      p_surface_key = input_data_view.surface_key();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AndroidOverlayClient::OnSurfaceReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSurfaceReady(
std::move(p_surface_key));
      return true;
    }
    case internal::kAndroidOverlayClient_OnDestroyed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayClient::OnDestroyed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AndroidOverlayClient_OnDestroyed_Params_Data* params =
          reinterpret_cast<internal::AndroidOverlayClient_OnDestroyed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AndroidOverlayClient_OnDestroyed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AndroidOverlayClient::OnDestroyed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDestroyed();
      return true;
    }
    case internal::kAndroidOverlayClient_OnPowerEfficientState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayClient::OnPowerEfficientState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AndroidOverlayClient_OnPowerEfficientState_Params_Data* params =
          reinterpret_cast<internal::AndroidOverlayClient_OnPowerEfficientState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_power_efficient{};
      AndroidOverlayClient_OnPowerEfficientState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_power_efficient = input_data_view.is_power_efficient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AndroidOverlayClient::OnPowerEfficientState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPowerEfficientState(
std::move(p_is_power_efficient));
      return true;
    }
  }
  return false;
}

// static
bool AndroidOverlayClientStubDispatch::AcceptWithResponder(
    AndroidOverlayClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAndroidOverlayClient_OnSurfaceReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayClient::OnSurfaceReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kAndroidOverlayClient_OnDestroyed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayClient::OnDestroyed",
               "message", message->name());
#endif
      break;
    }
    case internal::kAndroidOverlayClient_OnPowerEfficientState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AndroidOverlayClient::OnPowerEfficientState",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AndroidOverlayClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AndroidOverlayClient RequestValidator");

  switch (message->header()->name) {
    case internal::kAndroidOverlayClient_OnSurfaceReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AndroidOverlayClient_OnSurfaceReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAndroidOverlayClient_OnDestroyed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AndroidOverlayClient_OnDestroyed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAndroidOverlayClient_OnPowerEfficientState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AndroidOverlayClient_OnPowerEfficientState_Params_Data>(
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

void AndroidOverlayClientInterceptorForTesting::OnSurfaceReady(uint64_t surface_key) {
  GetForwardingInterface()->OnSurfaceReady(std::move(surface_key));
}
void AndroidOverlayClientInterceptorForTesting::OnDestroyed() {
  GetForwardingInterface()->OnDestroyed();
}
void AndroidOverlayClientInterceptorForTesting::OnPowerEfficientState(bool is_power_efficient) {
  GetForwardingInterface()->OnPowerEfficientState(std::move(is_power_efficient));
}
AndroidOverlayClientAsyncWaiter::AndroidOverlayClientAsyncWaiter(
    AndroidOverlayClient* proxy) : proxy_(proxy) {}

AndroidOverlayClientAsyncWaiter::~AndroidOverlayClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::AndroidOverlayConfig::DataView, ::media::mojom::AndroidOverlayConfigPtr>::Read(
    ::media::mojom::AndroidOverlayConfig::DataView input,
    ::media::mojom::AndroidOverlayConfigPtr* output) {
  bool success = true;
  ::media::mojom::AndroidOverlayConfigPtr result(::media::mojom::AndroidOverlayConfig::New());
  
      if (!input.ReadRoutingToken(&result->routing_token))
        success = false;
      if (!input.ReadRect(&result->rect))
        success = false;
      result->secure = input.secure();
      result->power_efficient = input.power_efficient();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif