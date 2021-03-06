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

#include "content/common/input/input_injector.mojom.h"

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

#include "content/common/input/input_injector.mojom-shared-message-ids.h"
#include "content/common/frame_messages.h"
#include "content/common/input/input_event_struct_traits.h"
#include "content/common/input/touch_action_optional_struct_traits.h"
#include "content/common/input_messages.h"
#include "content/common/view_messages.h"
#include "content/public/common/common_param_traits.h"
namespace content {
namespace mojom {
const char InputInjector::Name_[] = "content.mojom.InputInjector";

class InputInjector_QueueSyntheticSmoothDrag_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputInjector_QueueSyntheticSmoothDrag_ForwardToCallback(
      InputInjector::QueueSyntheticSmoothDragCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputInjector::QueueSyntheticSmoothDragCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticSmoothDrag_ForwardToCallback);
};

class InputInjector_QueueSyntheticSmoothScroll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputInjector_QueueSyntheticSmoothScroll_ForwardToCallback(
      InputInjector::QueueSyntheticSmoothScrollCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputInjector::QueueSyntheticSmoothScrollCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticSmoothScroll_ForwardToCallback);
};

class InputInjector_QueueSyntheticPinch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputInjector_QueueSyntheticPinch_ForwardToCallback(
      InputInjector::QueueSyntheticPinchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputInjector::QueueSyntheticPinchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticPinch_ForwardToCallback);
};

class InputInjector_QueueSyntheticTap_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputInjector_QueueSyntheticTap_ForwardToCallback(
      InputInjector::QueueSyntheticTapCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputInjector::QueueSyntheticTapCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticTap_ForwardToCallback);
};

class InputInjector_QueueSyntheticPointerAction_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputInjector_QueueSyntheticPointerAction_ForwardToCallback(
      InputInjector::QueueSyntheticPointerActionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputInjector::QueueSyntheticPointerActionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticPointerAction_ForwardToCallback);
};

