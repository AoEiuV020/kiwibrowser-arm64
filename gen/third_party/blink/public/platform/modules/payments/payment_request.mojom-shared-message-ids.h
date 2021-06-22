// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace payments {
namespace mojom {

namespace internal {


constexpr uint32_t kPaymentRequestClient_OnShippingAddressChange_Name = 0;
constexpr uint32_t kPaymentRequestClient_OnShippingOptionChange_Name = 1;
constexpr uint32_t kPaymentRequestClient_OnPaymentResponse_Name = 2;
constexpr uint32_t kPaymentRequestClient_OnError_Name = 3;
constexpr uint32_t kPaymentRequestClient_OnComplete_Name = 4;
constexpr uint32_t kPaymentRequestClient_OnAbort_Name = 5;
constexpr uint32_t kPaymentRequestClient_OnCanMakePayment_Name = 6;
constexpr uint32_t kPaymentRequestClient_WarnNoFavicon_Name = 7;
constexpr uint32_t kPaymentRequest_Init_Name = 0;
constexpr uint32_t kPaymentRequest_Show_Name = 1;
constexpr uint32_t kPaymentRequest_UpdateWith_Name = 2;
constexpr uint32_t kPaymentRequest_NoUpdatedPaymentDetails_Name = 3;
constexpr uint32_t kPaymentRequest_Abort_Name = 4;
constexpr uint32_t kPaymentRequest_Complete_Name = 5;
constexpr uint32_t kPaymentRequest_CanMakePayment_Name = 6;

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_