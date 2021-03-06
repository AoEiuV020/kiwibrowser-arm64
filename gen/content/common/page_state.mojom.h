// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PAGE_STATE_MOJOM_H_
#define CONTENT_COMMON_PAGE_STATE_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/common/page_state.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/platform/referrer.mojom.h"
#include "url/mojom/url.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/common/content_export.h"


namespace content {
namespace history {
namespace mojom {
class DEPRECATED_FileSystemFile;
using DEPRECATED_FileSystemFilePtr = mojo::StructPtr<DEPRECATED_FileSystemFile>;

class File;
using FilePtr = mojo::StructPtr<File>;

class RequestBody;
using RequestBodyPtr = mojo::StructPtr<RequestBody>;

class HttpBody;
using HttpBodyPtr = mojo::StructPtr<HttpBody>;

class ViewState;
using ViewStatePtr = mojo::StructPtr<ViewState>;

class FrameState;
using FrameStatePtr = mojo::StructPtr<FrameState>;

class PageState;
using PageStatePtr = mojo::StructPtr<PageState>;

class Element;

typedef mojo::StructPtr<Element> ElementPtr;










class CONTENT_EXPORT Element {
 public:
  using DataView = ElementDataView;
  using Data_ = internal::Element_Data;
  using Tag = Data_::Element_Tag;

  static ElementPtr New() {
    return ElementPtr(base::in_place);
  }
  // Construct an instance holding |blob_uuid|.
  static ElementPtr
  NewBlobUuid(
      const std::string& blob_uuid) {
    auto result = ElementPtr(base::in_place);
    result->set_blob_uuid(std::move(blob_uuid));
    return result;
  }
  // Construct an instance holding |bytes|.
  static ElementPtr
  NewBytes(
      const std::vector<uint8_t>& bytes) {
    auto result = ElementPtr(base::in_place);
    result->set_bytes(std::move(bytes));
    return result;
  }
  // Construct an instance holding |file|.
  static ElementPtr
  NewFile(
      FilePtr file) {
    auto result = ElementPtr(base::in_place);
    result->set_file(std::move(file));
    return result;
  }
  // Construct an instance holding |DEPRECATED_file_system_file|.
  static ElementPtr
  NewDEPRECATEDFileSystemFile(
      DEPRECATED_FileSystemFilePtr DEPRECATED_file_system_file) {
    auto result = ElementPtr(base::in_place);
    result->set_DEPRECATED_file_system_file(std::move(DEPRECATED_file_system_file));
    return result;
  }

  template <typename U>
  static ElementPtr From(const U& u) {
    return mojo::TypeConverter<ElementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Element>::Convert(*this);
  }

  Element();
  ~Element();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = ElementPtr>
  ElementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Element>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_blob_uuid() const { return tag_ == Tag::BLOB_UUID; }

  std::string& get_blob_uuid() const {
    DCHECK(tag_ == Tag::BLOB_UUID);
    return *(data_.blob_uuid);
  }

  void set_blob_uuid(
      const std::string& blob_uuid);
  bool is_bytes() const { return tag_ == Tag::BYTES; }

  std::vector<uint8_t>& get_bytes() const {
    DCHECK(tag_ == Tag::BYTES);
    return *(data_.bytes);
  }

  void set_bytes(
      const std::vector<uint8_t>& bytes);
  bool is_file() const { return tag_ == Tag::FILE; }

  FilePtr& get_file() const {
    DCHECK(tag_ == Tag::FILE);
    return *(data_.file);
  }

  void set_file(
      FilePtr file);
  bool is_DEPRECATED_file_system_file() const { return tag_ == Tag::DEPRECATED_FILE_SYSTEM_FILE; }

  DEPRECATED_FileSystemFilePtr& get_DEPRECATED_file_system_file() const {
    DCHECK(tag_ == Tag::DEPRECATED_FILE_SYSTEM_FILE);
    return *(data_.DEPRECATED_file_system_file);
  }

