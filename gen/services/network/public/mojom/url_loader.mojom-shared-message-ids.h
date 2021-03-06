// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kURLLoader_FollowRedirect_Name = 0;
constexpr uint32_t kURLLoader_ProceedWithResponse_Name = 1;
constexpr uint32_t kURLLoader_SetPriority_Name = 2;
constexpr uint32_t kURLLoader_PauseReadingBodyFromNet_Name = 3;
constexpr uint32_t kURLLoader_ResumeReadingBodyFromNet_Name = 4;
constexpr uint32_t kURLLoaderClient_OnReceiveResponse_Name = 0;
constexpr uint32_t kURLLoaderClient_OnReceiveRedirect_Name = 1;
constexpr uint32_t kURLLoaderClient_OnDataDownloaded_Name = 2;
constexpr uint32_t kURLLoaderClient_OnUploadProgress_Name = 3;
constexpr uint32_t kURLLoaderClient_OnReceiveCachedMetadata_Name = 4;
constexpr uint32_t kURLLoaderClient_OnTransferSizeUpdated_Name = 5;
constexpr uint32_t kURLLoaderClient_OnStartLoadingResponseBody_Name = 6;
constexpr uint32_t kURLLoaderClient_OnComplete_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_