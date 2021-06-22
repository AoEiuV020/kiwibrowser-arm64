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

#include "third_party/blink/public/web/remote_objects.mojom.h"

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

#include "third_party/blink/public/web/remote_objects.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
namespace blink {
namespace mojom {
RemoteInvocationResult::RemoteInvocationResult()
    : error(RemoteInvocationError::OK),
      value() {}

RemoteInvocationResult::RemoteInvocationResult(
    RemoteInvocationError error_in,
    RemoteInvocationResultValuePtr value_in)
    : error(std::move(error_in)),
      value(std::move(value_in)) {}

RemoteInvocationResult::~RemoteInvocationResult() = default;

bool RemoteInvocationResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RemoteInvocationArgument::RemoteInvocationArgument() : tag_(Tag::NUMBER_VALUE) {
  data_.number_value = double();
}

RemoteInvocationArgument::~RemoteInvocationArgument() {
  DestroyActive();
}


void RemoteInvocationArgument::set_number_value(
    double number_value) {
  if (tag_ != Tag::NUMBER_VALUE) {
    DestroyActive();
    tag_ = Tag::NUMBER_VALUE;
  }
  data_.number_value = number_value;
}
void RemoteInvocationArgument::set_boolean_value(
    bool boolean_value) {
  if (tag_ != Tag::BOOLEAN_VALUE) {
    DestroyActive();
    tag_ = Tag::BOOLEAN_VALUE;
  }
  data_.boolean_value = boolean_value;
}
void RemoteInvocationArgument::set_string_value(
    const base::string16& string_value) {
  if (tag_ == Tag::STRING_VALUE) {
    *(data_.string_value) = std::move(string_value);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_VALUE;
    data_.string_value = new base::string16(
        std::move(string_value));
  }
}
void RemoteInvocationArgument::set_singleton_value(
    SingletonJavaScriptValue singleton_value) {
  if (tag_ != Tag::SINGLETON_VALUE) {
    DestroyActive();
    tag_ = Tag::SINGLETON_VALUE;
  }
  data_.singleton_value = singleton_value;
}
void RemoteInvocationArgument::set_array_value(
    std::vector<RemoteInvocationArgumentPtr> array_value) {
  if (tag_ == Tag::ARRAY_VALUE) {
    *(data_.array_value) = std::move(array_value);
  } else {
    DestroyActive();
    tag_ = Tag::ARRAY_VALUE;
    data_.array_value = new std::vector<RemoteInvocationArgumentPtr>(
        std::move(array_value));
  }
}

void RemoteInvocationArgument::DestroyActive() {
  switch (tag_) {

    case Tag::NUMBER_VALUE:

      break;
    case Tag::BOOLEAN_VALUE:

      break;
    case Tag::STRING_VALUE:

      delete data_.string_value;
      break;
    case Tag::SINGLETON_VALUE:

      break;
    case Tag::ARRAY_VALUE:

      delete data_.array_value;
      break;
  }
}

bool RemoteInvocationArgument::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
RemoteInvocationResultValue::RemoteInvocationResultValue() : tag_(Tag::NUMBER_VALUE) {
  data_.number_value = double();
}

RemoteInvocationResultValue::~RemoteInvocationResultValue() {
  DestroyActive();
}


void RemoteInvocationResultValue::set_number_value(
    double number_value) {
  if (tag_ != Tag::NUMBER_VALUE) {
    DestroyActive();
    tag_ = Tag::NUMBER_VALUE;
  }
  data_.number_value = number_value;
}
void RemoteInvocationResultValue::set_boolean_value(
    bool boolean_value) {
  if (tag_ != Tag::BOOLEAN_VALUE) {
    DestroyActive();
    tag_ = Tag::BOOLEAN_VALUE;
  }
  data_.boolean_value = boolean_value;
}
void RemoteInvocationResultValue::set_string_value(
    const base::string16& string_value) {
  if (tag_ == Tag::STRING_VALUE) {
    *(data_.string_value) = std::move(string_value);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_VALUE;
    data_.string_value = new base::string16(
        std::move(string_value));
  }
}
void RemoteInvocationResultValue::set_singleton_value(
    SingletonJavaScriptValue singleton_value) {
  if (tag_ != Tag::SINGLETON_VALUE) {
    DestroyActive();
    tag_ = Tag::SINGLETON_VALUE;
  }
  data_.singleton_value = singleton_value;
}

void RemoteInvocationResultValue::DestroyActive() {
  switch (tag_) {

    case Tag::NUMBER_VALUE:

      break;
    case Tag::BOOLEAN_VALUE:

      break;
    case Tag::STRING_VALUE:

      delete data_.string_value;
      break;
    case Tag::SINGLETON_VALUE:

      break;
  }
}

bool RemoteInvocationResultValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char RemoteObject::Name_[] = "blink.mojom.RemoteObject";
bool RemoteObject::HasMethod(const std::string& name, bool* out_method_exists) {
  NOTREACHED();
  return false;
}
bool RemoteObject::GetMethods(std::vector<std::string>* out_method_names) {
  NOTREACHED();
  return false;
}
bool RemoteObject::InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result) {
  NOTREACHED();
  return false;
}
class RemoteObject_HasMethod_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RemoteObject_HasMethod_HandleSyncResponse(
      bool* result, bool* out_method_exists)
      : result_(result), out_method_exists_(out_method_exists) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_method_exists_;DISALLOW_COPY_AND_ASSIGN(RemoteObject_HasMethod_HandleSyncResponse);
};

