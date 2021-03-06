// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kPresentationConnection_OnMessage_Name = 0;
constexpr uint32_t kPresentationConnection_DidChangeState_Name = 1;
constexpr uint32_t kPresentationConnection_RequestClose_Name = 2;
constexpr uint32_t kPresentationService_SetController_Name = 0;
constexpr uint32_t kPresentationService_SetReceiver_Name = 1;
constexpr uint32_t kPresentationService_SetDefaultPresentationUrls_Name = 2;
constexpr uint32_t kPresentationService_ListenForScreenAvailability_Name = 3;
constexpr uint32_t kPresentationService_StopListeningForScreenAvailability_Name = 4;
constexpr uint32_t kPresentationService_StartPresentation_Name = 5;
constexpr uint32_t kPresentationService_ReconnectPresentation_Name = 6;
constexpr uint32_t kPresentationService_SetPresentationConnection_Name = 7;
constexpr uint32_t kPresentationService_CloseConnection_Name = 8;
constexpr uint32_t kPresentationService_Terminate_Name = 9;
constexpr uint32_t kPresentationController_OnScreenAvailabilityUpdated_Name = 0;
constexpr uint32_t kPresentationController_OnDefaultPresentationStarted_Name = 1;
constexpr uint32_t kPresentationController_OnConnectionStateChanged_Name = 2;
constexpr uint32_t kPresentationController_OnConnectionClosed_Name = 3;
constexpr uint32_t kPresentationReceiver_OnReceiverConnectionAvailable_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_MESSAGE_IDS_H_