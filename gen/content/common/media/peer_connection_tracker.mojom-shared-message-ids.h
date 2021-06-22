// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kPeerConnectionTrackerHost_RemovePeerConnection_Name = 0;
constexpr uint32_t kPeerConnectionTrackerHost_UpdatePeerConnection_Name = 1;
constexpr uint32_t kPeerConnectionTrackerHost_GetUserMedia_Name = 2;
constexpr uint32_t kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_MESSAGE_IDS_H_