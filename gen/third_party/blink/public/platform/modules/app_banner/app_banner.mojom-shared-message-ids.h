// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kAppBannerController_BannerPromptRequest_Name = 0;
constexpr uint32_t kAppBannerEvent_BannerAccepted_Name = 0;
constexpr uint32_t kAppBannerEvent_BannerDismissed_Name = 1;
constexpr uint32_t kAppBannerService_DisplayAppBanner_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_