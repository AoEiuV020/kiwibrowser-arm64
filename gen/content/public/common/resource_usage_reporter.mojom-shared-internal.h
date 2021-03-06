// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_INTERNAL_H_

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
namespace content {
namespace mojom {
namespace internal {
class ResourceTypeStat_Data;
class ResourceTypeStats_Data;
class ResourceUsageData_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ResourceTypeStat_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResourceTypeStat_Data));
      new (data()) ResourceTypeStat_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResourceTypeStat_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResourceTypeStat_Data>(index_);
    }
    ResourceTypeStat_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t count;
  uint64_t size;
  uint64_t live_size;
  uint64_t decoded_size;

 private:
  ResourceTypeStat_Data();
  ~ResourceTypeStat_Data() = delete;
};
static_assert(sizeof(ResourceTypeStat_Data) == 40,
              "Bad sizeof(ResourceTypeStat_Data)");
// Used by ResourceTypeStat::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ResourceTypeStat_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ResourceTypeStat_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ResourceTypeStat_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ResourceTypeStat_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ResourceTypeStat_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ResourceTypeStats_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResourceTypeStats_Data));
      new (data()) ResourceTypeStats_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResourceTypeStats_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResourceTypeStats_Data>(index_);
    }
    ResourceTypeStats_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> images;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> css_style_sheets;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> scripts;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> xsl_style_sheets;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> fonts;
  mojo::internal::Pointer<internal::ResourceTypeStat_Data> other;

 private:
  ResourceTypeStats_Data();
  ~ResourceTypeStats_Data() = delete;
};
static_assert(sizeof(ResourceTypeStats_Data) == 56,
              "Bad sizeof(ResourceTypeStats_Data)");
// Used by ResourceTypeStats::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ResourceTypeStats_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ResourceTypeStats_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ResourceTypeStats_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ResourceTypeStats_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ResourceTypeStats_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ResourceUsageData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResourceUsageData_Data));
      new (data()) ResourceUsageData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResourceUsageData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResourceUsageData_Data>(index_);
    }
    ResourceUsageData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t reports_v8_stats : 1;
  uint8_t pad0_[7];
  uint64_t v8_bytes_allocated;
  uint64_t v8_bytes_used;
  mojo::internal::Pointer<internal::ResourceTypeStats_Data> web_cache_stats;

 private:
  ResourceUsageData_Data();
  ~ResourceUsageData_Data() = delete;
};
static_assert(sizeof(ResourceUsageData_Data) == 40,
              "Bad sizeof(ResourceUsageData_Data)");
// Used by ResourceUsageData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ResourceUsageData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ResourceUsageData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ResourceUsageData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ResourceUsageData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ResourceUsageData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ResourceUsageReporter_GetUsageData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResourceUsageReporter_GetUsageData_Params_Data));
      new (data()) ResourceUsageReporter_GetUsageData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResourceUsageReporter_GetUsageData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResourceUsageReporter_GetUsageData_Params_Data>(index_);
    }
    ResourceUsageReporter_GetUsageData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ResourceUsageReporter_GetUsageData_Params_Data();
  ~ResourceUsageReporter_GetUsageData_Params_Data() = delete;
};
static_assert(sizeof(ResourceUsageReporter_GetUsageData_Params_Data) == 8,
              "Bad sizeof(ResourceUsageReporter_GetUsageData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ResourceUsageReporter_GetUsageData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data));
      new (data()) ResourceUsageReporter_GetUsageData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResourceUsageReporter_GetUsageData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResourceUsageReporter_GetUsageData_ResponseParams_Data>(index_);
    }
    ResourceUsageReporter_GetUsageData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ResourceUsageData_Data> data;

 private:
  ResourceUsageReporter_GetUsageData_ResponseParams_Data();
  ~ResourceUsageReporter_GetUsageData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data) == 16,
              "Bad sizeof(ResourceUsageReporter_GetUsageData_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_INTERNAL_H_