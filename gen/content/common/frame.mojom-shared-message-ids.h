// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kFrame_GetInterfaceProvider_Name = 0;
constexpr uint32_t kFrame_GetCanonicalUrlForSharing_Name = 1;
constexpr uint32_t kFrame_ExtractSmartClipData_Name = 2;
constexpr uint32_t kFrameNavigationControl_CommitNavigation_Name = 0;
constexpr uint32_t kFrameNavigationControl_CommitFailedNavigation_Name = 1;
constexpr uint32_t kFrameNavigationControl_CommitSameDocumentNavigation_Name = 2;
constexpr uint32_t kFrameNavigationControl_HandleRendererDebugURL_Name = 3;
constexpr uint32_t kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name = 4;
constexpr uint32_t kFrameBindingsControl_AllowBindings_Name = 0;
constexpr uint32_t kFrameFactory_CreateFrame_Name = 0;
constexpr uint32_t kFrameHost_CreateNewWindow_Name = 0;
constexpr uint32_t kFrameHost_IssueKeepAliveHandle_Name = 1;
constexpr uint32_t kFrameHost_DidCommitProvisionalLoad_Name = 2;
constexpr uint32_t kFrameHost_DidCommitSameDocumentNavigation_Name = 3;
constexpr uint32_t kFrameHost_BeginNavigation_Name = 4;
constexpr uint32_t kFrameHost_SubresourceResponseStarted_Name = 5;
constexpr uint32_t kFrameHost_ResourceLoadComplete_Name = 6;
constexpr uint32_t kFrameHost_DidChangeName_Name = 7;
constexpr uint32_t kFrameHost_EnforceInsecureRequestPolicy_Name = 8;
constexpr uint32_t kFrameHost_EnforceInsecureNavigationsSet_Name = 9;
constexpr uint32_t kFrameHost_DidSetFramePolicyHeaders_Name = 10;
constexpr uint32_t kFrameHost_CancelInitialHistoryLoad_Name = 11;
constexpr uint32_t kFrameHost_UpdateEncoding_Name = 12;
constexpr uint32_t kFrameHost_FrameSizeChanged_Name = 13;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_MOJOM_SHARED_MESSAGE_IDS_H_