class RemoteObject_HasMethod_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RemoteObject_HasMethod_ForwardToCallback(
      RemoteObject::HasMethodCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RemoteObject::HasMethodCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RemoteObject_HasMethod_ForwardToCallback);
};
class RemoteObject_GetMethods_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RemoteObject_GetMethods_HandleSyncResponse(
      bool* result, std::vector<std::string>* out_method_names)
      : result_(result), out_method_names_(out_method_names) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<std::string>* out_method_names_;DISALLOW_COPY_AND_ASSIGN(RemoteObject_GetMethods_HandleSyncResponse);
};

class RemoteObject_GetMethods_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RemoteObject_GetMethods_ForwardToCallback(
      RemoteObject::GetMethodsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RemoteObject::GetMethodsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RemoteObject_GetMethods_ForwardToCallback);
};
class RemoteObject_InvokeMethod_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RemoteObject_InvokeMethod_HandleSyncResponse(
      bool* result, RemoteInvocationResultPtr* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  RemoteInvocationResultPtr* out_result_;DISALLOW_COPY_AND_ASSIGN(RemoteObject_InvokeMethod_HandleSyncResponse);
};

class RemoteObject_InvokeMethod_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RemoteObject_InvokeMethod_ForwardToCallback(
      RemoteObject::InvokeMethodCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RemoteObject::InvokeMethodCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RemoteObject_InvokeMethod_ForwardToCallback);
};

