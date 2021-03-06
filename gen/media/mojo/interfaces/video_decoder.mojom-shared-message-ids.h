// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kVideoFrameHandleReleaser_ReleaseVideoFrame_Name = 0;
constexpr uint32_t kVideoDecoder_Construct_Name = 0;
constexpr uint32_t kVideoDecoder_Initialize_Name = 1;
constexpr uint32_t kVideoDecoder_Decode_Name = 2;
constexpr uint32_t kVideoDecoder_Reset_Name = 3;
constexpr uint32_t kVideoDecoder_OnOverlayInfoChanged_Name = 4;
constexpr uint32_t kVideoDecoderClient_OnVideoFrameDecoded_Name = 0;
constexpr uint32_t kVideoDecoderClient_RequestOverlayInfo_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_