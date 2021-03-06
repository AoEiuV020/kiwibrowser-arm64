// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom-shared.h"

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
bool RootCompositorFrameSinkParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RootCompositorFrameSinkParams_Data* object = static_cast<const RootCompositorFrameSinkParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->widget, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->widget, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->renderer_settings, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->renderer_settings, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->compositor_frame_sink, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->compositor_frame_sink,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->compositor_frame_sink_client, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->compositor_frame_sink_client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->display_private, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->display_private,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->display_client, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->display_client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->external_begin_frame_controller,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->external_begin_frame_controller_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

RootCompositorFrameSinkParams_Data::RootCompositorFrameSinkParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_RegisterFrameSinkId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_RegisterFrameSinkId_Params_Data* object = static_cast<const FrameSinkManager_RegisterFrameSinkId_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  return true;
}

FrameSinkManager_RegisterFrameSinkId_Params_Data::FrameSinkManager_RegisterFrameSinkId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_InvalidateFrameSinkId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_InvalidateFrameSinkId_Params_Data* object = static_cast<const FrameSinkManager_InvalidateFrameSinkId_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  return true;
}

FrameSinkManager_InvalidateFrameSinkId_Params_Data::FrameSinkManager_InvalidateFrameSinkId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_EnableSynchronizationReporting_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_EnableSynchronizationReporting_Params_Data* object = static_cast<const FrameSinkManager_EnableSynchronizationReporting_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->reporting_label, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams reporting_label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->reporting_label, validation_context,
                                         &reporting_label_validate_params)) {
    return false;
  }

  return true;
}

FrameSinkManager_EnableSynchronizationReporting_Params_Data::FrameSinkManager_EnableSynchronizationReporting_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_SetFrameSinkDebugLabel_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_SetFrameSinkDebugLabel_Params_Data* object = static_cast<const FrameSinkManager_SetFrameSinkDebugLabel_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->debug_label, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams debug_label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->debug_label, validation_context,
                                         &debug_label_validate_params)) {
    return false;
  }

  return true;
}

FrameSinkManager_SetFrameSinkDebugLabel_Params_Data::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_CreateRootCompositorFrameSink_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_CreateRootCompositorFrameSink_Params_Data* object = static_cast<const FrameSinkManager_CreateRootCompositorFrameSink_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

FrameSinkManager_CreateRootCompositorFrameSink_Params_Data::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_CreateCompositorFrameSink_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_CreateCompositorFrameSink_Params_Data* object = static_cast<const FrameSinkManager_CreateCompositorFrameSink_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->compositor_frame_sink, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->compositor_frame_sink,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->compositor_frame_sink_client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->compositor_frame_sink_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FrameSinkManager_CreateCompositorFrameSink_Params_Data::FrameSinkManager_CreateCompositorFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_DestroyCompositorFrameSink_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_DestroyCompositorFrameSink_Params_Data* object = static_cast<const FrameSinkManager_DestroyCompositorFrameSink_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  return true;
}

FrameSinkManager_DestroyCompositorFrameSink_Params_Data::FrameSinkManager_DestroyCompositorFrameSink_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* object = static_cast<const FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data* object = static_cast<const FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data*>(data);

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
          object->parent_frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parent_frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->child_frame_sink_id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->child_frame_sink_id, validation_context))
    return false;

  return true;
}

FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data* object = static_cast<const FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data*>(data);

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
          object->parent_frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parent_frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->child_frame_sink_id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->child_frame_sink_id, validation_context))
    return false;

  return true;
}

FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_AssignTemporaryReference_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_AssignTemporaryReference_Params_Data* object = static_cast<const FrameSinkManager_AssignTemporaryReference_Params_Data*>(data);

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
          object->surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->owner, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->owner, validation_context))
    return false;

  return true;
}

FrameSinkManager_AssignTemporaryReference_Params_Data::FrameSinkManager_AssignTemporaryReference_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_DropTemporaryReference_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_DropTemporaryReference_Params_Data* object = static_cast<const FrameSinkManager_DropTemporaryReference_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_id, validation_context))
    return false;

  return true;
}

FrameSinkManager_DropTemporaryReference_Params_Data::FrameSinkManager_DropTemporaryReference_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_AddVideoDetectorObserver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_AddVideoDetectorObserver_Params_Data* object = static_cast<const FrameSinkManager_AddVideoDetectorObserver_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FrameSinkManager_AddVideoDetectorObserver_Params_Data::FrameSinkManager_AddVideoDetectorObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_CreateVideoCapturer_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_CreateVideoCapturer_Params_Data* object = static_cast<const FrameSinkManager_CreateVideoCapturer_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->request,
                                                 validation_context)) {
    return false;
  }

  return true;
}

FrameSinkManager_CreateVideoCapturer_Params_Data::FrameSinkManager_CreateVideoCapturer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_EvictSurfaces_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_EvictSurfaces_Params_Data* object = static_cast<const FrameSinkManager_EvictSurfaces_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->surface_ids, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams surface_ids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->surface_ids, validation_context,
                                         &surface_ids_validate_params)) {
    return false;
  }

  return true;
}

FrameSinkManager_EvictSurfaces_Params_Data::FrameSinkManager_EvictSurfaces_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManager_RequestCopyOfOutput_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManager_RequestCopyOfOutput_Params_Data* object = static_cast<const FrameSinkManager_RequestCopyOfOutput_Params_Data*>(data);

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
          object->surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  return true;
}

FrameSinkManager_RequestCopyOfOutput_Params_Data::FrameSinkManager_RequestCopyOfOutput_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManagerClient_OnSurfaceCreated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManagerClient_OnSurfaceCreated_Params_Data* object = static_cast<const FrameSinkManagerClient_OnSurfaceCreated_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->surface_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_id, validation_context))
    return false;

  return true;
}

FrameSinkManagerClient_OnSurfaceCreated_Params_Data::FrameSinkManagerClient_OnSurfaceCreated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data* object = static_cast<const FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->surface_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->surface_info, validation_context))
    return false;

  return true;
}

FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data* object = static_cast<const FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->hit_test_data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams hit_test_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->hit_test_data, validation_context,
                                         &hit_test_data_validate_params)) {
    return false;
  }

  return true;
}

FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FrameSinkManagerClient_OnFrameTokenChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FrameSinkManagerClient_OnFrameTokenChanged_Params_Data* object = static_cast<const FrameSinkManagerClient_OnFrameTokenChanged_Params_Data*>(data);

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
          object->frame_sink_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_sink_id, validation_context))
    return false;

  return true;
}

FrameSinkManagerClient_OnFrameTokenChanged_Params_Data::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
