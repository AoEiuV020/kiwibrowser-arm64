// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kWebSocketClient_OnFailChannel_Name = 0;
constexpr uint32_t kWebSocketClient_OnStartOpeningHandshake_Name = 1;
constexpr uint32_t kWebSocketClient_OnFinishOpeningHandshake_Name = 2;
constexpr uint32_t kWebSocketClient_OnAddChannelResponse_Name = 3;
constexpr uint32_t kWebSocketClient_OnDataFrame_Name = 4;
constexpr uint32_t kWebSocketClient_OnFlowControl_Name = 5;
constexpr uint32_t kWebSocketClient_OnDropChannel_Name = 6;
constexpr uint32_t kWebSocketClient_OnClosingHandshake_Name = 7;
constexpr uint32_t kWebSocket_AddChannelRequest_Name = 0;
constexpr uint32_t kWebSocket_SendFrame_Name = 1;
constexpr uint32_t kWebSocket_SendFlowControl_Name = 2;
constexpr uint32_t kWebSocket_StartClosingHandshake_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_