RemoteObjectProxy::RemoteObjectProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool RemoteObjectProxy::HasMethod(
    const std::string& param_name, bool* out_param_method_exists) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::RemoteObject::HasMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_HasMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_HasMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.HasMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_HasMethod_HandleSyncResponse(
          &result, out_param_method_exists));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RemoteObjectProxy::HasMethod(
    const std::string& in_name, HasMethodCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::RemoteObject::HasMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_HasMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_HasMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.HasMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_HasMethod_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RemoteObjectProxy::GetMethods(
    std::vector<std::string>* out_param_method_names) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::RemoteObject::GetMethods");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_GetMethods_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_GetMethods_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_GetMethods_HandleSyncResponse(
          &result, out_param_method_names));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RemoteObjectProxy::GetMethods(
    GetMethodsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::RemoteObject::GetMethods");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_GetMethods_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_GetMethods_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_GetMethods_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RemoteObjectProxy::InvokeMethod(
    const std::string& param_name, std::vector<RemoteInvocationArgumentPtr> param_arguments, RemoteInvocationResultPtr* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::RemoteObject::InvokeMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_InvokeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_InvokeMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.InvokeMethod request");
  typename decltype(params->arguments)::BaseType::BufferWriter
      arguments_writer;
  const mojo::internal::ContainerValidateParams arguments_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
      param_arguments, buffer, &arguments_writer, &arguments_validate_params,
      &serialization_context);
  params->arguments.Set(
      arguments_writer.is_null() ? nullptr : arguments_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->arguments.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null arguments in RemoteObject.InvokeMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_InvokeMethod_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RemoteObjectProxy::InvokeMethod(
    const std::string& in_name, std::vector<RemoteInvocationArgumentPtr> in_arguments, InvokeMethodCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::RemoteObject::InvokeMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_InvokeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_InvokeMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.InvokeMethod request");
  typename decltype(params->arguments)::BaseType::BufferWriter
      arguments_writer;
  const mojo::internal::ContainerValidateParams arguments_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
      in_arguments, buffer, &arguments_writer, &arguments_validate_params,
      &serialization_context);
  params->arguments.Set(
      arguments_writer.is_null() ? nullptr : arguments_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->arguments.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null arguments in RemoteObject.InvokeMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_InvokeMethod_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RemoteObject_HasMethod_ProxyToResponder {
 public:
  static RemoteObject::HasMethodCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RemoteObject_HasMethod_ProxyToResponder> proxy(
        new RemoteObject_HasMethod_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RemoteObject_HasMethod_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RemoteObject_HasMethod_ProxyToResponder() {
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
  RemoteObject_HasMethod_ProxyToResponder(
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
        << "RemoteObject::HasMethodCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_method_exists);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObject_HasMethod_ProxyToResponder);
};

bool RemoteObject_HasMethod_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::RemoteObject::HasMethodCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RemoteObject_HasMethod_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RemoteObject_HasMethod_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_method_exists{};
  RemoteObject_HasMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_method_exists = input_data_view.method_exists();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RemoteObject::HasMethod response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_method_exists));
  return true;
}

void RemoteObject_HasMethod_ProxyToResponder::Run(
    bool in_method_exists) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_HasMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_HasMethod_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->method_exists = in_method_exists;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::HasMethodCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RemoteObject_HasMethod_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RemoteObject_HasMethod_ResponseParams_Data* params =
      reinterpret_cast<internal::RemoteObject_HasMethod_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_method_exists{};
  RemoteObject_HasMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_method_exists = input_data_view.method_exists();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RemoteObject::HasMethod response deserializer");
    return false;
  }
  *out_method_exists_ = std::move(p_method_exists);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RemoteObject_GetMethods_ProxyToResponder {
 public:
  static RemoteObject::GetMethodsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RemoteObject_GetMethods_ProxyToResponder> proxy(
        new RemoteObject_GetMethods_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RemoteObject_GetMethods_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RemoteObject_GetMethods_ProxyToResponder() {
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
  RemoteObject_GetMethods_ProxyToResponder(
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
        << "RemoteObject::GetMethodsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<std::string>& in_method_names);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObject_GetMethods_ProxyToResponder);
};

bool RemoteObject_GetMethods_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::RemoteObject::GetMethodsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RemoteObject_GetMethods_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RemoteObject_GetMethods_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::string> p_method_names{};
  RemoteObject_GetMethods_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMethodNames(&p_method_names))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RemoteObject::GetMethods response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_method_names));
  return true;
}

