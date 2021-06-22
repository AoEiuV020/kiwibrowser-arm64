// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class AudioDataPipe_Data;

#pragma pack(push, 1)
class  AudioDataPipe_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDataPipe_Data));
      new (data()) AudioDataPipe_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDataPipe_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDataPipe_Data>(index_);
    }
    AudioDataPipe_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data shared_memory;
  mojo::internal::Handle_Data socket;

 private:
  AudioDataPipe_Data();
  ~AudioDataPipe_Data() = delete;
};
static_assert(sizeof(AudioDataPipe_Data) == 16,
              "Bad sizeof(AudioDataPipe_Data)");
// Used by AudioDataPipe::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AudioDataPipe_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AudioDataPipe_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AudioDataPipe_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AudioDataPipe_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AudioDataPipe_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_INTERNAL_H_