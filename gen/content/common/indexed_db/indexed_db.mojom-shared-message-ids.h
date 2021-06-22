// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace indexed_db {
namespace mojom {

namespace internal {


constexpr uint32_t kCallbacks_Error_Name = 0;
constexpr uint32_t kCallbacks_SuccessStringList_Name = 1;
constexpr uint32_t kCallbacks_Blocked_Name = 2;
constexpr uint32_t kCallbacks_UpgradeNeeded_Name = 3;
constexpr uint32_t kCallbacks_SuccessDatabase_Name = 4;
constexpr uint32_t kCallbacks_SuccessCursor_Name = 5;
constexpr uint32_t kCallbacks_SuccessValue_Name = 6;
constexpr uint32_t kCallbacks_SuccessCursorContinue_Name = 7;
constexpr uint32_t kCallbacks_SuccessCursorPrefetch_Name = 8;
constexpr uint32_t kCallbacks_SuccessArray_Name = 9;
constexpr uint32_t kCallbacks_SuccessKey_Name = 10;
constexpr uint32_t kCallbacks_SuccessInteger_Name = 11;
constexpr uint32_t kCallbacks_Success_Name = 12;
constexpr uint32_t kDatabaseCallbacks_ForcedClose_Name = 0;
constexpr uint32_t kDatabaseCallbacks_VersionChange_Name = 1;
constexpr uint32_t kDatabaseCallbacks_Abort_Name = 2;
constexpr uint32_t kDatabaseCallbacks_Complete_Name = 3;
constexpr uint32_t kDatabaseCallbacks_Changes_Name = 4;
constexpr uint32_t kCursor_Advance_Name = 0;
constexpr uint32_t kCursor_Continue_Name = 1;
constexpr uint32_t kCursor_Prefetch_Name = 2;
constexpr uint32_t kCursor_PrefetchReset_Name = 3;
constexpr uint32_t kDatabase_CreateObjectStore_Name = 0;
constexpr uint32_t kDatabase_DeleteObjectStore_Name = 1;
constexpr uint32_t kDatabase_RenameObjectStore_Name = 2;
constexpr uint32_t kDatabase_CreateTransaction_Name = 3;
constexpr uint32_t kDatabase_Close_Name = 4;
constexpr uint32_t kDatabase_VersionChangeIgnored_Name = 5;
constexpr uint32_t kDatabase_AddObserver_Name = 6;
constexpr uint32_t kDatabase_RemoveObservers_Name = 7;
constexpr uint32_t kDatabase_Get_Name = 8;
constexpr uint32_t kDatabase_GetAll_Name = 9;
constexpr uint32_t kDatabase_Put_Name = 10;
constexpr uint32_t kDatabase_SetIndexKeys_Name = 11;
constexpr uint32_t kDatabase_SetIndexesReady_Name = 12;
constexpr uint32_t kDatabase_OpenCursor_Name = 13;
constexpr uint32_t kDatabase_Count_Name = 14;
constexpr uint32_t kDatabase_DeleteRange_Name = 15;
constexpr uint32_t kDatabase_Clear_Name = 16;
constexpr uint32_t kDatabase_CreateIndex_Name = 17;
constexpr uint32_t kDatabase_DeleteIndex_Name = 18;
constexpr uint32_t kDatabase_RenameIndex_Name = 19;
constexpr uint32_t kDatabase_Abort_Name = 20;
constexpr uint32_t kDatabase_Commit_Name = 21;
constexpr uint32_t kFactory_GetDatabaseNames_Name = 0;
constexpr uint32_t kFactory_Open_Name = 1;
constexpr uint32_t kFactory_DeleteDatabase_Name = 2;
constexpr uint32_t kFactory_AbortTransactionsAndCompactDatabase_Name = 3;
constexpr uint32_t kFactory_AbortTransactionsForDatabase_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace indexed_db

#endif  // CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_MESSAGE_IDS_H_