// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


constexpr uint32_t kProducerHost_CommitData_Name = 0;
constexpr uint32_t kProducerClient_OnTracingStart_Name = 0;
constexpr uint32_t kProducerClient_CreateDataSourceInstance_Name = 1;
constexpr uint32_t kProducerClient_TearDownDataSourceInstance_Name = 2;
constexpr uint32_t kProducerClient_Flush_Name = 3;
constexpr uint32_t kPerfettoService_ConnectToProducerHost_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_