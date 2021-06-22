// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kDevToolsFrontend_SetupDevToolsFrontend_Name = 0;
constexpr uint32_t kDevToolsFrontend_SetupDevToolsExtensionAPI_Name = 1;
constexpr uint32_t kDevToolsFrontendHost_DispatchEmbedderMessage_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_MESSAGE_IDS_H_