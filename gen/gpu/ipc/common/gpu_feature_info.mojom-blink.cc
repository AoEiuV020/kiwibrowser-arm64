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

#include "gpu/ipc/common/gpu_feature_info.mojom-blink.h"

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

#include "gpu/ipc/common/gpu_feature_info.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace gpu {
namespace mojom {
namespace blink {
GpuFeatureInfo::GpuFeatureInfo()
    : status_values(),
      enabled_gpu_driver_bug_workarounds(),
      disabled_extensions(),
      disabled_webgl_extensions(),
      applied_gpu_blacklist_entries(),
      applied_gpu_driver_bug_list_entries() {}

GpuFeatureInfo::GpuFeatureInfo(
    const WTF::Vector<GpuFeatureStatus>& status_values_in,
    const WTF::Vector<int32_t>& enabled_gpu_driver_bug_workarounds_in,
    const WTF::String& disabled_extensions_in,
    const WTF::String& disabled_webgl_extensions_in,
    const WTF::Vector<uint32_t>& applied_gpu_blacklist_entries_in,
    const WTF::Vector<uint32_t>& applied_gpu_driver_bug_list_entries_in)
    : status_values(std::move(status_values_in)),
      enabled_gpu_driver_bug_workarounds(std::move(enabled_gpu_driver_bug_workarounds_in)),
      disabled_extensions(std::move(disabled_extensions_in)),
      disabled_webgl_extensions(std::move(disabled_webgl_extensions_in)),
      applied_gpu_blacklist_entries(std::move(applied_gpu_blacklist_entries_in)),
      applied_gpu_driver_bug_list_entries(std::move(applied_gpu_driver_bug_list_entries_in)) {}

GpuFeatureInfo::~GpuFeatureInfo() = default;

bool GpuFeatureInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::blink::GpuFeatureInfo::DataView, ::gpu::mojom::blink::GpuFeatureInfoPtr>::Read(
    ::gpu::mojom::blink::GpuFeatureInfo::DataView input,
    ::gpu::mojom::blink::GpuFeatureInfoPtr* output) {
  bool success = true;
  ::gpu::mojom::blink::GpuFeatureInfoPtr result(::gpu::mojom::blink::GpuFeatureInfo::New());
  
      if (!input.ReadStatusValues(&result->status_values))
        success = false;
      if (!input.ReadEnabledGpuDriverBugWorkarounds(&result->enabled_gpu_driver_bug_workarounds))
        success = false;
      if (!input.ReadDisabledExtensions(&result->disabled_extensions))
        success = false;
      if (!input.ReadDisabledWebglExtensions(&result->disabled_webgl_extensions))
        success = false;
      if (!input.ReadAppliedGpuBlacklistEntries(&result->applied_gpu_blacklist_entries))
        success = false;
      if (!input.ReadAppliedGpuDriverBugListEntries(&result->applied_gpu_driver_bug_list_entries))
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