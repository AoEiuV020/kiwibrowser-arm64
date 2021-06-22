// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_lock_type.h"
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct device_mojom_internal_ScreenOrientationLockResult_DataHashFn {
  static unsigned GetHash(const ::device::mojom::ScreenOrientationLockResult& value) {
    using utype = std::underlying_type<::device::mojom::ScreenOrientationLockResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::ScreenOrientationLockResult& left, const ::device::mojom::ScreenOrientationLockResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::ScreenOrientationLockResult> {
  using Hash = device_mojom_internal_ScreenOrientationLockResult_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::ScreenOrientationLockResult>
    : public GenericHashTraits<::device::mojom::ScreenOrientationLockResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::ScreenOrientationLockResult& value) {
    return value == static_cast<::device::mojom::ScreenOrientationLockResult>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::ScreenOrientationLockResult& slot, bool) {
    slot = static_cast<::device::mojom::ScreenOrientationLockResult>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::ScreenOrientationLockResult& value) {
    return value == static_cast<::device::mojom::ScreenOrientationLockResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_ScreenOrientationLockType_DataHashFn {
  static unsigned GetHash(const ::device::mojom::ScreenOrientationLockType& value) {
    using utype = std::underlying_type<::device::mojom::ScreenOrientationLockType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::ScreenOrientationLockType& left, const ::device::mojom::ScreenOrientationLockType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::device::mojom::ScreenOrientationLockType> {
  using Hash = device_mojom_internal_ScreenOrientationLockType_DataHashFn;
};

template <>
struct HashTraits<::device::mojom::ScreenOrientationLockType>
    : public GenericHashTraits<::device::mojom::ScreenOrientationLockType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::ScreenOrientationLockType& value) {
    return value == static_cast<::device::mojom::ScreenOrientationLockType>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::ScreenOrientationLockType& slot, bool) {
    slot = static_cast<::device::mojom::ScreenOrientationLockType>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::ScreenOrientationLockType& value) {
    return value == static_cast<::device::mojom::ScreenOrientationLockType>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using ScreenOrientationLockResult = ScreenOrientationLockResult;  // Alias for definition in the parent namespace.
using ScreenOrientationLockType = ScreenOrientationLockType;  // Alias for definition in the parent namespace.





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_BLINK_H_