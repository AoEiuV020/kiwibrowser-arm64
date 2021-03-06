// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_TRANSFERRABLE_URL_LOADER_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_TRANSFERRABLE_URL_LOADER_MOJOM_SHARED_H_

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
#include "content/public/common/transferrable_url_loader.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class TransferrableURLLoaderDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::TransferrableURLLoaderDataView> {
  using Data = ::content::mojom::internal::TransferrableURLLoader_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
class TransferrableURLLoaderDataView {
 public:
  TransferrableURLLoaderDataView() {}

  TransferrableURLLoaderDataView(
      internal::TransferrableURLLoader_Data* data,
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
  UserType TakeUrlLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderPtrDataView>(
            &data_->url_loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeUrlLoaderClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientRequestDataView>(
            &data_->url_loader_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetHeadDataView(
      ::network::mojom::URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
 private:
  internal::TransferrableURLLoader_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::TransferrableURLLoaderDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::TransferrableURLLoaderDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::TransferrableURLLoader_Data::BufferWriter* output,
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
        "null url in TransferrableURLLoader struct");
    decltype(CallWithContext(Traits::url_loader, input, custom_context)) in_url_loader = CallWithContext(Traits::url_loader, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderPtrDataView>(
        in_url_loader, &(*output)->url_loader, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader in TransferrableURLLoader struct");
    decltype(CallWithContext(Traits::url_loader_client, input, custom_context)) in_url_loader_client = CallWithContext(Traits::url_loader_client, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderClientRequestDataView>(
        in_url_loader_client, &(*output)->url_loader_client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader_client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader_client in TransferrableURLLoader struct");
    decltype(CallWithContext(Traits::head, input, custom_context)) in_head = CallWithContext(Traits::head, input, custom_context);
    typename decltype((*output)->head)::BaseType::BufferWriter
        head_writer;
    mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
        in_head, buffer, &head_writer, context);
    (*output)->head.Set(
        head_writer.is_null() ? nullptr : head_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->head.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null head in TransferrableURLLoader struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::TransferrableURLLoader_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::TransferrableURLLoaderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void TransferrableURLLoaderDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void TransferrableURLLoaderDataView::GetHeadDataView(
    ::network::mojom::URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = ::network::mojom::URLResponseHeadDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_TRANSFERRABLE_URL_LOADER_MOJOM_SHARED_H_
