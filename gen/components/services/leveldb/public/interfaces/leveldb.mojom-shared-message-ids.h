// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace leveldb {
namespace mojom {

namespace internal {


constexpr uint32_t kLevelDBService_Open_Name = 0;
constexpr uint32_t kLevelDBService_OpenWithOptions_Name = 1;
constexpr uint32_t kLevelDBService_OpenInMemory_Name = 2;
constexpr uint32_t kLevelDBService_Destroy_Name = 3;
constexpr uint32_t kLevelDBDatabase_Put_Name = 0;
constexpr uint32_t kLevelDBDatabase_Delete_Name = 1;
constexpr uint32_t kLevelDBDatabase_DeletePrefixed_Name = 2;
constexpr uint32_t kLevelDBDatabase_Write_Name = 3;
constexpr uint32_t kLevelDBDatabase_Get_Name = 4;
constexpr uint32_t kLevelDBDatabase_GetPrefixed_Name = 5;
constexpr uint32_t kLevelDBDatabase_CopyPrefixed_Name = 6;
constexpr uint32_t kLevelDBDatabase_GetSnapshot_Name = 7;
constexpr uint32_t kLevelDBDatabase_ReleaseSnapshot_Name = 8;
constexpr uint32_t kLevelDBDatabase_GetFromSnapshot_Name = 9;
constexpr uint32_t kLevelDBDatabase_NewIterator_Name = 10;
constexpr uint32_t kLevelDBDatabase_NewIteratorFromSnapshot_Name = 11;
constexpr uint32_t kLevelDBDatabase_ReleaseIterator_Name = 12;
constexpr uint32_t kLevelDBDatabase_IteratorSeekToFirst_Name = 13;
constexpr uint32_t kLevelDBDatabase_IteratorSeekToLast_Name = 14;
constexpr uint32_t kLevelDBDatabase_IteratorSeek_Name = 15;
constexpr uint32_t kLevelDBDatabase_IteratorNext_Name = 16;
constexpr uint32_t kLevelDBDatabase_IteratorPrev_Name = 17;

}  // namespace internal
}  // namespace mojom
}  // namespace leveldb

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_