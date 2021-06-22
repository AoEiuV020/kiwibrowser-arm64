// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ManifestManagerInterfaceBase {};

using ManifestManagerPtrDataView =
    mojo::InterfacePtrDataView<ManifestManagerInterfaceBase>;
using ManifestManagerRequestDataView =
    mojo::InterfaceRequestDataView<ManifestManagerInterfaceBase>;
using ManifestManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ManifestManagerInterfaceBase>;
using ManifestManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ManifestManagerInterfaceBase>;
class ManifestManager_RequestManifest_ParamsDataView {
 public:
  ManifestManager_RequestManifest_ParamsDataView() {}

  ManifestManager_RequestManifest_ParamsDataView(
      internal::ManifestManager_RequestManifest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ManifestManager_RequestManifest_Params_Data* data_ = nullptr;
};

class ManifestManager_RequestManifest_ResponseParamsDataView {
 public:
  ManifestManager_RequestManifest_ResponseParamsDataView() {}

  ManifestManager_RequestManifest_ResponseParamsDataView(
      internal::ManifestManager_RequestManifest_ResponseParams_Data* data,
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
  inline void GetManifestDataView(
      ::blink::mojom::ManifestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManifest(UserType* output) {
    auto* pointer = data_->manifest.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestManager_RequestManifest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestManager_RequestManifestDebugInfo_ParamsDataView {
 public:
  ManifestManager_RequestManifestDebugInfo_ParamsDataView() {}

  ManifestManager_RequestManifestDebugInfo_ParamsDataView(
      internal::ManifestManager_RequestManifestDebugInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ManifestManager_RequestManifestDebugInfo_Params_Data* data_ = nullptr;
};

class ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView {
 public:
  ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView() {}

  ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView(
      internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* data,
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
  inline void GetDebugInfoDataView(
      ::blink::mojom::ManifestDebugInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDebugInfo(UserType* output) {
    auto* pointer = data_->debug_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestDebugInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {



inline void ManifestManager_RequestManifest_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestManager_RequestManifest_ResponseParamsDataView::GetManifestDataView(
    ::blink::mojom::ManifestDataView* output) {
  auto pointer = data_->manifest.Get();
  *output = ::blink::mojom::ManifestDataView(pointer, context_);
}




inline void ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView::GetDebugInfoDataView(
    ::blink::mojom::ManifestDebugInfoDataView* output) {
  auto pointer = data_->debug_info.Get();
  *output = ::blink::mojom::ManifestDebugInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_SHARED_H_
