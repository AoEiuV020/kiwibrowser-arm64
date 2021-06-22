// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


constexpr uint32_t kReceiver_OnNewBuffer_Name = 0;
constexpr uint32_t kReceiver_OnFrameReadyInBuffer_Name = 1;
constexpr uint32_t kReceiver_OnBufferRetired_Name = 2;
constexpr uint32_t kReceiver_OnError_Name = 3;
constexpr uint32_t kReceiver_OnLog_Name = 4;
constexpr uint32_t kReceiver_OnStarted_Name = 5;
constexpr uint32_t kReceiver_OnStartedUsingGpuDecode_Name = 6;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_MESSAGE_IDS_H_