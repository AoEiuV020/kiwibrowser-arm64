// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/android_overlay.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class AndroidOverlayConfigDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::AndroidOverlayConfigDataView> {
  using Data = ::media::mojom::internal::AndroidOverlayConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class AndroidOverlayProviderInterfaceBase {};

using AndroidOverlayProviderPtrDataView =
    mojo::InterfacePtrDataView<AndroidOverlayProviderInterfaceBase>;
using AndroidOverlayProviderRequestDataView =
    mojo::InterfaceRequestDataView<AndroidOverlayProviderInterfaceBase>;
using AndroidOverlayProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AndroidOverlayProviderInterfaceBase>;
using AndroidOverlayProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AndroidOverlayProviderInterfaceBase>;
class AndroidOverlayInterfaceBase {};

using AndroidOverlayPtrDataView =
    mojo::InterfacePtrDataView<AndroidOverlayInterfaceBase>;
using AndroidOverlayRequestDataView =
    mojo::InterfaceRequestDataView<AndroidOverlayInterfaceBase>;
using AndroidOverlayAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AndroidOverlayInterfaceBase>;
using AndroidOverlayAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AndroidOverlayInterfaceBase>;
class AndroidOverlayClientInterfaceBase {};

using AndroidOverlayClientPtrDataView =
    mojo::InterfacePtrDataView<AndroidOverlayClientInterfaceBase>;
using AndroidOverlayClientRequestDataView =
    mojo::InterfaceRequestDataView<AndroidOverlayClientInterfaceBase>;
using AndroidOverlayClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AndroidOverlayClientInterfaceBase>;
using AndroidOverlayClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AndroidOverlayClientInterfaceBase>;
class AndroidOverlayConfigDataView {
 public:
  AndroidOverlayConfigDataView() {}

  AndroidOverlayConfigDataView(
      internal::AndroidOverlayConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRoutingTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoutingToken(UserType* output) {
    auto* pointer = data_->routing_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  bool secure() const {
    return data_->secure;
  }
  bool power_efficient() const {
    return data_->power_efficient;
  }
 private:
  internal::AndroidOverlayConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AndroidOverlayProvider_CreateOverlay_ParamsDataView {
 public:
  AndroidOverlayProvider_CreateOverlay_ParamsDataView() {}

  AndroidOverlayProvider_CreateOverlay_ParamsDataView(
      internal::AndroidOverlayProvider_CreateOverlay_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeOverlay() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AndroidOverlayRequestDataView>(
            &data_->overlay, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AndroidOverlayClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetConfigDataView(
      AndroidOverlayConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::AndroidOverlayConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::AndroidOverlayProvider_CreateOverlay_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AndroidOverlay_ScheduleLayout_ParamsDataView {
 public:
  AndroidOverlay_ScheduleLayout_ParamsDataView() {}

  AndroidOverlay_ScheduleLayout_ParamsDataView(
      internal::AndroidOverlay_ScheduleLayout_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::AndroidOverlay_ScheduleLayout_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AndroidOverlayClient_OnSurfaceReady_ParamsDataView {
 public:
  AndroidOverlayClient_OnSurfaceReady_ParamsDataView() {}

  AndroidOverlayClient_OnSurfaceReady_ParamsDataView(
      internal::AndroidOverlayClient_OnSurfaceReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t surface_key() const {
    return data_->surface_key;
  }
 private:
  internal::AndroidOverlayClient_OnSurfaceReady_Params_Data* data_ = nullptr;
};

class AndroidOverlayClient_OnDestroyed_ParamsDataView {
 public:
  AndroidOverlayClient_OnDestroyed_ParamsDataView() {}

  AndroidOverlayClient_OnDestroyed_ParamsDataView(
      internal::AndroidOverlayClient_OnDestroyed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AndroidOverlayClient_OnDestroyed_Params_Data* data_ = nullptr;
};

class AndroidOverlayClient_OnPowerEfficientState_ParamsDataView {
 public:
  AndroidOverlayClient_OnPowerEfficientState_ParamsDataView() {}

  AndroidOverlayClient_OnPowerEfficientState_ParamsDataView(
      internal::AndroidOverlayClient_OnPowerEfficientState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_power_efficient() const {
    return data_->is_power_efficient;
  }
 private:
  internal::AndroidOverlayClient_OnPowerEfficientState_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AndroidOverlayConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::AndroidOverlayConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::AndroidOverlayConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::routing_token, input, custom_context)) in_routing_token = CallWithContext(Traits::routing_token, input, custom_context);
    typename decltype((*output)->routing_token)::BaseType::BufferWriter
        routing_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_routing_token, buffer, &routing_token_writer, context);
    (*output)->routing_token.Set(
        routing_token_writer.is_null() ? nullptr : routing_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->routing_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null routing_token in AndroidOverlayConfig struct");
    decltype(CallWithContext(Traits::rect, input, custom_context)) in_rect = CallWithContext(Traits::rect, input, custom_context);
    typename decltype((*output)->rect)::BaseType::BufferWriter
        rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_rect, buffer, &rect_writer, context);
    (*output)->rect.Set(
        rect_writer.is_null() ? nullptr : rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rect in AndroidOverlayConfig struct");
    (*output)->secure = CallWithContext(Traits::secure, input, custom_context);
    (*output)->power_efficient = CallWithContext(Traits::power_efficient, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::AndroidOverlayConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::AndroidOverlayConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void AndroidOverlayConfigDataView::GetRoutingTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->routing_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void AndroidOverlayConfigDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void AndroidOverlayProvider_CreateOverlay_ParamsDataView::GetConfigDataView(
    AndroidOverlayConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = AndroidOverlayConfigDataView(pointer, context_);
}


inline void AndroidOverlay_ScheduleLayout_ParamsDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_SHARED_H_
