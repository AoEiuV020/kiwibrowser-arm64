// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerHost_OnConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnConnected_Params_Data));
      new (data()) SharedWorkerHost_OnConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnConnected_Params_Data>(index_);
    }
    SharedWorkerHost_OnConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t connection_id;
  uint8_t padfinal_[4];

 private:
  SharedWorkerHost_OnConnected_Params_Data();
  ~SharedWorkerHost_OnConnected_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnConnected_Params_Data) == 16,
              "Bad sizeof(SharedWorkerHost_OnConnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerHost_OnContextClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnContextClosed_Params_Data));
      new (data()) SharedWorkerHost_OnContextClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnContextClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnContextClosed_Params_Data>(index_);
    }
    SharedWorkerHost_OnContextClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnContextClosed_Params_Data();
  ~SharedWorkerHost_OnContextClosed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnContextClosed_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnContextClosed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerHost_OnReadyForInspection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnReadyForInspection_Params_Data));
      new (data()) SharedWorkerHost_OnReadyForInspection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnReadyForInspection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnReadyForInspection_Params_Data>(index_);
    }
    SharedWorkerHost_OnReadyForInspection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnReadyForInspection_Params_Data();
  ~SharedWorkerHost_OnReadyForInspection_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnReadyForInspection_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnReadyForInspection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerHost_OnScriptLoaded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnScriptLoaded_Params_Data));
      new (data()) SharedWorkerHost_OnScriptLoaded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnScriptLoaded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnScriptLoaded_Params_Data>(index_);
    }
    SharedWorkerHost_OnScriptLoaded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnScriptLoaded_Params_Data();
  ~SharedWorkerHost_OnScriptLoaded_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnScriptLoaded_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnScriptLoaded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerHost_OnScriptLoadFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnScriptLoadFailed_Params_Data));
      new (data()) SharedWorkerHost_OnScriptLoadFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnScriptLoadFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnScriptLoadFailed_Params_Data>(index_);
    }
    SharedWorkerHost_OnScriptLoadFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerHost_OnScriptLoadFailed_Params_Data();
  ~SharedWorkerHost_OnScriptLoadFailed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnScriptLoadFailed_Params_Data) == 8,
              "Bad sizeof(SharedWorkerHost_OnScriptLoadFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerHost_OnFeatureUsed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerHost_OnFeatureUsed_Params_Data));
      new (data()) SharedWorkerHost_OnFeatureUsed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerHost_OnFeatureUsed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerHost_OnFeatureUsed_Params_Data>(index_);
    }
    SharedWorkerHost_OnFeatureUsed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  SharedWorkerHost_OnFeatureUsed_Params_Data();
  ~SharedWorkerHost_OnFeatureUsed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerHost_OnFeatureUsed_Params_Data) == 16,
              "Bad sizeof(SharedWorkerHost_OnFeatureUsed_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_INTERNAL_H_