// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace metrics {
namespace mojom {

namespace internal {


constexpr uint32_t kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name = 0;
constexpr uint32_t kSingleSampleMetric_SetSample_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_MESSAGE_IDS_H_