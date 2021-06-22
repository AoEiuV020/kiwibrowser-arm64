// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_HOST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_HOST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/input_host.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class SpellCheckSuggestionDataView;

class TextSuggestionDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SpellCheckSuggestionDataView> {
  using Data = ::blink::mojom::internal::SpellCheckSuggestion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::TextSuggestionDataView> {
  using Data = ::blink::mojom::internal::TextSuggestion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TextSuggestionHostInterfaceBase {};

using TextSuggestionHostPtrDataView =
    mojo::InterfacePtrDataView<TextSuggestionHostInterfaceBase>;
using TextSuggestionHostRequestDataView =
    mojo::InterfaceRequestDataView<TextSuggestionHostInterfaceBase>;
using TextSuggestionHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextSuggestionHostInterfaceBase>;
using TextSuggestionHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextSuggestionHostInterfaceBase>;
class SpellCheckSuggestionDataView {
 public:
  SpellCheckSuggestionDataView() {}

  SpellCheckSuggestionDataView(
      internal::SpellCheckSuggestion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSuggestionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestion(UserType* output) {
    auto* pointer = data_->suggestion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SpellCheckSuggestion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionDataView {
 public:
  TextSuggestionDataView() {}

  TextSuggestionDataView(
      internal::TextSuggestion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t marker_tag() const {
    return data_->marker_tag;
  }
  int32_t suggestion_index() const {
    return data_->suggestion_index;
  }
  inline void GetPrefixDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrefix(UserType* output) {
    auto* pointer = data_->prefix.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSuggestionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestion(UserType* output) {
    auto* pointer = data_->suggestion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSuffixDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuffix(UserType* output) {
    auto* pointer = data_->suffix.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView {
 public:
  TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView() {}

  TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView(
      internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* data_ = nullptr;
};

class TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView {
 public:
  TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView() {}

  TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView(
      internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  double caret_x() const {
    return data_->caret_x;
  }
  double caret_y() const {
    return data_->caret_y;
  }
  inline void GetMarkedTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkedText(UserType* output) {
    auto* pointer = data_->marked_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<SpellCheckSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SpellCheckSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView {
 public:
  TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView() {}

  TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView(
      internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  double caret_x() const {
    return data_->caret_x;
  }
  double caret_y() const {
    return data_->caret_y;
  }
  inline void GetMarkedTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMarkedText(UserType* output) {
    auto* pointer = data_->marked_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<TextSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::TextSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpellCheckSuggestionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SpellCheckSuggestionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SpellCheckSuggestion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::suggestion, input, custom_context)) in_suggestion = CallWithContext(Traits::suggestion, input, custom_context);
    typename decltype((*output)->suggestion)::BaseType::BufferWriter
        suggestion_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_suggestion, buffer, &suggestion_writer, context);
    (*output)->suggestion.Set(
        suggestion_writer.is_null() ? nullptr : suggestion_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->suggestion.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null suggestion in SpellCheckSuggestion struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::SpellCheckSuggestion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SpellCheckSuggestionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::TextSuggestionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::TextSuggestionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::TextSuggestion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->marker_tag = CallWithContext(Traits::marker_tag, input, custom_context);
    (*output)->suggestion_index = CallWithContext(Traits::suggestion_index, input, custom_context);
    decltype(CallWithContext(Traits::prefix, input, custom_context)) in_prefix = CallWithContext(Traits::prefix, input, custom_context);
    typename decltype((*output)->prefix)::BaseType::BufferWriter
        prefix_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_prefix, buffer, &prefix_writer, context);
    (*output)->prefix.Set(
        prefix_writer.is_null() ? nullptr : prefix_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->prefix.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null prefix in TextSuggestion struct");
    decltype(CallWithContext(Traits::suggestion, input, custom_context)) in_suggestion = CallWithContext(Traits::suggestion, input, custom_context);
    typename decltype((*output)->suggestion)::BaseType::BufferWriter
        suggestion_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_suggestion, buffer, &suggestion_writer, context);
    (*output)->suggestion.Set(
        suggestion_writer.is_null() ? nullptr : suggestion_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->suggestion.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null suggestion in TextSuggestion struct");
    decltype(CallWithContext(Traits::suffix, input, custom_context)) in_suffix = CallWithContext(Traits::suffix, input, custom_context);
    typename decltype((*output)->suffix)::BaseType::BufferWriter
        suffix_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_suffix, buffer, &suffix_writer, context);
    (*output)->suffix.Set(
        suffix_writer.is_null() ? nullptr : suffix_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->suffix.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null suffix in TextSuggestion struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::TextSuggestion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::TextSuggestionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SpellCheckSuggestionDataView::GetSuggestionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suggestion.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void TextSuggestionDataView::GetPrefixDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->prefix.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextSuggestionDataView::GetSuggestionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suggestion.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextSuggestionDataView::GetSuffixDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suffix.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView::GetMarkedTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->marked_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<SpellCheckSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<SpellCheckSuggestionDataView>(pointer, context_);
}


inline void TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView::GetMarkedTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->marked_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<TextSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<TextSuggestionDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_HOST_MOJOM_SHARED_H_
