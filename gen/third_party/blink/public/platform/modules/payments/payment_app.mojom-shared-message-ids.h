// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace payments {
namespace mojom {

namespace internal {


constexpr uint32_t kPaymentManager_Init_Name = 0;
constexpr uint32_t kPaymentManager_DeletePaymentInstrument_Name = 1;
constexpr uint32_t kPaymentManager_GetPaymentInstrument_Name = 2;
constexpr uint32_t kPaymentManager_KeysOfPaymentInstruments_Name = 3;
constexpr uint32_t kPaymentManager_HasPaymentInstrument_Name = 4;
constexpr uint32_t kPaymentManager_SetPaymentInstrument_Name = 5;
constexpr uint32_t kPaymentManager_ClearPaymentInstruments_Name = 6;
constexpr uint32_t kPaymentManager_SetUserHint_Name = 7;
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name = 0;
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name = 1;
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_