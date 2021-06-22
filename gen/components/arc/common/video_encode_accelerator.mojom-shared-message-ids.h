// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


constexpr uint32_t kVideoEncodeAccelerator_GetSupportedProfiles_Name = 0;
constexpr uint32_t kVideoEncodeAccelerator_Initialize_Name = 1;
constexpr uint32_t kVideoEncodeAccelerator_Encode_Name = 2;
constexpr uint32_t kVideoEncodeAccelerator_UseBitstreamBuffer_Name = 3;
constexpr uint32_t kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 4;
constexpr uint32_t kVideoEncodeAccelerator_Flush_Name = 5;
constexpr uint32_t kVideoEncodeClient_RequireBitstreamBuffers_Name = 0;
constexpr uint32_t kVideoEncodeClient_NotifyError_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_