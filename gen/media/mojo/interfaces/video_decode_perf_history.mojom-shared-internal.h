// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class  VideoDecodePerfHistory_GetPerfInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodePerfHistory_GetPerfInfo_Params_Data));
      new (data()) VideoDecodePerfHistory_GetPerfInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodePerfHistory_GetPerfInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodePerfHistory_GetPerfInfo_Params_Data>(index_);
    }
    VideoDecodePerfHistory_GetPerfInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PredictionFeatures_Data> features;

 private:
  VideoDecodePerfHistory_GetPerfInfo_Params_Data();
  ~VideoDecodePerfHistory_GetPerfInfo_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodePerfHistory_GetPerfInfo_Params_Data) == 16,
              "Bad sizeof(VideoDecodePerfHistory_GetPerfInfo_Params_Data)");
class  VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data));
      new (data()) VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data>(index_);
    }
    VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_smooth : 1;
  uint8_t is_power_efficient : 1;
  uint8_t padfinal_[7];

 private:
  VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data();
  ~VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_SHARED_INTERNAL_H_