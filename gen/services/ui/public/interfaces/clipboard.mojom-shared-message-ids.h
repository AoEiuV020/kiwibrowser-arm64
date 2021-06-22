// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


constexpr uint32_t kClipboard_GetSequenceNumber_Name = 0;
constexpr uint32_t kClipboard_GetAvailableMimeTypes_Name = 1;
constexpr uint32_t kClipboard_ReadClipboardData_Name = 2;
constexpr uint32_t kClipboard_WriteClipboardData_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_