void RemoteObject_GetMethods_ProxyToResponder::Run(
    const std::vector<std::string>& in_method_names) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_GetMethods_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_GetMethods_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->method_names)::BaseType::BufferWriter
      method_names_writer;
  const mojo::internal::ContainerValidateParams method_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_method_names, buffer, &method_names_writer, &method_names_validate_params,
      &serialization_context);
  params->method_names.Set(
      method_names_writer.is_null() ? nullptr : method_names_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method_names.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method_names in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::GetMethodsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RemoteObject_GetMethods_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RemoteObject_GetMethods_ResponseParams_Data* params =
      reinterpret_cast<internal::RemoteObject_GetMethods_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::string> p_method_names{};
  RemoteObject_GetMethods_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMethodNames(&p_method_names))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RemoteObject::GetMethods response deserializer");
    return false;
  }
  *out_method_names_ = std::move(p_method_names);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RemoteObject_InvokeMethod_ProxyToResponder {
 public:
  static RemoteObject::InvokeMethodCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RemoteObject_InvokeMethod_ProxyToResponder> proxy(
        new RemoteObject_InvokeMethod_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RemoteObject_InvokeMethod_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RemoteObject_InvokeMethod_ProxyToResponder() {
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
  RemoteObject_InvokeMethod_ProxyToResponder(
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
        << "RemoteObject::InvokeMethodCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      RemoteInvocationResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObject_InvokeMethod_ProxyToResponder);
};

bool RemoteObject_InvokeMethod_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::RemoteObject::InvokeMethodCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RemoteObject_InvokeMethod_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RemoteObject_InvokeMethod_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RemoteInvocationResultPtr p_result{};
  RemoteObject_InvokeMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RemoteObject::InvokeMethod response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void RemoteObject_InvokeMethod_ProxyToResponder::Run(
    RemoteInvocationResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_InvokeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_InvokeMethod_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::RemoteInvocationResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::InvokeMethodCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RemoteObject_InvokeMethod_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RemoteObject_InvokeMethod_ResponseParams_Data* params =
      reinterpret_cast<internal::RemoteObject_InvokeMethod_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RemoteInvocationResultPtr p_result{};
  RemoteObject_InvokeMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RemoteObject::InvokeMethod response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool RemoteObjectStubDispatch::Accept(
    RemoteObject* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::HasMethod",
               "message", message->name());
#endif
      break;
    }
    case internal::kRemoteObject_GetMethods_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::GetMethods",
               "message", message->name());
#endif
      break;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::InvokeMethod",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool RemoteObjectStubDispatch::AcceptWithResponder(
    RemoteObject* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::HasMethod",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RemoteObject_HasMethod_Params_Data* params =
          reinterpret_cast<
              internal::RemoteObject_HasMethod_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      RemoteObject_HasMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemoteObject::HasMethod deserializer");
        return false;
      }
      RemoteObject::HasMethodCallback callback =
          RemoteObject_HasMethod_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HasMethod(
std::move(p_name), std::move(callback));
      return true;
    }
    case internal::kRemoteObject_GetMethods_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::GetMethods",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RemoteObject_GetMethods_Params_Data* params =
          reinterpret_cast<
              internal::RemoteObject_GetMethods_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RemoteObject_GetMethods_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemoteObject::GetMethods deserializer");
        return false;
      }
      RemoteObject::GetMethodsCallback callback =
          RemoteObject_GetMethods_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetMethods(std::move(callback));
      return true;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::RemoteObject::InvokeMethod",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RemoteObject_InvokeMethod_Params_Data* params =
          reinterpret_cast<
              internal::RemoteObject_InvokeMethod_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      std::vector<RemoteInvocationArgumentPtr> p_arguments{};
      RemoteObject_InvokeMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadArguments(&p_arguments))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemoteObject::InvokeMethod deserializer");
        return false;
      }
      RemoteObject::InvokeMethodCallback callback =
          RemoteObject_InvokeMethod_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InvokeMethod(
std::move(p_name), 
std::move(p_arguments), std::move(callback));
      return true;
    }
  }
  return false;
}

