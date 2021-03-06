// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


constexpr uint32_t kFile_Close_Name = 0;
constexpr uint32_t kFile_Read_Name = 1;
constexpr uint32_t kFile_Write_Name = 2;
constexpr uint32_t kFile_Tell_Name = 3;
constexpr uint32_t kFile_Seek_Name = 4;
constexpr uint32_t kFile_Stat_Name = 5;
constexpr uint32_t kFile_Truncate_Name = 6;
constexpr uint32_t kFile_Touch_Name = 7;
constexpr uint32_t kFile_Dup_Name = 8;
constexpr uint32_t kFile_Flush_Name = 9;
constexpr uint32_t kFile_Lock_Name = 10;
constexpr uint32_t kFile_Unlock_Name = 11;
constexpr uint32_t kFile_AsHandle_Name = 12;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_