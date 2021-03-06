// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/public/common/resource_load_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace content {
namespace mojom {

namespace internal {


// static
bool CommonNetworkInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CommonNetworkInfo_Data* object = static_cast<const CommonNetworkInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidateStruct(object->ip_port_pair, validation_context))
    return false;

  return true;
}

CommonNetworkInfo_Data::CommonNetworkInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RedirectInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RedirectInfo_Data* object = static_cast<const RedirectInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->network_info, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->network_info, validation_context))
    return false;

  return true;
}

RedirectInfo_Data::RedirectInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResourceLoadInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResourceLoadInfo_Data* object = static_cast<const ResourceLoadInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 112 }};

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
          object->url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->referrer, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->referrer, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_url, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->original_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method, validation_context,
                                         &method_validate_params)) {
    return false;
  }


  if (!::content::mojom::internal::ResourceType_Data
        ::Validate(object->resource_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mime_type, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mime_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mime_type, validation_context,
                                         &mime_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->network_info, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->network_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->load_timing_info, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->load_timing_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->redirect_info_chain, 14, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams redirect_info_chain_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->redirect_info_chain, validation_context,
                                         &redirect_info_chain_validate_params)) {
    return false;
  }

  return true;
}

ResourceLoadInfo_Data::ResourceLoadInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
