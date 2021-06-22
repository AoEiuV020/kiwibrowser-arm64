// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


constexpr uint32_t kDeviceFactory_GetDeviceInfos_Name = 0;
constexpr uint32_t kDeviceFactory_CreateDevice_Name = 1;
constexpr uint32_t kDeviceFactory_AddSharedMemoryVirtualDevice_Name = 2;
constexpr uint32_t kDeviceFactory_AddTextureVirtualDevice_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_