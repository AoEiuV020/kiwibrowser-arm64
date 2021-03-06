// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kAudioOutputStream_Play_Name = 0;
constexpr uint32_t kAudioOutputStream_Pause_Name = 1;
constexpr uint32_t kAudioOutputStream_SetVolume_Name = 2;
constexpr uint32_t kAudioOutputStreamObserver_DidStartPlaying_Name = 0;
constexpr uint32_t kAudioOutputStreamObserver_DidStopPlaying_Name = 1;
constexpr uint32_t kAudioOutputStreamObserver_DidChangeAudibleState_Name = 2;
constexpr uint32_t kAudioOutputStreamProvider_Acquire_Name = 0;
constexpr uint32_t kAudioOutputStreamProviderClient_Created_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_