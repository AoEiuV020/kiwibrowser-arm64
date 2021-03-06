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

#include "content/public/common/resource_load_info.mojom.h"

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

#include "content/public/common/resource_load_info.mojom-shared-message-ids.h"
#include "content/public/common/load_timing_info_struct_traits.h"
#include "content/public/common/resource_type_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
CommonNetworkInfo::CommonNetworkInfo()
    : network_accessed(),
      always_access_network(),
      ip_port_pair() {}

CommonNetworkInfo::CommonNetworkInfo(
    bool network_accessed_in,
    bool always_access_network_in,
    const base::Optional<net::HostPortPair>& ip_port_pair_in)
    : network_accessed(std::move(network_accessed_in)),
      always_access_network(std::move(always_access_network_in)),
      ip_port_pair(std::move(ip_port_pair_in)) {}

CommonNetworkInfo::~CommonNetworkInfo() = default;

bool CommonNetworkInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RedirectInfo::RedirectInfo()
    : url(),
      network_info() {}

RedirectInfo::RedirectInfo(
    const GURL& url_in,
    CommonNetworkInfoPtr network_info_in)
    : url(std::move(url_in)),
      network_info(std::move(network_info_in)) {}

RedirectInfo::~RedirectInfo() = default;

bool RedirectInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ResourceLoadInfo::ResourceLoadInfo()
    : request_id(),
      url(),
      referrer(),
      original_url(),
      method(),
      resource_type(),
      mime_type(),
      was_cached(),
      network_info(),
      net_error(),
      load_timing_info(),
      raw_body_bytes(),
      total_received_bytes(),
      redirect_info_chain() {}

ResourceLoadInfo::ResourceLoadInfo(
    int64_t request_id_in,
    const GURL& url_in,
    const GURL& referrer_in,
    const GURL& original_url_in,
    const std::string& method_in,
    content::ResourceType resource_type_in,
    const std::string& mime_type_in,
    bool was_cached_in,
    CommonNetworkInfoPtr network_info_in,
    int32_t net_error_in,
    const net::LoadTimingInfo& load_timing_info_in,
    int64_t raw_body_bytes_in,
    int64_t total_received_bytes_in,
    std::vector<RedirectInfoPtr> redirect_info_chain_in)
    : request_id(std::move(request_id_in)),
      url(std::move(url_in)),
      referrer(std::move(referrer_in)),
      original_url(std::move(original_url_in)),
      method(std::move(method_in)),
      resource_type(std::move(resource_type_in)),
      mime_type(std::move(mime_type_in)),
      was_cached(std::move(was_cached_in)),
      network_info(std::move(network_info_in)),
      net_error(std::move(net_error_in)),
      load_timing_info(std::move(load_timing_info_in)),
      raw_body_bytes(std::move(raw_body_bytes_in)),
      total_received_bytes(std::move(total_received_bytes_in)),
      redirect_info_chain(std::move(redirect_info_chain_in)) {}

ResourceLoadInfo::~ResourceLoadInfo() = default;

bool ResourceLoadInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::CommonNetworkInfo::DataView, ::content::mojom::CommonNetworkInfoPtr>::Read(
    ::content::mojom::CommonNetworkInfo::DataView input,
    ::content::mojom::CommonNetworkInfoPtr* output) {
  bool success = true;
  ::content::mojom::CommonNetworkInfoPtr result(::content::mojom::CommonNetworkInfo::New());
  
      result->network_accessed = input.network_accessed();
      result->always_access_network = input.always_access_network();
      if (!input.ReadIpPortPair(&result->ip_port_pair))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::RedirectInfo::DataView, ::content::mojom::RedirectInfoPtr>::Read(
    ::content::mojom::RedirectInfo::DataView input,
    ::content::mojom::RedirectInfoPtr* output) {
  bool success = true;
  ::content::mojom::RedirectInfoPtr result(::content::mojom::RedirectInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadNetworkInfo(&result->network_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ResourceLoadInfo::DataView, ::content::mojom::ResourceLoadInfoPtr>::Read(
    ::content::mojom::ResourceLoadInfo::DataView input,
    ::content::mojom::ResourceLoadInfoPtr* output) {
  bool success = true;
  ::content::mojom::ResourceLoadInfoPtr result(::content::mojom::ResourceLoadInfo::New());
  
      result->request_id = input.request_id();
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadOriginalUrl(&result->original_url))
        success = false;
      if (!input.ReadMethod(&result->method))
        success = false;
      if (!input.ReadResourceType(&result->resource_type))
        success = false;
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      result->was_cached = input.was_cached();
      if (!input.ReadNetworkInfo(&result->network_info))
        success = false;
      result->net_error = input.net_error();
      if (!input.ReadLoadTimingInfo(&result->load_timing_info))
        success = false;
      result->raw_body_bytes = input.raw_body_bytes();
      result->total_received_bytes = input.total_received_bytes();
      if (!input.ReadRedirectInfoChain(&result->redirect_info_chain))
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