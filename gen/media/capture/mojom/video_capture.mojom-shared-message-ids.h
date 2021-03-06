// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kVideoCaptureObserver_OnStateChanged_Name = 0;
constexpr uint32_t kVideoCaptureObserver_OnNewBuffer_Name = 1;
constexpr uint32_t kVideoCaptureObserver_OnBufferReady_Name = 2;
constexpr uint32_t kVideoCaptureObserver_OnBufferDestroyed_Name = 3;
constexpr uint32_t kVideoCaptureHost_Start_Name = 0;
constexpr uint32_t kVideoCaptureHost_Stop_Name = 1;
constexpr uint32_t kVideoCaptureHost_Pause_Name = 2;
constexpr uint32_t kVideoCaptureHost_Resume_Name = 3;
constexpr uint32_t kVideoCaptureHost_RequestRefreshFrame_Name = 4;
constexpr uint32_t kVideoCaptureHost_ReleaseBuffer_Name = 5;
constexpr uint32_t kVideoCaptureHost_GetDeviceSupportedFormats_Name = 6;
constexpr uint32_t kVideoCaptureHost_GetDeviceFormatsInUse_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_