// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kWorkerContentSettingsProxy_AllowIndexedDB_Name = 0;
constexpr uint32_t kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_