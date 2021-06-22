// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kInputDeviceManagerClient_InputDeviceAdded_Name = 0;
constexpr uint32_t kInputDeviceManagerClient_InputDeviceRemoved_Name = 1;
constexpr uint32_t kInputDeviceManager_GetDevicesAndSetClient_Name = 0;
constexpr uint32_t kInputDeviceManager_GetDevices_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_