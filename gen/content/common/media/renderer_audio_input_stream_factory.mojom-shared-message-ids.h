// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kRendererAudioInputStreamFactory_CreateStream_Name = 0;
constexpr uint32_t kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name = 1;
constexpr uint32_t kRendererAudioInputStreamFactoryClient_StreamCreated_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_