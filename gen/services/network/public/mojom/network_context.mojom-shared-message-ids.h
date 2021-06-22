// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kNetLogExporter_Start_Name = 0;
constexpr uint32_t kNetLogExporter_Stop_Name = 1;
constexpr uint32_t kNetworkContext_CreateURLLoaderFactory_Name = 0;
constexpr uint32_t kNetworkContext_GetCookieManager_Name = 1;
constexpr uint32_t kNetworkContext_GetRestrictedCookieManager_Name = 2;
constexpr uint32_t kNetworkContext_ClearNetworkingHistorySince_Name = 3;
constexpr uint32_t kNetworkContext_ClearHttpCache_Name = 4;
constexpr uint32_t kNetworkContext_ClearChannelIds_Name = 5;
constexpr uint32_t kNetworkContext_ClearHttpAuthCache_Name = 6;
constexpr uint32_t kNetworkContext_ClearReportingCacheReports_Name = 7;
constexpr uint32_t kNetworkContext_ClearReportingCacheClients_Name = 8;
constexpr uint32_t kNetworkContext_ClearNetworkErrorLogging_Name = 9;
constexpr uint32_t kNetworkContext_SetNetworkConditions_Name = 10;
constexpr uint32_t kNetworkContext_SetAcceptLanguage_Name = 11;
constexpr uint32_t kNetworkContext_SetCTPolicy_Name = 12;
constexpr uint32_t kNetworkContext_CreateUDPSocket_Name = 13;
constexpr uint32_t kNetworkContext_CreateTCPServerSocket_Name = 14;
constexpr uint32_t kNetworkContext_CreateTCPConnectedSocket_Name = 15;
constexpr uint32_t kNetworkContext_CreateWebSocket_Name = 16;
constexpr uint32_t kNetworkContext_CreateNetLogExporter_Name = 17;
constexpr uint32_t kNetworkContext_BlockThirdPartyCookies_Name = 18;
constexpr uint32_t kNetworkContext_AddHSTSForTesting_Name = 19;
constexpr uint32_t kNetworkContext_SetFailingHttpTransactionForTesting_Name = 20;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_