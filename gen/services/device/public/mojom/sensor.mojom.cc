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

#include "services/device/public/mojom/sensor.mojom.h"

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

#include "services/device/public/mojom/sensor.mojom-shared-message-ids.h"
#include "services/device/public/cpp/generic_sensor/sensor_mojom_traits.h"
namespace device {
namespace mojom {
SensorConfiguration::SensorConfiguration()
    : frequency() {}

SensorConfiguration::SensorConfiguration(
    double frequency_in)
    : frequency(std::move(frequency_in)) {}

SensorConfiguration::~SensorConfiguration() = default;

bool SensorConfiguration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Sensor::Name_[] = "device.mojom.Sensor";

class Sensor_GetDefaultConfiguration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Sensor_GetDefaultConfiguration_ForwardToCallback(
      Sensor::GetDefaultConfigurationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Sensor::GetDefaultConfigurationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Sensor_GetDefaultConfiguration_ForwardToCallback);
};

class Sensor_AddConfiguration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Sensor_AddConfiguration_ForwardToCallback(
      Sensor::AddConfigurationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Sensor::AddConfigurationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Sensor_AddConfiguration_ForwardToCallback);
};

SensorProxy::SensorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SensorProxy::GetDefaultConfiguration(
    GetDefaultConfigurationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::Sensor::GetDefaultConfiguration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_GetDefaultConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_GetDefaultConfiguration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Sensor_GetDefaultConfiguration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SensorProxy::AddConfiguration(
    const device::PlatformSensorConfiguration& in_configuration, AddConfigurationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::Sensor::AddConfiguration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_AddConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_AddConfiguration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->configuration)::BaseType::BufferWriter
      configuration_writer;
  mojo::internal::Serialize<::device::mojom::SensorConfigurationDataView>(
      in_configuration, buffer, &configuration_writer, &serialization_context);
  params->configuration.Set(
      configuration_writer.is_null() ? nullptr : configuration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->configuration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null configuration in Sensor.AddConfiguration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Sensor_AddConfiguration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SensorProxy::RemoveConfiguration(
    const device::PlatformSensorConfiguration& in_configuration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::Sensor::RemoveConfiguration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_RemoveConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_RemoveConfiguration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->configuration)::BaseType::BufferWriter
      configuration_writer;
  mojo::internal::Serialize<::device::mojom::SensorConfigurationDataView>(
      in_configuration, buffer, &configuration_writer, &serialization_context);
  params->configuration.Set(
      configuration_writer.is_null() ? nullptr : configuration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->configuration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null configuration in Sensor.RemoveConfiguration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SensorProxy::Suspend(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::Sensor::Suspend");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_Suspend_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_Suspend_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SensorProxy::Resume(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::Sensor::Resume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_Resume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_Resume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SensorProxy::ConfigureReadingChangeNotifications(
    bool in_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::Sensor::ConfigureReadingChangeNotifications");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_ConfigureReadingChangeNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_ConfigureReadingChangeNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Sensor_GetDefaultConfiguration_ProxyToResponder {
 public:
  static Sensor::GetDefaultConfigurationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Sensor_GetDefaultConfiguration_ProxyToResponder> proxy(
        new Sensor_GetDefaultConfiguration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Sensor_GetDefaultConfiguration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Sensor_GetDefaultConfiguration_ProxyToResponder() {
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
  Sensor_GetDefaultConfiguration_ProxyToResponder(
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
        << "Sensor::GetDefaultConfigurationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const device::PlatformSensorConfiguration& in_configuration);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Sensor_GetDefaultConfiguration_ProxyToResponder);
};

bool Sensor_GetDefaultConfiguration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::Sensor::GetDefaultConfigurationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Sensor_GetDefaultConfiguration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Sensor_GetDefaultConfiguration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  device::PlatformSensorConfiguration p_configuration{};
  Sensor_GetDefaultConfiguration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadConfiguration(&p_configuration))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Sensor::GetDefaultConfiguration response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_configuration));
  return true;
}

void Sensor_GetDefaultConfiguration_ProxyToResponder::Run(
    const device::PlatformSensorConfiguration& in_configuration) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_GetDefaultConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_GetDefaultConfiguration_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->configuration)::BaseType::BufferWriter
      configuration_writer;
  mojo::internal::Serialize<::device::mojom::SensorConfigurationDataView>(
      in_configuration, buffer, &configuration_writer, &serialization_context);
  params->configuration.Set(
      configuration_writer.is_null() ? nullptr : configuration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->configuration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null configuration in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::GetDefaultConfigurationCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Sensor_AddConfiguration_ProxyToResponder {
 public:
  static Sensor::AddConfigurationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Sensor_AddConfiguration_ProxyToResponder> proxy(
        new Sensor_AddConfiguration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Sensor_AddConfiguration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Sensor_AddConfiguration_ProxyToResponder() {
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
  Sensor_AddConfiguration_ProxyToResponder(
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
        << "Sensor::AddConfigurationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Sensor_AddConfiguration_ProxyToResponder);
};

bool Sensor_AddConfiguration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "device::mojom::Sensor::AddConfigurationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Sensor_AddConfiguration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Sensor_AddConfiguration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Sensor_AddConfiguration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Sensor::AddConfiguration response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Sensor_AddConfiguration_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensor_AddConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Sensor_AddConfiguration_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::AddConfigurationCallback",
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
bool SensorStubDispatch::Accept(
    Sensor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSensor_GetDefaultConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::GetDefaultConfiguration",
               "message", message->name());
#endif
      break;
    }
    case internal::kSensor_AddConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::AddConfiguration",
               "message", message->name());
#endif
      break;
    }
    case internal::kSensor_RemoveConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::RemoveConfiguration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Sensor_RemoveConfiguration_Params_Data* params =
          reinterpret_cast<internal::Sensor_RemoveConfiguration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      device::PlatformSensorConfiguration p_configuration{};
      Sensor_RemoveConfiguration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfiguration(&p_configuration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Sensor::RemoveConfiguration deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveConfiguration(
std::move(p_configuration));
      return true;
    }
    case internal::kSensor_Suspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::Suspend",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Sensor_Suspend_Params_Data* params =
          reinterpret_cast<internal::Sensor_Suspend_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Sensor_Suspend_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Sensor::Suspend deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Suspend();
      return true;
    }
    case internal::kSensor_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::Resume",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Sensor_Resume_Params_Data* params =
          reinterpret_cast<internal::Sensor_Resume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Sensor_Resume_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Sensor::Resume deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Resume();
      return true;
    }
    case internal::kSensor_ConfigureReadingChangeNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::ConfigureReadingChangeNotifications",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Sensor_ConfigureReadingChangeNotifications_Params_Data* params =
          reinterpret_cast<internal::Sensor_ConfigureReadingChangeNotifications_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enabled{};
      Sensor_ConfigureReadingChangeNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled = input_data_view.enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Sensor::ConfigureReadingChangeNotifications deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConfigureReadingChangeNotifications(
std::move(p_enabled));
      return true;
    }
  }
  return false;
}

