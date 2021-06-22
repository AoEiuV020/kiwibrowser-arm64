// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kMediaStreamDeviceObserver_OnDeviceStopped_Name = 0;
constexpr uint32_t kMediaStreamDispatcherHost_GenerateStream_Name = 0;
constexpr uint32_t kMediaStreamDispatcherHost_CancelRequest_Name = 1;
constexpr uint32_t kMediaStreamDispatcherHost_StopStreamDevice_Name = 2;
constexpr uint32_t kMediaStreamDispatcherHost_OpenDevice_Name = 3;
constexpr uint32_t kMediaStreamDispatcherHost_CloseDevice_Name = 4;
constexpr uint32_t kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name = 5;
constexpr uint32_t kMediaStreamDispatcherHost_OnStreamStarted_Name = 6;
constexpr uint32_t kMediaStreamTrackMetricsHost_AddTrack_Name = 0;
constexpr uint32_t kMediaStreamTrackMetricsHost_RemoveTrack_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_