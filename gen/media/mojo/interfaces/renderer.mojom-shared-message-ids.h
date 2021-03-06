// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kRenderer_Initialize_Name = 0;
constexpr uint32_t kRenderer_Flush_Name = 1;
constexpr uint32_t kRenderer_StartPlayingFrom_Name = 2;
constexpr uint32_t kRenderer_SetPlaybackRate_Name = 3;
constexpr uint32_t kRenderer_SetVolume_Name = 4;
constexpr uint32_t kRenderer_SetCdm_Name = 5;
constexpr uint32_t kRenderer_InitiateScopedSurfaceRequest_Name = 6;
constexpr uint32_t kRendererClient_OnTimeUpdate_Name = 0;
constexpr uint32_t kRendererClient_OnBufferingStateChange_Name = 1;
constexpr uint32_t kRendererClient_OnEnded_Name = 2;
constexpr uint32_t kRendererClient_OnError_Name = 3;
constexpr uint32_t kRendererClient_OnAudioConfigChange_Name = 4;
constexpr uint32_t kRendererClient_OnVideoConfigChange_Name = 5;
constexpr uint32_t kRendererClient_OnVideoNaturalSizeChange_Name = 6;
constexpr uint32_t kRendererClient_OnVideoOpacityChange_Name = 7;
constexpr uint32_t kRendererClient_OnStatisticsUpdate_Name = 8;
constexpr uint32_t kRendererClient_OnWaitingForDecryptionKey_Name = 9;
constexpr uint32_t kRendererClient_OnDurationChange_Name = 10;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_