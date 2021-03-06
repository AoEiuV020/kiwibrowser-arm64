// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kRenderer_CreateEmbedderRendererService_Name = 0;
constexpr uint32_t kRenderer_CreateView_Name = 1;
constexpr uint32_t kRenderer_CreateFrame_Name = 2;
constexpr uint32_t kRenderer_CreateFrameProxy_Name = 3;
constexpr uint32_t kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name = 4;
constexpr uint32_t kRenderer_OnNetworkConnectionChanged_Name = 5;
constexpr uint32_t kRenderer_OnNetworkQualityChanged_Name = 6;
constexpr uint32_t kRenderer_SetWebKitSharedTimersSuspended_Name = 7;
constexpr uint32_t kRenderer_SetUserAgent_Name = 8;
constexpr uint32_t kRenderer_UpdateScrollbarTheme_Name = 9;
constexpr uint32_t kRenderer_OnSystemColorsChanged_Name = 10;
constexpr uint32_t kRenderer_PurgePluginListCache_Name = 11;
constexpr uint32_t kRenderer_SetProcessBackgrounded_Name = 12;
constexpr uint32_t kRenderer_SetSchedulerKeepActive_Name = 13;
constexpr uint32_t kRenderer_ProcessPurgeAndSuspend_Name = 14;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_