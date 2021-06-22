// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_UNGUESSABLE_TOKEN_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_MOJOM_BASE_UNGUESSABLE_TOKEN_MOJOM_SHARED_INTERNAL_H_

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
namespace mojo_base {
namespace mojom {
namespace internal {
class UnguessableToken_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) UnguessableToken_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnguessableToken_Data));
      new (data()) UnguessableToken_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnguessableToken_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnguessableToken_Data>(index_);
    }
    UnguessableToken_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t high;
  uint64_t low;

 private:
  UnguessableToken_Data();
  ~UnguessableToken_Data() = delete;
};
static_assert(sizeof(UnguessableToken_Data) == 24,
              "Bad sizeof(UnguessableToken_Data)");
// Used by UnguessableToken::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UnguessableToken_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UnguessableToken_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UnguessableToken_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UnguessableToken_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UnguessableToken_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_UNGUESSABLE_TOKEN_MOJOM_SHARED_INTERNAL_H_