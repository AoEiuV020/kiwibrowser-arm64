// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace display {
namespace mojom {

namespace internal {


constexpr uint32_t kDisplayController_IncreaseInternalDisplayZoom_Name = 0;
constexpr uint32_t kDisplayController_DecreaseInternalDisplayZoom_Name = 1;
constexpr uint32_t kDisplayController_ResetInternalDisplayZoom_Name = 2;
constexpr uint32_t kDisplayController_RotateCurrentDisplayCW_Name = 3;
constexpr uint32_t kDisplayController_SwapPrimaryDisplay_Name = 4;
constexpr uint32_t kDisplayController_ToggleMirrorMode_Name = 5;
constexpr uint32_t kDisplayController_TakeDisplayControl_Name = 6;
constexpr uint32_t kDisplayController_RelinquishDisplayControl_Name = 7;
constexpr uint32_t kDisplayController_SetDisplayWorkArea_Name = 8;

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_