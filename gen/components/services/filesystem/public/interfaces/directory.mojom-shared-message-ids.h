// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


constexpr uint32_t kDirectory_Read_Name = 0;
constexpr uint32_t kDirectory_OpenFile_Name = 1;
constexpr uint32_t kDirectory_OpenFileHandle_Name = 2;
constexpr uint32_t kDirectory_OpenFileHandles_Name = 3;
constexpr uint32_t kDirectory_OpenDirectory_Name = 4;
constexpr uint32_t kDirectory_Rename_Name = 5;
constexpr uint32_t kDirectory_Replace_Name = 6;
constexpr uint32_t kDirectory_Delete_Name = 7;
constexpr uint32_t kDirectory_Exists_Name = 8;
constexpr uint32_t kDirectory_IsWritable_Name = 9;
constexpr uint32_t kDirectory_Flush_Name = 10;
constexpr uint32_t kDirectory_StatFile_Name = 11;
constexpr uint32_t kDirectory_Clone_Name = 12;
constexpr uint32_t kDirectory_ReadEntireFile_Name = 13;
constexpr uint32_t kDirectory_WriteFile_Name = 14;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_