// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifest_Params_Data));
      new (data()) ManifestManager_RequestManifest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifest_Params_Data>(index_);
    }
    ManifestManager_RequestManifest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ManifestManager_RequestManifest_Params_Data();
  ~ManifestManager_RequestManifest_Params_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifest_Params_Data) == 8,
              "Bad sizeof(ManifestManager_RequestManifest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifest_ResponseParams_Data));
      new (data()) ManifestManager_RequestManifest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifest_ResponseParams_Data>(index_);
    }
    ManifestManager_RequestManifest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::blink::mojom::internal::Manifest_Data> manifest;

 private:
  ManifestManager_RequestManifest_ResponseParams_Data();
  ~ManifestManager_RequestManifest_ResponseParams_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifest_ResponseParams_Data) == 24,
              "Bad sizeof(ManifestManager_RequestManifest_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifestDebugInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifestDebugInfo_Params_Data));
      new (data()) ManifestManager_RequestManifestDebugInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifestDebugInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifestDebugInfo_Params_Data>(index_);
    }
    ManifestManager_RequestManifestDebugInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ManifestManager_RequestManifestDebugInfo_Params_Data();
  ~ManifestManager_RequestManifestDebugInfo_Params_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifestDebugInfo_Params_Data) == 8,
              "Bad sizeof(ManifestManager_RequestManifestDebugInfo_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifestDebugInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifestDebugInfo_ResponseParams_Data));
      new (data()) ManifestManager_RequestManifestDebugInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifestDebugInfo_ResponseParams_Data>(index_);
    }
    ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::blink::mojom::internal::ManifestDebugInfo_Data> debug_info;

 private:
  ManifestManager_RequestManifestDebugInfo_ResponseParams_Data();
  ~ManifestManager_RequestManifestDebugInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifestDebugInfo_ResponseParams_Data) == 24,
              "Bad sizeof(ManifestManager_RequestManifestDebugInfo_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_SHARED_INTERNAL_H_