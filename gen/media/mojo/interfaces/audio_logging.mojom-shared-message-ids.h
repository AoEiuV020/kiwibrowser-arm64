// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kAudioLog_OnCreated_Name = 0;
constexpr uint32_t kAudioLog_OnStarted_Name = 1;
constexpr uint32_t kAudioLog_OnStopped_Name = 2;
constexpr uint32_t kAudioLog_OnClosed_Name = 3;
constexpr uint32_t kAudioLog_OnError_Name = 4;
constexpr uint32_t kAudioLog_OnSetVolume_Name = 5;
constexpr uint32_t kAudioLog_OnLogMessage_Name = 6;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_