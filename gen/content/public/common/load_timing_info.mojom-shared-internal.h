// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
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
class LoadTimingInfoConnectTiming_Data;
class LoadTimingInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LoadTimingInfoConnectTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LoadTimingInfoConnectTiming_Data));
      new (data()) LoadTimingInfoConnectTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LoadTimingInfoConnectTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LoadTimingInfoConnectTiming_Data>(index_);
    }
    LoadTimingInfoConnectTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> dns_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> dns_end;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> connect_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> connect_end;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> ssl_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> ssl_end;

 private:
  LoadTimingInfoConnectTiming_Data();
  ~LoadTimingInfoConnectTiming_Data() = delete;
};
static_assert(sizeof(LoadTimingInfoConnectTiming_Data) == 56,
              "Bad sizeof(LoadTimingInfoConnectTiming_Data)");
// Used by LoadTimingInfoConnectTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LoadTimingInfoConnectTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LoadTimingInfoConnectTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LoadTimingInfoConnectTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LoadTimingInfoConnectTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LoadTimingInfoConnectTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LoadTimingInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LoadTimingInfo_Data));
      new (data()) LoadTimingInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LoadTimingInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LoadTimingInfo_Data>(index_);
    }
    LoadTimingInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t socket_reused : 1;
  uint8_t pad0_[3];
  uint32_t socket_log_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> request_start_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> request_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> proxy_resolve_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> proxy_resolve_end;
  mojo::internal::Pointer<internal::LoadTimingInfoConnectTiming_Data> connect_timing;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> send_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> send_end;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> receive_headers_end;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> push_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> push_end;

 private:
  LoadTimingInfo_Data();
  ~LoadTimingInfo_Data() = delete;
};
static_assert(sizeof(LoadTimingInfo_Data) == 96,
              "Bad sizeof(LoadTimingInfo_Data)");
// Used by LoadTimingInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LoadTimingInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LoadTimingInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LoadTimingInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LoadTimingInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LoadTimingInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_SHARED_INTERNAL_H_