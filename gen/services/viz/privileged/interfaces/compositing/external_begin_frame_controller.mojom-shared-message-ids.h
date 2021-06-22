// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


constexpr uint32_t kExternalBeginFrameController_IssueExternalBeginFrame_Name = 0;
constexpr uint32_t kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name = 0;
constexpr uint32_t kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_