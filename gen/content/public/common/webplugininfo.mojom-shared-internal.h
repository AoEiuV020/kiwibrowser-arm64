// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_WEBPLUGININFO_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_PUBLIC_COMMON_WEBPLUGININFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
using WebPluginInfo_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_WEBPLUGININFO_MOJOM_SHARED_INTERNAL_H_