  void set_DEPRECATED_file_system_file(
      DEPRECATED_FileSystemFilePtr DEPRECATED_file_system_file);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Element::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<Element::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    std::string* blob_uuid;
    std::vector<uint8_t>* bytes;
    FilePtr* file;
    DEPRECATED_FileSystemFilePtr* DEPRECATED_file_system_file;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class CONTENT_EXPORT DEPRECATED_FileSystemFile {
 public:
  using DataView = DEPRECATED_FileSystemFileDataView;
  using Data_ = internal::DEPRECATED_FileSystemFile_Data;

  template <typename... Args>
  static DEPRECATED_FileSystemFilePtr New(Args&&... args) {
    return DEPRECATED_FileSystemFilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DEPRECATED_FileSystemFilePtr From(const U& u) {
    return mojo::TypeConverter<DEPRECATED_FileSystemFilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DEPRECATED_FileSystemFile>::Convert(*this);
  }


  DEPRECATED_FileSystemFile();

  DEPRECATED_FileSystemFile(
      const GURL& filesystem_url,
      uint64_t offset,
      uint64_t length,
      base::Time modification_time);

  ~DEPRECATED_FileSystemFile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DEPRECATED_FileSystemFilePtr>
  DEPRECATED_FileSystemFilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DEPRECATED_FileSystemFile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DEPRECATED_FileSystemFile::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DEPRECATED_FileSystemFile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DEPRECATED_FileSystemFile_UnserializedMessageContext<
            UserType, DEPRECATED_FileSystemFile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DEPRECATED_FileSystemFile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DEPRECATED_FileSystemFile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DEPRECATED_FileSystemFile_UnserializedMessageContext<
            UserType, DEPRECATED_FileSystemFile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DEPRECATED_FileSystemFile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL filesystem_url;
  uint64_t offset;
  uint64_t length;
  base::Time modification_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT File {
 public:
  using DataView = FileDataView;
  using Data_ = internal::File_Data;

  template <typename... Args>
  static FilePtr New(Args&&... args) {
    return FilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FilePtr From(const U& u) {
    return mojo::TypeConverter<FilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, File>::Convert(*this);
  }


  File();

  File(
      const base::string16& path,
      uint64_t offset,
      uint64_t length,
      base::Time modification_time);

  ~File();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilePtr>
  FilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, File>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        File::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        File::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::File_UnserializedMessageContext<
            UserType, File::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<File::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return File::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::File_UnserializedMessageContext<
            UserType, File::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<File::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 path;
  uint64_t offset;
  uint64_t length;
  base::Time modification_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT RequestBody {
 public:
  using DataView = RequestBodyDataView;
  using Data_ = internal::RequestBody_Data;

  template <typename... Args>
  static RequestBodyPtr New(Args&&... args) {
    return RequestBodyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RequestBodyPtr From(const U& u) {
    return mojo::TypeConverter<RequestBodyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequestBody>::Convert(*this);
  }


  RequestBody();

  RequestBody(
      std::vector<ElementPtr> elements,
      int64_t identifier,
      bool contains_sensitive_info);

  ~RequestBody();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RequestBodyPtr>
  RequestBodyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RequestBody>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RequestBody::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RequestBody::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RequestBody_UnserializedMessageContext<
            UserType, RequestBody::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RequestBody::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RequestBody::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RequestBody_UnserializedMessageContext<
            UserType, RequestBody::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RequestBody::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<ElementPtr> elements;
  int64_t identifier;
  bool contains_sensitive_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RequestBody);
};


class CONTENT_EXPORT HttpBody {
 public:
  using DataView = HttpBodyDataView;
  using Data_ = internal::HttpBody_Data;

  template <typename... Args>
  static HttpBodyPtr New(Args&&... args) {
    return HttpBodyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpBodyPtr From(const U& u) {
    return mojo::TypeConverter<HttpBodyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpBody>::Convert(*this);
  }


  HttpBody();

  HttpBody(
      const base::Optional<base::string16>& http_content_type,
      RequestBodyPtr request_body,
      bool contains_passwords);

  ~HttpBody();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpBodyPtr>
  HttpBodyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpBody>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpBody::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpBody::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpBody_UnserializedMessageContext<
            UserType, HttpBody::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpBody::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HttpBody::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpBody_UnserializedMessageContext<
            UserType, HttpBody::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpBody::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::string16> http_content_type;
  RequestBodyPtr request_body;
  bool contains_passwords;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HttpBody);
};


class CONTENT_EXPORT ViewState {
 public:
  using DataView = ViewStateDataView;
  using Data_ = internal::ViewState_Data;

  template <typename... Args>
  static ViewStatePtr New(Args&&... args) {
    return ViewStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ViewStatePtr From(const U& u) {
    return mojo::TypeConverter<ViewStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ViewState>::Convert(*this);
  }


  ViewState();

  ViewState(
      const gfx::PointF& visual_viewport_scroll_offset,
      const gfx::Point& scroll_offset,
      double page_scale_factor);

  ViewState(
      const gfx::PointF& visual_viewport_scroll_offset,
      const gfx::Point& scroll_offset,
      double page_scale_factor,
      const base::Optional<base::string16>& scroll_anchor_selector,
      const base::Optional<gfx::PointF>& scroll_anchor_offset,
      uint64_t scroll_anchor_simhash);

  ~ViewState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ViewStatePtr>
  ViewStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ViewState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ViewState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ViewState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ViewState_UnserializedMessageContext<
            UserType, ViewState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ViewState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ViewState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ViewState_UnserializedMessageContext<
            UserType, ViewState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ViewState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::PointF visual_viewport_scroll_offset;
  gfx::Point scroll_offset;
  double page_scale_factor;
  base::Optional<base::string16> scroll_anchor_selector;
  base::Optional<gfx::PointF> scroll_anchor_offset;
  uint64_t scroll_anchor_simhash;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT FrameState {
 public:
  using DataView = FrameStateDataView;
  using Data_ = internal::FrameState_Data;

  template <typename... Args>
  static FrameStatePtr New(Args&&... args) {
    return FrameStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameStatePtr From(const U& u) {
    return mojo::TypeConverter<FrameStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameState>::Convert(*this);
  }


  FrameState();

  FrameState(
      const base::Optional<base::string16>& url_string,
      const base::Optional<base::string16>& referrer,
      const base::Optional<base::string16>& target,
      const base::Optional<base::string16>& state_object,
      const std::vector<base::Optional<base::string16>>& document_state,
      ScrollRestorationType scroll_restoration_type,
      ViewStatePtr view_state,
      int64_t item_sequence_number,
      int64_t document_sequence_number,
      ::blink::WebReferrerPolicy referrer_policy,
      HttpBodyPtr http_body,
      std::vector<FrameStatePtr> children);

  ~FrameState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameStatePtr>
  FrameStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameState_UnserializedMessageContext<
            UserType, FrameState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FrameState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FrameState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameState_UnserializedMessageContext<
            UserType, FrameState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::string16> url_string;
  base::Optional<base::string16> referrer;
  base::Optional<base::string16> target;
  base::Optional<base::string16> state_object;
  std::vector<base::Optional<base::string16>> document_state;
  ScrollRestorationType scroll_restoration_type;
  ViewStatePtr view_state;
  int64_t item_sequence_number;
  int64_t document_sequence_number;
  ::blink::WebReferrerPolicy referrer_policy;
  HttpBodyPtr http_body;
  std::vector<FrameStatePtr> children;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FrameState);
};


class CONTENT_EXPORT PageState {
 public:
  using DataView = PageStateDataView;
  using Data_ = internal::PageState_Data;

  template <typename... Args>
  static PageStatePtr New(Args&&... args) {
    return PageStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PageStatePtr From(const U& u) {
    return mojo::TypeConverter<PageStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PageState>::Convert(*this);
  }


  PageState();

  PageState(
      const std::vector<base::Optional<base::string16>>& referenced_files,
      FrameStatePtr top);

  ~PageState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PageStatePtr>
  PageStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PageState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PageState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PageState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PageState_UnserializedMessageContext<
            UserType, PageState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PageState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PageState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PageState_UnserializedMessageContext<
            UserType, PageState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PageState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<base::Optional<base::string16>> referenced_files;
  FrameStatePtr top;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PageState);
};

template <typename UnionPtrType>
ElementPtr Element::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::BLOB_UUID:
      rv->set_blob_uuid(mojo::Clone(*data_.blob_uuid));
      break;
    case Tag::BYTES:
      rv->set_bytes(mojo::Clone(*data_.bytes));
      break;
    case Tag::FILE:
      rv->set_file(mojo::Clone(*data_.file));
      break;
    case Tag::DEPRECATED_FILE_SYSTEM_FILE:
      rv->set_DEPRECATED_file_system_file(mojo::Clone(*data_.DEPRECATED_file_system_file));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Element>::value>::type*>
bool Element::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::BLOB_UUID:
      return mojo::Equals(*(data_.blob_uuid), *(other.data_.blob_uuid));
    case Tag::BYTES:
      return mojo::Equals(*(data_.bytes), *(other.data_.bytes));
    case Tag::FILE:
      return mojo::Equals(*(data_.file), *(other.data_.file));
    case Tag::DEPRECATED_FILE_SYSTEM_FILE:
      return mojo::Equals(*(data_.DEPRECATED_file_system_file), *(other.data_.DEPRECATED_file_system_file));
  };

  return false;
}
template <typename StructPtrType>
DEPRECATED_FileSystemFilePtr DEPRECATED_FileSystemFile::Clone() const {
  return New(
      mojo::Clone(filesystem_url),
      mojo::Clone(offset),
      mojo::Clone(length),
      mojo::Clone(modification_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DEPRECATED_FileSystemFile>::value>::type*>
bool DEPRECATED_FileSystemFile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->filesystem_url, other_struct.filesystem_url))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->modification_time, other_struct.modification_time))
    return false;
  return true;
}
template <typename StructPtrType>
FilePtr File::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(offset),
      mojo::Clone(length),
      mojo::Clone(modification_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, File>::value>::type*>
bool File::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->modification_time, other_struct.modification_time))
    return false;
  return true;
}
template <typename StructPtrType>
RequestBodyPtr RequestBody::Clone() const {
  return New(
      mojo::Clone(elements),
      mojo::Clone(identifier),
      mojo::Clone(contains_sensitive_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RequestBody>::value>::type*>
bool RequestBody::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->elements, other_struct.elements))
    return false;
  if (!mojo::Equals(this->identifier, other_struct.identifier))
    return false;
  if (!mojo::Equals(this->contains_sensitive_info, other_struct.contains_sensitive_info))
    return false;
  return true;
}
template <typename StructPtrType>
HttpBodyPtr HttpBody::Clone() const {
  return New(
      mojo::Clone(http_content_type),
      mojo::Clone(request_body),
      mojo::Clone(contains_passwords)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpBody>::value>::type*>
bool HttpBody::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->http_content_type, other_struct.http_content_type))
    return false;
  if (!mojo::Equals(this->request_body, other_struct.request_body))
    return false;
  if (!mojo::Equals(this->contains_passwords, other_struct.contains_passwords))
    return false;
  return true;
}
template <typename StructPtrType>
ViewStatePtr ViewState::Clone() const {
  return New(
      mojo::Clone(visual_viewport_scroll_offset),
      mojo::Clone(scroll_offset),
      mojo::Clone(page_scale_factor),
      mojo::Clone(scroll_anchor_selector),
      mojo::Clone(scroll_anchor_offset),
      mojo::Clone(scroll_anchor_simhash)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ViewState>::value>::type*>
bool ViewState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->visual_viewport_scroll_offset, other_struct.visual_viewport_scroll_offset))
    return false;
  if (!mojo::Equals(this->scroll_offset, other_struct.scroll_offset))
    return false;
  if (!mojo::Equals(this->page_scale_factor, other_struct.page_scale_factor))
    return false;
  if (!mojo::Equals(this->scroll_anchor_selector, other_struct.scroll_anchor_selector))
    return false;
  if (!mojo::Equals(this->scroll_anchor_offset, other_struct.scroll_anchor_offset))
    return false;
  if (!mojo::Equals(this->scroll_anchor_simhash, other_struct.scroll_anchor_simhash))
    return false;
  return true;
}
template <typename StructPtrType>
FrameStatePtr FrameState::Clone() const {
  return New(
      mojo::Clone(url_string),
      mojo::Clone(referrer),
      mojo::Clone(target),
      mojo::Clone(state_object),
      mojo::Clone(document_state),
      mojo::Clone(scroll_restoration_type),
      mojo::Clone(view_state),
      mojo::Clone(item_sequence_number),
      mojo::Clone(document_sequence_number),
      mojo::Clone(referrer_policy),
      mojo::Clone(http_body),
      mojo::Clone(children)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameState>::value>::type*>
bool FrameState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_string, other_struct.url_string))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->target, other_struct.target))
    return false;
  if (!mojo::Equals(this->state_object, other_struct.state_object))
    return false;
  if (!mojo::Equals(this->document_state, other_struct.document_state))
    return false;
  if (!mojo::Equals(this->scroll_restoration_type, other_struct.scroll_restoration_type))
    return false;
  if (!mojo::Equals(this->view_state, other_struct.view_state))
    return false;
  if (!mojo::Equals(this->item_sequence_number, other_struct.item_sequence_number))
    return false;
  if (!mojo::Equals(this->document_sequence_number, other_struct.document_sequence_number))
    return false;
  if (!mojo::Equals(this->referrer_policy, other_struct.referrer_policy))
    return false;
  if (!mojo::Equals(this->http_body, other_struct.http_body))
    return false;
  if (!mojo::Equals(this->children, other_struct.children))
    return false;
  return true;
}
template <typename StructPtrType>
PageStatePtr PageState::Clone() const {
  return New(
      mojo::Clone(referenced_files),
      mojo::Clone(top)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PageState>::value>::type*>
bool PageState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->referenced_files, other_struct.referenced_files))
    return false;
  if (!mojo::Equals(this->top, other_struct.top))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace history
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::DEPRECATED_FileSystemFile::DataView,
                                         ::content::history::mojom::DEPRECATED_FileSystemFilePtr> {
  static bool IsNull(const ::content::history::mojom::DEPRECATED_FileSystemFilePtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::DEPRECATED_FileSystemFilePtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::DEPRECATED_FileSystemFile::filesystem_url)& filesystem_url(
      const ::content::history::mojom::DEPRECATED_FileSystemFilePtr& input) {
    return input->filesystem_url;
  }

  static decltype(::content::history::mojom::DEPRECATED_FileSystemFile::offset) offset(
      const ::content::history::mojom::DEPRECATED_FileSystemFilePtr& input) {
    return input->offset;
  }

  static decltype(::content::history::mojom::DEPRECATED_FileSystemFile::length) length(
      const ::content::history::mojom::DEPRECATED_FileSystemFilePtr& input) {
    return input->length;
  }

  static const decltype(::content::history::mojom::DEPRECATED_FileSystemFile::modification_time)& modification_time(
      const ::content::history::mojom::DEPRECATED_FileSystemFilePtr& input) {
    return input->modification_time;
  }

  static bool Read(::content::history::mojom::DEPRECATED_FileSystemFile::DataView input, ::content::history::mojom::DEPRECATED_FileSystemFilePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::File::DataView,
                                         ::content::history::mojom::FilePtr> {
  static bool IsNull(const ::content::history::mojom::FilePtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::FilePtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::File::path)& path(
      const ::content::history::mojom::FilePtr& input) {
    return input->path;
  }

  static decltype(::content::history::mojom::File::offset) offset(
      const ::content::history::mojom::FilePtr& input) {
    return input->offset;
  }

  static decltype(::content::history::mojom::File::length) length(
      const ::content::history::mojom::FilePtr& input) {
    return input->length;
  }

  static const decltype(::content::history::mojom::File::modification_time)& modification_time(
      const ::content::history::mojom::FilePtr& input) {
    return input->modification_time;
  }

  static bool Read(::content::history::mojom::File::DataView input, ::content::history::mojom::FilePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::RequestBody::DataView,
                                         ::content::history::mojom::RequestBodyPtr> {
  static bool IsNull(const ::content::history::mojom::RequestBodyPtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::RequestBodyPtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::RequestBody::elements)& elements(
      const ::content::history::mojom::RequestBodyPtr& input) {
    return input->elements;
  }

  static decltype(::content::history::mojom::RequestBody::identifier) identifier(
      const ::content::history::mojom::RequestBodyPtr& input) {
    return input->identifier;
  }

  static decltype(::content::history::mojom::RequestBody::contains_sensitive_info) contains_sensitive_info(
      const ::content::history::mojom::RequestBodyPtr& input) {
    return input->contains_sensitive_info;
  }

  static bool Read(::content::history::mojom::RequestBody::DataView input, ::content::history::mojom::RequestBodyPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::HttpBody::DataView,
                                         ::content::history::mojom::HttpBodyPtr> {
  static bool IsNull(const ::content::history::mojom::HttpBodyPtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::HttpBodyPtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::HttpBody::http_content_type)& http_content_type(
      const ::content::history::mojom::HttpBodyPtr& input) {
    return input->http_content_type;
  }

  static const decltype(::content::history::mojom::HttpBody::request_body)& request_body(
      const ::content::history::mojom::HttpBodyPtr& input) {
    return input->request_body;
  }

  static decltype(::content::history::mojom::HttpBody::contains_passwords) contains_passwords(
      const ::content::history::mojom::HttpBodyPtr& input) {
    return input->contains_passwords;
  }

  static bool Read(::content::history::mojom::HttpBody::DataView input, ::content::history::mojom::HttpBodyPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::ViewState::DataView,
                                         ::content::history::mojom::ViewStatePtr> {
  static bool IsNull(const ::content::history::mojom::ViewStatePtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::ViewStatePtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::ViewState::visual_viewport_scroll_offset)& visual_viewport_scroll_offset(
      const ::content::history::mojom::ViewStatePtr& input) {
    return input->visual_viewport_scroll_offset;
  }

  static const decltype(::content::history::mojom::ViewState::scroll_offset)& scroll_offset(
      const ::content::history::mojom::ViewStatePtr& input) {
    return input->scroll_offset;
  }

  static decltype(::content::history::mojom::ViewState::page_scale_factor) page_scale_factor(
      const ::content::history::mojom::ViewStatePtr& input) {
    return input->page_scale_factor;
  }

  static const decltype(::content::history::mojom::ViewState::scroll_anchor_selector)& scroll_anchor_selector(
      const ::content::history::mojom::ViewStatePtr& input) {
    return input->scroll_anchor_selector;
  }

  static const decltype(::content::history::mojom::ViewState::scroll_anchor_offset)& scroll_anchor_offset(
      const ::content::history::mojom::ViewStatePtr& input) {
    return input->scroll_anchor_offset;
  }

  static decltype(::content::history::mojom::ViewState::scroll_anchor_simhash) scroll_anchor_simhash(
      const ::content::history::mojom::ViewStatePtr& input) {
    return input->scroll_anchor_simhash;
  }

  static bool Read(::content::history::mojom::ViewState::DataView input, ::content::history::mojom::ViewStatePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::FrameState::DataView,
                                         ::content::history::mojom::FrameStatePtr> {
  static bool IsNull(const ::content::history::mojom::FrameStatePtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::FrameStatePtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::FrameState::url_string)& url_string(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->url_string;
  }

  static const decltype(::content::history::mojom::FrameState::referrer)& referrer(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->referrer;
  }

  static const decltype(::content::history::mojom::FrameState::target)& target(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->target;
  }

  static const decltype(::content::history::mojom::FrameState::state_object)& state_object(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->state_object;
  }

  static const decltype(::content::history::mojom::FrameState::document_state)& document_state(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->document_state;
  }

  static decltype(::content::history::mojom::FrameState::scroll_restoration_type) scroll_restoration_type(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->scroll_restoration_type;
  }

  static const decltype(::content::history::mojom::FrameState::view_state)& view_state(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->view_state;
  }

  static decltype(::content::history::mojom::FrameState::item_sequence_number) item_sequence_number(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->item_sequence_number;
  }

  static decltype(::content::history::mojom::FrameState::document_sequence_number) document_sequence_number(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->document_sequence_number;
  }

  static decltype(::content::history::mojom::FrameState::referrer_policy) referrer_policy(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->referrer_policy;
  }

  static const decltype(::content::history::mojom::FrameState::http_body)& http_body(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->http_body;
  }

  static const decltype(::content::history::mojom::FrameState::children)& children(
      const ::content::history::mojom::FrameStatePtr& input) {
    return input->children;
  }

  static bool Read(::content::history::mojom::FrameState::DataView input, ::content::history::mojom::FrameStatePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::history::mojom::PageState::DataView,
                                         ::content::history::mojom::PageStatePtr> {
  static bool IsNull(const ::content::history::mojom::PageStatePtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::PageStatePtr* output) { output->reset(); }

  static const decltype(::content::history::mojom::PageState::referenced_files)& referenced_files(
      const ::content::history::mojom::PageStatePtr& input) {
    return input->referenced_files;
  }

  static const decltype(::content::history::mojom::PageState::top)& top(
      const ::content::history::mojom::PageStatePtr& input) {
    return input->top;
  }

  static bool Read(::content::history::mojom::PageState::DataView input, ::content::history::mojom::PageStatePtr* output);
};


template <>
struct CONTENT_EXPORT UnionTraits<::content::history::mojom::Element::DataView,
                                        ::content::history::mojom::ElementPtr> {
  static bool IsNull(const ::content::history::mojom::ElementPtr& input) { return !input; }
  static void SetToNull(::content::history::mojom::ElementPtr* output) { output->reset(); }

  static ::content::history::mojom::Element::Tag GetTag(const ::content::history::mojom::ElementPtr& input) {
    return input->which();
  }

  static const std::string& blob_uuid(const ::content::history::mojom::ElementPtr& input) {
    return input->get_blob_uuid();
  }

  static const std::vector<uint8_t>& bytes(const ::content::history::mojom::ElementPtr& input) {
    return input->get_bytes();
  }

  static const ::content::history::mojom::FilePtr& file(const ::content::history::mojom::ElementPtr& input) {
    return input->get_file();
  }

  static const ::content::history::mojom::DEPRECATED_FileSystemFilePtr& DEPRECATED_file_system_file(const ::content::history::mojom::ElementPtr& input) {
    return input->get_DEPRECATED_file_system_file();
  }

  static bool Read(::content::history::mojom::Element::DataView input, ::content::history::mojom::ElementPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_PAGE_STATE_MOJOM_H_