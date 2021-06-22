// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace memory_instrumentation {
namespace mojom {

namespace internal {


constexpr uint32_t kClientProcess_RequestChromeMemoryDump_Name = 0;
constexpr uint32_t kClientProcess_RequestOSMemoryDump_Name = 1;
constexpr uint32_t kHeapProfiler_DumpProcessesForTracing_Name = 0;
constexpr uint32_t kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name = 0;
constexpr uint32_t kCoordinator_RegisterClientProcess_Name = 0;
constexpr uint32_t kCoordinator_RequestGlobalMemoryDump_Name = 1;
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpForPid_Name = 2;
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name = 3;
constexpr uint32_t kCoordinator_RegisterHeapProfiler_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_