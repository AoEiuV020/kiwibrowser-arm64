// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kRemoterFactory_Create_Name = 0;
constexpr uint32_t kRemotingDataStreamSender_SendFrame_Name = 0;
constexpr uint32_t kRemotingDataStreamSender_CancelInFlightData_Name = 1;
constexpr uint32_t kRemoter_Start_Name = 0;
constexpr uint32_t kRemoter_StartDataStreams_Name = 1;
constexpr uint32_t kRemoter_Stop_Name = 2;
constexpr uint32_t kRemoter_SendMessageToSink_Name = 3;
constexpr uint32_t kRemoter_EstimateTransmissionCapacity_Name = 4;
constexpr uint32_t kRemotingSource_OnSinkAvailable_Name = 0;
constexpr uint32_t kRemotingSource_OnSinkGone_Name = 1;
constexpr uint32_t kRemotingSource_OnStarted_Name = 2;
constexpr uint32_t kRemotingSource_OnStartFailed_Name = 3;
constexpr uint32_t kRemotingSource_OnMessageFromSink_Name = 4;
constexpr uint32_t kRemotingSource_OnStopped_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_