// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


constexpr uint32_t kWindowManager_OnConnect_Name = 0;
constexpr uint32_t kWindowManager_WmOnAcceleratedWidgetForDisplay_Name = 1;
constexpr uint32_t kWindowManager_WmNewDisplayAdded_Name = 2;
constexpr uint32_t kWindowManager_WmDisplayRemoved_Name = 3;
constexpr uint32_t kWindowManager_WmDisplayModified_Name = 4;
constexpr uint32_t kWindowManager_WmSetBounds_Name = 5;
constexpr uint32_t kWindowManager_WmSetProperty_Name = 6;
constexpr uint32_t kWindowManager_WmSetModalType_Name = 7;
constexpr uint32_t kWindowManager_WmSetCanFocus_Name = 8;
constexpr uint32_t kWindowManager_WmCreateTopLevelWindow_Name = 9;
constexpr uint32_t kWindowManager_WmClientJankinessChanged_Name = 10;
constexpr uint32_t kWindowManager_WmBuildDragImage_Name = 11;
constexpr uint32_t kWindowManager_WmMoveDragImage_Name = 12;
constexpr uint32_t kWindowManager_WmDestroyDragImage_Name = 13;
constexpr uint32_t kWindowManager_WmPerformMoveLoop_Name = 14;
constexpr uint32_t kWindowManager_WmCancelMoveLoop_Name = 15;
constexpr uint32_t kWindowManager_WmDeactivateWindow_Name = 16;
constexpr uint32_t kWindowManager_WmStackAbove_Name = 17;
constexpr uint32_t kWindowManager_WmStackAtTop_Name = 18;
constexpr uint32_t kWindowManager_WmPerformWmAction_Name = 19;
constexpr uint32_t kWindowManager_OnAccelerator_Name = 20;
constexpr uint32_t kWindowManager_OnCursorTouchVisibleChanged_Name = 21;
constexpr uint32_t kWindowManager_OnEventBlockedByModalWindow_Name = 22;
constexpr uint32_t kWindowManagerClient_AddActivationParent_Name = 0;
constexpr uint32_t kWindowManagerClient_RemoveActivationParent_Name = 1;
constexpr uint32_t kWindowManagerClient_SetExtendedHitRegionForChildren_Name = 2;
constexpr uint32_t kWindowManagerClient_AddAccelerators_Name = 3;
constexpr uint32_t kWindowManagerClient_RemoveAccelerator_Name = 4;
constexpr uint32_t kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name = 5;
constexpr uint32_t kWindowManagerClient_SetDisplayRoot_Name = 6;
constexpr uint32_t kWindowManagerClient_SetDisplayConfiguration_Name = 7;
constexpr uint32_t kWindowManagerClient_SwapDisplayRoots_Name = 8;
constexpr uint32_t kWindowManagerClient_SetBlockingContainers_Name = 9;
constexpr uint32_t kWindowManagerClient_WmResponse_Name = 10;
constexpr uint32_t kWindowManagerClient_WmSetBoundsResponse_Name = 11;
constexpr uint32_t kWindowManagerClient_WmRequestClose_Name = 12;
constexpr uint32_t kWindowManagerClient_WmSetFrameDecorationValues_Name = 13;
constexpr uint32_t kWindowManagerClient_WmSetNonClientCursor_Name = 14;
constexpr uint32_t kWindowManagerClient_WmLockCursor_Name = 15;
constexpr uint32_t kWindowManagerClient_WmUnlockCursor_Name = 16;
constexpr uint32_t kWindowManagerClient_WmSetCursorVisible_Name = 17;
constexpr uint32_t kWindowManagerClient_WmSetCursorSize_Name = 18;
constexpr uint32_t kWindowManagerClient_WmSetGlobalOverrideCursor_Name = 19;
constexpr uint32_t kWindowManagerClient_WmMoveCursorToDisplayLocation_Name = 20;
constexpr uint32_t kWindowManagerClient_WmConfineCursorToBounds_Name = 21;
constexpr uint32_t kWindowManagerClient_WmSetCursorTouchVisible_Name = 22;
constexpr uint32_t kWindowManagerClient_OnWmCreatedTopLevelWindow_Name = 23;
constexpr uint32_t kWindowManagerClient_OnAcceleratorAck_Name = 24;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_