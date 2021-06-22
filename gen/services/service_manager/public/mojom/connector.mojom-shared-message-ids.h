// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


constexpr uint32_t kPIDReceiver_SetPID_Name = 0;
constexpr uint32_t kConnector_BindInterface_Name = 0;
constexpr uint32_t kConnector_QueryService_Name = 1;
constexpr uint32_t kConnector_StartService_Name = 2;
constexpr uint32_t kConnector_StartServiceWithProcess_Name = 3;
constexpr uint32_t kConnector_Clone_Name = 4;
constexpr uint32_t kConnector_FilterInterfaces_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_