// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kCookieChangeListener_OnCookieChange_Name = 0;
constexpr uint32_t kCookieManager_GetAllCookies_Name = 0;
constexpr uint32_t kCookieManager_GetCookieList_Name = 1;
constexpr uint32_t kCookieManager_SetCanonicalCookie_Name = 2;
constexpr uint32_t kCookieManager_DeleteCookies_Name = 3;
constexpr uint32_t kCookieManager_AddCookieChangeListener_Name = 4;
constexpr uint32_t kCookieManager_AddGlobalChangeListener_Name = 5;
constexpr uint32_t kCookieManager_CloneInterface_Name = 6;
constexpr uint32_t kCookieManager_FlushCookieStore_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_