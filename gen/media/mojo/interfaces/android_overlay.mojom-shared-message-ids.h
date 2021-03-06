// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kAndroidOverlayProvider_CreateOverlay_Name = 0;
constexpr uint32_t kAndroidOverlay_ScheduleLayout_Name = 0;
constexpr uint32_t kAndroidOverlayClient_OnSurfaceReady_Name = 0;
constexpr uint32_t kAndroidOverlayClient_OnDestroyed_Name = 1;
constexpr uint32_t kAndroidOverlayClient_OnPowerEfficientState_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_MESSAGE_IDS_H_