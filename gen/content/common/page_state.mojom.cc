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

#include "content/common/page_state.mojom.h"

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

#include "content/common/page_state.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/public/platform/referrer_policy_enum_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace history {
namespace mojom {
DEPRECATED_FileSystemFile::DEPRECATED_FileSystemFile()
    : filesystem_url(),
      offset(),
      length(),
      modification_time() {}

DEPRECATED_FileSystemFile::DEPRECATED_FileSystemFile(
    const GURL& filesystem_url_in,
    uint64_t offset_in,
    uint64_t length_in,
    base::Time modification_time_in)
    : filesystem_url(std::move(filesystem_url_in)),
      offset(std::move(offset_in)),
      length(std::move(length_in)),
      modification_time(std::move(modification_time_in)) {}

DEPRECATED_FileSystemFile::~DEPRECATED_FileSystemFile() = default;

bool DEPRECATED_FileSystemFile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
File::File()
    : path(),
      offset(),
      length(),
      modification_time() {}

File::File(
    const base::string16& path_in,
    uint64_t offset_in,
    uint64_t length_in,
    base::Time modification_time_in)
    : path(std::move(path_in)),
      offset(std::move(offset_in)),
      length(std::move(length_in)),
      modification_time(std::move(modification_time_in)) {}

File::~File() = default;

bool File::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RequestBody::RequestBody()
    : elements(),
      identifier(),
      contains_sensitive_info() {}

RequestBody::RequestBody(
    std::vector<ElementPtr> elements_in,
    int64_t identifier_in,
    bool contains_sensitive_info_in)
    : elements(std::move(elements_in)),
      identifier(std::move(identifier_in)),
      contains_sensitive_info(std::move(contains_sensitive_info_in)) {}

RequestBody::~RequestBody() = default;

bool RequestBody::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HttpBody::HttpBody()
    : http_content_type(),
      request_body(),
      contains_passwords(false) {}

HttpBody::HttpBody(
    const base::Optional<base::string16>& http_content_type_in,
    RequestBodyPtr request_body_in,
    bool contains_passwords_in)
    : http_content_type(std::move(http_content_type_in)),
      request_body(std::move(request_body_in)),
      contains_passwords(std::move(contains_passwords_in)) {}

HttpBody::~HttpBody() = default;

bool HttpBody::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ViewState::ViewState()
    : visual_viewport_scroll_offset(),
      scroll_offset(),
      page_scale_factor(),
      scroll_anchor_selector(),
      scroll_anchor_offset(),
      scroll_anchor_simhash(0ULL) {}

ViewState::ViewState(
    const gfx::PointF& visual_viewport_scroll_offset_in,
    const gfx::Point& scroll_offset_in,
    double page_scale_factor_in)
    : visual_viewport_scroll_offset(std::move(visual_viewport_scroll_offset_in)),
      scroll_offset(std::move(scroll_offset_in)),
      page_scale_factor(std::move(page_scale_factor_in)),
      scroll_anchor_selector(),
      scroll_anchor_offset(),
      scroll_anchor_simhash(0ULL) {}

ViewState::ViewState(
    const gfx::PointF& visual_viewport_scroll_offset_in,
    const gfx::Point& scroll_offset_in,
    double page_scale_factor_in,
    const base::Optional<base::string16>& scroll_anchor_selector_in,
    const base::Optional<gfx::PointF>& scroll_anchor_offset_in,
    uint64_t scroll_anchor_simhash_in)
    : visual_viewport_scroll_offset(std::move(visual_viewport_scroll_offset_in)),
      scroll_offset(std::move(scroll_offset_in)),
      page_scale_factor(std::move(page_scale_factor_in)),
      scroll_anchor_selector(std::move(scroll_anchor_selector_in)),
      scroll_anchor_offset(std::move(scroll_anchor_offset_in)),
      scroll_anchor_simhash(std::move(scroll_anchor_simhash_in)) {}

ViewState::~ViewState() = default;

bool ViewState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FrameState::FrameState()
    : url_string(),
      referrer(),
      target(),
      state_object(),
      document_state(),
      scroll_restoration_type(),
      view_state(),
      item_sequence_number(),
      document_sequence_number(),
      referrer_policy(),
      http_body(),
      children() {}

FrameState::FrameState(
    const base::Optional<base::string16>& url_string_in,
    const base::Optional<base::string16>& referrer_in,
    const base::Optional<base::string16>& target_in,
    const base::Optional<base::string16>& state_object_in,
    const std::vector<base::Optional<base::string16>>& document_state_in,
    ScrollRestorationType scroll_restoration_type_in,
    ViewStatePtr view_state_in,
    int64_t item_sequence_number_in,
    int64_t document_sequence_number_in,
    ::blink::WebReferrerPolicy referrer_policy_in,
    HttpBodyPtr http_body_in,
    std::vector<FrameStatePtr> children_in)
    : url_string(std::move(url_string_in)),
      referrer(std::move(referrer_in)),
      target(std::move(target_in)),
      state_object(std::move(state_object_in)),
      document_state(std::move(document_state_in)),
      scroll_restoration_type(std::move(scroll_restoration_type_in)),
      view_state(std::move(view_state_in)),
      item_sequence_number(std::move(item_sequence_number_in)),
      document_sequence_number(std::move(document_sequence_number_in)),
      referrer_policy(std::move(referrer_policy_in)),
      http_body(std::move(http_body_in)),
      children(std::move(children_in)) {}

FrameState::~FrameState() = default;

bool FrameState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PageState::PageState()
    : referenced_files(),
      top() {}

PageState::PageState(
    const std::vector<base::Optional<base::string16>>& referenced_files_in,
    FrameStatePtr top_in)
    : referenced_files(std::move(referenced_files_in)),
      top(std::move(top_in)) {}

PageState::~PageState() = default;

bool PageState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Element::Element() : tag_(Tag::BLOB_UUID) {
  data_.blob_uuid = new std::string;
}

Element::~Element() {
  DestroyActive();
}


void Element::set_blob_uuid(
    const std::string& blob_uuid) {
  if (tag_ == Tag::BLOB_UUID) {
    *(data_.blob_uuid) = std::move(blob_uuid);
  } else {
    DestroyActive();
    tag_ = Tag::BLOB_UUID;
    data_.blob_uuid = new std::string(
        std::move(blob_uuid));
  }
}
void Element::set_bytes(
    const std::vector<uint8_t>& bytes) {
  if (tag_ == Tag::BYTES) {
    *(data_.bytes) = std::move(bytes);
  } else {
    DestroyActive();
    tag_ = Tag::BYTES;
    data_.bytes = new std::vector<uint8_t>(
        std::move(bytes));
  }
}
void Element::set_file(
    FilePtr file) {
  if (tag_ == Tag::FILE) {
    *(data_.file) = std::move(file);
  } else {
    DestroyActive();
    tag_ = Tag::FILE;
    data_.file = new FilePtr(
        std::move(file));
  }
}
void Element::set_DEPRECATED_file_system_file(
    DEPRECATED_FileSystemFilePtr DEPRECATED_file_system_file) {
  if (tag_ == Tag::DEPRECATED_FILE_SYSTEM_FILE) {
    *(data_.DEPRECATED_file_system_file) = std::move(DEPRECATED_file_system_file);
  } else {
    DestroyActive();
    tag_ = Tag::DEPRECATED_FILE_SYSTEM_FILE;
    data_.DEPRECATED_file_system_file = new DEPRECATED_FileSystemFilePtr(
        std::move(DEPRECATED_file_system_file));
  }
}

void Element::DestroyActive() {
  switch (tag_) {

    case Tag::BLOB_UUID:

      delete data_.blob_uuid;
      break;
    case Tag::BYTES:

      delete data_.bytes;
      break;
    case Tag::FILE:

      delete data_.file;
      break;
    case Tag::DEPRECATED_FILE_SYSTEM_FILE:

      delete data_.DEPRECATED_file_system_file;
      break;
  }
}

bool Element::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace mojom
}  // namespace history
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::history::mojom::DEPRECATED_FileSystemFile::DataView, ::content::history::mojom::DEPRECATED_FileSystemFilePtr>::Read(
    ::content::history::mojom::DEPRECATED_FileSystemFile::DataView input,
    ::content::history::mojom::DEPRECATED_FileSystemFilePtr* output) {
  bool success = true;
  ::content::history::mojom::DEPRECATED_FileSystemFilePtr result(::content::history::mojom::DEPRECATED_FileSystemFile::New());
  
      if (!input.ReadFilesystemUrl(&result->filesystem_url))
        success = false;
      result->offset = input.offset();
      result->length = input.length();
      if (!input.ReadModificationTime(&result->modification_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::history::mojom::File::DataView, ::content::history::mojom::FilePtr>::Read(
    ::content::history::mojom::File::DataView input,
    ::content::history::mojom::FilePtr* output) {
  bool success = true;
  ::content::history::mojom::FilePtr result(::content::history::mojom::File::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      result->offset = input.offset();
      result->length = input.length();
      if (!input.ReadModificationTime(&result->modification_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::history::mojom::RequestBody::DataView, ::content::history::mojom::RequestBodyPtr>::Read(
    ::content::history::mojom::RequestBody::DataView input,
    ::content::history::mojom::RequestBodyPtr* output) {
  bool success = true;
  ::content::history::mojom::RequestBodyPtr result(::content::history::mojom::RequestBody::New());
  
      if (!input.ReadElements(&result->elements))
        success = false;
      result->identifier = input.identifier();
      result->contains_sensitive_info = input.contains_sensitive_info();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::history::mojom::HttpBody::DataView, ::content::history::mojom::HttpBodyPtr>::Read(
    ::content::history::mojom::HttpBody::DataView input,
    ::content::history::mojom::HttpBodyPtr* output) {
  bool success = true;
  ::content::history::mojom::HttpBodyPtr result(::content::history::mojom::HttpBody::New());
  
      if (!input.ReadHttpContentType(&result->http_content_type))
        success = false;
      if (!input.ReadRequestBody(&result->request_body))
        success = false;
      result->contains_passwords = input.contains_passwords();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::history::mojom::ViewState::DataView, ::content::history::mojom::ViewStatePtr>::Read(
    ::content::history::mojom::ViewState::DataView input,
    ::content::history::mojom::ViewStatePtr* output) {
  bool success = true;
  ::content::history::mojom::ViewStatePtr result(::content::history::mojom::ViewState::New());
  
      if (!input.ReadVisualViewportScrollOffset(&result->visual_viewport_scroll_offset))
        success = false;
      if (!input.ReadScrollOffset(&result->scroll_offset))
        success = false;
      result->page_scale_factor = input.page_scale_factor();
      if (!input.ReadScrollAnchorSelector(&result->scroll_anchor_selector))
        success = false;
      if (!input.ReadScrollAnchorOffset(&result->scroll_anchor_offset))
        success = false;
      result->scroll_anchor_simhash = input.scroll_anchor_simhash();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::history::mojom::FrameState::DataView, ::content::history::mojom::FrameStatePtr>::Read(
    ::content::history::mojom::FrameState::DataView input,
    ::content::history::mojom::FrameStatePtr* output) {
  bool success = true;
  ::content::history::mojom::FrameStatePtr result(::content::history::mojom::FrameState::New());
  
      if (!input.ReadUrlString(&result->url_string))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadTarget(&result->target))
        success = false;
      if (!input.ReadStateObject(&result->state_object))
        success = false;
      if (!input.ReadDocumentState(&result->document_state))
        success = false;
      if (!input.ReadScrollRestorationType(&result->scroll_restoration_type))
        success = false;
      if (!input.ReadViewState(&result->view_state))
        success = false;
      result->item_sequence_number = input.item_sequence_number();
      result->document_sequence_number = input.document_sequence_number();
      if (!input.ReadReferrerPolicy(&result->referrer_policy))
        success = false;
      if (!input.ReadHttpBody(&result->http_body))
        success = false;
      if (!input.ReadChildren(&result->children))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::history::mojom::PageState::DataView, ::content::history::mojom::PageStatePtr>::Read(
    ::content::history::mojom::PageState::DataView input,
    ::content::history::mojom::PageStatePtr* output) {
  bool success = true;
  ::content::history::mojom::PageStatePtr result(::content::history::mojom::PageState::New());
  
      if (!input.ReadReferencedFiles(&result->referenced_files))
        success = false;
      if (!input.ReadTop(&result->top))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::content::history::mojom::Element::DataView, ::content::history::mojom::ElementPtr>::Read(
    ::content::history::mojom::Element::DataView input,
    ::content::history::mojom::ElementPtr* output) {
  using UnionType = ::content::history::mojom::Element;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::BLOB_UUID: {
      std::string result_blob_uuid;
      if (!input.ReadBlobUuid(&result_blob_uuid))
        return false;

      *output = UnionType::NewBlobUuid(
          std::move(result_blob_uuid));
      break;
    }
    case Tag::BYTES: {
      std::vector<uint8_t> result_bytes;
      if (!input.ReadBytes(&result_bytes))
        return false;

      *output = UnionType::NewBytes(
          std::move(result_bytes));
      break;
    }
    case Tag::FILE: {
      ::content::history::mojom::FilePtr result_file;
      if (!input.ReadFile(&result_file))
        return false;

      *output = UnionType::NewFile(
          std::move(result_file));
      break;
    }
    case Tag::DEPRECATED_FILE_SYSTEM_FILE: {
      ::content::history::mojom::DEPRECATED_FileSystemFilePtr result_DEPRECATED_file_system_file;
      if (!input.ReadDEPRECATEDFileSystemFile(&result_DEPRECATED_file_system_file))
        return false;

      *output = UnionType::NewDEPRECATEDFileSystemFile(
          std::move(result_DEPRECATED_file_system_file));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif