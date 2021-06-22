// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kEmbeddedWorkerInstanceClient_StartWorker_Name = 0;
constexpr uint32_t kEmbeddedWorkerInstanceClient_StopWorker_Name = 1;
constexpr uint32_t kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name = 2;
constexpr uint32_t kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name = 3;
constexpr uint32_t kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name = 4;
constexpr uint32_t kEmbeddedWorkerInstanceHost_RequestTermination_Name = 0;
constexpr uint32_t kEmbeddedWorkerInstanceHost_CountFeature_Name = 1;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name = 2;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name = 3;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name = 4;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnThreadStarted_Name = 5;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name = 6;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStarted_Name = 7;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportException_Name = 8;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name = 9;
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStopped_Name = 10;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_