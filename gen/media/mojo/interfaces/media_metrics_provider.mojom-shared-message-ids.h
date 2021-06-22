// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kMediaMetricsProvider_Initialize_Name = 0;
constexpr uint32_t kMediaMetricsProvider_OnError_Name = 1;
constexpr uint32_t kMediaMetricsProvider_SetIsEME_Name = 2;
constexpr uint32_t kMediaMetricsProvider_SetTimeToMetadata_Name = 3;
constexpr uint32_t kMediaMetricsProvider_SetTimeToFirstFrame_Name = 4;
constexpr uint32_t kMediaMetricsProvider_SetTimeToPlayReady_Name = 5;
constexpr uint32_t kMediaMetricsProvider_AcquireWatchTimeRecorder_Name = 6;
constexpr uint32_t kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_