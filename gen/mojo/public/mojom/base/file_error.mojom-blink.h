// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_FILE_ERROR_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_FILE_ERROR_MOJOM_BLINK_H_

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
#include "mojo/public/mojom/base/file_error.mojom-shared.h"

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
#include "base/component_export.h"


namespace WTF {
struct mojo_base_mojom_internal_FileError_DataHashFn {
  static unsigned GetHash(const ::mojo_base::mojom::FileError& value) {
    using utype = std::underlying_type<::mojo_base::mojom::FileError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo_base::mojom::FileError& left, const ::mojo_base::mojom::FileError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::mojo_base::mojom::FileError> {
  using Hash = mojo_base_mojom_internal_FileError_DataHashFn;
};

template <>
struct HashTraits<::mojo_base::mojom::FileError>
    : public GenericHashTraits<::mojo_base::mojom::FileError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo_base::mojom::FileError& value) {
    return value == static_cast<::mojo_base::mojom::FileError>(-1000000);
  }
  static void ConstructDeletedValue(::mojo_base::mojom::FileError& slot, bool) {
    slot = static_cast<::mojo_base::mojom::FileError>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo_base::mojom::FileError& value) {
    return value == static_cast<::mojo_base::mojom::FileError>(-1000001);
  }
};
}  // namespace WTF


namespace mojo_base {
namespace mojom {
namespace blink {
using FileError = FileError;  // Alias for definition in the parent namespace.





}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_FILE_ERROR_MOJOM_BLINK_H_