// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kFrameSinkVideoConsumerFrameCallbacks_Done_Name = 0;
constexpr uint32_t kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name = 1;
constexpr uint32_t kFrameSinkVideoConsumer_OnFrameCaptured_Name = 0;
constexpr uint32_t kFrameSinkVideoConsumer_OnTargetLost_Name = 1;
constexpr uint32_t kFrameSinkVideoConsumer_OnStopped_Name = 2;
constexpr uint32_t kFrameSinkVideoCapturer_SetFormat_Name = 0;
constexpr uint32_t kFrameSinkVideoCapturer_SetMinCapturePeriod_Name = 1;
constexpr uint32_t kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name = 2;
constexpr uint32_t kFrameSinkVideoCapturer_SetResolutionConstraints_Name = 3;
constexpr uint32_t kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name = 4;
constexpr uint32_t kFrameSinkVideoCapturer_ChangeTarget_Name = 5;
constexpr uint32_t kFrameSinkVideoCapturer_Start_Name = 6;
constexpr uint32_t kFrameSinkVideoCapturer_Stop_Name = 7;
constexpr uint32_t kFrameSinkVideoCapturer_RequestRefreshFrame_Name = 8;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_