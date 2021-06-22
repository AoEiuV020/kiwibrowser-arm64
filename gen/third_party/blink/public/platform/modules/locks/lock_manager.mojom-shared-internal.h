// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_INTERNAL_H_

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
namespace blink {
namespace mojom {
namespace internal {
class LockInfo_Data;

struct LockMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct LockManager_WaitMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockInfo_Data));
      new (data()) LockInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockInfo_Data>(index_);
    }
    LockInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  int32_t mode;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> client_id;

 private:
  LockInfo_Data();
  ~LockInfo_Data() = delete;
};
static_assert(sizeof(LockInfo_Data) == 32,
              "Bad sizeof(LockInfo_Data)");
// Used by LockInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LockInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LockInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LockInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LockInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LockInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockRequest_Granted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockRequest_Granted_Params_Data));
      new (data()) LockRequest_Granted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockRequest_Granted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockRequest_Granted_Params_Data>(index_);
    }
    LockRequest_Granted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data lock_handle;

 private:
  LockRequest_Granted_Params_Data();
  ~LockRequest_Granted_Params_Data() = delete;
};
static_assert(sizeof(LockRequest_Granted_Params_Data) == 16,
              "Bad sizeof(LockRequest_Granted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockRequest_Failed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockRequest_Failed_Params_Data));
      new (data()) LockRequest_Failed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockRequest_Failed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockRequest_Failed_Params_Data>(index_);
    }
    LockRequest_Failed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LockRequest_Failed_Params_Data();
  ~LockRequest_Failed_Params_Data() = delete;
};
static_assert(sizeof(LockRequest_Failed_Params_Data) == 8,
              "Bad sizeof(LockRequest_Failed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockRequest_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockRequest_Abort_Params_Data));
      new (data()) LockRequest_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockRequest_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockRequest_Abort_Params_Data>(index_);
    }
    LockRequest_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  LockRequest_Abort_Params_Data();
  ~LockRequest_Abort_Params_Data() = delete;
};
static_assert(sizeof(LockRequest_Abort_Params_Data) == 16,
              "Bad sizeof(LockRequest_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockManager_RequestLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockManager_RequestLock_Params_Data));
      new (data()) LockManager_RequestLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockManager_RequestLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockManager_RequestLock_Params_Data>(index_);
    }
    LockManager_RequestLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  int32_t mode;
  int32_t wait;
  mojo::internal::Interface_Data request;

 private:
  LockManager_RequestLock_Params_Data();
  ~LockManager_RequestLock_Params_Data() = delete;
};
static_assert(sizeof(LockManager_RequestLock_Params_Data) == 32,
              "Bad sizeof(LockManager_RequestLock_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockManager_QueryState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockManager_QueryState_Params_Data));
      new (data()) LockManager_QueryState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockManager_QueryState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockManager_QueryState_Params_Data>(index_);
    }
    LockManager_QueryState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LockManager_QueryState_Params_Data();
  ~LockManager_QueryState_Params_Data() = delete;
};
static_assert(sizeof(LockManager_QueryState_Params_Data) == 8,
              "Bad sizeof(LockManager_QueryState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LockManager_QueryState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockManager_QueryState_ResponseParams_Data));
      new (data()) LockManager_QueryState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockManager_QueryState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockManager_QueryState_ResponseParams_Data>(index_);
    }
    LockManager_QueryState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::LockInfo_Data>>> requested;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::LockInfo_Data>>> held;

 private:
  LockManager_QueryState_ResponseParams_Data();
  ~LockManager_QueryState_ResponseParams_Data() = delete;
};
static_assert(sizeof(LockManager_QueryState_ResponseParams_Data) == 24,
              "Bad sizeof(LockManager_QueryState_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_INTERNAL_H_