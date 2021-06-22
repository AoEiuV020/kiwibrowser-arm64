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

#include "mojo/public/mojom/base/string16.mojom-blink.h"

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

#include "mojo/public/mojom/base/string16.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
namespace mojo_base {
namespace mojom {
namespace blink {
String16::String16()
    : data() {}

String16::String16(
    const WTF::Vector<uint16_t>& data_in)
    : data(std::move(data_in)) {}

String16::~String16() = default;

bool String16::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BigString16::BigString16()
    : data() {}

BigString16::BigString16(
    mojo_base::BigBuffer data_in)
    : data(std::move(data_in)) {}

BigString16::~BigString16() = default;

bool BigString16::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::blink::String16::DataView, ::mojo_base::mojom::blink::String16Ptr>::Read(
    ::mojo_base::mojom::blink::String16::DataView input,
    ::mojo_base::mojom::blink::String16Ptr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::String16Ptr result(::mojo_base::mojom::blink::String16::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::blink::BigString16::DataView, ::mojo_base::mojom::blink::BigString16Ptr>::Read(
    ::mojo_base::mojom::blink::BigString16::DataView input,
    ::mojo_base::mojom::blink::BigString16Ptr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::BigString16Ptr result(::mojo_base::mojom::blink::BigString16::New());
  
      if (!input.ReadData(&result->data))
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