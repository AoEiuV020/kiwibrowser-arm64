// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ukm {
namespace mojom {
namespace internal {
class UkmEntry_Data;

#pragma pack(push, 1)
class  UkmEntry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UkmEntry_Data));
      new (data()) UkmEntry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UkmEntry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UkmEntry_Data>(index_);
    }
    UkmEntry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t source_id;
  uint64_t event_hash;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint64_t, int64_t>> metrics;

 private:
  UkmEntry_Data();
  ~UkmEntry_Data() = delete;
};
static_assert(sizeof(UkmEntry_Data) == 32,
              "Bad sizeof(UkmEntry_Data)");
// Used by UkmEntry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UkmEntry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UkmEntry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UkmEntry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UkmEntry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UkmEntry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UkmRecorderInterface_AddEntry_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UkmRecorderInterface_AddEntry_Params_Data));
      new (data()) UkmRecorderInterface_AddEntry_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UkmRecorderInterface_AddEntry_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UkmRecorderInterface_AddEntry_Params_Data>(index_);
    }
    UkmRecorderInterface_AddEntry_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UkmEntry_Data> entry;

 private:
  UkmRecorderInterface_AddEntry_Params_Data();
  ~UkmRecorderInterface_AddEntry_Params_Data() = delete;
};
static_assert(sizeof(UkmRecorderInterface_AddEntry_Params_Data) == 16,
              "Bad sizeof(UkmRecorderInterface_AddEntry_Params_Data)");
class  UkmRecorderInterface_UpdateSourceURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UkmRecorderInterface_UpdateSourceURL_Params_Data));
      new (data()) UkmRecorderInterface_UpdateSourceURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UkmRecorderInterface_UpdateSourceURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UkmRecorderInterface_UpdateSourceURL_Params_Data>(index_);
    }
    UkmRecorderInterface_UpdateSourceURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t source_id;
  mojo::internal::Pointer<mojo::internal::String_Data> url;

 private:
  UkmRecorderInterface_UpdateSourceURL_Params_Data();
  ~UkmRecorderInterface_UpdateSourceURL_Params_Data() = delete;
};
static_assert(sizeof(UkmRecorderInterface_UpdateSourceURL_Params_Data) == 24,
              "Bad sizeof(UkmRecorderInterface_UpdateSourceURL_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_INTERNAL_H_