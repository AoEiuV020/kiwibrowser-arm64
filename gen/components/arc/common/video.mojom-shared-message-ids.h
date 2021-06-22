// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


constexpr uint32_t kVideoHost_OnBootstrapVideoAcceleratorFactory_Name = 1;
constexpr uint32_t kVideoInstance_InitDeprecated_Name = 0;
constexpr uint32_t kVideoInstance_Init_Name = 1;
constexpr uint32_t kVideoAcceleratorFactory_CreateEncodeAccelerator_Name = 1;
constexpr uint32_t kVideoAcceleratorFactory_CreateDecodeAccelerator_Name = 2;
constexpr uint32_t kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_MESSAGE_IDS_H_