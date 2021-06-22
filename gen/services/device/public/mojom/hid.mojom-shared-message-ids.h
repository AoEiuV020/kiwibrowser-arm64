// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kHidManagerClient_DeviceAdded_Name = 0;
constexpr uint32_t kHidManagerClient_DeviceRemoved_Name = 1;
constexpr uint32_t kHidManager_GetDevicesAndSetClient_Name = 0;
constexpr uint32_t kHidManager_GetDevices_Name = 1;
constexpr uint32_t kHidManager_Connect_Name = 2;
constexpr uint32_t kHidConnection_Read_Name = 0;
constexpr uint32_t kHidConnection_Write_Name = 1;
constexpr uint32_t kHidConnection_GetFeatureReport_Name = 2;
constexpr uint32_t kHidConnection_SendFeatureReport_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_