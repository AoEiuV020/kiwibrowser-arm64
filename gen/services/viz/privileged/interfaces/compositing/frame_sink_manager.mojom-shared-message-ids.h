// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kFrameSinkManager_RegisterFrameSinkId_Name = 0;
constexpr uint32_t kFrameSinkManager_InvalidateFrameSinkId_Name = 1;
constexpr uint32_t kFrameSinkManager_EnableSynchronizationReporting_Name = 2;
constexpr uint32_t kFrameSinkManager_SetFrameSinkDebugLabel_Name = 3;
constexpr uint32_t kFrameSinkManager_CreateRootCompositorFrameSink_Name = 4;
constexpr uint32_t kFrameSinkManager_CreateCompositorFrameSink_Name = 5;
constexpr uint32_t kFrameSinkManager_DestroyCompositorFrameSink_Name = 6;
constexpr uint32_t kFrameSinkManager_RegisterFrameSinkHierarchy_Name = 7;
constexpr uint32_t kFrameSinkManager_UnregisterFrameSinkHierarchy_Name = 8;
constexpr uint32_t kFrameSinkManager_AssignTemporaryReference_Name = 9;
constexpr uint32_t kFrameSinkManager_DropTemporaryReference_Name = 10;
constexpr uint32_t kFrameSinkManager_AddVideoDetectorObserver_Name = 11;
constexpr uint32_t kFrameSinkManager_CreateVideoCapturer_Name = 12;
constexpr uint32_t kFrameSinkManager_EvictSurfaces_Name = 13;
constexpr uint32_t kFrameSinkManager_RequestCopyOfOutput_Name = 14;
constexpr uint32_t kFrameSinkManagerClient_OnSurfaceCreated_Name = 0;
constexpr uint32_t kFrameSinkManagerClient_OnFirstSurfaceActivation_Name = 1;
constexpr uint32_t kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name = 2;
constexpr uint32_t kFrameSinkManagerClient_OnFrameTokenChanged_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_