// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_INTERNAL_H_

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
namespace blink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsFrontend_SetupDevToolsFrontend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsFrontend_SetupDevToolsFrontend_Params_Data));
      new (data()) DevToolsFrontend_SetupDevToolsFrontend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsFrontend_SetupDevToolsFrontend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsFrontend_SetupDevToolsFrontend_Params_Data>(index_);
    }
    DevToolsFrontend_SetupDevToolsFrontend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> api_script;
  mojo::internal::AssociatedInterface_Data host;

 private:
  DevToolsFrontend_SetupDevToolsFrontend_Params_Data();
  ~DevToolsFrontend_SetupDevToolsFrontend_Params_Data() = delete;
};
static_assert(sizeof(DevToolsFrontend_SetupDevToolsFrontend_Params_Data) == 24,
              "Bad sizeof(DevToolsFrontend_SetupDevToolsFrontend_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data));
      new (data()) DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data>(index_);
    }
    DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> extension_api;

 private:
  DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data();
  ~DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data() = delete;
};
static_assert(sizeof(DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data) == 16,
              "Bad sizeof(DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data));
      new (data()) DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data>(index_);
    }
    DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data();
  ~DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data() = delete;
};
static_assert(sizeof(DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data) == 16,
              "Bad sizeof(DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_INTERNAL_H_