// static
bool SensorStubDispatch::AcceptWithResponder(
    Sensor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSensor_GetDefaultConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::GetDefaultConfiguration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Sensor_GetDefaultConfiguration_Params_Data* params =
          reinterpret_cast<
              internal::Sensor_GetDefaultConfiguration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Sensor_GetDefaultConfiguration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Sensor::GetDefaultConfiguration deserializer");
        return false;
      }
      Sensor::GetDefaultConfigurationCallback callback =
          Sensor_GetDefaultConfiguration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDefaultConfiguration(std::move(callback));
      return true;
    }
    case internal::kSensor_AddConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::AddConfiguration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Sensor_AddConfiguration_Params_Data* params =
          reinterpret_cast<
              internal::Sensor_AddConfiguration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      device::PlatformSensorConfiguration p_configuration{};
      Sensor_AddConfiguration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfiguration(&p_configuration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Sensor::AddConfiguration deserializer");
        return false;
      }
      Sensor::AddConfigurationCallback callback =
          Sensor_AddConfiguration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddConfiguration(
std::move(p_configuration), std::move(callback));
      return true;
    }
    case internal::kSensor_RemoveConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::RemoveConfiguration",
               "message", message->name());
#endif
      break;
    }
    case internal::kSensor_Suspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::Suspend",
               "message", message->name());
#endif
      break;
    }
    case internal::kSensor_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::Resume",
               "message", message->name());
