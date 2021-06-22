// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kVRService_SetClient_Name = 0;
constexpr uint32_t kVRService_SetListeningForActivate_Name = 1;
constexpr uint32_t kVRServiceClient_OnDisplayConnected_Name = 0;
constexpr uint32_t kVRSubmitFrameClient_OnSubmitFrameTransferred_Name = 0;
constexpr uint32_t kVRSubmitFrameClient_OnSubmitFrameRendered_Name = 1;
constexpr uint32_t kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name = 2;
constexpr uint32_t kVRDisplayHost_RequestPresent_Name = 0;
constexpr uint32_t kVRDisplayHost_ExitPresent_Name = 1;
constexpr uint32_t kVRMagicWindowProvider_GetPose_Name = 0;
constexpr uint32_t kVRMagicWindowProvider_GetFrameData_Name = 1;
constexpr uint32_t kVRPresentationProvider_GetVSync_Name = 0;
constexpr uint32_t kVRPresentationProvider_UpdateLayerBounds_Name = 1;
constexpr uint32_t kVRPresentationProvider_SubmitFrameMissing_Name = 2;
constexpr uint32_t kVRPresentationProvider_SubmitFrame_Name = 3;
constexpr uint32_t kVRPresentationProvider_SubmitFrameWithTextureHandle_Name = 4;
constexpr uint32_t kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name = 5;
constexpr uint32_t kVRDisplayClient_OnChanged_Name = 0;
constexpr uint32_t kVRDisplayClient_OnExitPresent_Name = 1;
constexpr uint32_t kVRDisplayClient_OnBlur_Name = 2;
constexpr uint32_t kVRDisplayClient_OnFocus_Name = 3;
constexpr uint32_t kVRDisplayClient_OnActivate_Name = 4;
constexpr uint32_t kVRDisplayClient_OnDeactivate_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_