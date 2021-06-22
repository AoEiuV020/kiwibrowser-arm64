// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


constexpr uint32_t kDeviceFactoryProvider_ConnectToDeviceFactory_Name = 0;
constexpr uint32_t kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_