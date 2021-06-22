// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


constexpr uint32_t kVideoDecodeAccelerator_Initialize_Name = 0;
constexpr uint32_t kVideoDecodeAccelerator_Decode_Name = 1;
constexpr uint32_t kVideoDecodeAccelerator_AssignPictureBuffers_Name = 2;
constexpr uint32_t kVideoDecodeAccelerator_ImportBufferForPicture_Name = 9;
constexpr uint32_t kVideoDecodeAccelerator_ReusePictureBuffer_Name = 4;
constexpr uint32_t kVideoDecodeAccelerator_Reset_Name = 5;
constexpr uint32_t kVideoDecodeAccelerator_Flush_Name = 6;
constexpr uint32_t kVideoDecodeClient_ProvidePictureBuffers_Name = 4;
constexpr uint32_t kVideoDecodeClient_PictureReady_Name = 1;
constexpr uint32_t kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name = 2;
constexpr uint32_t kVideoDecodeClient_NotifyError_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_