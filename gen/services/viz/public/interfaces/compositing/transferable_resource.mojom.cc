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

#include "services/viz/public/interfaces/compositing/transferable_resource.mojom.h"

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

#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-shared-message-ids.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/ipc/color/gfx_param_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
namespace viz {
namespace mojom {
TransferableResource::TransferableResource()
    : id(),
      format(),
      buffer_format(),
      filter(),
      size(),
      mailbox_holder(),
      read_lock_fences_enabled(),
      is_software(),
      is_overlay_candidate(),
      is_backed_by_surface_texture(),
      wants_promotion_hint(),
      color_space() {}

TransferableResource::TransferableResource(
    uint32_t id_in,
    ResourceFormat format_in,
    gfx::BufferFormat buffer_format_in,
    uint32_t filter_in,
    const gfx::Size& size_in,
    const ::gpu::MailboxHolder& mailbox_holder_in,
    bool read_lock_fences_enabled_in,
    bool is_software_in,
    bool is_overlay_candidate_in,
    bool is_backed_by_surface_texture_in,
    bool wants_promotion_hint_in,
    const gfx::ColorSpace& color_space_in)
    : id(std::move(id_in)),
      format(std::move(format_in)),
      buffer_format(std::move(buffer_format_in)),
      filter(std::move(filter_in)),
      size(std::move(size_in)),
      mailbox_holder(std::move(mailbox_holder_in)),
      read_lock_fences_enabled(std::move(read_lock_fences_enabled_in)),
      is_software(std::move(is_software_in)),
      is_overlay_candidate(std::move(is_overlay_candidate_in)),
      is_backed_by_surface_texture(std::move(is_backed_by_surface_texture_in)),
      wants_promotion_hint(std::move(wants_promotion_hint_in)),
      color_space(std::move(color_space_in)) {}

TransferableResource::~TransferableResource() = default;

bool TransferableResource::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::TransferableResource::DataView, ::viz::mojom::TransferableResourcePtr>::Read(
    ::viz::mojom::TransferableResource::DataView input,
    ::viz::mojom::TransferableResourcePtr* output) {
  bool success = true;
  ::viz::mojom::TransferableResourcePtr result(::viz::mojom::TransferableResource::New());
  
      result->id = input.id();
      if (!input.ReadFormat(&result->format))
        success = false;
      if (!input.ReadBufferFormat(&result->buffer_format))
        success = false;
      result->filter = input.filter();
      if (!input.ReadSize(&result->size))
        success = false;
      if (!input.ReadMailboxHolder(&result->mailbox_holder))
        success = false;
      result->read_lock_fences_enabled = input.read_lock_fences_enabled();
      result->is_software = input.is_software();
      result->is_overlay_candidate = input.is_overlay_candidate();
      result->is_backed_by_surface_texture = input.is_backed_by_surface_texture();
      result->wants_promotion_hint = input.wants_promotion_hint();
      if (!input.ReadColorSpace(&result->color_space))
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