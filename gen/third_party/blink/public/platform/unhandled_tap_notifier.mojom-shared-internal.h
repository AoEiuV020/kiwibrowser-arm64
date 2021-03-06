// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class UnhandledTapInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) UnhandledTapInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnhandledTapInfo_Data));
      new (data()) UnhandledTapInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnhandledTapInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnhandledTapInfo_Data>(index_);
    }
    UnhandledTapInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> tapped_position_in_viewport;
  uint32_t font_size_in_pixels;
  uint32_t element_text_run_length;

 private:
  UnhandledTapInfo_Data();
  ~UnhandledTapInfo_Data() = delete;
};
static_assert(sizeof(UnhandledTapInfo_Data) == 24,
              "Bad sizeof(UnhandledTapInfo_Data)");
// Used by UnhandledTapInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UnhandledTapInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UnhandledTapInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UnhandledTapInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UnhandledTapInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UnhandledTapInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data));
      new (data()) UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data>(index_);
    }
    UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UnhandledTapInfo_Data> unhandled_tap_info;

 private:
  UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data();
  ~UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data() = delete;
};
static_assert(sizeof(UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data) == 16,
              "Bad sizeof(UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_SHARED_INTERNAL_H_