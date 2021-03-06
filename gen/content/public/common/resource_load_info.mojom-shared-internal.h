// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/load_timing_info.mojom-shared-internal.h"
#include "content/public/common/resource_type.mojom-shared-internal.h"
#include "net/interfaces/ip_address.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
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
class CommonNetworkInfo_Data;
class RedirectInfo_Data;
class ResourceLoadInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CommonNetworkInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CommonNetworkInfo_Data));
      new (data()) CommonNetworkInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CommonNetworkInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CommonNetworkInfo_Data>(index_);
    }
    CommonNetworkInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t network_accessed : 1;
  uint8_t always_access_network : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> ip_port_pair;

 private:
  CommonNetworkInfo_Data();
  ~CommonNetworkInfo_Data() = delete;
};
static_assert(sizeof(CommonNetworkInfo_Data) == 24,
              "Bad sizeof(CommonNetworkInfo_Data)");
// Used by CommonNetworkInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommonNetworkInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommonNetworkInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommonNetworkInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CommonNetworkInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommonNetworkInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RedirectInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RedirectInfo_Data));
      new (data()) RedirectInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RedirectInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RedirectInfo_Data>(index_);
    }
    RedirectInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<internal::CommonNetworkInfo_Data> network_info;

 private:
  RedirectInfo_Data();
  ~RedirectInfo_Data() = delete;
};
static_assert(sizeof(RedirectInfo_Data) == 24,
              "Bad sizeof(RedirectInfo_Data)");
// Used by RedirectInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RedirectInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RedirectInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RedirectInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RedirectInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RedirectInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ResourceLoadInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResourceLoadInfo_Data));
      new (data()) ResourceLoadInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResourceLoadInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResourceLoadInfo_Data>(index_);
    }
    ResourceLoadInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t request_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> referrer;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> original_url;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  int32_t resource_type;
  uint8_t was_cached : 1;
  uint8_t pad6_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;
  mojo::internal::Pointer<internal::CommonNetworkInfo_Data> network_info;
  int32_t net_error;
  uint8_t pad9_[4];
  mojo::internal::Pointer<::content::mojom::internal::LoadTimingInfo_Data> load_timing_info;
  int64_t raw_body_bytes;
  int64_t total_received_bytes;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RedirectInfo_Data>>> redirect_info_chain;

 private:
  ResourceLoadInfo_Data();
  ~ResourceLoadInfo_Data() = delete;
};
static_assert(sizeof(ResourceLoadInfo_Data) == 112,
              "Bad sizeof(ResourceLoadInfo_Data)");
// Used by ResourceLoadInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ResourceLoadInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ResourceLoadInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ResourceLoadInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ResourceLoadInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ResourceLoadInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_LOAD_INFO_MOJOM_SHARED_INTERNAL_H_