// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kRenderMessageFilter_GenerateRoutingID_Name = 0;
constexpr uint32_t kRenderMessageFilter_CreateNewWidget_Name = 1;
constexpr uint32_t kRenderMessageFilter_CreateFullscreenWidget_Name = 2;
constexpr uint32_t kRenderMessageFilter_DidGenerateCacheableMetadata_Name = 3;
constexpr uint32_t kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name = 4;
constexpr uint32_t kRenderMessageFilter_HasGpuProcess_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_MESSAGE_IDS_H_