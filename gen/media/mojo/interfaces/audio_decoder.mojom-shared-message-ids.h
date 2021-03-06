// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kAudioDecoder_Construct_Name = 0;
constexpr uint32_t kAudioDecoder_Initialize_Name = 1;
constexpr uint32_t kAudioDecoder_SetDataSource_Name = 2;
constexpr uint32_t kAudioDecoder_Decode_Name = 3;
constexpr uint32_t kAudioDecoder_Reset_Name = 4;
constexpr uint32_t kAudioDecoderClient_OnBufferDecoded_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_