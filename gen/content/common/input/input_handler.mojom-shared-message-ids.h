// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kWidgetInputHandlerHost_CancelTouchTimeout_Name = 0;
constexpr uint32_t kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name = 1;
constexpr uint32_t kWidgetInputHandlerHost_DidOverscroll_Name = 2;
constexpr uint32_t kWidgetInputHandlerHost_DidStopFlinging_Name = 3;
constexpr uint32_t kWidgetInputHandlerHost_DidStartScrollingViewport_Name = 4;
constexpr uint32_t kWidgetInputHandlerHost_ImeCancelComposition_Name = 5;
constexpr uint32_t kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name = 6;
constexpr uint32_t kWidgetInputHandler_SetFocus_Name = 0;
constexpr uint32_t kWidgetInputHandler_MouseCaptureLost_Name = 1;
constexpr uint32_t kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name = 2;
constexpr uint32_t kWidgetInputHandler_CursorVisibilityChanged_Name = 3;
constexpr uint32_t kWidgetInputHandler_ImeSetComposition_Name = 4;
constexpr uint32_t kWidgetInputHandler_ImeCommitText_Name = 5;
constexpr uint32_t kWidgetInputHandler_ImeFinishComposingText_Name = 6;
constexpr uint32_t kWidgetInputHandler_RequestTextInputStateUpdate_Name = 7;
constexpr uint32_t kWidgetInputHandler_RequestCompositionUpdates_Name = 8;
constexpr uint32_t kWidgetInputHandler_DispatchEvent_Name = 9;
constexpr uint32_t kWidgetInputHandler_DispatchNonBlockingEvent_Name = 10;
constexpr uint32_t kWidgetInputHandler_AttachSynchronousCompositor_Name = 11;
constexpr uint32_t kFrameInputHandler_SetCompositionFromExistingText_Name = 0;
constexpr uint32_t kFrameInputHandler_ExtendSelectionAndDelete_Name = 1;
constexpr uint32_t kFrameInputHandler_DeleteSurroundingText_Name = 2;
constexpr uint32_t kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name = 3;
constexpr uint32_t kFrameInputHandler_SetEditableSelectionOffsets_Name = 4;
constexpr uint32_t kFrameInputHandler_ExecuteEditCommand_Name = 5;
constexpr uint32_t kFrameInputHandler_Undo_Name = 6;
constexpr uint32_t kFrameInputHandler_Redo_Name = 7;
constexpr uint32_t kFrameInputHandler_Cut_Name = 8;
constexpr uint32_t kFrameInputHandler_Copy_Name = 9;
constexpr uint32_t kFrameInputHandler_CopyToFindPboard_Name = 10;
constexpr uint32_t kFrameInputHandler_Paste_Name = 11;
constexpr uint32_t kFrameInputHandler_PasteAndMatchStyle_Name = 12;
constexpr uint32_t kFrameInputHandler_Delete_Name = 13;
constexpr uint32_t kFrameInputHandler_SelectAll_Name = 14;
constexpr uint32_t kFrameInputHandler_CollapseSelection_Name = 15;
constexpr uint32_t kFrameInputHandler_Replace_Name = 16;
constexpr uint32_t kFrameInputHandler_ReplaceMisspelling_Name = 17;
constexpr uint32_t kFrameInputHandler_SelectRange_Name = 18;
constexpr uint32_t kFrameInputHandler_AdjustSelectionByCharacterOffset_Name = 19;
constexpr uint32_t kFrameInputHandler_MoveRangeSelectionExtent_Name = 20;
constexpr uint32_t kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name = 21;
constexpr uint32_t kFrameInputHandler_MoveCaret_Name = 22;
constexpr uint32_t kFrameInputHandler_GetWidgetInputHandler_Name = 23;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_MESSAGE_IDS_H_