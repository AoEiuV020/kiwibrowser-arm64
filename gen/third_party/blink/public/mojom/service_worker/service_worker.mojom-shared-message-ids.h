// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kServiceWorkerHost_SetCachedMetadata_Name = 0;
constexpr uint32_t kServiceWorkerHost_ClearCachedMetadata_Name = 1;
constexpr uint32_t kServiceWorkerHost_GetClients_Name = 2;
constexpr uint32_t kServiceWorkerHost_GetClient_Name = 3;
constexpr uint32_t kServiceWorkerHost_OpenNewTab_Name = 4;
constexpr uint32_t kServiceWorkerHost_OpenPaymentHandlerWindow_Name = 5;
constexpr uint32_t kServiceWorkerHost_PostMessageToClient_Name = 6;
constexpr uint32_t kServiceWorkerHost_FocusClient_Name = 7;
constexpr uint32_t kServiceWorkerHost_NavigateClient_Name = 8;
constexpr uint32_t kServiceWorkerHost_SkipWaiting_Name = 9;
constexpr uint32_t kServiceWorkerHost_ClaimClients_Name = 10;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_