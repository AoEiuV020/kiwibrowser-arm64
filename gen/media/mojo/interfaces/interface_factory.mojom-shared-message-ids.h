// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kInterfaceFactory_CreateAudioDecoder_Name = 0;
constexpr uint32_t kInterfaceFactory_CreateVideoDecoder_Name = 1;
constexpr uint32_t kInterfaceFactory_CreateRenderer_Name = 2;
constexpr uint32_t kInterfaceFactory_CreateCdm_Name = 3;
constexpr uint32_t kInterfaceFactory_CreateDecryptor_Name = 4;
constexpr uint32_t kInterfaceFactory_CreateCdmProxy_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_