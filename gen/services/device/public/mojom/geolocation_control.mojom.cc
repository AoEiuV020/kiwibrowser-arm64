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

#include "services/device/public/mojom/geolocation_control.mojom.h"

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

#include "services/device/public/mojom/geolocation_control.mojom-shared-message-ids.h"
namespace device {
namespace mojom {
const char GeolocationControl::Name_[] = "device.mojom.GeolocationControl";

GeolocationControlProxy::GeolocationControlProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GeolocationControlProxy::UserDidOptIntoLocationServices(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::GeolocationControl::UserDidOptIntoLocationServices");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGeolocationControl_UserDidOptIntoLocationServices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data::BufferWriter
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
bool GeolocationControlStubDispatch::Accept(
    GeolocationControl* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::GeolocationControl::UserDidOptIntoLocationServices",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data* params =
          reinterpret_cast<internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GeolocationControl_UserDidOptIntoLocationServices_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GeolocationControl::UserDidOptIntoLocationServices deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UserDidOptIntoLocationServices();
      return true;
    }
  }
  return false;
}

// static
bool GeolocationControlStubDispatch::AcceptWithResponder(
    GeolocationControl* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::GeolocationControl::UserDidOptIntoLocationServices",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool GeolocationControlRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GeolocationControl RequestValidator");

  switch (message->header()->name) {
    case internal::kGeolocationControl_UserDidOptIntoLocationServices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GeolocationControl_UserDidOptIntoLocationServices_Params_Data>(
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

void GeolocationControlInterceptorForTesting::UserDidOptIntoLocationServices() {
  GetForwardingInterface()->UserDidOptIntoLocationServices();
}
GeolocationControlAsyncWaiter::GeolocationControlAsyncWaiter(
    GeolocationControl* proxy) : proxy_(proxy) {}

GeolocationControlAsyncWaiter::~GeolocationControlAsyncWaiter() = default;


}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif