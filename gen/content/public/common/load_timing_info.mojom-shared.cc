// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/public/common/load_timing_info.mojom-shared.h"

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
bool LoadTimingInfoConnectTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const LoadTimingInfoConnectTiming_Data* object = static_cast<const LoadTimingInfoConnectTiming_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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
          object->dns_start, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dns_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dns_end, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dns_end, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->connect_start, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->connect_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->connect_end, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->connect_end, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ssl_start, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ssl_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ssl_end, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ssl_end, validation_context))
    return false;

  return true;
}

LoadTimingInfoConnectTiming_Data::LoadTimingInfoConnectTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool LoadTimingInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const LoadTimingInfo_Data* object = static_cast<const LoadTimingInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 96 }};

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
          object->request_start_time, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request_start_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request_start, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxy_resolve_start, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxy_resolve_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxy_resolve_end, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxy_resolve_end, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->connect_timing, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->connect_timing, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->send_start, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->send_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->send_end, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->send_end, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->receive_headers_end, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->receive_headers_end, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->push_start, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->push_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->push_end, 12, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->push_end, validation_context))
    return false;

  return true;
}

LoadTimingInfo_Data::LoadTimingInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
