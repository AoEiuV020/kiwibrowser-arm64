// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/common/push_messaging.mojom-shared.h"

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
bool PushSubscriptionOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushSubscriptionOptions_Data* object = static_cast<const PushSubscriptionOptions_Data*>(data);

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
          object->sender_info, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sender_info_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sender_info, validation_context,
                                         &sender_info_validate_params)) {
    return false;
  }

  return true;
}

PushSubscriptionOptions_Data::PushSubscriptionOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PushMessaging_Subscribe_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushMessaging_Subscribe_Params_Data* object = static_cast<const PushMessaging_Subscribe_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->options, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

PushMessaging_Subscribe_Params_Data::PushMessaging_Subscribe_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PushMessaging_Subscribe_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushMessaging_Subscribe_ResponseParams_Data* object = static_cast<const PushMessaging_Subscribe_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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


  if (!::content::mojom::internal::PushRegistrationStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->endpoint, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams p256dh_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->p256dh, validation_context,
                                         &p256dh_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams auth_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->auth, validation_context,
                                         &auth_validate_params)) {
    return false;
  }

  return true;
}

PushMessaging_Subscribe_ResponseParams_Data::PushMessaging_Subscribe_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PushMessaging_Unsubscribe_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushMessaging_Unsubscribe_Params_Data* object = static_cast<const PushMessaging_Unsubscribe_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

  return true;
}

PushMessaging_Unsubscribe_Params_Data::PushMessaging_Unsubscribe_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PushMessaging_Unsubscribe_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushMessaging_Unsubscribe_ResponseParams_Data* object = static_cast<const PushMessaging_Unsubscribe_ResponseParams_Data*>(data);

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


  if (!::content::mojom::internal::PushErrorType_Data
        ::Validate(object->error_type, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

PushMessaging_Unsubscribe_ResponseParams_Data::PushMessaging_Unsubscribe_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PushMessaging_GetSubscription_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushMessaging_GetSubscription_Params_Data* object = static_cast<const PushMessaging_GetSubscription_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

  return true;
}

PushMessaging_GetSubscription_Params_Data::PushMessaging_GetSubscription_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PushMessaging_GetSubscription_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PushMessaging_GetSubscription_ResponseParams_Data* object = static_cast<const PushMessaging_GetSubscription_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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


  if (!::content::mojom::internal::PushGetRegistrationStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->endpoint, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams p256dh_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->p256dh, validation_context,
                                         &p256dh_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams auth_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->auth, validation_context,
                                         &auth_validate_params)) {
    return false;
  }

  return true;
}

PushMessaging_GetSubscription_ResponseParams_Data::PushMessaging_GetSubscription_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
