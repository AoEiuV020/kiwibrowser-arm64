// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/unhandled_tap_notifier.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class UnhandledTapInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::UnhandledTapInfoDataView> {
  using Data = ::blink::mojom::internal::UnhandledTapInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UnhandledTapNotifierInterfaceBase {};

using UnhandledTapNotifierPtrDataView =
    mojo::InterfacePtrDataView<UnhandledTapNotifierInterfaceBase>;
using UnhandledTapNotifierRequestDataView =
    mojo::InterfaceRequestDataView<UnhandledTapNotifierInterfaceBase>;
using UnhandledTapNotifierAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UnhandledTapNotifierInterfaceBase>;
using UnhandledTapNotifierAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UnhandledTapNotifierInterfaceBase>;
class UnhandledTapInfoDataView {
 public:
  UnhandledTapInfoDataView() {}

  UnhandledTapInfoDataView(
      internal::UnhandledTapInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTappedPositionInViewportDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTappedPositionInViewport(UserType* output) {
    auto* pointer = data_->tapped_position_in_viewport.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  uint32_t font_size_in_pixels() const {
    return data_->font_size_in_pixels;
  }
  uint32_t element_text_run_length() const {
    return data_->element_text_run_length;
  }
 private:
  internal::UnhandledTapInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsDataView {
 public:
  UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsDataView() {}

  UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsDataView(
      internal::UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUnhandledTapInfoDataView(
      UnhandledTapInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnhandledTapInfo(UserType* output) {
    auto* pointer = data_->unhandled_tap_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::UnhandledTapInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UnhandledTapInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::UnhandledTapInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::UnhandledTapInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::tapped_position_in_viewport, input, custom_context)) in_tapped_position_in_viewport = CallWithContext(Traits::tapped_position_in_viewport, input, custom_context);
    typename decltype((*output)->tapped_position_in_viewport)::BaseType::BufferWriter
        tapped_position_in_viewport_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_tapped_position_in_viewport, buffer, &tapped_position_in_viewport_writer, context);
    (*output)->tapped_position_in_viewport.Set(
        tapped_position_in_viewport_writer.is_null() ? nullptr : tapped_position_in_viewport_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tapped_position_in_viewport.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tapped_position_in_viewport in UnhandledTapInfo struct");
    (*output)->font_size_in_pixels = CallWithContext(Traits::font_size_in_pixels, input, custom_context);
    (*output)->element_text_run_length = CallWithContext(Traits::element_text_run_length, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::UnhandledTapInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::UnhandledTapInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void UnhandledTapInfoDataView::GetTappedPositionInViewportDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->tapped_position_in_viewport.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


inline void UnhandledTapNotifier_ShowUnhandledTapUIIfNeeded_ParamsDataView::GetUnhandledTapInfoDataView(
    UnhandledTapInfoDataView* output) {
  auto pointer = data_->unhandled_tap_info.Get();
  *output = UnhandledTapInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_SHARED_H_
