// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kSharedWorker_Connect_Name = 0;
constexpr uint32_t kSharedWorker_Terminate_Name = 1;
constexpr uint32_t kSharedWorker_BindDevToolsAgent_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_