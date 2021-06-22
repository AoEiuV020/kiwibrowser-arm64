// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kBackgroundFetchRegistrationObserver_OnProgress_Name = 0;
constexpr uint32_t kBackgroundFetchService_Fetch_Name = 0;
constexpr uint32_t kBackgroundFetchService_UpdateUI_Name = 1;
constexpr uint32_t kBackgroundFetchService_Abort_Name = 2;
constexpr uint32_t kBackgroundFetchService_GetRegistration_Name = 3;
constexpr uint32_t kBackgroundFetchService_GetDeveloperIds_Name = 4;
constexpr uint32_t kBackgroundFetchService_GetIconDisplaySize_Name = 5;
constexpr uint32_t kBackgroundFetchService_AddRegistrationObserver_Name = 6;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_