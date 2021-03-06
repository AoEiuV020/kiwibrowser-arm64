// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kDecryptor_Initialize_Name = 0;
constexpr uint32_t kDecryptor_Decrypt_Name = 1;
constexpr uint32_t kDecryptor_CancelDecrypt_Name = 2;
constexpr uint32_t kDecryptor_InitializeAudioDecoder_Name = 3;
constexpr uint32_t kDecryptor_InitializeVideoDecoder_Name = 4;
constexpr uint32_t kDecryptor_DecryptAndDecodeAudio_Name = 5;
constexpr uint32_t kDecryptor_DecryptAndDecodeVideo_Name = 6;
constexpr uint32_t kDecryptor_ResetDecoder_Name = 7;
constexpr uint32_t kDecryptor_DeinitializeDecoder_Name = 8;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_