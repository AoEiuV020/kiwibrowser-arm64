// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  AudioDecoder_Construct_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Construct_Params_Data));
      new (data()) AudioDecoder_Construct_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Construct_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Construct_Params_Data>(index_);
    }
    AudioDecoder_Construct_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  AudioDecoder_Construct_Params_Data();
  ~AudioDecoder_Construct_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Construct_Params_Data) == 16,
              "Bad sizeof(AudioDecoder_Construct_Params_Data)");
class  AudioDecoder_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Initialize_Params_Data));
      new (data()) AudioDecoder_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Initialize_Params_Data>(index_);
    }
    AudioDecoder_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> config;
  int32_t cdm_id;
  uint8_t padfinal_[4];

 private:
  AudioDecoder_Initialize_Params_Data();
  ~AudioDecoder_Initialize_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Initialize_Params_Data) == 24,
              "Bad sizeof(AudioDecoder_Initialize_Params_Data)");
class  AudioDecoder_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Initialize_ResponseParams_Data));
      new (data()) AudioDecoder_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Initialize_ResponseParams_Data>(index_);
    }
    AudioDecoder_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t needs_bitstream_conversion : 1;
  uint8_t padfinal_[7];

 private:
  AudioDecoder_Initialize_ResponseParams_Data();
  ~AudioDecoder_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(AudioDecoder_Initialize_ResponseParams_Data)");
class  AudioDecoder_SetDataSource_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_SetDataSource_Params_Data));
      new (data()) AudioDecoder_SetDataSource_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_SetDataSource_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_SetDataSource_Params_Data>(index_);
    }
    AudioDecoder_SetDataSource_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receive_pipe;
  uint8_t padfinal_[4];

 private:
  AudioDecoder_SetDataSource_Params_Data();
  ~AudioDecoder_SetDataSource_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_SetDataSource_Params_Data) == 16,
              "Bad sizeof(AudioDecoder_SetDataSource_Params_Data)");
class  AudioDecoder_Decode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Decode_Params_Data));
      new (data()) AudioDecoder_Decode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Decode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Decode_Params_Data>(index_);
    }
    AudioDecoder_Decode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> buffer;

 private:
  AudioDecoder_Decode_Params_Data();
  ~AudioDecoder_Decode_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Decode_Params_Data) == 16,
              "Bad sizeof(AudioDecoder_Decode_Params_Data)");
class  AudioDecoder_Decode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Decode_ResponseParams_Data));
      new (data()) AudioDecoder_Decode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Decode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Decode_ResponseParams_Data>(index_);
    }
    AudioDecoder_Decode_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  AudioDecoder_Decode_ResponseParams_Data();
  ~AudioDecoder_Decode_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Decode_ResponseParams_Data) == 16,
              "Bad sizeof(AudioDecoder_Decode_ResponseParams_Data)");
class  AudioDecoder_Reset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Reset_Params_Data));
      new (data()) AudioDecoder_Reset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Reset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Reset_Params_Data>(index_);
    }
    AudioDecoder_Reset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioDecoder_Reset_Params_Data();
  ~AudioDecoder_Reset_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Reset_Params_Data) == 8,
              "Bad sizeof(AudioDecoder_Reset_Params_Data)");
class  AudioDecoder_Reset_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Reset_ResponseParams_Data));
      new (data()) AudioDecoder_Reset_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Reset_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Reset_ResponseParams_Data>(index_);
    }
    AudioDecoder_Reset_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioDecoder_Reset_ResponseParams_Data();
  ~AudioDecoder_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Reset_ResponseParams_Data) == 8,
              "Bad sizeof(AudioDecoder_Reset_ResponseParams_Data)");
class  AudioDecoderClient_OnBufferDecoded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoderClient_OnBufferDecoded_Params_Data));
      new (data()) AudioDecoderClient_OnBufferDecoded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoderClient_OnBufferDecoded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoderClient_OnBufferDecoded_Params_Data>(index_);
    }
    AudioDecoderClient_OnBufferDecoded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioBuffer_Data> buffer;

 private:
  AudioDecoderClient_OnBufferDecoded_Params_Data();
  ~AudioDecoderClient_OnBufferDecoded_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoderClient_OnBufferDecoded_Params_Data) == 16,
              "Bad sizeof(AudioDecoderClient_OnBufferDecoded_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_INTERNAL_H_