// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
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
class SessionData_Data;

#pragma pack(push, 1)
class  SessionData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SessionData_Data));
      new (data()) SessionData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SessionData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SessionData_Data>(index_);
    }
    SessionData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_set_id;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;

 private:
  SessionData_Data();
  ~SessionData_Data() = delete;
};
static_assert(sizeof(SessionData_Data) == 24,
              "Bad sizeof(SessionData_Data)");
// Used by SessionData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SessionData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SessionData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SessionData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SessionData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SessionData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaDrmStorage_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_Initialize_Params_Data));
      new (data()) MediaDrmStorage_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_Initialize_Params_Data>(index_);
    }
    MediaDrmStorage_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaDrmStorage_Initialize_Params_Data();
  ~MediaDrmStorage_Initialize_Params_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_Initialize_Params_Data) == 8,
              "Bad sizeof(MediaDrmStorage_Initialize_Params_Data)");
class  MediaDrmStorage_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_Initialize_ResponseParams_Data));
      new (data()) MediaDrmStorage_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_Initialize_ResponseParams_Data>(index_);
    }
    MediaDrmStorage_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> origin_id;

 private:
  MediaDrmStorage_Initialize_ResponseParams_Data();
  ~MediaDrmStorage_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDrmStorage_Initialize_ResponseParams_Data)");
class  MediaDrmStorage_OnProvisioned_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_OnProvisioned_Params_Data));
      new (data()) MediaDrmStorage_OnProvisioned_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_OnProvisioned_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_OnProvisioned_Params_Data>(index_);
    }
    MediaDrmStorage_OnProvisioned_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaDrmStorage_OnProvisioned_Params_Data();
  ~MediaDrmStorage_OnProvisioned_Params_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_OnProvisioned_Params_Data) == 8,
              "Bad sizeof(MediaDrmStorage_OnProvisioned_Params_Data)");
class  MediaDrmStorage_OnProvisioned_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_OnProvisioned_ResponseParams_Data));
      new (data()) MediaDrmStorage_OnProvisioned_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_OnProvisioned_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_OnProvisioned_ResponseParams_Data>(index_);
    }
    MediaDrmStorage_OnProvisioned_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  MediaDrmStorage_OnProvisioned_ResponseParams_Data();
  ~MediaDrmStorage_OnProvisioned_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_OnProvisioned_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDrmStorage_OnProvisioned_ResponseParams_Data)");
class  MediaDrmStorage_SavePersistentSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_SavePersistentSession_Params_Data));
      new (data()) MediaDrmStorage_SavePersistentSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_SavePersistentSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_SavePersistentSession_Params_Data>(index_);
    }
    MediaDrmStorage_SavePersistentSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  mojo::internal::Pointer<internal::SessionData_Data> session_data;

 private:
  MediaDrmStorage_SavePersistentSession_Params_Data();
  ~MediaDrmStorage_SavePersistentSession_Params_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_SavePersistentSession_Params_Data) == 24,
              "Bad sizeof(MediaDrmStorage_SavePersistentSession_Params_Data)");
class  MediaDrmStorage_SavePersistentSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_SavePersistentSession_ResponseParams_Data));
      new (data()) MediaDrmStorage_SavePersistentSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_SavePersistentSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_SavePersistentSession_ResponseParams_Data>(index_);
    }
    MediaDrmStorage_SavePersistentSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  MediaDrmStorage_SavePersistentSession_ResponseParams_Data();
  ~MediaDrmStorage_SavePersistentSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_SavePersistentSession_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDrmStorage_SavePersistentSession_ResponseParams_Data)");
class  MediaDrmStorage_LoadPersistentSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_LoadPersistentSession_Params_Data));
      new (data()) MediaDrmStorage_LoadPersistentSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_LoadPersistentSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_LoadPersistentSession_Params_Data>(index_);
    }
    MediaDrmStorage_LoadPersistentSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  MediaDrmStorage_LoadPersistentSession_Params_Data();
  ~MediaDrmStorage_LoadPersistentSession_Params_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_LoadPersistentSession_Params_Data) == 16,
              "Bad sizeof(MediaDrmStorage_LoadPersistentSession_Params_Data)");
class  MediaDrmStorage_LoadPersistentSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_LoadPersistentSession_ResponseParams_Data));
      new (data()) MediaDrmStorage_LoadPersistentSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_LoadPersistentSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_LoadPersistentSession_ResponseParams_Data>(index_);
    }
    MediaDrmStorage_LoadPersistentSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SessionData_Data> session_data;

 private:
  MediaDrmStorage_LoadPersistentSession_ResponseParams_Data();
  ~MediaDrmStorage_LoadPersistentSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_LoadPersistentSession_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDrmStorage_LoadPersistentSession_ResponseParams_Data)");
class  MediaDrmStorage_RemovePersistentSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_RemovePersistentSession_Params_Data));
      new (data()) MediaDrmStorage_RemovePersistentSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_RemovePersistentSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_RemovePersistentSession_Params_Data>(index_);
    }
    MediaDrmStorage_RemovePersistentSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  MediaDrmStorage_RemovePersistentSession_Params_Data();
  ~MediaDrmStorage_RemovePersistentSession_Params_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_RemovePersistentSession_Params_Data) == 16,
              "Bad sizeof(MediaDrmStorage_RemovePersistentSession_Params_Data)");
class  MediaDrmStorage_RemovePersistentSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDrmStorage_RemovePersistentSession_ResponseParams_Data));
      new (data()) MediaDrmStorage_RemovePersistentSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDrmStorage_RemovePersistentSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDrmStorage_RemovePersistentSession_ResponseParams_Data>(index_);
    }
    MediaDrmStorage_RemovePersistentSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  MediaDrmStorage_RemovePersistentSession_ResponseParams_Data();
  ~MediaDrmStorage_RemovePersistentSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDrmStorage_RemovePersistentSession_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDrmStorage_RemovePersistentSession_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_INTERNAL_H_