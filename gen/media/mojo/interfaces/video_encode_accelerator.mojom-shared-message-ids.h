// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name = 0;
constexpr uint32_t kVideoEncodeAccelerator_Initialize_Name = 0;
constexpr uint32_t kVideoEncodeAccelerator_Encode_Name = 1;
constexpr uint32_t kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name = 2;
constexpr uint32_t kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 3;
constexpr uint32_t kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name = 0;
constexpr uint32_t kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name = 1;
constexpr uint32_t kVideoEncodeAcceleratorClient_NotifyError_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_