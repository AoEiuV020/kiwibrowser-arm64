// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kLevelDBObserver_KeyAdded_Name = 0;
constexpr uint32_t kLevelDBObserver_KeyChanged_Name = 1;
constexpr uint32_t kLevelDBObserver_KeyDeleted_Name = 2;
constexpr uint32_t kLevelDBObserver_AllDeleted_Name = 3;
constexpr uint32_t kLevelDBObserver_ShouldSendOldValueOnMutations_Name = 4;
constexpr uint32_t kLevelDBWrapperGetAllCallback_Complete_Name = 0;
constexpr uint32_t kLevelDBWrapper_AddObserver_Name = 0;
constexpr uint32_t kLevelDBWrapper_Put_Name = 1;
constexpr uint32_t kLevelDBWrapper_Delete_Name = 2;
constexpr uint32_t kLevelDBWrapper_DeleteAll_Name = 3;
constexpr uint32_t kLevelDBWrapper_Get_Name = 4;
constexpr uint32_t kLevelDBWrapper_GetAll_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_MESSAGE_IDS_H_