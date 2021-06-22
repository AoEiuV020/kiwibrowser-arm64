// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kSerialDeviceEnumerator_GetDevices_Name = 0;
constexpr uint32_t kSerialIoHandler_Open_Name = 0;
constexpr uint32_t kSerialIoHandler_Read_Name = 1;
constexpr uint32_t kSerialIoHandler_Write_Name = 2;
constexpr uint32_t kSerialIoHandler_CancelRead_Name = 3;
constexpr uint32_t kSerialIoHandler_CancelWrite_Name = 4;
constexpr uint32_t kSerialIoHandler_Flush_Name = 5;
constexpr uint32_t kSerialIoHandler_GetControlSignals_Name = 6;
constexpr uint32_t kSerialIoHandler_SetControlSignals_Name = 7;
constexpr uint32_t kSerialIoHandler_ConfigurePort_Name = 8;
constexpr uint32_t kSerialIoHandler_GetPortInfo_Name = 9;
constexpr uint32_t kSerialIoHandler_SetBreak_Name = 10;
constexpr uint32_t kSerialIoHandler_ClearBreak_Name = 11;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_