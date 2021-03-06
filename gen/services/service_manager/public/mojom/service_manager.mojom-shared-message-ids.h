// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


constexpr uint32_t kServiceManagerListener_OnInit_Name = 0;
constexpr uint32_t kServiceManagerListener_OnServiceCreated_Name = 1;
constexpr uint32_t kServiceManagerListener_OnServiceStarted_Name = 2;
constexpr uint32_t kServiceManagerListener_OnServicePIDReceived_Name = 3;
constexpr uint32_t kServiceManagerListener_OnServiceFailedToStart_Name = 4;
constexpr uint32_t kServiceManagerListener_OnServiceStopped_Name = 5;
constexpr uint32_t kServiceManager_AddListener_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_