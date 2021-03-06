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

#include "services/shape_detection/public/mojom/facedetection.mojom.h"

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

#include "services/shape_detection/public/mojom/facedetection.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace shape_detection {
namespace mojom {
Landmark::Landmark()
    : locations(),
      type() {}

Landmark::Landmark(
    const std::vector<gfx::PointF>& locations_in,
    LandmarkType type_in)
    : locations(std::move(locations_in)),
      type(std::move(type_in)) {}

Landmark::~Landmark() = default;

bool Landmark::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FaceDetectionResult::FaceDetectionResult()
    : bounding_box(),
      landmarks() {}

FaceDetectionResult::FaceDetectionResult(
    const gfx::RectF& bounding_box_in,
    std::vector<LandmarkPtr> landmarks_in)
    : bounding_box(std::move(bounding_box_in)),
      landmarks(std::move(landmarks_in)) {}

FaceDetectionResult::~FaceDetectionResult() = default;

bool FaceDetectionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FaceDetectorOptions::FaceDetectorOptions()
    : max_detected_faces(),
      fast_mode() {}

FaceDetectorOptions::FaceDetectorOptions(
    uint32_t max_detected_faces_in,
    bool fast_mode_in)
    : max_detected_faces(std::move(max_detected_faces_in)),
      fast_mode(std::move(fast_mode_in)) {}

FaceDetectorOptions::~FaceDetectorOptions() = default;
size_t FaceDetectorOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->max_detected_faces);
  seed = mojo::internal::Hash(seed, this->fast_mode);
  return seed;
}

bool FaceDetectorOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FaceDetection::Name_[] = "shape_detection.mojom.FaceDetection";

class FaceDetection_Detect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FaceDetection_Detect_ForwardToCallback(
      FaceDetection::DetectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FaceDetection::DetectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FaceDetection_Detect_ForwardToCallback);
};

FaceDetectionProxy::FaceDetectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FaceDetectionProxy::Detect(
    const SkBitmap& in_bitmap_data, DetectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "shape_detection::mojom::FaceDetection::Detect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFaceDetection_Detect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::FaceDetection_Detect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bitmap_data)::BaseType::BufferWriter
      bitmap_data_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_bitmap_data, buffer, &bitmap_data_writer, &serialization_context);
  params->bitmap_data.Set(
      bitmap_data_writer.is_null() ? nullptr : bitmap_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bitmap_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bitmap_data in FaceDetection.Detect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FaceDetection_Detect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FaceDetection_Detect_ProxyToResponder {
 public:
  static FaceDetection::DetectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FaceDetection_Detect_ProxyToResponder> proxy(
        new FaceDetection_Detect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FaceDetection_Detect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FaceDetection_Detect_ProxyToResponder() {
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
  FaceDetection_Detect_ProxyToResponder(
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
        << "FaceDetection::DetectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<FaceDetectionResultPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FaceDetection_Detect_ProxyToResponder);
};

bool FaceDetection_Detect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "shape_detection::mojom::FaceDetection::DetectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FaceDetection_Detect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FaceDetection_Detect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<FaceDetectionResultPtr> p_results{};
  FaceDetection_Detect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FaceDetection::Detect response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void FaceDetection_Detect_ProxyToResponder::Run(
    std::vector<FaceDetectionResultPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFaceDetection_Detect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::shape_detection::mojom::internal::FaceDetection_Detect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::shape_detection::mojom::FaceDetectionResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::FaceDetection::DetectCallback",
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
bool FaceDetectionStubDispatch::Accept(
    FaceDetection* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFaceDetection_Detect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::FaceDetection::Detect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FaceDetectionStubDispatch::AcceptWithResponder(
    FaceDetection* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFaceDetection_Detect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)shape_detection::mojom::FaceDetection::Detect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FaceDetection_Detect_Params_Data* params =
          reinterpret_cast<
              internal::FaceDetection_Detect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SkBitmap p_bitmap_data{};
      FaceDetection_Detect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBitmapData(&p_bitmap_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FaceDetection::Detect deserializer");
        return false;
      }
      FaceDetection::DetectCallback callback =
          FaceDetection_Detect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Detect(
std::move(p_bitmap_data), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FaceDetectionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FaceDetection RequestValidator");

  switch (message->header()->name) {
    case internal::kFaceDetection_Detect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FaceDetection_Detect_Params_Data>(
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

bool FaceDetectionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FaceDetection ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFaceDetection_Detect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FaceDetection_Detect_ResponseParams_Data>(
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
void FaceDetectionInterceptorForTesting::Detect(const SkBitmap& bitmap_data, DetectCallback callback) {
  GetForwardingInterface()->Detect(std::move(bitmap_data), std::move(callback));
}
FaceDetectionAsyncWaiter::FaceDetectionAsyncWaiter(
    FaceDetection* proxy) : proxy_(proxy) {}

FaceDetectionAsyncWaiter::~FaceDetectionAsyncWaiter() = default;

void FaceDetectionAsyncWaiter::Detect(
    const SkBitmap& bitmap_data, std::vector<FaceDetectionResultPtr>* out_results) {
  base::RunLoop loop;
  proxy_->Detect(std::move(bitmap_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<FaceDetectionResultPtr>* out_results
,
             std::vector<FaceDetectionResultPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}

}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


// static
bool StructTraits<::shape_detection::mojom::Landmark::DataView, ::shape_detection::mojom::LandmarkPtr>::Read(
    ::shape_detection::mojom::Landmark::DataView input,
    ::shape_detection::mojom::LandmarkPtr* output) {
  bool success = true;
  ::shape_detection::mojom::LandmarkPtr result(::shape_detection::mojom::Landmark::New());
  
      if (!input.ReadLocations(&result->locations))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::shape_detection::mojom::FaceDetectionResult::DataView, ::shape_detection::mojom::FaceDetectionResultPtr>::Read(
    ::shape_detection::mojom::FaceDetectionResult::DataView input,
    ::shape_detection::mojom::FaceDetectionResultPtr* output) {
  bool success = true;
  ::shape_detection::mojom::FaceDetectionResultPtr result(::shape_detection::mojom::FaceDetectionResult::New());
  
      if (!input.ReadBoundingBox(&result->bounding_box))
        success = false;
      if (!input.ReadLandmarks(&result->landmarks))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::shape_detection::mojom::FaceDetectorOptions::DataView, ::shape_detection::mojom::FaceDetectorOptionsPtr>::Read(
    ::shape_detection::mojom::FaceDetectorOptions::DataView input,
    ::shape_detection::mojom::FaceDetectorOptionsPtr* output) {
  bool success = true;
  ::shape_detection::mojom::FaceDetectorOptionsPtr result(::shape_detection::mojom::FaceDetectorOptions::New());
  
      result->max_detected_faces = input.max_detected_faces();
      result->fast_mode = input.fast_mode();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif