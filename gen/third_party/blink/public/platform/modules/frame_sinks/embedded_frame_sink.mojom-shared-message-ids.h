// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name = 0;
constexpr uint32_t kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name = 0;
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name = 1;
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_