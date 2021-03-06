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

#include "services/video_capture/public/mojom/virtual_device.mojom.h"

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

#include "services/video_capture/public/mojom/virtual_device.mojom-shared-message-ids.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/capture/ipc/capture_param_traits.h"
#include "media/capture/ipc/capture_param_traits_macros.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace video_capture {
namespace mojom {
const char SharedMemoryVirtualDevice::Name_[] = "video_capture.mojom.SharedMemoryVirtualDevice";

class SharedMemoryVirtualDevice_RequestFrameBuffer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SharedMemoryVirtualDevice_RequestFrameBuffer_ForwardToCallback(
      SharedMemoryVirtualDevice::RequestFrameBufferCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SharedMemoryVirtualDevice::RequestFrameBufferCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SharedMemoryVirtualDevice_RequestFrameBuffer_ForwardToCallback);
};

SharedMemoryVirtualDeviceProxy::SharedMemoryVirtualDeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SharedMemoryVirtualDeviceProxy::RequestFrameBuffer(
    const gfx::Size& in_dimension, media::VideoPixelFormat in_pixel_format, RequestFrameBufferCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::SharedMemoryVirtualDevice::RequestFrameBuffer");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedMemoryVirtualDevice_RequestFrameBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dimension)::BaseType::BufferWriter
      dimension_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_dimension, buffer, &dimension_writer, &serialization_context);
  params->dimension.Set(
      dimension_writer.is_null() ? nullptr : dimension_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dimension.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dimension in SharedMemoryVirtualDevice.RequestFrameBuffer request");
  mojo::internal::Serialize<::media::mojom::VideoCapturePixelFormat>(
      in_pixel_format, &params->pixel_format);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SharedMemoryVirtualDevice_RequestFrameBuffer_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SharedMemoryVirtualDeviceProxy::OnFrameReadyInBuffer(
    int32_t in_buffer_id, ::media::mojom::VideoFrameInfoPtr in_frame_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::SharedMemoryVirtualDevice::OnFrameReadyInBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  typename decltype(params->frame_info)::BaseType::BufferWriter
      frame_info_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameInfoDataView>(
      in_frame_info, buffer, &frame_info_writer, &serialization_context);
  params->frame_info.Set(
      frame_info_writer.is_null() ? nullptr : frame_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_info in SharedMemoryVirtualDevice.OnFrameReadyInBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder {
 public:
  static SharedMemoryVirtualDevice::RequestFrameBufferCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder> proxy(
        new SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder() {
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
  SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder(
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
        << "SharedMemoryVirtualDevice::RequestFrameBufferCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_buffer_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder);
};

bool SharedMemoryVirtualDevice_RequestFrameBuffer_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "video_capture::mojom::SharedMemoryVirtualDevice::RequestFrameBufferCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_buffer_id{};
  SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_buffer_id = input_data_view.buffer_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SharedMemoryVirtualDevice::RequestFrameBuffer response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_buffer_id));
  return true;
}

void SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder::Run(
    int32_t in_buffer_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedMemoryVirtualDevice_RequestFrameBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::SharedMemoryVirtualDevice::RequestFrameBufferCallback",
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
bool SharedMemoryVirtualDeviceStubDispatch::Accept(
    SharedMemoryVirtualDevice* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSharedMemoryVirtualDevice_RequestFrameBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::SharedMemoryVirtualDevice::RequestFrameBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::SharedMemoryVirtualDevice::OnFrameReadyInBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data* params =
          reinterpret_cast<internal::SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      ::media::mojom::VideoFrameInfoPtr p_frame_info{};
      SharedMemoryVirtualDevice_OnFrameReadyInBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!input_data_view.ReadFrameInfo(&p_frame_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedMemoryVirtualDevice::OnFrameReadyInBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameReadyInBuffer(
std::move(p_buffer_id), 
std::move(p_frame_info));
      return true;
    }
  }
  return false;
}

// static
bool SharedMemoryVirtualDeviceStubDispatch::AcceptWithResponder(
    SharedMemoryVirtualDevice* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSharedMemoryVirtualDevice_RequestFrameBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::SharedMemoryVirtualDevice::RequestFrameBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data* params =
          reinterpret_cast<
              internal::SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_dimension{};
      media::VideoPixelFormat p_pixel_format{};
      SharedMemoryVirtualDevice_RequestFrameBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDimension(&p_dimension))
        success = false;
      if (!input_data_view.ReadPixelFormat(&p_pixel_format))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedMemoryVirtualDevice::RequestFrameBuffer deserializer");
        return false;
      }
      SharedMemoryVirtualDevice::RequestFrameBufferCallback callback =
          SharedMemoryVirtualDevice_RequestFrameBuffer_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestFrameBuffer(
std::move(p_dimension), 
std::move(p_pixel_format), std::move(callback));
      return true;
    }
    case internal::kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::SharedMemoryVirtualDevice::OnFrameReadyInBuffer",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SharedMemoryVirtualDeviceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedMemoryVirtualDevice RequestValidator");

  switch (message->header()->name) {
    case internal::kSharedMemoryVirtualDevice_RequestFrameBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedMemoryVirtualDevice_RequestFrameBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedMemoryVirtualDevice_OnFrameReadyInBuffer_Params_Data>(
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

bool SharedMemoryVirtualDeviceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedMemoryVirtualDevice ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSharedMemoryVirtualDevice_RequestFrameBuffer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedMemoryVirtualDevice_RequestFrameBuffer_ResponseParams_Data>(
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
void SharedMemoryVirtualDeviceInterceptorForTesting::RequestFrameBuffer(const gfx::Size& dimension, media::VideoPixelFormat pixel_format, RequestFrameBufferCallback callback) {
  GetForwardingInterface()->RequestFrameBuffer(std::move(dimension), std::move(pixel_format), std::move(callback));
}
void SharedMemoryVirtualDeviceInterceptorForTesting::OnFrameReadyInBuffer(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr frame_info) {
  GetForwardingInterface()->OnFrameReadyInBuffer(std::move(buffer_id), std::move(frame_info));
}
SharedMemoryVirtualDeviceAsyncWaiter::SharedMemoryVirtualDeviceAsyncWaiter(
    SharedMemoryVirtualDevice* proxy) : proxy_(proxy) {}

SharedMemoryVirtualDeviceAsyncWaiter::~SharedMemoryVirtualDeviceAsyncWaiter() = default;

void SharedMemoryVirtualDeviceAsyncWaiter::RequestFrameBuffer(
    const gfx::Size& dimension, media::VideoPixelFormat pixel_format, int32_t* out_buffer_id) {
  base::RunLoop loop;
  proxy_->RequestFrameBuffer(std::move(dimension),std::move(pixel_format),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_buffer_id
,
             int32_t buffer_id) {*out_buffer_id = std::move(buffer_id);
            loop->Quit();
          },
          &loop,
          out_buffer_id));
  loop.Run();
}

const char TextureVirtualDevice::Name_[] = "video_capture.mojom.TextureVirtualDevice";

TextureVirtualDeviceProxy::TextureVirtualDeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TextureVirtualDeviceProxy::OnNewMailboxHolderBufferHandle(
    int32_t in_buffer_id, ::media::mojom::MailboxBufferHandleSetPtr in_mailbox_handles) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::TextureVirtualDevice::OnNewMailboxHolderBufferHandle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  typename decltype(params->mailbox_handles)::BaseType::BufferWriter
      mailbox_handles_writer;
  mojo::internal::Serialize<::media::mojom::MailboxBufferHandleSetDataView>(
      in_mailbox_handles, buffer, &mailbox_handles_writer, &serialization_context);
  params->mailbox_handles.Set(
      mailbox_handles_writer.is_null() ? nullptr : mailbox_handles_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mailbox_handles.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mailbox_handles in TextureVirtualDevice.OnNewMailboxHolderBufferHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextureVirtualDeviceProxy::OnFrameReadyInBuffer(
    int32_t in_buffer_id, ::video_capture::mojom::ScopedAccessPermissionPtr in_access_permission, ::media::mojom::VideoFrameInfoPtr in_frame_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::TextureVirtualDevice::OnFrameReadyInBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextureVirtualDevice_OnFrameReadyInBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  mojo::internal::Serialize<::video_capture::mojom::ScopedAccessPermissionPtrDataView>(
      in_access_permission, &params->access_permission, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->access_permission),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid access_permission in TextureVirtualDevice.OnFrameReadyInBuffer request");
  typename decltype(params->frame_info)::BaseType::BufferWriter
      frame_info_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameInfoDataView>(
      in_frame_info, buffer, &frame_info_writer, &serialization_context);
  params->frame_info.Set(
      frame_info_writer.is_null() ? nullptr : frame_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_info in TextureVirtualDevice.OnFrameReadyInBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextureVirtualDeviceProxy::OnBufferRetired(
    int32_t in_buffer_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::TextureVirtualDevice::OnBufferRetired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextureVirtualDevice_OnBufferRetired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::TextureVirtualDevice_OnBufferRetired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TextureVirtualDeviceStubDispatch::Accept(
    TextureVirtualDevice* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::TextureVirtualDevice::OnNewMailboxHolderBufferHandle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data* params =
          reinterpret_cast<internal::TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      ::media::mojom::MailboxBufferHandleSetPtr p_mailbox_handles{};
      TextureVirtualDevice_OnNewMailboxHolderBufferHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!input_data_view.ReadMailboxHandles(&p_mailbox_handles))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextureVirtualDevice::OnNewMailboxHolderBufferHandle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNewMailboxHolderBufferHandle(
std::move(p_buffer_id), 
std::move(p_mailbox_handles));
      return true;
    }
    case internal::kTextureVirtualDevice_OnFrameReadyInBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::TextureVirtualDevice::OnFrameReadyInBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data* params =
          reinterpret_cast<internal::TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      ::video_capture::mojom::ScopedAccessPermissionPtr p_access_permission{};
      ::media::mojom::VideoFrameInfoPtr p_frame_info{};
      TextureVirtualDevice_OnFrameReadyInBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      p_access_permission =
          input_data_view.TakeAccessPermission<decltype(p_access_permission)>();
      if (!input_data_view.ReadFrameInfo(&p_frame_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextureVirtualDevice::OnFrameReadyInBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameReadyInBuffer(
std::move(p_buffer_id), 
std::move(p_access_permission), 
std::move(p_frame_info));
      return true;
    }
    case internal::kTextureVirtualDevice_OnBufferRetired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::TextureVirtualDevice::OnBufferRetired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextureVirtualDevice_OnBufferRetired_Params_Data* params =
          reinterpret_cast<internal::TextureVirtualDevice_OnBufferRetired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      TextureVirtualDevice_OnBufferRetired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextureVirtualDevice::OnBufferRetired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBufferRetired(
std::move(p_buffer_id));
      return true;
    }
  }
  return false;
}

// static
bool TextureVirtualDeviceStubDispatch::AcceptWithResponder(
    TextureVirtualDevice* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::TextureVirtualDevice::OnNewMailboxHolderBufferHandle",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextureVirtualDevice_OnFrameReadyInBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::TextureVirtualDevice::OnFrameReadyInBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextureVirtualDevice_OnBufferRetired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::TextureVirtualDevice::OnBufferRetired",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool TextureVirtualDeviceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextureVirtualDevice RequestValidator");

  switch (message->header()->name) {
    case internal::kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextureVirtualDevice_OnNewMailboxHolderBufferHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextureVirtualDevice_OnFrameReadyInBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextureVirtualDevice_OnFrameReadyInBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextureVirtualDevice_OnBufferRetired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextureVirtualDevice_OnBufferRetired_Params_Data>(
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

void TextureVirtualDeviceInterceptorForTesting::OnNewMailboxHolderBufferHandle(int32_t buffer_id, ::media::mojom::MailboxBufferHandleSetPtr mailbox_handles) {
  GetForwardingInterface()->OnNewMailboxHolderBufferHandle(std::move(buffer_id), std::move(mailbox_handles));
}
void TextureVirtualDeviceInterceptorForTesting::OnFrameReadyInBuffer(int32_t buffer_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) {
  GetForwardingInterface()->OnFrameReadyInBuffer(std::move(buffer_id), std::move(access_permission), std::move(frame_info));
}
void TextureVirtualDeviceInterceptorForTesting::OnBufferRetired(int32_t buffer_id) {
  GetForwardingInterface()->OnBufferRetired(std::move(buffer_id));
}
TextureVirtualDeviceAsyncWaiter::TextureVirtualDeviceAsyncWaiter(
    TextureVirtualDevice* proxy) : proxy_(proxy) {}

TextureVirtualDeviceAsyncWaiter::~TextureVirtualDeviceAsyncWaiter() = default;


}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif