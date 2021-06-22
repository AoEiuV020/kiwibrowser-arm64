// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kServiceWorkerEventDispatcher_InitializeGlobalScope_Name = 0;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchInstallEvent_Name = 1;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchActivateEvent_Name = 2;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name = 3;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name = 4;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name = 5;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name = 6;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name = 7;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchFetchEvent_Name = 8;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name = 9;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name = 10;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchPushEvent_Name = 11;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchSyncEvent_Name = 12;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name = 13;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name = 14;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name = 15;
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name = 16;
constexpr uint32_t kServiceWorkerEventDispatcher_Ping_Name = 17;
constexpr uint32_t kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name = 18;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_MESSAGE_IDS_H_