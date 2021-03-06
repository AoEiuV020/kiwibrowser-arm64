// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kUDPSocket_Bind_Name = 0;
constexpr uint32_t kUDPSocket_Connect_Name = 1;
constexpr uint32_t kUDPSocket_SetBroadcast_Name = 2;
constexpr uint32_t kUDPSocket_JoinGroup_Name = 3;
constexpr uint32_t kUDPSocket_LeaveGroup_Name = 4;
constexpr uint32_t kUDPSocket_ReceiveMore_Name = 5;
constexpr uint32_t kUDPSocket_ReceiveMoreWithBufferSize_Name = 6;
constexpr uint32_t kUDPSocket_SendTo_Name = 7;
constexpr uint32_t kUDPSocket_Send_Name = 8;
constexpr uint32_t kUDPSocket_Close_Name = 9;
constexpr uint32_t kUDPSocketReceiver_OnReceived_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_