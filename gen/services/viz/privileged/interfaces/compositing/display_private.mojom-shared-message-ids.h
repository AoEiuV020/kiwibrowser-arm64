// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kDisplayPrivate_SetDisplayVisible_Name = 0;
constexpr uint32_t kDisplayPrivate_SetDisplayColorMatrix_Name = 1;
constexpr uint32_t kDisplayPrivate_SetDisplayColorSpace_Name = 2;
constexpr uint32_t kDisplayPrivate_SetOutputIsSecure_Name = 3;
constexpr uint32_t kDisplayPrivate_SetAuthoritativeVSyncInterval_Name = 4;
constexpr uint32_t kDisplayPrivate_SetDisplayVSyncParameters_Name = 5;
constexpr uint32_t kDisplayClient_OnDisplayReceivedCALayerParams_Name = 0;
constexpr uint32_t kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name = 1;
constexpr uint32_t kDisplayClient_CreateLayeredWindowUpdater_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_MESSAGE_IDS_H_