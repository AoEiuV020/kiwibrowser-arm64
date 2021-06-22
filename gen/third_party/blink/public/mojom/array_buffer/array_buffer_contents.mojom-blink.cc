// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
namespace blink {
namespace mojom {
namespace blink {
SerializedArrayBufferContents::SerializedArrayBufferContents()
    : contents() {}

SerializedArrayBufferContents::SerializedArrayBufferContents(
    mojo_base::BigBuffer contents_in)
    : contents(std::move(contents_in)) {}

SerializedArrayBufferContents::~SerializedArrayBufferContents() = default;

bool SerializedArrayBufferContents::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SerializedArrayBufferContents::DataView, ::blink::mojom::blink::SerializedArrayBufferContentsPtr>::Read(
    ::blink::mojom::blink::SerializedArrayBufferContents::DataView input,
    ::blink::mojom::blink::SerializedArrayBufferContentsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SerializedArrayBufferContentsPtr result(::blink::mojom::blink::SerializedArrayBufferContents::New());
  
      if (!input.ReadContents(&result->contents))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif