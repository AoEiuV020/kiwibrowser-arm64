// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponse_Name = 0;
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseBlob_Name = 1;
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name = 2;
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseStream_Name = 3;
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnFallback_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_