#endif
      break;
    }
    case internal::kSensor_ConfigureReadingChangeNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::Sensor::ConfigureReadingChangeNotifications",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SensorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Sensor RequestValidator");

  switch (message->header()->name) {
    case internal::kSensor_GetDefaultConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_GetDefaultConfiguration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensor_AddConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_AddConfiguration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensor_RemoveConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_RemoveConfiguration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensor_Suspend_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_Suspend_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensor_Resume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_Resume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensor_ConfigureReadingChangeNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_ConfigureReadingChangeNotifications_Params_Data>(
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

bool SensorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Sensor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSensor_GetDefaultConfiguration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_GetDefaultConfiguration_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensor_AddConfiguration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Sensor_AddConfiguration_ResponseParams_Data>(
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
void SensorInterceptorForTesting::GetDefaultConfiguration(GetDefaultConfigurationCallback callback) {
  GetForwardingInterface()->GetDefaultConfiguration(std::move(callback));
}
void SensorInterceptorForTesting::AddConfiguration(const device::PlatformSensorConfiguration& configuration, AddConfigurationCallback callback) {
  GetForwardingInterface()->AddConfiguration(std::move(configuration), std::move(callback));
}
void SensorInterceptorForTesting::RemoveConfiguration(const device::PlatformSensorConfiguration& configuration) {
  GetForwardingInterface()->RemoveConfiguration(std::move(configuration));
}
void SensorInterceptorForTesting::Suspend() {
  GetForwardingInterface()->Suspend();
}
void SensorInterceptorForTesting::Resume() {
  GetForwardingInterface()->Resume();
}
void SensorInterceptorForTesting::ConfigureReadingChangeNotifications(bool enabled) {
  GetForwardingInterface()->ConfigureReadingChangeNotifications(std::move(enabled));
}
SensorAsyncWaiter::SensorAsyncWaiter(
    Sensor* proxy) : proxy_(proxy) {}

SensorAsyncWaiter::~SensorAsyncWaiter() = default;

void SensorAsyncWaiter::GetDefaultConfiguration(
    device::PlatformSensorConfiguration* out_configuration) {
  base::RunLoop loop;
  proxy_->GetDefaultConfiguration(
      base::BindOnce(
          [](base::RunLoop* loop,
             device::PlatformSensorConfiguration* out_configuration
,
             const device::PlatformSensorConfiguration& configuration) {*out_configuration = std::move(configuration);
            loop->Quit();
          },
          &loop,
          out_configuration));
  loop.Run();
}
void SensorAsyncWaiter::AddConfiguration(
    const device::PlatformSensorConfiguration& configuration, bool* out_success) {
  base::RunLoop loop;
  proxy_->AddConfiguration(std::move(configuration),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}

const char SensorClient::Name_[] = "device.mojom.SensorClient";

SensorClientProxy::SensorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SensorClientProxy::RaiseError(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SensorClient::RaiseError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensorClient_RaiseError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SensorClient_RaiseError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SensorClientProxy::SensorReadingChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::SensorClient::SensorReadingChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensorClient_SensorReadingChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SensorClient_SensorReadingChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SensorClientStubDispatch::Accept(
    SensorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSensorClient_RaiseError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SensorClient::RaiseError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SensorClient_RaiseError_Params_Data* params =
          reinterpret_cast<internal::SensorClient_RaiseError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SensorClient_RaiseError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SensorClient::RaiseError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RaiseError();
      return true;
    }
    case internal::kSensorClient_SensorReadingChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SensorClient::SensorReadingChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SensorClient_SensorReadingChanged_Params_Data* params =
          reinterpret_cast<internal::SensorClient_SensorReadingChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SensorClient_SensorReadingChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SensorClient::SensorReadingChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SensorReadingChanged();
      return true;
    }
  }
  return false;
}

// static
bool SensorClientStubDispatch::AcceptWithResponder(
    SensorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSensorClient_RaiseError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SensorClient::RaiseError",
               "message", message->name());
#endif
      break;
    }
    case internal::kSensorClient_SensorReadingChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::SensorClient::SensorReadingChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SensorClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SensorClient RequestValidator");

  switch (message->header()->name) {
    case internal::kSensorClient_RaiseError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SensorClient_RaiseError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSensorClient_SensorReadingChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SensorClient_SensorReadingChanged_Params_Data>(
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

void SensorClientInterceptorForTesting::RaiseError() {
  GetForwardingInterface()->RaiseError();
}
void SensorClientInterceptorForTesting::SensorReadingChanged() {
  GetForwardingInterface()->SensorReadingChanged();
}
SensorClientAsyncWaiter::SensorClientAsyncWaiter(
    SensorClient* proxy) : proxy_(proxy) {}

SensorClientAsyncWaiter::~SensorClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::SensorConfiguration::DataView, ::device::mojom::SensorConfigurationPtr>::Read(
    ::device::mojom::SensorConfiguration::DataView input,
    ::device::mojom::SensorConfigurationPtr* output) {
  bool success = true;
  ::device::mojom::SensorConfigurationPtr result(::device::mojom::SensorConfiguration::New());
  
      result->frequency = input.frequency();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif