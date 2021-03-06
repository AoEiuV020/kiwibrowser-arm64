// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kWebBluetoothService_RequestDevice_Name = 0;
constexpr uint32_t kWebBluetoothService_RemoteServerConnect_Name = 1;
constexpr uint32_t kWebBluetoothService_RemoteServerDisconnect_Name = 2;
constexpr uint32_t kWebBluetoothService_RemoteServerGetPrimaryServices_Name = 3;
constexpr uint32_t kWebBluetoothService_RemoteServiceGetCharacteristics_Name = 4;
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicReadValue_Name = 5;
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicWriteValue_Name = 6;
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStartNotifications_Name = 7;
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStopNotifications_Name = 8;
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name = 9;
constexpr uint32_t kWebBluetoothService_RemoteDescriptorReadValue_Name = 10;
constexpr uint32_t kWebBluetoothService_RemoteDescriptorWriteValue_Name = 11;
constexpr uint32_t kWebBluetoothServerClient_GATTServerDisconnected_Name = 0;
constexpr uint32_t kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_