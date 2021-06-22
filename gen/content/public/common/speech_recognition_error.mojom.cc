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

#include "content/public/common/speech_recognition_error.mojom.h"

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

#include "content/public/common/speech_recognition_error.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
SpeechRecognitionError::SpeechRecognitionError()
    : code(),
      details() {}

SpeechRecognitionError::SpeechRecognitionError(
    SpeechRecognitionErrorCode code_in,
    SpeechAudioErrorDetails details_in)
    : code(std::move(code_in)),
      details(std::move(details_in)) {}

SpeechRecognitionError::~SpeechRecognitionError() = default;

bool SpeechRecognitionError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::SpeechRecognitionError::DataView, ::content::mojom::SpeechRecognitionErrorPtr>::Read(
    ::content::mojom::SpeechRecognitionError::DataView input,
    ::content::mojom::SpeechRecognitionErrorPtr* output) {
  bool success = true;
  ::content::mojom::SpeechRecognitionErrorPtr result(::content::mojom::SpeechRecognitionError::New());
  
      if (!input.ReadCode(&result->code))
        success = false;
      if (!input.ReadDetails(&result->details))
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