// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kMediaDevicesDispatcherHost_EnumerateDevices_Name = 0;
constexpr uint32_t kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name = 1;
constexpr uint32_t kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name = 2;
constexpr uint32_t kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name = 3;
constexpr uint32_t kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name = 4;
constexpr uint32_t kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name = 5;
constexpr uint32_t kMediaDevicesListener_OnDevicesChanged_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_