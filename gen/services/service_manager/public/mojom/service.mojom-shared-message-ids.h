// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


constexpr uint32_t kService_OnStart_Name = 0;
constexpr uint32_t kService_OnBindInterface_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_