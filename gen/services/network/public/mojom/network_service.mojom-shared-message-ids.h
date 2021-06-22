// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kSSLPrivateKey_Sign_Name = 0;
constexpr uint32_t kAuthChallengeResponder_OnAuthCredentials_Name = 0;
constexpr uint32_t kNetworkServiceClient_OnAuthRequired_Name = 0;
constexpr uint32_t kNetworkServiceClient_OnCertificateRequested_Name = 1;
constexpr uint32_t kNetworkServiceClient_OnSSLCertificateError_Name = 2;
constexpr uint32_t kNetworkService_SetClient_Name = 0;
constexpr uint32_t kNetworkService_CreateNetworkContext_Name = 1;
constexpr uint32_t kNetworkService_DisableQuic_Name = 2;
constexpr uint32_t kNetworkService_SetRawHeadersAccess_Name = 3;
constexpr uint32_t kNetworkService_GetNetworkChangeManager_Name = 4;
constexpr uint32_t kNetworkService_GetTotalNetworkUsages_Name = 5;
constexpr uint32_t kNetworkService_UpdateSignedTreeHead_Name = 6;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_