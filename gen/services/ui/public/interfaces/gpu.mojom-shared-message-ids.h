// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


constexpr uint32_t kGpu_EstablishGpuChannel_Name = 0;
constexpr uint32_t kGpu_CreateJpegDecodeAccelerator_Name = 1;
constexpr uint32_t kGpu_CreateVideoEncodeAcceleratorProvider_Name = 2;
constexpr uint32_t kGpu_CreateGpuMemoryBuffer_Name = 3;
constexpr uint32_t kGpu_DestroyGpuMemoryBuffer_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_MESSAGE_IDS_H_