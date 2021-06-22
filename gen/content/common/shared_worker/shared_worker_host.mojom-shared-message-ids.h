// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kSharedWorkerHost_OnConnected_Name = 0;
constexpr uint32_t kSharedWorkerHost_OnContextClosed_Name = 1;
constexpr uint32_t kSharedWorkerHost_OnReadyForInspection_Name = 2;
constexpr uint32_t kSharedWorkerHost_OnScriptLoaded_Name = 3;
constexpr uint32_t kSharedWorkerHost_OnScriptLoadFailed_Name = 4;
constexpr uint32_t kSharedWorkerHost_OnFeatureUsed_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_