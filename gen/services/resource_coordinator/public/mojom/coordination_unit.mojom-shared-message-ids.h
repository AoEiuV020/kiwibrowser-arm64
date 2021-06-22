// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


constexpr uint32_t kFrameCoordinationUnit_GetID_Name = 0;
constexpr uint32_t kFrameCoordinationUnit_AddBinding_Name = 1;
constexpr uint32_t kFrameCoordinationUnit_AddChildFrame_Name = 2;
constexpr uint32_t kFrameCoordinationUnit_RemoveChildFrame_Name = 3;
constexpr uint32_t kFrameCoordinationUnit_SetAudibility_Name = 4;
constexpr uint32_t kFrameCoordinationUnit_SetNetworkAlmostIdle_Name = 5;
constexpr uint32_t kFrameCoordinationUnit_SetLifecycleState_Name = 6;
constexpr uint32_t kFrameCoordinationUnit_OnAlertFired_Name = 7;
constexpr uint32_t kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name = 8;
constexpr uint32_t kPageCoordinationUnit_GetID_Name = 0;
constexpr uint32_t kPageCoordinationUnit_AddBinding_Name = 1;
constexpr uint32_t kPageCoordinationUnit_AddFrame_Name = 2;
constexpr uint32_t kPageCoordinationUnit_RemoveFrame_Name = 3;
constexpr uint32_t kPageCoordinationUnit_SetIsLoading_Name = 4;
constexpr uint32_t kPageCoordinationUnit_SetVisibility_Name = 5;
constexpr uint32_t kPageCoordinationUnit_SetUKMSourceId_Name = 6;
constexpr uint32_t kPageCoordinationUnit_OnFaviconUpdated_Name = 7;
constexpr uint32_t kPageCoordinationUnit_OnTitleUpdated_Name = 8;
constexpr uint32_t kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name = 9;
constexpr uint32_t kProcessCoordinationUnit_GetID_Name = 0;
constexpr uint32_t kProcessCoordinationUnit_AddBinding_Name = 1;
constexpr uint32_t kProcessCoordinationUnit_AddFrame_Name = 2;
constexpr uint32_t kProcessCoordinationUnit_RemoveFrame_Name = 3;
constexpr uint32_t kProcessCoordinationUnit_SetCPUUsage_Name = 4;
constexpr uint32_t kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name = 5;
constexpr uint32_t kProcessCoordinationUnit_SetLaunchTime_Name = 6;
constexpr uint32_t kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name = 7;
constexpr uint32_t kProcessCoordinationUnit_SetPID_Name = 8;
constexpr uint32_t kSystemCoordinationUnit_GetID_Name = 0;
constexpr uint32_t kSystemCoordinationUnit_AddBinding_Name = 1;
constexpr uint32_t kSystemCoordinationUnit_OnProcessCPUUsageReady_Name = 2;
constexpr uint32_t kSystemCoordinationUnit_DistributeMeasurementBatch_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_