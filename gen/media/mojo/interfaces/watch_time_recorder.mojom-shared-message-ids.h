// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kWatchTimeRecorder_RecordWatchTime_Name = 0;
constexpr uint32_t kWatchTimeRecorder_FinalizeWatchTime_Name = 1;
constexpr uint32_t kWatchTimeRecorder_OnError_Name = 2;
constexpr uint32_t kWatchTimeRecorder_SetAudioDecoderName_Name = 3;
constexpr uint32_t kWatchTimeRecorder_SetVideoDecoderName_Name = 4;
constexpr uint32_t kWatchTimeRecorder_SetAutoplayInitiated_Name = 5;
constexpr uint32_t kWatchTimeRecorder_UpdateUnderflowCount_Name = 6;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_