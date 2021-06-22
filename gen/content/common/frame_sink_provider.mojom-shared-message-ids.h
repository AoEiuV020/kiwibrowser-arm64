// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kFrameSinkProvider_CreateForWidget_Name = 0;
constexpr uint32_t kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_