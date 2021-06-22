// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


constexpr uint32_t kAgentRegistry_RegisterAgent_Name = 0;
constexpr uint32_t kAgent_StartTracing_Name = 0;
constexpr uint32_t kAgent_StopAndFlush_Name = 1;
constexpr uint32_t kAgent_RequestClockSyncMarker_Name = 2;
constexpr uint32_t kAgent_RequestBufferStatus_Name = 3;
constexpr uint32_t kAgent_GetCategories_Name = 4;
constexpr uint32_t kRecorder_AddChunk_Name = 0;
constexpr uint32_t kRecorder_AddMetadata_Name = 1;
constexpr uint32_t kCoordinator_StartTracing_Name = 0;
constexpr uint32_t kCoordinator_StopAndFlush_Name = 1;
constexpr uint32_t kCoordinator_StopAndFlushAgent_Name = 2;
constexpr uint32_t kCoordinator_IsTracing_Name = 3;
constexpr uint32_t kCoordinator_RequestBufferUsage_Name = 4;
constexpr uint32_t kCoordinator_GetCategories_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_