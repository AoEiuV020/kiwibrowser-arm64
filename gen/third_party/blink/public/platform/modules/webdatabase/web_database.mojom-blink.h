// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/webdatabase/web_database.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
namespace blink {
class WebDatabase;
using WebDatabasePtr = mojo::InterfacePtr<WebDatabase>;
using RevocableWebDatabasePtr = ::blink::RevocableInterfacePtr<WebDatabase>;
using WebDatabasePtrInfo = mojo::InterfacePtrInfo<WebDatabase>;
using ThreadSafeWebDatabasePtr =
    mojo::ThreadSafeInterfacePtr<WebDatabase>;
using WebDatabaseRequest = mojo::InterfaceRequest<WebDatabase>;
using WebDatabaseAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebDatabase>;
using ThreadSafeWebDatabaseAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebDatabase>;
using WebDatabaseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebDatabase>;
using WebDatabaseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebDatabase>;

class WebDatabaseHost;
using WebDatabaseHostPtr = mojo::InterfacePtr<WebDatabaseHost>;
using RevocableWebDatabaseHostPtr = ::blink::RevocableInterfacePtr<WebDatabaseHost>;
using WebDatabaseHostPtrInfo = mojo::InterfacePtrInfo<WebDatabaseHost>;
using ThreadSafeWebDatabaseHostPtr =
    mojo::ThreadSafeInterfacePtr<WebDatabaseHost>;
using WebDatabaseHostRequest = mojo::InterfaceRequest<WebDatabaseHost>;
using WebDatabaseHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebDatabaseHost>;
using ThreadSafeWebDatabaseHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebDatabaseHost>;
using WebDatabaseHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebDatabaseHost>;
using WebDatabaseHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebDatabaseHost>;


class WebDatabaseProxy;

template <typename ImplRefTraits>
class WebDatabaseStub;

class WebDatabaseRequestValidator;

class BLINK_PLATFORM_EXPORT WebDatabase
    : public WebDatabaseInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WebDatabaseProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebDatabaseStub<ImplRefTraits>;

  using RequestValidator_ = WebDatabaseRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateSizeMinVersion = 0,
    kCloseImmediatelyMinVersion = 0,
  };
  virtual ~WebDatabase() {}

  virtual void UpdateSize(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, int64_t size) = 0;

  virtual void CloseImmediately(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name) = 0;
};
class BLINK_PLATFORM_EXPORT WebDatabaseInterceptorForTesting : public WebDatabase {
  virtual WebDatabase* GetForwardingInterface() = 0;
  void UpdateSize(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, int64_t size) override;
  void CloseImmediately(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name) override;
};
class BLINK_PLATFORM_EXPORT WebDatabaseAsyncWaiter {
 public:
  explicit WebDatabaseAsyncWaiter(WebDatabase* proxy);
  ~WebDatabaseAsyncWaiter();

 private:
  WebDatabase* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseAsyncWaiter);
};

class WebDatabaseHostProxy;

template <typename ImplRefTraits>
class WebDatabaseHostStub;

class WebDatabaseHostRequestValidator;
class WebDatabaseHostResponseValidator;

