// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace proxy_resolver {
namespace mojom {

namespace internal {


constexpr uint32_t kProxyResolver_GetProxyForUrl_Name = 0;
constexpr uint32_t kProxyResolverRequestClient_ReportResult_Name = 0;
constexpr uint32_t kProxyResolverRequestClient_Alert_Name = 1;
constexpr uint32_t kProxyResolverRequestClient_OnError_Name = 2;
constexpr uint32_t kProxyResolverRequestClient_ResolveDns_Name = 3;
constexpr uint32_t kProxyResolverFactory_CreateResolver_Name = 0;
constexpr uint32_t kProxyResolverFactoryRequestClient_ReportResult_Name = 0;
constexpr uint32_t kProxyResolverFactoryRequestClient_Alert_Name = 1;
constexpr uint32_t kProxyResolverFactoryRequestClient_OnError_Name = 2;
constexpr uint32_t kProxyResolverFactoryRequestClient_ResolveDns_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_