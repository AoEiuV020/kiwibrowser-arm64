// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-shared-internal.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class CookieChangeSubscriptionDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::CookieChangeSubscriptionDataView> {
  using Data = ::blink::mojom::internal::CookieChangeSubscription_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CookieStoreInterfaceBase {};

using CookieStorePtrDataView =
    mojo::InterfacePtrDataView<CookieStoreInterfaceBase>;
using CookieStoreRequestDataView =
    mojo::InterfaceRequestDataView<CookieStoreInterfaceBase>;
using CookieStoreAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CookieStoreInterfaceBase>;
using CookieStoreAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CookieStoreInterfaceBase>;
class CookieChangeSubscriptionDataView {
 public:
  CookieChangeSubscriptionDataView() {}

  CookieChangeSubscriptionDataView(
      internal::CookieChangeSubscription_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchType(UserType* output) const {
    auto data_value = data_->match_type;
    return mojo::internal::Deserialize<::network::mojom::CookieMatchType>(
        data_value, output);
  }

  ::network::mojom::CookieMatchType match_type() const {
    return static_cast<::network::mojom::CookieMatchType>(data_->match_type);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieChangeSubscription_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieStore_AppendSubscriptions_ParamsDataView {
 public:
  CookieStore_AppendSubscriptions_ParamsDataView() {}

  CookieStore_AppendSubscriptions_ParamsDataView(
      internal::CookieStore_AppendSubscriptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetSubscriptionsDataView(
      mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubscriptions(UserType* output) {
    auto* pointer = data_->subscriptions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::CookieChangeSubscriptionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieStore_AppendSubscriptions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieStore_AppendSubscriptions_ResponseParamsDataView {
 public:
  CookieStore_AppendSubscriptions_ResponseParamsDataView() {}

  CookieStore_AppendSubscriptions_ResponseParamsDataView(
      internal::CookieStore_AppendSubscriptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieStore_AppendSubscriptions_ResponseParams_Data* data_ = nullptr;
};

class CookieStore_GetSubscriptions_ParamsDataView {
 public:
  CookieStore_GetSubscriptions_ParamsDataView() {}

  CookieStore_GetSubscriptions_ParamsDataView(
      internal::CookieStore_GetSubscriptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::CookieStore_GetSubscriptions_Params_Data* data_ = nullptr;
};

class CookieStore_GetSubscriptions_ResponseParamsDataView {
 public:
  CookieStore_GetSubscriptions_ResponseParamsDataView() {}

  CookieStore_GetSubscriptions_ResponseParamsDataView(
      internal::CookieStore_GetSubscriptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSubscriptionsDataView(
      mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubscriptions(UserType* output) {
    auto* pointer = data_->subscriptions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::CookieChangeSubscriptionDataView>>(
        pointer, output, context_);
  }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieStore_GetSubscriptions_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CookieChangeSubscriptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CookieChangeSubscriptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CookieChangeSubscription_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in CookieChangeSubscription struct");
    mojo::internal::Serialize<::network::mojom::CookieMatchType>(
        CallWithContext(Traits::match_type, input, custom_context), &(*output)->match_type);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in CookieChangeSubscription struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::CookieChangeSubscription_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CookieChangeSubscriptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void CookieChangeSubscriptionDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CookieChangeSubscriptionDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CookieStore_AppendSubscriptions_ParamsDataView::GetSubscriptionsDataView(
    mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output) {
  auto pointer = data_->subscriptions.Get();
  *output = mojo::ArrayDataView<CookieChangeSubscriptionDataView>(pointer, context_);
}






inline void CookieStore_GetSubscriptions_ResponseParamsDataView::GetSubscriptionsDataView(
    mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output) {
  auto pointer = data_->subscriptions.Get();
  *output = mojo::ArrayDataView<CookieChangeSubscriptionDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_H_
