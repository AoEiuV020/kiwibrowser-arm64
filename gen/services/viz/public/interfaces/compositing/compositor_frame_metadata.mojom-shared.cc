// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace viz {
namespace mojom {

namespace internal {


// static
bool CompositorFrameMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositorFrameMetadata_Data* object = static_cast<const CompositorFrameMetadata_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 136 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->root_scroll_offset, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->root_scroll_offset, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->scrollable_viewport_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scrollable_viewport_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->root_layer_size, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->root_layer_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->selection, 16, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->selection, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->latency_info, 17, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams latency_info_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->latency_info, validation_context,
                                         &latency_info_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->referenced_surfaces, 18, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams referenced_surfaces_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->referenced_surfaces, validation_context,
                                         &referenced_surfaces_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->deadline, 19, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->deadline, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->activation_dependencies, 20, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams activation_dependencies_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->activation_dependencies, validation_context,
                                         &activation_dependencies_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->begin_frame_ack, 22, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->begin_frame_ack, validation_context))
    return false;

  return true;
}

CompositorFrameMetadata_Data::CompositorFrameMetadata_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
