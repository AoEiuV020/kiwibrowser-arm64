// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kWebDatabase_UpdateSize_Name = 0;
constexpr uint32_t kWebDatabase_CloseImmediately_Name = 1;
constexpr uint32_t kWebDatabaseHost_OpenFile_Name = 0;
constexpr uint32_t kWebDatabaseHost_DeleteFile_Name = 1;
constexpr uint32_t kWebDatabaseHost_GetFileAttributes_Name = 2;
constexpr uint32_t kWebDatabaseHost_GetFileSize_Name = 3;
constexpr uint32_t kWebDatabaseHost_SetFileSize_Name = 4;
constexpr uint32_t kWebDatabaseHost_GetSpaceAvailable_Name = 5;
constexpr uint32_t kWebDatabaseHost_Opened_Name = 6;
constexpr uint32_t kWebDatabaseHost_Modified_Name = 7;
constexpr uint32_t kWebDatabaseHost_Closed_Name = 8;
constexpr uint32_t kWebDatabaseHost_HandleSqliteError_Name = 9;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_