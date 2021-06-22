// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


constexpr uint32_t kWindowTree_NewWindow_Name = 0;
constexpr uint32_t kWindowTree_NewTopLevelWindow_Name = 1;
constexpr uint32_t kWindowTree_DeleteWindow_Name = 2;
constexpr uint32_t kWindowTree_SetCapture_Name = 3;
constexpr uint32_t kWindowTree_ReleaseCapture_Name = 4;
constexpr uint32_t kWindowTree_StartPointerWatcher_Name = 5;
constexpr uint32_t kWindowTree_StopPointerWatcher_Name = 6;
constexpr uint32_t kWindowTree_SetWindowBounds_Name = 7;
constexpr uint32_t kWindowTree_SetWindowTransform_Name = 8;
constexpr uint32_t kWindowTree_SetClientArea_Name = 9;
constexpr uint32_t kWindowTree_SetHitTestMask_Name = 10;
constexpr uint32_t kWindowTree_SetCanAcceptDrops_Name = 11;
constexpr uint32_t kWindowTree_SetWindowVisibility_Name = 12;
constexpr uint32_t kWindowTree_SetWindowProperty_Name = 13;
constexpr uint32_t kWindowTree_SetWindowOpacity_Name = 14;
constexpr uint32_t kWindowTree_AttachCompositorFrameSink_Name = 15;
constexpr uint32_t kWindowTree_AddWindow_Name = 16;
constexpr uint32_t kWindowTree_RemoveWindowFromParent_Name = 17;
constexpr uint32_t kWindowTree_AddTransientWindow_Name = 18;
constexpr uint32_t kWindowTree_RemoveTransientWindowFromParent_Name = 19;
constexpr uint32_t kWindowTree_SetModalType_Name = 20;
constexpr uint32_t kWindowTree_SetChildModalParent_Name = 21;
constexpr uint32_t kWindowTree_ReorderWindow_Name = 22;
constexpr uint32_t kWindowTree_GetWindowTree_Name = 23;
constexpr uint32_t kWindowTree_Embed_Name = 24;
constexpr uint32_t kWindowTree_ScheduleEmbed_Name = 25;
constexpr uint32_t kWindowTree_ScheduleEmbedForExistingClient_Name = 26;
constexpr uint32_t kWindowTree_EmbedUsingToken_Name = 27;
constexpr uint32_t kWindowTree_SetFocus_Name = 28;
constexpr uint32_t kWindowTree_SetCanFocus_Name = 29;
constexpr uint32_t kWindowTree_SetCursor_Name = 30;
constexpr uint32_t kWindowTree_SetWindowTextInputState_Name = 31;
constexpr uint32_t kWindowTree_SetImeVisibility_Name = 32;
constexpr uint32_t kWindowTree_SetEventTargetingPolicy_Name = 33;
constexpr uint32_t kWindowTree_OnWindowInputEventAck_Name = 34;
constexpr uint32_t kWindowTree_DeactivateWindow_Name = 35;
constexpr uint32_t kWindowTree_StackAbove_Name = 36;
constexpr uint32_t kWindowTree_StackAtTop_Name = 37;
constexpr uint32_t kWindowTree_PerformWmAction_Name = 38;
constexpr uint32_t kWindowTree_GetWindowManagerClient_Name = 39;
constexpr uint32_t kWindowTree_GetCursorLocationMemory_Name = 40;
constexpr uint32_t kWindowTree_PerformWindowMove_Name = 41;
constexpr uint32_t kWindowTree_CancelWindowMove_Name = 42;
constexpr uint32_t kWindowTree_PerformDragDrop_Name = 43;
constexpr uint32_t kWindowTree_CancelDragDrop_Name = 44;
constexpr uint32_t kWindowTreeClient_OnEmbed_Name = 0;
constexpr uint32_t kWindowTreeClient_OnEmbedFromToken_Name = 1;
constexpr uint32_t kWindowTreeClient_OnEmbeddedAppDisconnected_Name = 2;
constexpr uint32_t kWindowTreeClient_OnUnembed_Name = 3;
constexpr uint32_t kWindowTreeClient_OnCaptureChanged_Name = 4;
constexpr uint32_t kWindowTreeClient_OnFrameSinkIdAllocated_Name = 5;
constexpr uint32_t kWindowTreeClient_OnTopLevelCreated_Name = 6;
constexpr uint32_t kWindowTreeClient_OnWindowBoundsChanged_Name = 7;
constexpr uint32_t kWindowTreeClient_OnWindowTransformChanged_Name = 8;
constexpr uint32_t kWindowTreeClient_OnClientAreaChanged_Name = 9;
constexpr uint32_t kWindowTreeClient_OnTransientWindowAdded_Name = 10;
constexpr uint32_t kWindowTreeClient_OnTransientWindowRemoved_Name = 11;
constexpr uint32_t kWindowTreeClient_OnWindowHierarchyChanged_Name = 12;
constexpr uint32_t kWindowTreeClient_OnWindowReordered_Name = 13;
constexpr uint32_t kWindowTreeClient_OnWindowDeleted_Name = 14;
constexpr uint32_t kWindowTreeClient_OnWindowVisibilityChanged_Name = 15;
constexpr uint32_t kWindowTreeClient_OnWindowOpacityChanged_Name = 16;
constexpr uint32_t kWindowTreeClient_OnWindowParentDrawnStateChanged_Name = 17;
constexpr uint32_t kWindowTreeClient_OnWindowSharedPropertyChanged_Name = 18;
constexpr uint32_t kWindowTreeClient_OnWindowInputEvent_Name = 19;
constexpr uint32_t kWindowTreeClient_OnPointerEventObserved_Name = 20;
constexpr uint32_t kWindowTreeClient_OnWindowFocused_Name = 21;
constexpr uint32_t kWindowTreeClient_OnWindowCursorChanged_Name = 22;
constexpr uint32_t kWindowTreeClient_OnWindowSurfaceChanged_Name = 23;
constexpr uint32_t kWindowTreeClient_OnDragDropStart_Name = 24;
constexpr uint32_t kWindowTreeClient_OnDragEnter_Name = 25;
constexpr uint32_t kWindowTreeClient_OnDragOver_Name = 26;
constexpr uint32_t kWindowTreeClient_OnDragLeave_Name = 27;
constexpr uint32_t kWindowTreeClient_OnCompleteDrop_Name = 28;
constexpr uint32_t kWindowTreeClient_OnPerformDragDropCompleted_Name = 29;
constexpr uint32_t kWindowTreeClient_OnDragDropDone_Name = 30;
constexpr uint32_t kWindowTreeClient_OnChangeCompleted_Name = 31;
constexpr uint32_t kWindowTreeClient_RequestClose_Name = 32;
constexpr uint32_t kWindowTreeClient_GetWindowManager_Name = 33;
constexpr uint32_t kWindowTreeFactory_CreateWindowTree_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_