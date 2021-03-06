// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kCacheStorageCache_Match_Name = 0;
constexpr uint32_t kCacheStorageCache_MatchAll_Name = 1;
constexpr uint32_t kCacheStorageCache_Keys_Name = 2;
constexpr uint32_t kCacheStorageCache_Batch_Name = 3;
constexpr uint32_t kCacheStorage_Has_Name = 0;
constexpr uint32_t kCacheStorage_Delete_Name = 1;
constexpr uint32_t kCacheStorage_Keys_Name = 2;
constexpr uint32_t kCacheStorage_Match_Name = 3;
constexpr uint32_t kCacheStorage_Open_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_