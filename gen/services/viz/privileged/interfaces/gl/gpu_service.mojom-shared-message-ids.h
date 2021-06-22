// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kGpuService_EstablishGpuChannel_Name = 0;
constexpr uint32_t kGpuService_CloseChannel_Name = 1;
constexpr uint32_t kGpuService_CreateJpegDecodeAccelerator_Name = 2;
constexpr uint32_t kGpuService_CreateJpegEncodeAccelerator_Name = 3;
constexpr uint32_t kGpuService_CreateVideoEncodeAcceleratorProvider_Name = 4;
constexpr uint32_t kGpuService_CreateGpuMemoryBuffer_Name = 5;
constexpr uint32_t kGpuService_DestroyGpuMemoryBuffer_Name = 6;
constexpr uint32_t kGpuService_GetVideoMemoryUsageStats_Name = 7;
constexpr uint32_t kGpuService_RequestCompleteGpuInfo_Name = 8;
constexpr uint32_t kGpuService_GetGpuSupportedRuntimeVersion_Name = 9;
constexpr uint32_t kGpuService_RequestHDRStatus_Name = 10;
constexpr uint32_t kGpuService_LoadedShader_Name = 11;
constexpr uint32_t kGpuService_DestroyingVideoSurface_Name = 12;
constexpr uint32_t kGpuService_WakeUpGpu_Name = 13;
constexpr uint32_t kGpuService_GpuSwitched_Name = 14;
constexpr uint32_t kGpuService_DestroyAllChannels_Name = 15;
constexpr uint32_t kGpuService_OnBackgroundCleanup_Name = 16;
constexpr uint32_t kGpuService_OnBackgrounded_Name = 17;
constexpr uint32_t kGpuService_OnForegrounded_Name = 18;
constexpr uint32_t kGpuService_Crash_Name = 19;
constexpr uint32_t kGpuService_Hang_Name = 20;
constexpr uint32_t kGpuService_ThrowJavaException_Name = 21;
constexpr uint32_t kGpuService_Stop_Name = 22;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_