// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kInputInjector_QueueSyntheticSmoothDrag_Name = 0;
constexpr uint32_t kInputInjector_QueueSyntheticSmoothScroll_Name = 1;
constexpr uint32_t kInputInjector_QueueSyntheticPinch_Name = 2;
constexpr uint32_t kInputInjector_QueueSyntheticTap_Name = 3;
constexpr uint32_t kInputInjector_QueueSyntheticPointerAction_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_