// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class AndroidOverlayConfig_Data;

#pragma pack(push, 1)
class  AndroidOverlayConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidOverlayConfig_Data));
      new (data()) AndroidOverlayConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidOverlayConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidOverlayConfig_Data>(index_);
    }
    AndroidOverlayConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> routing_token;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> rect;
  uint8_t secure : 1;
  uint8_t power_efficient : 1;
  uint8_t padfinal_[7];

 private:
  AndroidOverlayConfig_Data();
  ~AndroidOverlayConfig_Data() = delete;
};
static_assert(sizeof(AndroidOverlayConfig_Data) == 32,
              "Bad sizeof(AndroidOverlayConfig_Data)");
// Used by AndroidOverlayConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AndroidOverlayConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AndroidOverlayConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AndroidOverlayConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AndroidOverlayConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AndroidOverlayConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AndroidOverlayProvider_CreateOverlay_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidOverlayProvider_CreateOverlay_Params_Data));
      new (data()) AndroidOverlayProvider_CreateOverlay_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidOverlayProvider_CreateOverlay_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidOverlayProvider_CreateOverlay_Params_Data>(index_);
    }
    AndroidOverlayProvider_CreateOverlay_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data overlay;
  mojo::internal::Interface_Data client;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::AndroidOverlayConfig_Data> config;

 private:
  AndroidOverlayProvider_CreateOverlay_Params_Data();
  ~AndroidOverlayProvider_CreateOverlay_Params_Data() = delete;
};
static_assert(sizeof(AndroidOverlayProvider_CreateOverlay_Params_Data) == 32,
              "Bad sizeof(AndroidOverlayProvider_CreateOverlay_Params_Data)");
class  AndroidOverlay_ScheduleLayout_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidOverlay_ScheduleLayout_Params_Data));
      new (data()) AndroidOverlay_ScheduleLayout_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidOverlay_ScheduleLayout_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidOverlay_ScheduleLayout_Params_Data>(index_);
    }
    AndroidOverlay_ScheduleLayout_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> rect;

 private:
  AndroidOverlay_ScheduleLayout_Params_Data();
  ~AndroidOverlay_ScheduleLayout_Params_Data() = delete;
};
static_assert(sizeof(AndroidOverlay_ScheduleLayout_Params_Data) == 16,
              "Bad sizeof(AndroidOverlay_ScheduleLayout_Params_Data)");
class  AndroidOverlayClient_OnSurfaceReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidOverlayClient_OnSurfaceReady_Params_Data));
      new (data()) AndroidOverlayClient_OnSurfaceReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidOverlayClient_OnSurfaceReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidOverlayClient_OnSurfaceReady_Params_Data>(index_);
    }
    AndroidOverlayClient_OnSurfaceReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t surface_key;

 private:
  AndroidOverlayClient_OnSurfaceReady_Params_Data();
  ~AndroidOverlayClient_OnSurfaceReady_Params_Data() = delete;
};
static_assert(sizeof(AndroidOverlayClient_OnSurfaceReady_Params_Data) == 16,
              "Bad sizeof(AndroidOverlayClient_OnSurfaceReady_Params_Data)");
class  AndroidOverlayClient_OnDestroyed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidOverlayClient_OnDestroyed_Params_Data));
      new (data()) AndroidOverlayClient_OnDestroyed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidOverlayClient_OnDestroyed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidOverlayClient_OnDestroyed_Params_Data>(index_);
    }
    AndroidOverlayClient_OnDestroyed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AndroidOverlayClient_OnDestroyed_Params_Data();
  ~AndroidOverlayClient_OnDestroyed_Params_Data() = delete;
};
static_assert(sizeof(AndroidOverlayClient_OnDestroyed_Params_Data) == 8,
              "Bad sizeof(AndroidOverlayClient_OnDestroyed_Params_Data)");
class  AndroidOverlayClient_OnPowerEfficientState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AndroidOverlayClient_OnPowerEfficientState_Params_Data));
      new (data()) AndroidOverlayClient_OnPowerEfficientState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AndroidOverlayClient_OnPowerEfficientState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AndroidOverlayClient_OnPowerEfficientState_Params_Data>(index_);
    }
    AndroidOverlayClient_OnPowerEfficientState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_power_efficient : 1;
  uint8_t padfinal_[7];

 private:
  AndroidOverlayClient_OnPowerEfficientState_Params_Data();
  ~AndroidOverlayClient_OnPowerEfficientState_Params_Data() = delete;
};
static_assert(sizeof(AndroidOverlayClient_OnPowerEfficientState_Params_Data) == 16,
              "Bad sizeof(AndroidOverlayClient_OnPowerEfficientState_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_INTERNAL_H_