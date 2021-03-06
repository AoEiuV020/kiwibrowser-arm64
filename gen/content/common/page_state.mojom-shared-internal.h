// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PAGE_STATE_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_PAGE_STATE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/platform/referrer.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace history {
namespace mojom {
namespace internal {
class DEPRECATED_FileSystemFile_Data;
class File_Data;
class RequestBody_Data;
class HttpBody_Data;
class ViewState_Data;
class FrameState_Data;
class PageState_Data;
class Element_Data;

struct ScrollRestorationType_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Element_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  Element_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~Element_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Element_Data));
      new (data()) Element_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) Element_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Element_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Element_Data>(index_);
    }
    Element_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<Element_Tag>(0);
    data.unknown = 0U;
  }

  enum class Element_Tag : uint32_t {

    BLOB_UUID,
    BYTES,
    FILE,
    DEPRECATED_FILE_SYSTEM_FILE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::String_Data> f_blob_uuid;
    mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> f_bytes;
    mojo::internal::Pointer<internal::File_Data> f_file;
    mojo::internal::Pointer<internal::DEPRECATED_FileSystemFile_Data> f_DEPRECATED_file_system_file;
    uint64_t unknown;
  };

  uint32_t size;
  Element_Tag tag;
  Union_ data;
};
static_assert(sizeof(Element_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(Element_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DEPRECATED_FileSystemFile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DEPRECATED_FileSystemFile_Data));
      new (data()) DEPRECATED_FileSystemFile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DEPRECATED_FileSystemFile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DEPRECATED_FileSystemFile_Data>(index_);
    }
    DEPRECATED_FileSystemFile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> filesystem_url;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> modification_time;

 private:
  DEPRECATED_FileSystemFile_Data();
  ~DEPRECATED_FileSystemFile_Data() = delete;
};
static_assert(sizeof(DEPRECATED_FileSystemFile_Data) == 40,
              "Bad sizeof(DEPRECATED_FileSystemFile_Data)");
// Used by DEPRECATED_FileSystemFile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DEPRECATED_FileSystemFile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DEPRECATED_FileSystemFile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DEPRECATED_FileSystemFile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DEPRECATED_FileSystemFile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DEPRECATED_FileSystemFile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) File_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(File_Data));
      new (data()) File_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    File_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<File_Data>(index_);
    }
    File_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> path;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> modification_time;

 private:
  File_Data();
  ~File_Data() = delete;
};
static_assert(sizeof(File_Data) == 40,
              "Bad sizeof(File_Data)");
// Used by File::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct File_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  File_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~File_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    File_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    File_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) RequestBody_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RequestBody_Data));
      new (data()) RequestBody_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RequestBody_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RequestBody_Data>(index_);
    }
    RequestBody_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::Element_Data>> elements;
  int64_t identifier;
  uint8_t contains_sensitive_info : 1;
  uint8_t padfinal_[7];

 private:
  RequestBody_Data();
  ~RequestBody_Data() = delete;
};
static_assert(sizeof(RequestBody_Data) == 32,
              "Bad sizeof(RequestBody_Data)");
// Used by RequestBody::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RequestBody_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RequestBody_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RequestBody_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RequestBody_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RequestBody_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) HttpBody_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HttpBody_Data));
      new (data()) HttpBody_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HttpBody_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HttpBody_Data>(index_);
    }
    HttpBody_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> http_content_type;
  mojo::internal::Pointer<internal::RequestBody_Data> request_body;
  uint8_t contains_passwords : 1;
  uint8_t padfinal_[7];

 private:
  HttpBody_Data();
  ~HttpBody_Data() = delete;
};
static_assert(sizeof(HttpBody_Data) == 32,
              "Bad sizeof(HttpBody_Data)");
// Used by HttpBody::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HttpBody_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HttpBody_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HttpBody_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HttpBody_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HttpBody_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ViewState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ViewState_Data));
      new (data()) ViewState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ViewState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ViewState_Data>(index_);
    }
    ViewState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> visual_viewport_scroll_offset;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> scroll_offset;
  double page_scale_factor;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> scroll_anchor_selector;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> scroll_anchor_offset;
  uint64_t scroll_anchor_simhash;

 private:
  ViewState_Data();
  ~ViewState_Data() = delete;
};
static_assert(sizeof(ViewState_Data) == 56,
              "Bad sizeof(ViewState_Data)");
// Used by ViewState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ViewState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ViewState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ViewState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ViewState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ViewState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameState_Data));
      new (data()) FrameState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameState_Data>(index_);
    }
    FrameState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> url_string;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> referrer;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> target;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> state_object;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> document_state;
  int32_t scroll_restoration_type;
  int32_t referrer_policy;
  mojo::internal::Pointer<internal::ViewState_Data> view_state;
  int64_t item_sequence_number;
  int64_t document_sequence_number;
  mojo::internal::Pointer<internal::HttpBody_Data> http_body;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FrameState_Data>>> children;

 private:
  FrameState_Data();
  ~FrameState_Data() = delete;
};
static_assert(sizeof(FrameState_Data) == 96,
              "Bad sizeof(FrameState_Data)");
// Used by FrameState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FrameState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FrameState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FrameState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FrameState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FrameState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PageState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageState_Data));
      new (data()) PageState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageState_Data>(index_);
    }
    PageState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> referenced_files;
  mojo::internal::Pointer<internal::FrameState_Data> top;

 private:
  PageState_Data();
  ~PageState_Data() = delete;
};
static_assert(sizeof(PageState_Data) == 24,
              "Bad sizeof(PageState_Data)");
// Used by PageState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PageState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PageState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PageState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PageState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PageState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace history
}  // namespace content

#endif  // CONTENT_COMMON_PAGE_STATE_MOJOM_SHARED_INTERNAL_H_