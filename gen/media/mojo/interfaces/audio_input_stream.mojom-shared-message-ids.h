// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kAudioInputStream_Record_Name = 0;
constexpr uint32_t kAudioInputStream_SetVolume_Name = 1;
constexpr uint32_t kAudioInputStreamClient_OnError_Name = 0;
constexpr uint32_t kAudioInputStreamClient_OnMutedStateChanged_Name = 1;
constexpr uint32_t kAudioInputStreamObserver_DidStartRecording_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_