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

#include "content/common/media/renderer_audio_output_stream_factory.mojom.h"

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

#include "content/common/media/renderer_audio_output_stream_factory.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
namespace content {
namespace mojom {
const char RendererAudioOutputStreamFactory::Name_[] = "content.mojom.RendererAudioOutputStreamFactory";

class RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ForwardToCallback(
      RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ForwardToCallback);
};

RendererAudioOutputStreamFactoryProxy::RendererAudioOutputStreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererAudioOutputStreamFactoryProxy::RequestDeviceAuthorization(
    ::media::mojom::AudioOutputStreamProviderRequest in_stream_provider_request, int32_t in_session_id, const std::string& in_device_id, RequestDeviceAuthorizationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererAudioOutputStreamFactory::RequestDeviceAuthorization");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamProviderRequestDataView>(
      in_stream_provider_request, &params->stream_provider_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream_provider_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream_provider_request in RendererAudioOutputStreamFactory.RequestDeviceAuthorization request");
  params->session_id = in_session_id;
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in RendererAudioOutputStreamFactory.RequestDeviceAuthorization request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder {
 public:
  static RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder> proxy(
        new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::OutputDeviceStatus in_state, const media::AudioParameters& in_output_params, const std::string& in_matched_device_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder);
};

bool RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::OutputDeviceStatus p_state{};
  media::AudioParameters p_output_params{};
  std::string p_matched_device_id{};
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!input_data_view.ReadOutputParams(&p_output_params))
    success = false;
  if (!input_data_view.ReadMatchedDeviceId(&p_matched_device_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RendererAudioOutputStreamFactory::RequestDeviceAuthorization response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_state), 
std::move(p_output_params), 
std::move(p_matched_device_id));
  return true;
}

void RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder::Run(
    media::OutputDeviceStatus in_state, const media::AudioParameters& in_output_params, const std::string& in_matched_device_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::OutputDeviceStatus>(
      in_state, &params->state);
  typename decltype(params->output_params)::BaseType::BufferWriter
      output_params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_output_params, buffer, &output_params_writer, &serialization_context);
  params->output_params.Set(
      output_params_writer.is_null() ? nullptr : output_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output_params in ");
  typename decltype(params->matched_device_id)::BaseType::BufferWriter
      matched_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_matched_device_id, buffer, &matched_device_id_writer, &serialization_context);
  params->matched_device_id.Set(
      matched_device_id_writer.is_null() ? nullptr : matched_device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->matched_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null matched_device_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool RendererAudioOutputStreamFactoryStubDispatch::Accept(
    RendererAudioOutputStreamFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioOutputStreamFactory::RequestDeviceAuthorization",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool RendererAudioOutputStreamFactoryStubDispatch::AcceptWithResponder(
    RendererAudioOutputStreamFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioOutputStreamFactory::RequestDeviceAuthorization",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params_Data* params =
          reinterpret_cast<
              internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::AudioOutputStreamProviderRequest p_stream_provider_request{};
      int32_t p_session_id{};
      std::string p_device_id{};
      RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream_provider_request =
          input_data_view.TakeStreamProviderRequest<decltype(p_stream_provider_request)>();
      p_session_id = input_data_view.session_id();
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererAudioOutputStreamFactory::RequestDeviceAuthorization deserializer");
        return false;
      }
      RendererAudioOutputStreamFactory::RequestDeviceAuthorizationCallback callback =
          RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestDeviceAuthorization(
std::move(p_stream_provider_request), 
std::move(p_session_id), 
std::move(p_device_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool RendererAudioOutputStreamFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererAudioOutputStreamFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params_Data>(
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

bool RendererAudioOutputStreamFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererAudioOutputStreamFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams_Data>(
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
void RendererAudioOutputStreamFactoryInterceptorForTesting::RequestDeviceAuthorization(::media::mojom::AudioOutputStreamProviderRequest stream_provider_request, int32_t session_id, const std::string& device_id, RequestDeviceAuthorizationCallback callback) {
  GetForwardingInterface()->RequestDeviceAuthorization(std::move(stream_provider_request), std::move(session_id), std::move(device_id), std::move(callback));
}
RendererAudioOutputStreamFactoryAsyncWaiter::RendererAudioOutputStreamFactoryAsyncWaiter(
    RendererAudioOutputStreamFactory* proxy) : proxy_(proxy) {}

RendererAudioOutputStreamFactoryAsyncWaiter::~RendererAudioOutputStreamFactoryAsyncWaiter() = default;

void RendererAudioOutputStreamFactoryAsyncWaiter::RequestDeviceAuthorization(
    ::media::mojom::AudioOutputStreamProviderRequest stream_provider_request, int32_t session_id, const std::string& device_id, media::OutputDeviceStatus* out_state, media::AudioParameters* out_output_params, std::string* out_matched_device_id) {
  base::RunLoop loop;
  proxy_->RequestDeviceAuthorization(std::move(stream_provider_request),std::move(session_id),std::move(device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::OutputDeviceStatus* out_state
,
             media::AudioParameters* out_output_params
,
             std::string* out_matched_device_id
,
             media::OutputDeviceStatus state,
             const media::AudioParameters& output_params,
             const std::string& matched_device_id) {*out_state = std::move(state);*out_output_params = std::move(output_params);*out_matched_device_id = std::move(matched_device_id);
            loop->Quit();
          },
          &loop,
          out_state,
          out_output_params,
          out_matched_device_id));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif