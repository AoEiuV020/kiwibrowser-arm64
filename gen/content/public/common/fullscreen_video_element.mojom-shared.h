// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_SHARED_H_

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
#include "content/public/common/fullscreen_video_element.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FullscreenVideoElementHandlerInterfaceBase {};

using FullscreenVideoElementHandlerPtrDataView =
    mojo::InterfacePtrDataView<FullscreenVideoElementHandlerInterfaceBase>;
using FullscreenVideoElementHandlerRequestDataView =
    mojo::InterfaceRequestDataView<FullscreenVideoElementHandlerInterfaceBase>;
using FullscreenVideoElementHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FullscreenVideoElementHandlerInterfaceBase>;
using FullscreenVideoElementHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FullscreenVideoElementHandlerInterfaceBase>;
class FullscreenVideoElementHandler_RequestFullscreenVideoElement_ParamsDataView {
 public:
  FullscreenVideoElementHandler_RequestFullscreenVideoElement_ParamsDataView() {}

  FullscreenVideoElementHandler_RequestFullscreenVideoElement_ParamsDataView(
      internal::FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FullscreenVideoElementHandler_RequestFullscreenVideoElement_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {




}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_SHARED_H_
