// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PAGE_STATE_MOJOM_SHARED_H_
#define CONTENT_COMMON_PAGE_STATE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "content/common/page_state.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/platform/referrer.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace history {
namespace mojom {
class DEPRECATED_FileSystemFileDataView;

class FileDataView;

class RequestBodyDataView;

class HttpBodyDataView;

class ViewStateDataView;

class FrameStateDataView;

class PageStateDataView;

class ElementDataView;


}  // namespace mojom
}  // namespace history
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::history::mojom::DEPRECATED_FileSystemFileDataView> {
  using Data = ::content::history::mojom::internal::DEPRECATED_FileSystemFile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::FileDataView> {
  using Data = ::content::history::mojom::internal::File_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::RequestBodyDataView> {
  using Data = ::content::history::mojom::internal::RequestBody_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::HttpBodyDataView> {
  using Data = ::content::history::mojom::internal::HttpBody_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::ViewStateDataView> {
  using Data = ::content::history::mojom::internal::ViewState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::FrameStateDataView> {
  using Data = ::content::history::mojom::internal::FrameState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::PageStateDataView> {
  using Data = ::content::history::mojom::internal::PageState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::history::mojom::ElementDataView> {
  using Data = ::content::history::mojom::internal::Element_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace history {
namespace mojom {

enum class ScrollRestorationType : int32_t {
  kAuto = 0,
  kManual = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ScrollRestorationType value) {
  switch(value) {
    case ScrollRestorationType::kAuto:
      return os << "ScrollRestorationType::kAuto";
    case ScrollRestorationType::kManual:
      return os << "ScrollRestorationType::kManual";
    default:
      return os << "Unknown ScrollRestorationType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ScrollRestorationType value) {
  return internal::ScrollRestorationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class DEPRECATED_FileSystemFileDataView {
 public:
  DEPRECATED_FileSystemFileDataView() {}

  DEPRECATED_FileSystemFileDataView(
      internal::DEPRECATED_FileSystemFile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilesystemUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilesystemUrl(UserType* output) {
    auto* pointer = data_->filesystem_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  inline void GetModificationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModificationTime(UserType* output) {
    auto* pointer = data_->modification_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::DEPRECATED_FileSystemFile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileDataView {
 public:
  FileDataView() {}

  FileDataView(
      internal::File_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  inline void GetModificationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModificationTime(UserType* output) {
    auto* pointer = data_->modification_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::File_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RequestBodyDataView {
 public:
  RequestBodyDataView() {}

  RequestBodyDataView(
      internal::RequestBody_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElementsDataView(
      mojo::ArrayDataView<ElementDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElements(UserType* output) {
    auto* pointer = data_->elements.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::history::mojom::ElementDataView>>(
        pointer, output, context_);
  }
  int64_t identifier() const {
    return data_->identifier;
  }
  bool contains_sensitive_info() const {
    return data_->contains_sensitive_info;
  }
 private:
  internal::RequestBody_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HttpBodyDataView {
 public:
  HttpBodyDataView() {}

  HttpBodyDataView(
      internal::HttpBody_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHttpContentTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpContentType(UserType* output) {
    auto* pointer = data_->http_content_type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetRequestBodyDataView(
      RequestBodyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestBody(UserType* output) {
    auto* pointer = data_->request_body.Get();
    return mojo::internal::Deserialize<::content::history::mojom::RequestBodyDataView>(
        pointer, output, context_);
  }
  bool contains_passwords() const {
    return data_->contains_passwords;
  }
 private:
  internal::HttpBody_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ViewStateDataView {
 public:
  ViewStateDataView() {}

  ViewStateDataView(
      internal::ViewState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVisualViewportScrollOffsetDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisualViewportScrollOffset(UserType* output) {
    auto* pointer = data_->visual_viewport_scroll_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetScrollOffsetDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollOffset(UserType* output) {
    auto* pointer = data_->scroll_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  double page_scale_factor() const {
    return data_->page_scale_factor;
  }
  inline void GetScrollAnchorSelectorDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollAnchorSelector(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->scroll_anchor_selector.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetScrollAnchorOffsetDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollAnchorOffset(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->scroll_anchor_offset.Get() : nullptr;
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  uint64_t scroll_anchor_simhash() const {
    if (data_->header_.version < 1)
      return uint64_t{};
    return data_->scroll_anchor_simhash;
  }
 private:
  internal::ViewState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameStateDataView {
 public:
  FrameStateDataView() {}

  FrameStateDataView(
      internal::FrameState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlStringDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlString(UserType* output) {
    auto* pointer = data_->url_string.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetTargetDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetStateObjectDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStateObject(UserType* output) {
    auto* pointer = data_->state_object.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDocumentStateDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentState(UserType* output) {
    auto* pointer = data_->document_state.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollRestorationType(UserType* output) const {
    auto data_value = data_->scroll_restoration_type;
    return mojo::internal::Deserialize<::content::history::mojom::ScrollRestorationType>(
        data_value, output);
  }

  ScrollRestorationType scroll_restoration_type() const {
    return static_cast<ScrollRestorationType>(data_->scroll_restoration_type);
  }
  inline void GetViewStateDataView(
      ViewStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadViewState(UserType* output) {
    auto* pointer = data_->view_state.Get();
    return mojo::internal::Deserialize<::content::history::mojom::ViewStateDataView>(
        pointer, output, context_);
  }
  int64_t item_sequence_number() const {
    return data_->item_sequence_number;
  }
  int64_t document_sequence_number() const {
    return data_->document_sequence_number;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrerPolicy(UserType* output) const {
    auto data_value = data_->referrer_policy;
    return mojo::internal::Deserialize<::blink::mojom::ReferrerPolicy>(
        data_value, output);
  }

  ::blink::mojom::ReferrerPolicy referrer_policy() const {
    return static_cast<::blink::mojom::ReferrerPolicy>(data_->referrer_policy);
  }
  inline void GetHttpBodyDataView(
      HttpBodyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpBody(UserType* output) {
    auto* pointer = data_->http_body.Get();
    return mojo::internal::Deserialize<::content::history::mojom::HttpBodyDataView>(
        pointer, output, context_);
  }
  inline void GetChildrenDataView(
      mojo::ArrayDataView<FrameStateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildren(UserType* output) {
    auto* pointer = data_->children.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::history::mojom::FrameStateDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FrameState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageStateDataView {
 public:
  PageStateDataView() {}

  PageStateDataView(
      internal::PageState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReferencedFilesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferencedFiles(UserType* output) {
    auto* pointer = data_->referenced_files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  inline void GetTopDataView(
      FrameStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTop(UserType* output) {
    auto* pointer = data_->top.Get();
    return mojo::internal::Deserialize<::content::history::mojom::FrameStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ElementDataView {
 public:
  using Tag = internal::Element_Data::Element_Tag;

  ElementDataView() {}

  ElementDataView(
      internal::Element_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_blob_uuid() const { return data_->tag == Tag::BLOB_UUID; }
  inline void GetBlobUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobUuid(UserType* output) {
    DCHECK(is_blob_uuid());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_blob_uuid.Get(), output, context_);
  }
  bool is_bytes() const { return data_->tag == Tag::BYTES; }
  inline void GetBytesDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBytes(UserType* output) {
    DCHECK(is_bytes());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_bytes.Get(), output, context_);
  }
  bool is_file() const { return data_->tag == Tag::FILE; }
  inline void GetFileDataView(
      FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    DCHECK(is_file());
    return mojo::internal::Deserialize<::content::history::mojom::FileDataView>(
        data_->data.f_file.Get(), output, context_);
  }
  bool is_DEPRECATED_file_system_file() const { return data_->tag == Tag::DEPRECATED_FILE_SYSTEM_FILE; }
  inline void GetDEPRECATEDFileSystemFileDataView(
      DEPRECATED_FileSystemFileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDEPRECATEDFileSystemFile(UserType* output) {
    DCHECK(is_DEPRECATED_file_system_file());
    return mojo::internal::Deserialize<::content::history::mojom::DEPRECATED_FileSystemFileDataView>(
        data_->data.f_DEPRECATED_file_system_file.Get(), output, context_);
  }

 private:
  internal::Element_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace history
}  // namespace content

namespace std {

template <>
struct hash<::content::history::mojom::ScrollRestorationType>
    : public mojo::internal::EnumHashImpl<::content::history::mojom::ScrollRestorationType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::history::mojom::ScrollRestorationType, ::content::history::mojom::ScrollRestorationType> {
  static ::content::history::mojom::ScrollRestorationType ToMojom(::content::history::mojom::ScrollRestorationType input) { return input; }
  static bool FromMojom(::content::history::mojom::ScrollRestorationType input, ::content::history::mojom::ScrollRestorationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::ScrollRestorationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::history::mojom::ScrollRestorationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::history::mojom::ScrollRestorationType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::DEPRECATED_FileSystemFileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::DEPRECATED_FileSystemFileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::DEPRECATED_FileSystemFile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::filesystem_url, input, custom_context)) in_filesystem_url = CallWithContext(Traits::filesystem_url, input, custom_context);
    typename decltype((*output)->filesystem_url)::BaseType::BufferWriter
        filesystem_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_filesystem_url, buffer, &filesystem_url_writer, context);
    (*output)->filesystem_url.Set(
        filesystem_url_writer.is_null() ? nullptr : filesystem_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filesystem_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filesystem_url in DEPRECATED_FileSystemFile struct");
    (*output)->offset = CallWithContext(Traits::offset, input, custom_context);
    (*output)->length = CallWithContext(Traits::length, input, custom_context);
    decltype(CallWithContext(Traits::modification_time, input, custom_context)) in_modification_time = CallWithContext(Traits::modification_time, input, custom_context);
    typename decltype((*output)->modification_time)::BaseType::BufferWriter
        modification_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_modification_time, buffer, &modification_time_writer, context);
    (*output)->modification_time.Set(
        modification_time_writer.is_null() ? nullptr : modification_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modification_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modification_time in DEPRECATED_FileSystemFile struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::DEPRECATED_FileSystemFile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::DEPRECATED_FileSystemFileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::FileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::FileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::File_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in File struct");
    (*output)->offset = CallWithContext(Traits::offset, input, custom_context);
    (*output)->length = CallWithContext(Traits::length, input, custom_context);
    decltype(CallWithContext(Traits::modification_time, input, custom_context)) in_modification_time = CallWithContext(Traits::modification_time, input, custom_context);
    typename decltype((*output)->modification_time)::BaseType::BufferWriter
        modification_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_modification_time, buffer, &modification_time_writer, context);
    (*output)->modification_time.Set(
        modification_time_writer.is_null() ? nullptr : modification_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modification_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modification_time in File struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::File_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::FileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::RequestBodyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::RequestBodyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::RequestBody_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::elements, input, custom_context)) in_elements = CallWithContext(Traits::elements, input, custom_context);
    typename decltype((*output)->elements)::BaseType::BufferWriter
        elements_writer;
    const mojo::internal::ContainerValidateParams elements_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content::history::mojom::ElementDataView>>(
        in_elements, buffer, &elements_writer, &elements_validate_params,
        context);
    (*output)->elements.Set(
        elements_writer.is_null() ? nullptr : elements_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->elements.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null elements in RequestBody struct");
    (*output)->identifier = CallWithContext(Traits::identifier, input, custom_context);
    (*output)->contains_sensitive_info = CallWithContext(Traits::contains_sensitive_info, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::RequestBody_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::RequestBodyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::HttpBodyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::HttpBodyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::HttpBody_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::http_content_type, input, custom_context)) in_http_content_type = CallWithContext(Traits::http_content_type, input, custom_context);
    typename decltype((*output)->http_content_type)::BaseType::BufferWriter
        http_content_type_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_http_content_type, buffer, &http_content_type_writer, context);
    (*output)->http_content_type.Set(
        http_content_type_writer.is_null() ? nullptr : http_content_type_writer.data());
    decltype(CallWithContext(Traits::request_body, input, custom_context)) in_request_body = CallWithContext(Traits::request_body, input, custom_context);
    typename decltype((*output)->request_body)::BaseType::BufferWriter
        request_body_writer;
    mojo::internal::Serialize<::content::history::mojom::RequestBodyDataView>(
        in_request_body, buffer, &request_body_writer, context);
    (*output)->request_body.Set(
        request_body_writer.is_null() ? nullptr : request_body_writer.data());
    (*output)->contains_passwords = CallWithContext(Traits::contains_passwords, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::HttpBody_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::HttpBodyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::ViewStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::ViewStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::ViewState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::visual_viewport_scroll_offset, input, custom_context)) in_visual_viewport_scroll_offset = CallWithContext(Traits::visual_viewport_scroll_offset, input, custom_context);
    typename decltype((*output)->visual_viewport_scroll_offset)::BaseType::BufferWriter
        visual_viewport_scroll_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_visual_viewport_scroll_offset, buffer, &visual_viewport_scroll_offset_writer, context);
    (*output)->visual_viewport_scroll_offset.Set(
        visual_viewport_scroll_offset_writer.is_null() ? nullptr : visual_viewport_scroll_offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visual_viewport_scroll_offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visual_viewport_scroll_offset in ViewState struct");
    decltype(CallWithContext(Traits::scroll_offset, input, custom_context)) in_scroll_offset = CallWithContext(Traits::scroll_offset, input, custom_context);
    typename decltype((*output)->scroll_offset)::BaseType::BufferWriter
        scroll_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_scroll_offset, buffer, &scroll_offset_writer, context);
    (*output)->scroll_offset.Set(
        scroll_offset_writer.is_null() ? nullptr : scroll_offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scroll_offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scroll_offset in ViewState struct");
    (*output)->page_scale_factor = CallWithContext(Traits::page_scale_factor, input, custom_context);
    decltype(CallWithContext(Traits::scroll_anchor_selector, input, custom_context)) in_scroll_anchor_selector = CallWithContext(Traits::scroll_anchor_selector, input, custom_context);
    typename decltype((*output)->scroll_anchor_selector)::BaseType::BufferWriter
        scroll_anchor_selector_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_scroll_anchor_selector, buffer, &scroll_anchor_selector_writer, context);
    (*output)->scroll_anchor_selector.Set(
        scroll_anchor_selector_writer.is_null() ? nullptr : scroll_anchor_selector_writer.data());
    decltype(CallWithContext(Traits::scroll_anchor_offset, input, custom_context)) in_scroll_anchor_offset = CallWithContext(Traits::scroll_anchor_offset, input, custom_context);
    typename decltype((*output)->scroll_anchor_offset)::BaseType::BufferWriter
        scroll_anchor_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_scroll_anchor_offset, buffer, &scroll_anchor_offset_writer, context);
    (*output)->scroll_anchor_offset.Set(
        scroll_anchor_offset_writer.is_null() ? nullptr : scroll_anchor_offset_writer.data());
    (*output)->scroll_anchor_simhash = CallWithContext(Traits::scroll_anchor_simhash, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::ViewState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::ViewStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::FrameStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::FrameStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::FrameState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url_string, input, custom_context)) in_url_string = CallWithContext(Traits::url_string, input, custom_context);
    typename decltype((*output)->url_string)::BaseType::BufferWriter
        url_string_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_url_string, buffer, &url_string_writer, context);
    (*output)->url_string.Set(
        url_string_writer.is_null() ? nullptr : url_string_writer.data());
    decltype(CallWithContext(Traits::referrer, input, custom_context)) in_referrer = CallWithContext(Traits::referrer, input, custom_context);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    decltype(CallWithContext(Traits::target, input, custom_context)) in_target = CallWithContext(Traits::target, input, custom_context);
    typename decltype((*output)->target)::BaseType::BufferWriter
        target_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_target, buffer, &target_writer, context);
    (*output)->target.Set(
        target_writer.is_null() ? nullptr : target_writer.data());
    decltype(CallWithContext(Traits::state_object, input, custom_context)) in_state_object = CallWithContext(Traits::state_object, input, custom_context);
    typename decltype((*output)->state_object)::BaseType::BufferWriter
        state_object_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_state_object, buffer, &state_object_writer, context);
    (*output)->state_object.Set(
        state_object_writer.is_null() ? nullptr : state_object_writer.data());
    decltype(CallWithContext(Traits::document_state, input, custom_context)) in_document_state = CallWithContext(Traits::document_state, input, custom_context);
    typename decltype((*output)->document_state)::BaseType::BufferWriter
        document_state_writer;
    const mojo::internal::ContainerValidateParams document_state_validate_params(
        0, true, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_document_state, buffer, &document_state_writer, &document_state_validate_params,
        context);
    (*output)->document_state.Set(
        document_state_writer.is_null() ? nullptr : document_state_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->document_state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null document_state in FrameState struct");
    mojo::internal::Serialize<::content::history::mojom::ScrollRestorationType>(
        CallWithContext(Traits::scroll_restoration_type, input, custom_context), &(*output)->scroll_restoration_type);
    decltype(CallWithContext(Traits::view_state, input, custom_context)) in_view_state = CallWithContext(Traits::view_state, input, custom_context);
    typename decltype((*output)->view_state)::BaseType::BufferWriter
        view_state_writer;
    mojo::internal::Serialize<::content::history::mojom::ViewStateDataView>(
        in_view_state, buffer, &view_state_writer, context);
    (*output)->view_state.Set(
        view_state_writer.is_null() ? nullptr : view_state_writer.data());
    (*output)->item_sequence_number = CallWithContext(Traits::item_sequence_number, input, custom_context);
    (*output)->document_sequence_number = CallWithContext(Traits::document_sequence_number, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::ReferrerPolicy>(
        CallWithContext(Traits::referrer_policy, input, custom_context), &(*output)->referrer_policy);
    decltype(CallWithContext(Traits::http_body, input, custom_context)) in_http_body = CallWithContext(Traits::http_body, input, custom_context);
    typename decltype((*output)->http_body)::BaseType::BufferWriter
        http_body_writer;
    mojo::internal::Serialize<::content::history::mojom::HttpBodyDataView>(
        in_http_body, buffer, &http_body_writer, context);
    (*output)->http_body.Set(
        http_body_writer.is_null() ? nullptr : http_body_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->http_body.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null http_body in FrameState struct");
    decltype(CallWithContext(Traits::children, input, custom_context)) in_children = CallWithContext(Traits::children, input, custom_context);
    typename decltype((*output)->children)::BaseType::BufferWriter
        children_writer;
    const mojo::internal::ContainerValidateParams children_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content::history::mojom::FrameStateDataView>>(
        in_children, buffer, &children_writer, &children_validate_params,
        context);
    (*output)->children.Set(
        children_writer.is_null() ? nullptr : children_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->children.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null children in FrameState struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::FrameState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::FrameStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::PageStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::history::mojom::PageStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::PageState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::referenced_files, input, custom_context)) in_referenced_files = CallWithContext(Traits::referenced_files, input, custom_context);
    typename decltype((*output)->referenced_files)::BaseType::BufferWriter
        referenced_files_writer;
    const mojo::internal::ContainerValidateParams referenced_files_validate_params(
        0, true, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_referenced_files, buffer, &referenced_files_writer, &referenced_files_validate_params,
        context);
    (*output)->referenced_files.Set(
        referenced_files_writer.is_null() ? nullptr : referenced_files_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referenced_files.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referenced_files in PageState struct");
    decltype(CallWithContext(Traits::top, input, custom_context)) in_top = CallWithContext(Traits::top, input, custom_context);
    typename decltype((*output)->top)::BaseType::BufferWriter
        top_writer;
    mojo::internal::Serialize<::content::history::mojom::FrameStateDataView>(
        in_top, buffer, &top_writer, context);
    (*output)->top.Set(
        top_writer.is_null() ? nullptr : top_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->top.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null top in PageState struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::PageState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::PageStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::history::mojom::ElementDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::content::history::mojom::ElementDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::history::mojom::internal::Element_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::content::history::mojom::internal::Element_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::content::history::mojom::ElementDataView::Tag::BLOB_UUID: {
        decltype(CallWithContext(Traits::blob_uuid, input, custom_context))
            in_blob_uuid = CallWithContext(Traits::blob_uuid, input,
                                          custom_context);
        typename decltype(result->data.f_blob_uuid)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_blob_uuid, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null blob_uuid in Element union");
        result->data.f_blob_uuid.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::content::history::mojom::ElementDataView::Tag::BYTES: {
        decltype(CallWithContext(Traits::bytes, input, custom_context))
            in_bytes = CallWithContext(Traits::bytes, input,
                                          custom_context);
        typename decltype(result->data.f_bytes)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams bytes_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_bytes, buffer, &value_writer, &bytes_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null bytes in Element union");
        result->data.f_bytes.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::content::history::mojom::ElementDataView::Tag::FILE: {
        decltype(CallWithContext(Traits::file, input, custom_context))
            in_file = CallWithContext(Traits::file, input,
                                          custom_context);
        typename decltype(result->data.f_file)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::content::history::mojom::FileDataView>(
            in_file, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null file in Element union");
        result->data.f_file.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::content::history::mojom::ElementDataView::Tag::DEPRECATED_FILE_SYSTEM_FILE: {
        decltype(CallWithContext(Traits::DEPRECATED_file_system_file, input, custom_context))
            in_DEPRECATED_file_system_file = CallWithContext(Traits::DEPRECATED_file_system_file, input,
                                          custom_context);
        typename decltype(result->data.f_DEPRECATED_file_system_file)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::content::history::mojom::DEPRECATED_FileSystemFileDataView>(
            in_DEPRECATED_file_system_file, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null DEPRECATED_file_system_file in Element union");
        result->data.f_DEPRECATED_file_system_file.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::history::mojom::internal::Element_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::content::history::mojom::ElementDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace history {
namespace mojom {

inline void DEPRECATED_FileSystemFileDataView::GetFilesystemUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->filesystem_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void DEPRECATED_FileSystemFileDataView::GetModificationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->modification_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void FileDataView::GetPathDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FileDataView::GetModificationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->modification_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void RequestBodyDataView::GetElementsDataView(
    mojo::ArrayDataView<ElementDataView>* output) {
  auto pointer = data_->elements.Get();
  *output = mojo::ArrayDataView<ElementDataView>(pointer, context_);
}


inline void HttpBodyDataView::GetHttpContentTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->http_content_type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void HttpBodyDataView::GetRequestBodyDataView(
    RequestBodyDataView* output) {
  auto pointer = data_->request_body.Get();
  *output = RequestBodyDataView(pointer, context_);
}


inline void ViewStateDataView::GetVisualViewportScrollOffsetDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->visual_viewport_scroll_offset.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void ViewStateDataView::GetScrollOffsetDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->scroll_offset.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void ViewStateDataView::GetScrollAnchorSelectorDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->scroll_anchor_selector.Get() : nullptr;
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ViewStateDataView::GetScrollAnchorOffsetDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->scroll_anchor_offset.Get() : nullptr;
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void FrameStateDataView::GetUrlStringDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->url_string.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FrameStateDataView::GetReferrerDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FrameStateDataView::GetTargetDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->target.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FrameStateDataView::GetStateObjectDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->state_object.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FrameStateDataView::GetDocumentStateDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->document_state.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}
inline void FrameStateDataView::GetViewStateDataView(
    ViewStateDataView* output) {
  auto pointer = data_->view_state.Get();
  *output = ViewStateDataView(pointer, context_);
}
inline void FrameStateDataView::GetHttpBodyDataView(
    HttpBodyDataView* output) {
  auto pointer = data_->http_body.Get();
  *output = HttpBodyDataView(pointer, context_);
}
inline void FrameStateDataView::GetChildrenDataView(
    mojo::ArrayDataView<FrameStateDataView>* output) {
  auto pointer = data_->children.Get();
  *output = mojo::ArrayDataView<FrameStateDataView>(pointer, context_);
}


inline void PageStateDataView::GetReferencedFilesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->referenced_files.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}
inline void PageStateDataView::GetTopDataView(
    FrameStateDataView* output) {
  auto pointer = data_->top.Get();
  *output = FrameStateDataView(pointer, context_);
}


inline void ElementDataView::GetBlobUuidDataView(
    mojo::StringDataView* output) {
  DCHECK(is_blob_uuid());
  *output = mojo::StringDataView(data_->data.f_blob_uuid.Get(), context_);
}
inline void ElementDataView::GetBytesDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_bytes());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_bytes.Get(), context_);
}
inline void ElementDataView::GetFileDataView(
    FileDataView* output) {
  DCHECK(is_file());
  *output = FileDataView(data_->data.f_file.Get(), context_);
}
inline void ElementDataView::GetDEPRECATEDFileSystemFileDataView(
    DEPRECATED_FileSystemFileDataView* output) {
  DCHECK(is_DEPRECATED_file_system_file());
  *output = DEPRECATED_FileSystemFileDataView(data_->data.f_DEPRECATED_file_system_file.Get(), context_);
}


}  // namespace mojom
}  // namespace history
}  // namespace content

#endif  // CONTENT_COMMON_PAGE_STATE_MOJOM_SHARED_H_