class BLINK_PLATFORM_EXPORT WebDatabaseHost
    : public WebDatabaseHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = WebDatabaseHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebDatabaseHostStub<ImplRefTraits>;

  using RequestValidator_ = WebDatabaseHostRequestValidator;
  using ResponseValidator_ = WebDatabaseHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenFileMinVersion = 0,
    kDeleteFileMinVersion = 0,
    kGetFileAttributesMinVersion = 0,
    kGetFileSizeMinVersion = 0,
    kSetFileSizeMinVersion = 0,
    kGetSpaceAvailableMinVersion = 0,
    kOpenedMinVersion = 0,
    kModifiedMinVersion = 0,
    kClosedMinVersion = 0,
    kHandleSqliteErrorMinVersion = 0,
  };
  virtual ~WebDatabaseHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenFile(const WTF::String& vfs_file_name, int32_t desired_flags, base::File* out_file);

  using OpenFileCallback = base::OnceCallback<void(base::File)>;
  virtual void OpenFile(const WTF::String& vfs_file_name, int32_t desired_flags, OpenFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool DeleteFile(const WTF::String& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code);

  using DeleteFileCallback = base::OnceCallback<void(int32_t)>;
  virtual void DeleteFile(const WTF::String& vfs_file_name, bool sync_dir, DeleteFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetFileAttributes(const WTF::String& vfs_file_name, int32_t* out_attributes);

  using GetFileAttributesCallback = base::OnceCallback<void(int32_t)>;
  virtual void GetFileAttributes(const WTF::String& vfs_file_name, GetFileAttributesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetFileSize(const WTF::String& vfs_file_name, int64_t* out_size);

  using GetFileSizeCallback = base::OnceCallback<void(int64_t)>;
  virtual void GetFileSize(const WTF::String& vfs_file_name, GetFileSizeCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool SetFileSize(const WTF::String& vfs_file_name, int64_t expected_size, bool* out_success);

  using SetFileSizeCallback = base::OnceCallback<void(bool)>;
  virtual void SetFileSize(const WTF::String& vfs_file_name, int64_t expected_size, SetFileSizeCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetSpaceAvailable(const scoped_refptr<const ::blink::SecurityOrigin>& origin, int64_t* out_space_available);

  using GetSpaceAvailableCallback = base::OnceCallback<void(int64_t)>;
  virtual void GetSpaceAvailable(const scoped_refptr<const ::blink::SecurityOrigin>& origin, GetSpaceAvailableCallback callback) = 0;

  virtual void Opened(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, const WTF::String& database_description, int64_t estimated_size) = 0;

  virtual void Modified(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) = 0;

  virtual void Closed(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) = 0;

  virtual void HandleSqliteError(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, int32_t error) = 0;
};
class BLINK_PLATFORM_EXPORT WebDatabaseHostInterceptorForTesting : public WebDatabaseHost {
  virtual WebDatabaseHost* GetForwardingInterface() = 0;
  void OpenFile(const WTF::String& vfs_file_name, int32_t desired_flags, OpenFileCallback callback) override;
  void DeleteFile(const WTF::String& vfs_file_name, bool sync_dir, DeleteFileCallback callback) override;
  void GetFileAttributes(const WTF::String& vfs_file_name, GetFileAttributesCallback callback) override;
  void GetFileSize(const WTF::String& vfs_file_name, GetFileSizeCallback callback) override;
  void SetFileSize(const WTF::String& vfs_file_name, int64_t expected_size, SetFileSizeCallback callback) override;
  void GetSpaceAvailable(const scoped_refptr<const ::blink::SecurityOrigin>& origin, GetSpaceAvailableCallback callback) override;
  void Opened(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, const WTF::String& database_description, int64_t estimated_size) override;
  void Modified(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) override;
  void Closed(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) override;
  void HandleSqliteError(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, int32_t error) override;
};
class BLINK_PLATFORM_EXPORT WebDatabaseHostAsyncWaiter {
 public:
  explicit WebDatabaseHostAsyncWaiter(WebDatabaseHost* proxy);
  ~WebDatabaseHostAsyncWaiter();
  void OpenFile(
      const WTF::String& vfs_file_name, int32_t desired_flags, base::File* out_file);
  void DeleteFile(
      const WTF::String& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code);
  void GetFileAttributes(
      const WTF::String& vfs_file_name, int32_t* out_attributes);
  void GetFileSize(
      const WTF::String& vfs_file_name, int64_t* out_size);
  void SetFileSize(
      const WTF::String& vfs_file_name, int64_t expected_size, bool* out_success);
  void GetSpaceAvailable(
      const scoped_refptr<const ::blink::SecurityOrigin>& origin, int64_t* out_space_available);

 private:
  WebDatabaseHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHostAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT WebDatabaseProxy
    : public WebDatabase {
 public:
  explicit WebDatabaseProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpdateSize(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, int64_t size) final;
  void CloseImmediately(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT WebDatabaseHostProxy
    : public WebDatabaseHost {
 public:
  explicit WebDatabaseHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool OpenFile(const WTF::String& vfs_file_name, int32_t desired_flags, base::File* out_file) final;
  void OpenFile(const WTF::String& vfs_file_name, int32_t desired_flags, OpenFileCallback callback) final;
  bool DeleteFile(const WTF::String& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code) final;
  void DeleteFile(const WTF::String& vfs_file_name, bool sync_dir, DeleteFileCallback callback) final;
  bool GetFileAttributes(const WTF::String& vfs_file_name, int32_t* out_attributes) final;
  void GetFileAttributes(const WTF::String& vfs_file_name, GetFileAttributesCallback callback) final;
  bool GetFileSize(const WTF::String& vfs_file_name, int64_t* out_size) final;
  void GetFileSize(const WTF::String& vfs_file_name, GetFileSizeCallback callback) final;
  bool SetFileSize(const WTF::String& vfs_file_name, int64_t expected_size, bool* out_success) final;
  void SetFileSize(const WTF::String& vfs_file_name, int64_t expected_size, SetFileSizeCallback callback) final;
  bool GetSpaceAvailable(const scoped_refptr<const ::blink::SecurityOrigin>& origin, int64_t* out_space_available) final;
  void GetSpaceAvailable(const scoped_refptr<const ::blink::SecurityOrigin>& origin, GetSpaceAvailableCallback callback) final;
  void Opened(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, const WTF::String& database_description, int64_t estimated_size) final;
  void Modified(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) final;
  void Closed(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) final;
  void HandleSqliteError(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, int32_t error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT WebDatabaseStubDispatch {
 public:
  static bool Accept(WebDatabase* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebDatabase* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebDatabase>>
class WebDatabaseStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebDatabaseStub() {}
  ~WebDatabaseStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebDatabaseStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebDatabaseStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT WebDatabaseHostStubDispatch {
 public:
  static bool Accept(WebDatabaseHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebDatabaseHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebDatabaseHost>>
class WebDatabaseHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebDatabaseHostStub() {}
  ~WebDatabaseHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebDatabaseHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebDatabaseHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT WebDatabaseRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebDatabaseHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebDatabaseHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_BLINK_H_