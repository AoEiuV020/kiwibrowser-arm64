// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "media/mojo/interfaces/media_drm_storage.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class SessionDataDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::SessionDataDataView> {
  using Data = ::media::mojom::internal::SessionData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaDrmStorageInterfaceBase {};

using MediaDrmStoragePtrDataView =
    mojo::InterfacePtrDataView<MediaDrmStorageInterfaceBase>;
using MediaDrmStorageRequestDataView =
    mojo::InterfaceRequestDataView<MediaDrmStorageInterfaceBase>;
using MediaDrmStorageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDrmStorageInterfaceBase>;
using MediaDrmStorageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDrmStorageInterfaceBase>;
class SessionDataDataView {
 public:
  SessionDataDataView() {}

  SessionDataDataView(
      internal::SessionData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySetIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySetId(UserType* output) {
    auto* pointer = data_->key_set_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SessionData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDrmStorage_Initialize_ParamsDataView {
 public:
  MediaDrmStorage_Initialize_ParamsDataView() {}

  MediaDrmStorage_Initialize_ParamsDataView(
      internal::MediaDrmStorage_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaDrmStorage_Initialize_Params_Data* data_ = nullptr;
};

class MediaDrmStorage_Initialize_ResponseParamsDataView {
 public:
  MediaDrmStorage_Initialize_ResponseParamsDataView() {}

  MediaDrmStorage_Initialize_ResponseParamsDataView(
      internal::MediaDrmStorage_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginId(UserType* output) {
    auto* pointer = data_->origin_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDrmStorage_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDrmStorage_OnProvisioned_ParamsDataView {
 public:
  MediaDrmStorage_OnProvisioned_ParamsDataView() {}

  MediaDrmStorage_OnProvisioned_ParamsDataView(
      internal::MediaDrmStorage_OnProvisioned_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaDrmStorage_OnProvisioned_Params_Data* data_ = nullptr;
};

class MediaDrmStorage_OnProvisioned_ResponseParamsDataView {
 public:
  MediaDrmStorage_OnProvisioned_ResponseParamsDataView() {}

  MediaDrmStorage_OnProvisioned_ResponseParamsDataView(
      internal::MediaDrmStorage_OnProvisioned_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::MediaDrmStorage_OnProvisioned_ResponseParams_Data* data_ = nullptr;
};

class MediaDrmStorage_SavePersistentSession_ParamsDataView {
 public:
  MediaDrmStorage_SavePersistentSession_ParamsDataView() {}

  MediaDrmStorage_SavePersistentSession_ParamsDataView(
      internal::MediaDrmStorage_SavePersistentSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSessionDataDataView(
      SessionDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionData(UserType* output) {
    auto* pointer = data_->session_data.Get();
    return mojo::internal::Deserialize<::media::mojom::SessionDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDrmStorage_SavePersistentSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDrmStorage_SavePersistentSession_ResponseParamsDataView {
 public:
  MediaDrmStorage_SavePersistentSession_ResponseParamsDataView() {}

  MediaDrmStorage_SavePersistentSession_ResponseParamsDataView(
      internal::MediaDrmStorage_SavePersistentSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::MediaDrmStorage_SavePersistentSession_ResponseParams_Data* data_ = nullptr;
};

class MediaDrmStorage_LoadPersistentSession_ParamsDataView {
 public:
  MediaDrmStorage_LoadPersistentSession_ParamsDataView() {}

  MediaDrmStorage_LoadPersistentSession_ParamsDataView(
      internal::MediaDrmStorage_LoadPersistentSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDrmStorage_LoadPersistentSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDrmStorage_LoadPersistentSession_ResponseParamsDataView {
 public:
  MediaDrmStorage_LoadPersistentSession_ResponseParamsDataView() {}

  MediaDrmStorage_LoadPersistentSession_ResponseParamsDataView(
      internal::MediaDrmStorage_LoadPersistentSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionDataDataView(
      SessionDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionData(UserType* output) {
    auto* pointer = data_->session_data.Get();
    return mojo::internal::Deserialize<::media::mojom::SessionDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDrmStorage_LoadPersistentSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDrmStorage_RemovePersistentSession_ParamsDataView {
 public:
  MediaDrmStorage_RemovePersistentSession_ParamsDataView() {}

  MediaDrmStorage_RemovePersistentSession_ParamsDataView(
      internal::MediaDrmStorage_RemovePersistentSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDrmStorage_RemovePersistentSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDrmStorage_RemovePersistentSession_ResponseParamsDataView {
 public:
  MediaDrmStorage_RemovePersistentSession_ResponseParamsDataView() {}

  MediaDrmStorage_RemovePersistentSession_ResponseParamsDataView(
      internal::MediaDrmStorage_RemovePersistentSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::MediaDrmStorage_RemovePersistentSession_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SessionDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::SessionDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::SessionData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key_set_id, input, custom_context)) in_key_set_id = CallWithContext(Traits::key_set_id, input, custom_context);
    typename decltype((*output)->key_set_id)::BaseType::BufferWriter
        key_set_id_writer;
    const mojo::internal::ContainerValidateParams key_set_id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key_set_id, buffer, &key_set_id_writer, &key_set_id_validate_params,
        context);
    (*output)->key_set_id.Set(
        key_set_id_writer.is_null() ? nullptr : key_set_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_set_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_set_id in SessionData struct");
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in SessionData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::SessionData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::SessionDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void SessionDataDataView::GetKeySetIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_set_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void SessionDataDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaDrmStorage_Initialize_ResponseParamsDataView::GetOriginIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->origin_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}






inline void MediaDrmStorage_SavePersistentSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaDrmStorage_SavePersistentSession_ParamsDataView::GetSessionDataDataView(
    SessionDataDataView* output) {
  auto pointer = data_->session_data.Get();
  *output = SessionDataDataView(pointer, context_);
}




inline void MediaDrmStorage_LoadPersistentSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaDrmStorage_LoadPersistentSession_ResponseParamsDataView::GetSessionDataDataView(
    SessionDataDataView* output) {
  auto pointer = data_->session_data.Get();
  *output = SessionDataDataView(pointer, context_);
}


inline void MediaDrmStorage_RemovePersistentSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_SHARED_H_
