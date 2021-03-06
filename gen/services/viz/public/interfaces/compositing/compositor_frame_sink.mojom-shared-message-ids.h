// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kCompositorFrameSink_SetNeedsBeginFrame_Name = 0;
constexpr uint32_t kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name = 1;
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrame_Name = 2;
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrameSync_Name = 3;
constexpr uint32_t kCompositorFrameSink_DidNotProduceFrame_Name = 4;
constexpr uint32_t kCompositorFrameSink_DidAllocateSharedBitmap_Name = 5;
constexpr uint32_t kCompositorFrameSink_DidDeleteSharedBitmap_Name = 6;
constexpr uint32_t kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name = 0;
constexpr uint32_t kCompositorFrameSinkClient_DidPresentCompositorFrame_Name = 1;
constexpr uint32_t kCompositorFrameSinkClient_DidDiscardCompositorFrame_Name = 2;
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFrame_Name = 3;
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name = 4;
constexpr uint32_t kCompositorFrameSinkClient_ReclaimResources_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_