InputInjectorProxy::InputInjectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputInjectorProxy::QueueSyntheticSmoothDrag(
    const content::SyntheticSmoothDragGestureParams& in_drag, QueueSyntheticSmoothDragCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::InputInjector::QueueSyntheticSmoothDrag");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticSmoothDrag_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticSmoothDrag_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->drag)::BaseType::BufferWriter
      drag_writer;
  mojo::internal::Serialize<::content::mojom::SyntheticSmoothDragDataView>(
      in_drag, buffer, &drag_writer, &serialization_context);
  params->drag.Set(
      drag_writer.is_null() ? nullptr : drag_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag in InputInjector.QueueSyntheticSmoothDrag request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputInjector_QueueSyntheticSmoothDrag_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputInjectorProxy::QueueSyntheticSmoothScroll(
    const content::SyntheticSmoothScrollGestureParams& in_scroll, QueueSyntheticSmoothScrollCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::InputInjector::QueueSyntheticSmoothScroll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticSmoothScroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticSmoothScroll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->scroll)::BaseType::BufferWriter
      scroll_writer;
  mojo::internal::Serialize<::content::mojom::SyntheticSmoothScrollDataView>(
      in_scroll, buffer, &scroll_writer, &serialization_context);
  params->scroll.Set(
      scroll_writer.is_null() ? nullptr : scroll_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->scroll.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null scroll in InputInjector.QueueSyntheticSmoothScroll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputInjector_QueueSyntheticSmoothScroll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputInjectorProxy::QueueSyntheticPinch(
    const content::SyntheticPinchGestureParams& in_pinch, QueueSyntheticPinchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::InputInjector::QueueSyntheticPinch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticPinch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticPinch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pinch)::BaseType::BufferWriter
      pinch_writer;
  mojo::internal::Serialize<::content::mojom::SyntheticPinchDataView>(
      in_pinch, buffer, &pinch_writer, &serialization_context);
  params->pinch.Set(
      pinch_writer.is_null() ? nullptr : pinch_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pinch.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pinch in InputInjector.QueueSyntheticPinch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputInjector_QueueSyntheticPinch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputInjectorProxy::QueueSyntheticTap(
    const content::SyntheticTapGestureParams& in_tap, QueueSyntheticTapCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::InputInjector::QueueSyntheticTap");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticTap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticTap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->tap)::BaseType::BufferWriter
      tap_writer;
  mojo::internal::Serialize<::content::mojom::SyntheticTapDataView>(
      in_tap, buffer, &tap_writer, &serialization_context);
  params->tap.Set(
      tap_writer.is_null() ? nullptr : tap_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->tap.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null tap in InputInjector.QueueSyntheticTap request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputInjector_QueueSyntheticTap_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputInjectorProxy::QueueSyntheticPointerAction(
    const content::SyntheticPointerActionListParams& in_pointer_action, QueueSyntheticPointerActionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::InputInjector::QueueSyntheticPointerAction");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticPointerAction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticPointerAction_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pointer_action)::BaseType::BufferWriter
      pointer_action_writer;
  mojo::internal::Serialize<::content::mojom::SyntheticPointerActionDataView>(
      in_pointer_action, buffer, &pointer_action_writer, &serialization_context);
  params->pointer_action.Set(
      pointer_action_writer.is_null() ? nullptr : pointer_action_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pointer_action.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pointer_action in InputInjector.QueueSyntheticPointerAction request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputInjector_QueueSyntheticPointerAction_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder {
 public:
  static InputInjector::QueueSyntheticSmoothDragCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder> proxy(
        new InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder() {
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
  InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder(
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
        << "InputInjector::QueueSyntheticSmoothDragCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder);
};

bool InputInjector_QueueSyntheticSmoothDrag_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::InputInjector::QueueSyntheticSmoothDragCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  InputInjector_QueueSyntheticSmoothDrag_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputInjector::QueueSyntheticSmoothDrag response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticSmoothDrag_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticSmoothDragCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder {
 public:
  static InputInjector::QueueSyntheticSmoothScrollCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder> proxy(
        new InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder() {
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
  InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder(
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
        << "InputInjector::QueueSyntheticSmoothScrollCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder);
};

bool InputInjector_QueueSyntheticSmoothScroll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::InputInjector::QueueSyntheticSmoothScrollCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  InputInjector_QueueSyntheticSmoothScroll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputInjector::QueueSyntheticSmoothScroll response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticSmoothScroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticSmoothScrollCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class InputInjector_QueueSyntheticPinch_ProxyToResponder {
 public:
  static InputInjector::QueueSyntheticPinchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputInjector_QueueSyntheticPinch_ProxyToResponder> proxy(
        new InputInjector_QueueSyntheticPinch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputInjector_QueueSyntheticPinch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputInjector_QueueSyntheticPinch_ProxyToResponder() {
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
  InputInjector_QueueSyntheticPinch_ProxyToResponder(
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
        << "InputInjector::QueueSyntheticPinchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticPinch_ProxyToResponder);
};

bool InputInjector_QueueSyntheticPinch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::InputInjector::QueueSyntheticPinchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputInjector_QueueSyntheticPinch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputInjector_QueueSyntheticPinch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  InputInjector_QueueSyntheticPinch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputInjector::QueueSyntheticPinch response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void InputInjector_QueueSyntheticPinch_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticPinch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticPinch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticPinchCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class InputInjector_QueueSyntheticTap_ProxyToResponder {
 public:
  static InputInjector::QueueSyntheticTapCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputInjector_QueueSyntheticTap_ProxyToResponder> proxy(
        new InputInjector_QueueSyntheticTap_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputInjector_QueueSyntheticTap_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputInjector_QueueSyntheticTap_ProxyToResponder() {
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
  InputInjector_QueueSyntheticTap_ProxyToResponder(
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
        << "InputInjector::QueueSyntheticTapCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticTap_ProxyToResponder);
};

bool InputInjector_QueueSyntheticTap_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::InputInjector::QueueSyntheticTapCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputInjector_QueueSyntheticTap_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputInjector_QueueSyntheticTap_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  InputInjector_QueueSyntheticTap_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputInjector::QueueSyntheticTap response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void InputInjector_QueueSyntheticTap_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticTap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticTap_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticTapCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class InputInjector_QueueSyntheticPointerAction_ProxyToResponder {
 public:
  static InputInjector::QueueSyntheticPointerActionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputInjector_QueueSyntheticPointerAction_ProxyToResponder> proxy(
        new InputInjector_QueueSyntheticPointerAction_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputInjector_QueueSyntheticPointerAction_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputInjector_QueueSyntheticPointerAction_ProxyToResponder() {
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
  InputInjector_QueueSyntheticPointerAction_ProxyToResponder(
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
        << "InputInjector::QueueSyntheticPointerActionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputInjector_QueueSyntheticPointerAction_ProxyToResponder);
};

bool InputInjector_QueueSyntheticPointerAction_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::InputInjector::QueueSyntheticPointerActionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputInjector_QueueSyntheticPointerAction_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputInjector_QueueSyntheticPointerAction_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  InputInjector_QueueSyntheticPointerAction_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InputInjector::QueueSyntheticPointerAction response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void InputInjector_QueueSyntheticPointerAction_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputInjector_QueueSyntheticPointerAction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::InputInjector_QueueSyntheticPointerAction_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticPointerActionCallback",
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
bool InputInjectorStubDispatch::Accept(
    InputInjector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputInjector_QueueSyntheticSmoothDrag_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticSmoothDrag",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputInjector_QueueSyntheticSmoothScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticSmoothScroll",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputInjector_QueueSyntheticPinch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticPinch",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputInjector_QueueSyntheticTap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticTap",
               "message", message->name());
#endif
      break;
    }
    case internal::kInputInjector_QueueSyntheticPointerAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticPointerAction",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool InputInjectorStubDispatch::AcceptWithResponder(
    InputInjector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputInjector_QueueSyntheticSmoothDrag_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticSmoothDrag",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputInjector_QueueSyntheticSmoothDrag_Params_Data* params =
          reinterpret_cast<
              internal::InputInjector_QueueSyntheticSmoothDrag_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyntheticSmoothDragGestureParams p_drag{};
      InputInjector_QueueSyntheticSmoothDrag_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDrag(&p_drag))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputInjector::QueueSyntheticSmoothDrag deserializer");
        return false;
      }
      InputInjector::QueueSyntheticSmoothDragCallback callback =
          InputInjector_QueueSyntheticSmoothDrag_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueSyntheticSmoothDrag(
std::move(p_drag), std::move(callback));
      return true;
    }
    case internal::kInputInjector_QueueSyntheticSmoothScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticSmoothScroll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputInjector_QueueSyntheticSmoothScroll_Params_Data* params =
          reinterpret_cast<
              internal::InputInjector_QueueSyntheticSmoothScroll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyntheticSmoothScrollGestureParams p_scroll{};
      InputInjector_QueueSyntheticSmoothScroll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScroll(&p_scroll))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputInjector::QueueSyntheticSmoothScroll deserializer");
        return false;
      }
      InputInjector::QueueSyntheticSmoothScrollCallback callback =
          InputInjector_QueueSyntheticSmoothScroll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueSyntheticSmoothScroll(
std::move(p_scroll), std::move(callback));
      return true;
    }
    case internal::kInputInjector_QueueSyntheticPinch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticPinch",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputInjector_QueueSyntheticPinch_Params_Data* params =
          reinterpret_cast<
              internal::InputInjector_QueueSyntheticPinch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyntheticPinchGestureParams p_pinch{};
      InputInjector_QueueSyntheticPinch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPinch(&p_pinch))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputInjector::QueueSyntheticPinch deserializer");
        return false;
      }
      InputInjector::QueueSyntheticPinchCallback callback =
          InputInjector_QueueSyntheticPinch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueSyntheticPinch(
std::move(p_pinch), std::move(callback));
      return true;
    }
    case internal::kInputInjector_QueueSyntheticTap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticTap",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputInjector_QueueSyntheticTap_Params_Data* params =
          reinterpret_cast<
              internal::InputInjector_QueueSyntheticTap_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyntheticTapGestureParams p_tap{};
      InputInjector_QueueSyntheticTap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTap(&p_tap))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputInjector::QueueSyntheticTap deserializer");
        return false;
      }
      InputInjector::QueueSyntheticTapCallback callback =
          InputInjector_QueueSyntheticTap_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueSyntheticTap(
std::move(p_tap), std::move(callback));
      return true;
    }
    case internal::kInputInjector_QueueSyntheticPointerAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::InputInjector::QueueSyntheticPointerAction",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InputInjector_QueueSyntheticPointerAction_Params_Data* params =
          reinterpret_cast<
              internal::InputInjector_QueueSyntheticPointerAction_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyntheticPointerActionListParams p_pointer_action{};
      InputInjector_QueueSyntheticPointerAction_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPointerAction(&p_pointer_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InputInjector::QueueSyntheticPointerAction deserializer");
        return false;
      }
      InputInjector::QueueSyntheticPointerActionCallback callback =
          InputInjector_QueueSyntheticPointerAction_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueSyntheticPointerAction(
std::move(p_pointer_action), std::move(callback));
      return true;
    }
  }
  return false;
}

bool InputInjectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputInjector RequestValidator");

  switch (message->header()->name) {
    case internal::kInputInjector_QueueSyntheticSmoothDrag_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticSmoothDrag_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticSmoothScroll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticSmoothScroll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticPinch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticPinch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticTap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticTap_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticPointerAction_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticPointerAction_Params_Data>(
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

bool InputInjectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputInjector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInputInjector_QueueSyntheticSmoothDrag_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticSmoothScroll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticPinch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticPinch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticTap_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticTap_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputInjector_QueueSyntheticPointerAction_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputInjector_QueueSyntheticPointerAction_ResponseParams_Data>(
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
void InputInjectorInterceptorForTesting::QueueSyntheticSmoothDrag(const content::SyntheticSmoothDragGestureParams& drag, QueueSyntheticSmoothDragCallback callback) {
  GetForwardingInterface()->QueueSyntheticSmoothDrag(std::move(drag), std::move(callback));
}
void InputInjectorInterceptorForTesting::QueueSyntheticSmoothScroll(const content::SyntheticSmoothScrollGestureParams& scroll, QueueSyntheticSmoothScrollCallback callback) {
  GetForwardingInterface()->QueueSyntheticSmoothScroll(std::move(scroll), std::move(callback));
}
void InputInjectorInterceptorForTesting::QueueSyntheticPinch(const content::SyntheticPinchGestureParams& pinch, QueueSyntheticPinchCallback callback) {
  GetForwardingInterface()->QueueSyntheticPinch(std::move(pinch), std::move(callback));
}
void InputInjectorInterceptorForTesting::QueueSyntheticTap(const content::SyntheticTapGestureParams& tap, QueueSyntheticTapCallback callback) {
  GetForwardingInterface()->QueueSyntheticTap(std::move(tap), std::move(callback));
}
void InputInjectorInterceptorForTesting::QueueSyntheticPointerAction(const content::SyntheticPointerActionListParams& pointer_action, QueueSyntheticPointerActionCallback callback) {
  GetForwardingInterface()->QueueSyntheticPointerAction(std::move(pointer_action), std::move(callback));
}
InputInjectorAsyncWaiter::InputInjectorAsyncWaiter(
    InputInjector* proxy) : proxy_(proxy) {}

InputInjectorAsyncWaiter::~InputInjectorAsyncWaiter() = default;

void InputInjectorAsyncWaiter::QueueSyntheticSmoothDrag(
    const content::SyntheticSmoothDragGestureParams& drag) {
  base::RunLoop loop;
  proxy_->QueueSyntheticSmoothDrag(std::move(drag),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void InputInjectorAsyncWaiter::QueueSyntheticSmoothScroll(
    const content::SyntheticSmoothScrollGestureParams& scroll) {
  base::RunLoop loop;
  proxy_->QueueSyntheticSmoothScroll(std::move(scroll),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void InputInjectorAsyncWaiter::QueueSyntheticPinch(
    const content::SyntheticPinchGestureParams& pinch) {
  base::RunLoop loop;
  proxy_->QueueSyntheticPinch(std::move(pinch),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void InputInjectorAsyncWaiter::QueueSyntheticTap(
    const content::SyntheticTapGestureParams& tap) {
  base::RunLoop loop;
  proxy_->QueueSyntheticTap(std::move(tap),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void InputInjectorAsyncWaiter::QueueSyntheticPointerAction(
    const content::SyntheticPointerActionListParams& pointer_action) {
  base::RunLoop loop;
  proxy_->QueueSyntheticPointerAction(std::move(pointer_action),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
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