// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kGpuHost_DidInitialize_Name = 0;
constexpr uint32_t kGpuHost_DidFailInitialize_Name = 1;
constexpr uint32_t kGpuHost_DidCreateContextSuccessfully_Name = 2;
constexpr uint32_t kGpuHost_DidCreateOffscreenContext_Name = 3;
constexpr uint32_t kGpuHost_DidDestroyOffscreenContext_Name = 4;
constexpr uint32_t kGpuHost_DidDestroyChannel_Name = 5;
constexpr uint32_t kGpuHost_DidLoseContext_Name = 6;
constexpr uint32_t kGpuHost_DisableGpuCompositing_Name = 7;
constexpr uint32_t kGpuHost_SetChildSurface_Name = 8;
constexpr uint32_t kGpuHost_StoreShaderToDisk_Name = 9;
constexpr uint32_t kGpuHost_RecordLogMessage_Name = 10;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_MESSAGE_IDS_H_