bool RemoteObjectRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemoteObject RequestValidator");

  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_HasMethod_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_GetMethods_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_GetMethods_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_InvokeMethod_Params_Data>(
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

bool RemoteObjectResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemoteObject ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_HasMethod_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_GetMethods_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_GetMethods_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_InvokeMethod_ResponseParams_Data>(
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
void RemoteObjectInterceptorForTesting::HasMethod(const std::string& name, HasMethodCallback callback) {
  GetForwardingInterface()->HasMethod(std::move(name), std::move(callback));
}
void RemoteObjectInterceptorForTesting::GetMethods(GetMethodsCallback callback) {
  GetForwardingInterface()->GetMethods(std::move(callback));
}
void RemoteObjectInterceptorForTesting::InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) {
  GetForwardingInterface()->InvokeMethod(std::move(name), std::move(arguments), std::move(callback));
}
RemoteObjectAsyncWaiter::RemoteObjectAsyncWaiter(
    RemoteObject* proxy) : proxy_(proxy) {}

RemoteObjectAsyncWaiter::~RemoteObjectAsyncWaiter() = default;

void RemoteObjectAsyncWaiter::HasMethod(
    const std::string& name, bool* out_method_exists) {
  base::RunLoop loop;
  proxy_->HasMethod(std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_method_exists
,
             bool method_exists) {*out_method_exists = std::move(method_exists);
            loop->Quit();
          },
          &loop,
          out_method_exists));
  loop.Run();
}
void RemoteObjectAsyncWaiter::GetMethods(
    std::vector<std::string>* out_method_names) {
  base::RunLoop loop;
  proxy_->GetMethods(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::string>* out_method_names
,
             const std::vector<std::string>& method_names) {*out_method_names = std::move(method_names);
            loop->Quit();
          },
          &loop,
          out_method_names));
  loop.Run();
}
void RemoteObjectAsyncWaiter::InvokeMethod(
    const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->InvokeMethod(std::move(name),std::move(arguments),
      base::BindOnce(
          [](base::RunLoop* loop,
             RemoteInvocationResultPtr* out_result
,
             RemoteInvocationResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::RemoteInvocationResult::DataView, ::blink::mojom::RemoteInvocationResultPtr>::Read(
    ::blink::mojom::RemoteInvocationResult::DataView input,
    ::blink::mojom::RemoteInvocationResultPtr* output) {
  bool success = true;
  ::blink::mojom::RemoteInvocationResultPtr result(::blink::mojom::RemoteInvocationResult::New());
  
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::RemoteInvocationArgument::DataView, ::blink::mojom::RemoteInvocationArgumentPtr>::Read(
    ::blink::mojom::RemoteInvocationArgument::DataView input,
    ::blink::mojom::RemoteInvocationArgumentPtr* output) {
  using UnionType = ::blink::mojom::RemoteInvocationArgument;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::NUMBER_VALUE: {
      *output = UnionType::NewNumberValue(input.number_value());
      break;
    }
    case Tag::BOOLEAN_VALUE: {
      *output = UnionType::NewBooleanValue(input.boolean_value());
      break;
    }
    case Tag::STRING_VALUE: {
      base::string16 result_string_value;
      if (!input.ReadStringValue(&result_string_value))
        return false;

      *output = UnionType::NewStringValue(
          std::move(result_string_value));
      break;
    }
    case Tag::SINGLETON_VALUE: {
      ::blink::mojom::SingletonJavaScriptValue result_singleton_value;
      if (!input.ReadSingletonValue(&result_singleton_value))
        return false;

      *output = UnionType::NewSingletonValue(result_singleton_value);
      break;
    }
    case Tag::ARRAY_VALUE: {
      std::vector<::blink::mojom::RemoteInvocationArgumentPtr> result_array_value;
      if (!input.ReadArrayValue(&result_array_value))
        return false;

      *output = UnionType::NewArrayValue(
          std::move(result_array_value));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::RemoteInvocationResultValue::DataView, ::blink::mojom::RemoteInvocationResultValuePtr>::Read(
    ::blink::mojom::RemoteInvocationResultValue::DataView input,
    ::blink::mojom::RemoteInvocationResultValuePtr* output) {
  using UnionType = ::blink::mojom::RemoteInvocationResultValue;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::NUMBER_VALUE: {
      *output = UnionType::NewNumberValue(input.number_value());
      break;
    }
    case Tag::BOOLEAN_VALUE: {
      *output = UnionType::NewBooleanValue(input.boolean_value());
      break;
    }
    case Tag::STRING_VALUE: {
      base::string16 result_string_value;
      if (!input.ReadStringValue(&result_string_value))
        return false;

      *output = UnionType::NewStringValue(
          std::move(result_string_value));
      break;
    }
    case Tag::SINGLETON_VALUE: {
      ::blink::mojom::SingletonJavaScriptValue result_singleton_value;
      if (!input.ReadSingletonValue(&result_singleton_value))
        return false;

      *output = UnionType::NewSingletonValue(result_singleton_value);
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif