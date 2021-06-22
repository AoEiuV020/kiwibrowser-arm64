// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace discardable_memory {
namespace mojom {

namespace internal {


constexpr uint32_t kDiscardableSharedMemoryManager_AllocateLockedDiscardableSharedMemory_Name = 0;
constexpr uint32_t kDiscardableSharedMemoryManager_DeletedDiscardableSharedMemory_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace discardable_memory

#endif  // COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_