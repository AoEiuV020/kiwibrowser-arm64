// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kNFC_SetClient_Name = 0;
constexpr uint32_t kNFC_Push_Name = 1;
constexpr uint32_t kNFC_CancelPush_Name = 2;
constexpr uint32_t kNFC_Watch_Name = 3;
constexpr uint32_t kNFC_CancelWatch_Name = 4;
constexpr uint32_t kNFC_CancelAllWatches_Name = 5;
constexpr uint32_t kNFC_SuspendNFCOperations_Name = 6;
constexpr uint32_t kNFC_ResumeNFCOperations_Name = 7;
constexpr uint32_t kNFCClient_OnWatch_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_