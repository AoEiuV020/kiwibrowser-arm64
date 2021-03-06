// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kSynchronousCompositor_ComputeScroll_Name = 0;
constexpr uint32_t kSynchronousCompositor_DemandDrawHwAsync_Name = 1;
constexpr uint32_t kSynchronousCompositor_DemandDrawHw_Name = 2;
constexpr uint32_t kSynchronousCompositor_SetSharedMemory_Name = 3;
constexpr uint32_t kSynchronousCompositor_DemandDrawSw_Name = 4;
constexpr uint32_t kSynchronousCompositor_ZeroSharedMemory_Name = 5;
constexpr uint32_t kSynchronousCompositor_ZoomBy_Name = 6;
constexpr uint32_t kSynchronousCompositor_SetMemoryPolicy_Name = 7;
constexpr uint32_t kSynchronousCompositor_ReclaimResources_Name = 8;
constexpr uint32_t kSynchronousCompositor_SetScroll_Name = 9;
constexpr uint32_t kSynchronousCompositor_BeginFrame_Name = 10;
constexpr uint32_t kSynchronousCompositor_SetBeginFrameSourcePaused_Name = 11;
constexpr uint32_t kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name = 0;
constexpr uint32_t kSynchronousCompositorHost_UpdateState_Name = 1;
constexpr uint32_t kSynchronousCompositorHost_SetNeedsBeginFrames_Name = 2;
constexpr uint32_t kSynchronousCompositorControlHost_ReturnFrame_Name = 0;
constexpr uint32_t kSynchronousCompositorControlHost_BeginFrameResponse_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_