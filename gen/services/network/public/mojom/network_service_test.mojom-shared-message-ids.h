// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


constexpr uint32_t kNetworkServiceTest_AddRules_Name = 0;
constexpr uint32_t kNetworkServiceTest_SimulateNetworkChange_Name = 1;
constexpr uint32_t kNetworkServiceTest_SimulateCrash_Name = 2;
constexpr uint32_t kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name = 3;
constexpr uint32_t kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name = 4;
constexpr uint32_t kNetworkServiceTest_SetShouldRequireCT_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_