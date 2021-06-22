// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kServiceWorkerContainerHost_Register_Name = 0;
constexpr uint32_t kServiceWorkerContainerHost_GetRegistration_Name = 1;
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrations_Name = 2;
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrationForReady_Name = 3;
constexpr uint32_t kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name = 4;
constexpr uint32_t kServiceWorkerContainerHost_CloneForWorker_Name = 5;
constexpr uint32_t kServiceWorkerContainerHost_Ping_Name = 6;
constexpr uint32_t kServiceWorkerContainer_SetController_Name = 0;
constexpr uint32_t kServiceWorkerContainer_PostMessageToClient_Name = 1;
constexpr uint32_t kServiceWorkerContainer_CountFeature_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_