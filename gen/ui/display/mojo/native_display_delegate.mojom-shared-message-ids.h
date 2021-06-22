// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace display {
namespace mojom {

namespace internal {


constexpr uint32_t kNativeDisplayObserver_OnConfigurationChanged_Name = 0;
constexpr uint32_t kNativeDisplayDelegate_Initialize_Name = 0;
constexpr uint32_t kNativeDisplayDelegate_TakeDisplayControl_Name = 1;
constexpr uint32_t kNativeDisplayDelegate_RelinquishDisplayControl_Name = 2;
constexpr uint32_t kNativeDisplayDelegate_GetDisplays_Name = 3;
constexpr uint32_t kNativeDisplayDelegate_Configure_Name = 4;
constexpr uint32_t kNativeDisplayDelegate_GetHDCPState_Name = 5;
constexpr uint32_t kNativeDisplayDelegate_SetHDCPState_Name = 6;
constexpr uint32_t kNativeDisplayDelegate_SetColorCorrection_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_