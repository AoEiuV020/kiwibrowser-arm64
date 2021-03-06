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

#include "content/public/common/resource_usage_reporter.mojom.h"

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

#include "content/public/common/resource_usage_reporter.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
ResourceTypeStat::ResourceTypeStat()
    : count(0ULL),
      size(0ULL),
      live_size(0ULL),
      decoded_size(0ULL) {}

ResourceTypeStat::ResourceTypeStat(
    uint64_t count_in,
    uint64_t size_in,
    uint64_t live_size_in,
    uint64_t decoded_size_in)
    : count(std::move(count_in)),
      size(std::move(size_in)),
      live_size(std::move(live_size_in)),
      decoded_size(std::move(decoded_size_in)) {}

ResourceTypeStat::~ResourceTypeStat() = default;
size_t ResourceTypeStat::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->count);
  seed = mojo::internal::Hash(seed, this->size);
  seed = mojo::internal::Hash(seed, this->live_size);
  seed = mojo::internal::Hash(seed, this->decoded_size);
  return seed;
}

bool ResourceTypeStat::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ResourceTypeStats::ResourceTypeStats()
    : images(),
      css_style_sheets(),
      scripts(),
      xsl_style_sheets(),
      fonts(),
      other() {}

ResourceTypeStats::ResourceTypeStats(
    ResourceTypeStatPtr images_in,
    ResourceTypeStatPtr css_style_sheets_in,
    ResourceTypeStatPtr scripts_in,
    ResourceTypeStatPtr xsl_style_sheets_in,
    ResourceTypeStatPtr fonts_in,
    ResourceTypeStatPtr other_in)
    : images(std::move(images_in)),
      css_style_sheets(std::move(css_style_sheets_in)),
      scripts(std::move(scripts_in)),
      xsl_style_sheets(std::move(xsl_style_sheets_in)),
      fonts(std::move(fonts_in)),
      other(std::move(other_in)) {}

ResourceTypeStats::~ResourceTypeStats() = default;
size_t ResourceTypeStats::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->images);
  seed = mojo::internal::Hash(seed, this->css_style_sheets);
  seed = mojo::internal::Hash(seed, this->scripts);
  seed = mojo::internal::Hash(seed, this->xsl_style_sheets);
  seed = mojo::internal::Hash(seed, this->fonts);
  seed = mojo::internal::Hash(seed, this->other);
  return seed;
}

bool ResourceTypeStats::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ResourceUsageData::ResourceUsageData()
    : reports_v8_stats(false),
      v8_bytes_allocated(0ULL),
      v8_bytes_used(0ULL),
      web_cache_stats() {}

ResourceUsageData::ResourceUsageData(
    bool reports_v8_stats_in,
    uint64_t v8_bytes_allocated_in,
    uint64_t v8_bytes_used_in,
    ResourceTypeStatsPtr web_cache_stats_in)
    : reports_v8_stats(std::move(reports_v8_stats_in)),
      v8_bytes_allocated(std::move(v8_bytes_allocated_in)),
      v8_bytes_used(std::move(v8_bytes_used_in)),
      web_cache_stats(std::move(web_cache_stats_in)) {}

ResourceUsageData::~ResourceUsageData() = default;

bool ResourceUsageData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ResourceUsageReporter::Name_[] = "content.mojom.ResourceUsageReporter";

class ResourceUsageReporter_GetUsageData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ResourceUsageReporter_GetUsageData_ForwardToCallback(
      ResourceUsageReporter::GetUsageDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ResourceUsageReporter::GetUsageDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporter_GetUsageData_ForwardToCallback);
};

