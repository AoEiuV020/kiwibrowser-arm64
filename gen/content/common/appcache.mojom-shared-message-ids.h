// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kAppCacheBackend_RegisterHost_Name = 0;
constexpr uint32_t kAppCacheBackend_UnregisterHost_Name = 1;
constexpr uint32_t kAppCacheBackend_SetSpawningHostId_Name = 2;
constexpr uint32_t kAppCacheBackend_SelectCache_Name = 3;
constexpr uint32_t kAppCacheBackend_SelectCacheForSharedWorker_Name = 4;
constexpr uint32_t kAppCacheBackend_MarkAsForeignEntry_Name = 5;
constexpr uint32_t kAppCacheBackend_GetStatus_Name = 6;
constexpr uint32_t kAppCacheBackend_StartUpdate_Name = 7;
constexpr uint32_t kAppCacheBackend_SwapCache_Name = 8;
constexpr uint32_t kAppCacheBackend_GetResourceList_Name = 9;
constexpr uint32_t kAppCacheFrontend_CacheSelected_Name = 0;
constexpr uint32_t kAppCacheFrontend_StatusChanged_Name = 1;
constexpr uint32_t kAppCacheFrontend_EventRaised_Name = 2;
constexpr uint32_t kAppCacheFrontend_ProgressEventRaised_Name = 3;
constexpr uint32_t kAppCacheFrontend_ErrorEventRaised_Name = 4;
constexpr uint32_t kAppCacheFrontend_LogMessage_Name = 5;
constexpr uint32_t kAppCacheFrontend_ContentBlocked_Name = 6;
constexpr uint32_t kAppCacheFrontend_SetSubresourceFactory_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_