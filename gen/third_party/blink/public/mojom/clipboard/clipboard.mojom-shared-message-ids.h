// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kClipboardHost_GetSequenceNumber_Name = 0;
constexpr uint32_t kClipboardHost_IsFormatAvailable_Name = 1;
constexpr uint32_t kClipboardHost_ReadAvailableTypes_Name = 2;
constexpr uint32_t kClipboardHost_ReadText_Name = 3;
constexpr uint32_t kClipboardHost_ReadHtml_Name = 4;
constexpr uint32_t kClipboardHost_ReadRtf_Name = 5;
constexpr uint32_t kClipboardHost_ReadImage_Name = 6;
constexpr uint32_t kClipboardHost_ReadCustomData_Name = 7;
constexpr uint32_t kClipboardHost_WriteText_Name = 8;
constexpr uint32_t kClipboardHost_WriteHtml_Name = 9;
constexpr uint32_t kClipboardHost_WriteSmartPasteMarker_Name = 10;
constexpr uint32_t kClipboardHost_WriteCustomData_Name = 11;
constexpr uint32_t kClipboardHost_WriteBookmark_Name = 12;
constexpr uint32_t kClipboardHost_WriteImage_Name = 13;
constexpr uint32_t kClipboardHost_CommitWrite_Name = 14;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_