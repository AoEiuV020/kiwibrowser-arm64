// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kJpegEncodeAccelerator_Initialize_Name = 0;
constexpr uint32_t kJpegEncodeAccelerator_EncodeWithFD_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_