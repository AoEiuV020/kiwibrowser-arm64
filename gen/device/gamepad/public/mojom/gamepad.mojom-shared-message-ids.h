// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kGamepadObserver_GamepadConnected_Name = 0;
constexpr uint32_t kGamepadObserver_GamepadDisconnected_Name = 1;
constexpr uint32_t kGamepadMonitor_GamepadStartPolling_Name = 0;
constexpr uint32_t kGamepadMonitor_GamepadStopPolling_Name = 1;
constexpr uint32_t kGamepadMonitor_SetObserver_Name = 2;
constexpr uint32_t kGamepadHapticsManager_PlayVibrationEffectOnce_Name = 0;
constexpr uint32_t kGamepadHapticsManager_ResetVibrationActuator_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_