ResourceUsageReporterProxy::ResourceUsageReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ResourceUsageReporterProxy::GetUsageData(
    GetUsageDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ResourceUsageReporter::GetUsageData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResourceUsageReporter_GetUsageData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ResourceUsageReporter_GetUsageData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ResourceUsageReporter_GetUsageData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ResourceUsageReporter_GetUsageData_ProxyToResponder {
 public:
  static ResourceUsageReporter::GetUsageDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ResourceUsageReporter_GetUsageData_ProxyToResponder> proxy(
        new ResourceUsageReporter_GetUsageData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ResourceUsageReporter_GetUsageData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ResourceUsageReporter_GetUsageData_ProxyToResponder() {
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
  ResourceUsageReporter_GetUsageData_ProxyToResponder(
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
        << "ResourceUsageReporter::GetUsageDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ResourceUsageDataPtr in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporter_GetUsageData_ProxyToResponder);
};

bool ResourceUsageReporter_GetUsageData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ResourceUsageReporter::GetUsageDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ResourceUsageDataPtr p_data{};
  ResourceUsageReporter_GetUsageData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ResourceUsageReporter::GetUsageData response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data));
  return true;
}

void ResourceUsageReporter_GetUsageData_ProxyToResponder::Run(
    ResourceUsageDataPtr in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResourceUsageReporter_GetUsageData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::content::mojom::ResourceUsageDataDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ResourceUsageReporter::GetUsageDataCallback",
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
bool ResourceUsageReporterStubDispatch::Accept(
    ResourceUsageReporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ResourceUsageReporter::GetUsageData",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ResourceUsageReporterStubDispatch::AcceptWithResponder(
    ResourceUsageReporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ResourceUsageReporter::GetUsageData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ResourceUsageReporter_GetUsageData_Params_Data* params =
          reinterpret_cast<
              internal::ResourceUsageReporter_GetUsageData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ResourceUsageReporter_GetUsageData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ResourceUsageReporter::GetUsageData deserializer");
        return false;
      }
      ResourceUsageReporter::GetUsageDataCallback callback =
          ResourceUsageReporter_GetUsageData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetUsageData(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ResourceUsageReporterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ResourceUsageReporter RequestValidator");

  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResourceUsageReporter_GetUsageData_Params_Data>(
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

bool ResourceUsageReporterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ResourceUsageReporter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kResourceUsageReporter_GetUsageData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResourceUsageReporter_GetUsageData_ResponseParams_Data>(
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
void ResourceUsageReporterInterceptorForTesting::GetUsageData(GetUsageDataCallback callback) {
  GetForwardingInterface()->GetUsageData(std::move(callback));
}
ResourceUsageReporterAsyncWaiter::ResourceUsageReporterAsyncWaiter(
    ResourceUsageReporter* proxy) : proxy_(proxy) {}

ResourceUsageReporterAsyncWaiter::~ResourceUsageReporterAsyncWaiter() = default;

void ResourceUsageReporterAsyncWaiter::GetUsageData(
    ResourceUsageDataPtr* out_data) {
  base::RunLoop loop;
  proxy_->GetUsageData(
      base::BindOnce(
          [](base::RunLoop* loop,
             ResourceUsageDataPtr* out_data
,
             ResourceUsageDataPtr data) {*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_data));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::ResourceTypeStat::DataView, ::content::mojom::ResourceTypeStatPtr>::Read(
    ::content::mojom::ResourceTypeStat::DataView input,
    ::content::mojom::ResourceTypeStatPtr* output) {
  bool success = true;
  ::content::mojom::ResourceTypeStatPtr result(::content::mojom::ResourceTypeStat::New());
  
      result->count = input.count();
      result->size = input.size();
      result->live_size = input.live_size();
      result->decoded_size = input.decoded_size();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ResourceTypeStats::DataView, ::content::mojom::ResourceTypeStatsPtr>::Read(
    ::content::mojom::ResourceTypeStats::DataView input,
    ::content::mojom::ResourceTypeStatsPtr* output) {
  bool success = true;
  ::content::mojom::ResourceTypeStatsPtr result(::content::mojom::ResourceTypeStats::New());
  
      if (!input.ReadImages(&result->images))
        success = false;
      if (!input.ReadCssStyleSheets(&result->css_style_sheets))
        success = false;
      if (!input.ReadScripts(&result->scripts))
        success = false;
      if (!input.ReadXslStyleSheets(&result->xsl_style_sheets))
        success = false;
      if (!input.ReadFonts(&result->fonts))
        success = false;
      if (!input.ReadOther(&result->other))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ResourceUsageData::DataView, ::content::mojom::ResourceUsageDataPtr>::Read(
    ::content::mojom::ResourceUsageData::DataView input,
    ::content::mojom::ResourceUsageDataPtr* output) {
  bool success = true;
  ::content::mojom::ResourceUsageDataPtr result(::content::mojom::ResourceUsageData::New());
  
      result->reports_v8_stats = input.reports_v8_stats();
      result->v8_bytes_allocated = input.v8_bytes_allocated();
      result->v8_bytes_used = input.v8_bytes_used();
      if (!input.ReadWebCacheStats(&result->web_cache_stats))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif