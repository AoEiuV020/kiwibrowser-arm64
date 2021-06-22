// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


constexpr uint32_t kIMEDriver_StartSession_Name = 0;
constexpr uint32_t kIMERegistrar_RegisterDriver_Name = 0;
constexpr uint32_t kInputMethod_OnTextInputTypeChanged_Name = 0;
constexpr uint32_t kInputMethod_OnCaretBoundsChanged_Name = 1;
constexpr uint32_t kInputMethod_ProcessKeyEvent_Name = 2;
constexpr uint32_t kInputMethod_CancelComposition_Name = 3;
constexpr uint32_t kTextInputClient_SetCompositionText_Name = 0;
constexpr uint32_t kTextInputClient_ConfirmCompositionText_Name = 1;
constexpr uint32_t kTextInputClient_ClearCompositionText_Name = 2;
constexpr uint32_t kTextInputClient_InsertText_Name = 3;
constexpr uint32_t kTextInputClient_InsertChar_Name = 4;
constexpr uint32_t kTextInputClient_DispatchKeyEventPostIME_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_