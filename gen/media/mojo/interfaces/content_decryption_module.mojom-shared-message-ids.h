// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kContentDecryptionModule_SetClient_Name = 0;
constexpr uint32_t kContentDecryptionModule_Initialize_Name = 1;
constexpr uint32_t kContentDecryptionModule_SetServerCertificate_Name = 2;
constexpr uint32_t kContentDecryptionModule_GetStatusForPolicy_Name = 3;
constexpr uint32_t kContentDecryptionModule_CreateSessionAndGenerateRequest_Name = 4;
constexpr uint32_t kContentDecryptionModule_LoadSession_Name = 5;
constexpr uint32_t kContentDecryptionModule_UpdateSession_Name = 6;
constexpr uint32_t kContentDecryptionModule_CloseSession_Name = 7;
constexpr uint32_t kContentDecryptionModule_RemoveSession_Name = 8;
constexpr uint32_t kContentDecryptionModuleClient_OnSessionMessage_Name = 0;
constexpr uint32_t kContentDecryptionModuleClient_OnSessionClosed_Name = 1;
constexpr uint32_t kContentDecryptionModuleClient_OnSessionKeysChange_Name = 2;
constexpr uint32_t kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name = 3;
constexpr uint32_t kCdmFactory_CreateCdm_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_