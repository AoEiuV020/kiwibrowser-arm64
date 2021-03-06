// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kNonPersistentNotificationListener_OnShow_Name = 0;
constexpr uint32_t kNonPersistentNotificationListener_OnClick_Name = 1;
constexpr uint32_t kNonPersistentNotificationListener_OnClose_Name = 2;
constexpr uint32_t kNotificationService_GetPermissionStatus_Name = 0;
constexpr uint32_t kNotificationService_DisplayNonPersistentNotification_Name = 1;
constexpr uint32_t kNotificationService_CloseNonPersistentNotification_Name = 2;
constexpr uint32_t kNotificationService_DisplayPersistentNotification_Name = 3;
constexpr uint32_t kNotificationService_ClosePersistentNotification_Name = 4;
constexpr uint32_t kNotificationService_GetNotifications_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_