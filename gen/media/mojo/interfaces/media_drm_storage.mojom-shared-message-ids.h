// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kMediaDrmStorage_Initialize_Name = 0;
constexpr uint32_t kMediaDrmStorage_OnProvisioned_Name = 1;
constexpr uint32_t kMediaDrmStorage_SavePersistentSession_Name = 2;
constexpr uint32_t kMediaDrmStorage_LoadPersistentSession_Name = 3;
constexpr uint32_t kMediaDrmStorage_RemovePersistentSession_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_