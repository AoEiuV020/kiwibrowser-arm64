// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace display {
namespace mojom {

namespace internal {


constexpr uint32_t kOutputProtection_QueryContentProtectionStatus_Name = 0;
constexpr uint32_t kOutputProtection_SetContentProtection_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_MESSAGE_IDS_H_