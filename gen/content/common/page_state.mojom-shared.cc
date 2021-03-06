// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/common/page_state.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace content {
namespace history {
namespace mojom {

namespace internal {
// static
bool Element_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const Element_Data* object = static_cast<const Element_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case Element_Tag::BLOB_UUID: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_blob_uuid, 1, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams blob_uuid_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_blob_uuid, validation_context,
                                             &blob_uuid_validate_params)) {
        return false;
      }
      return true;
    }
    case Element_Tag::BYTES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_bytes, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams bytes_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_bytes, validation_context,
                                             &bytes_validate_params)) {
        return false;
      }
      return true;
    }
    case Element_Tag::FILE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_file, 3, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_file, validation_context))
        return false;
      return true;
    }
    case Element_Tag::DEPRECATED_FILE_SYSTEM_FILE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_DEPRECATED_file_system_file, 4, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_DEPRECATED_file_system_file, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in Element");
      return false;
    }
  }
}


// static
bool DEPRECATED_FileSystemFile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DEPRECATED_FileSystemFile_Data* object = static_cast<const DEPRECATED_FileSystemFile_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->filesystem_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filesystem_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modification_time, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->modification_time, validation_context))
    return false;

  return true;
}

DEPRECATED_FileSystemFile_Data::DEPRECATED_FileSystemFile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool File_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const File_Data* object = static_cast<const File_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modification_time, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->modification_time, validation_context))
    return false;

  return true;
}

File_Data::File_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RequestBody_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RequestBody_Data* object = static_cast<const RequestBody_Data*>(data);

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
          object->elements, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams elements_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->elements, validation_context,
                                         &elements_validate_params)) {
    return false;
  }

  return true;
}

RequestBody_Data::RequestBody_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HttpBody_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpBody_Data* object = static_cast<const HttpBody_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->http_content_type, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->request_body, validation_context))
    return false;

  return true;
}

HttpBody_Data::HttpBody_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ViewState_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ViewState_Data* object = static_cast<const ViewState_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }, { 1, 56 }};

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
          object->visual_viewport_scroll_offset, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visual_viewport_scroll_offset, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->scroll_offset, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scroll_offset, validation_context))
    return false;
  if (object->header_.version < 1)
    return true;

  if (!mojo::internal::ValidateStruct(object->scroll_anchor_selector, validation_context))
    return false;
  if (object->header_.version < 1)
    return true;

  if (!mojo::internal::ValidateStruct(object->scroll_anchor_offset, validation_context))
    return false;

  return true;
}

ViewState_Data::ViewState_Data()
    : header_({sizeof(*this), 1}) {}


// static
bool FrameState_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameState_Data* object = static_cast<const FrameState_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->url_string, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->referrer, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->target, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->state_object, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->document_state, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams document_state_validate_params(
      0, true, nullptr);
  if (!mojo::internal::ValidateContainer(object->document_state, validation_context,
                                         &document_state_validate_params)) {
    return false;
  }


  if (!::content::history::mojom::internal::ScrollRestorationType_Data
        ::Validate(object->scroll_restoration_type, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->view_state, validation_context))
    return false;


  if (!::blink::mojom::internal::ReferrerPolicy_Data
        ::Validate(object->referrer_policy, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->http_body, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->http_body, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->children, 12, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams children_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->children, validation_context,
                                         &children_validate_params)) {
    return false;
  }

  return true;
}

FrameState_Data::FrameState_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageState_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PageState_Data* object = static_cast<const PageState_Data*>(data);

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
          object->referenced_files, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams referenced_files_validate_params(
      0, true, nullptr);
  if (!mojo::internal::ValidateContainer(object->referenced_files, validation_context,
                                         &referenced_files_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->top, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->top, validation_context))
    return false;

  return true;
}

PageState_Data::PageState_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace history
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
