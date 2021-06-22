// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kServiceWorkerRegistrationObjectHost_Update_Name = 0;
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Unregister_Name = 1;
constexpr uint32_t kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name = 2;
constexpr uint32_t kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name = 3;
constexpr uint32_t kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name = 4;
constexpr uint32_t kServiceWorkerRegistrationObject_SetVersionAttributes_Name = 0;
constexpr uint32_t kServiceWorkerRegistrationObject_SetUpdateViaCache_Name = 1;
constexpr uint32_t kServiceWorkerRegistrationObject_UpdateFound_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_