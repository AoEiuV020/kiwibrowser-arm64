// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


constexpr uint32_t kScreenProviderObserver_OnDisplaysChanged_Name = 0;
constexpr uint32_t kScreenProvider_AddObserver_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_