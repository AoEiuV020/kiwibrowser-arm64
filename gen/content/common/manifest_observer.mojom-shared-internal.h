// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data));
      new (data()) ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data>(index_);
    }
    ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> manifest_url;

 private:
  ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data();
  ~ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data() = delete;
};
static_assert(sizeof(ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data) == 16,
              "Bad sizeof(ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_SHARED_INTERNAL_H_