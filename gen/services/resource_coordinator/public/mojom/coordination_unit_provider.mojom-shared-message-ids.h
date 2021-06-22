// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


constexpr uint32_t kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name = 0;
constexpr uint32_t kCoordinationUnitProvider_CreatePageCoordinationUnit_Name = 1;
constexpr uint32_t kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name = 2;
constexpr uint32_t kCoordinationUnitProvider_GetSystemCoordinationUnit_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_