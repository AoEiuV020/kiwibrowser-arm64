// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


constexpr uint32_t kDevice_Start_Name = 0;
constexpr uint32_t kDevice_OnReceiverReportingUtilization_Name = 1;
constexpr uint32_t kDevice_RequestRefreshFrame_Name = 2;
constexpr uint32_t kDevice_MaybeSuspend_Name = 3;
constexpr uint32_t kDevice_Resume_Name = 4;
constexpr uint32_t kDevice_GetPhotoState_Name = 5;
constexpr uint32_t kDevice_SetPhotoOptions_Name = 6;
constexpr uint32_t kDevice_TakePhoto_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_