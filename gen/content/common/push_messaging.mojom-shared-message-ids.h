// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kPushMessaging_Subscribe_Name = 0;
constexpr uint32_t kPushMessaging_Unsubscribe_Name = 1;
constexpr uint32_t kPushMessaging_GetSubscription_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_