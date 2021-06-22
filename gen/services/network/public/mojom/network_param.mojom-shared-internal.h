// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
using AuthChallengeInfo_Data = mojo::native::internal::NativeStruct_Data;
using AuthCredentials_Data = mojo::native::internal::NativeStruct_Data;
using CertVerifyResult_Data = mojo::native::internal::NativeStruct_Data;
using HostPortPair_Data = mojo::native::internal::NativeStruct_Data;
using X509Certificate_Data = mojo::native::internal::NativeStruct_Data;
using SSLCertRequestInfo_Data = mojo::native::internal::NativeStruct_Data;
using SSLInfo_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_INTERNAL_H_