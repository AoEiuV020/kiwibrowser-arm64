// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kFingerprintObserver_OnRestarted_Name = 0;
constexpr uint32_t kFingerprintObserver_OnEnrollScanDone_Name = 1;
constexpr uint32_t kFingerprintObserver_OnAuthScanDone_Name = 2;
constexpr uint32_t kFingerprintObserver_OnSessionFailed_Name = 3;
constexpr uint32_t kFingerprint_GetRecordsForUser_Name = 0;
constexpr uint32_t kFingerprint_StartEnrollSession_Name = 1;
constexpr uint32_t kFingerprint_CancelCurrentEnrollSession_Name = 2;
constexpr uint32_t kFingerprint_RequestRecordLabel_Name = 3;
constexpr uint32_t kFingerprint_SetRecordLabel_Name = 4;
constexpr uint32_t kFingerprint_RemoveRecord_Name = 5;
constexpr uint32_t kFingerprint_StartAuthSession_Name = 6;
constexpr uint32_t kFingerprint_EndCurrentAuthSession_Name = 7;
constexpr uint32_t kFingerprint_DestroyAllRecords_Name = 8;
constexpr uint32_t kFingerprint_AddFingerprintObserver_Name = 9;
constexpr uint32_t kFingerprint_RequestType_Name = 10;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_