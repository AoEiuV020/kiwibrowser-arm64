// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kJpegDecodeAccelerator_Initialize_Name = 0;
constexpr uint32_t kJpegDecodeAccelerator_Decode_Name = 1;
constexpr uint32_t kJpegDecodeAccelerator_DecodeWithFD_Name = 2;
constexpr uint32_t kJpegDecodeAccelerator_Uninitialize_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_