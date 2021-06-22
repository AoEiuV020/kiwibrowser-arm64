// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_BLINK_H_

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
#include "third_party/blink/public/web/devtools_frontend.mojom-shared.h"

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
class DevToolsFrontend;
using DevToolsFrontendPtr = mojo::InterfacePtr<DevToolsFrontend>;
using RevocableDevToolsFrontendPtr = ::blink::RevocableInterfacePtr<DevToolsFrontend>;
using DevToolsFrontendPtrInfo = mojo::InterfacePtrInfo<DevToolsFrontend>;
using ThreadSafeDevToolsFrontendPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsFrontend>;
using DevToolsFrontendRequest = mojo::InterfaceRequest<DevToolsFrontend>;
using DevToolsFrontendAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsFrontend>;
using ThreadSafeDevToolsFrontendAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsFrontend>;
using DevToolsFrontendAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsFrontend>;
using DevToolsFrontendAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsFrontend>;

class DevToolsFrontendHost;
using DevToolsFrontendHostPtr = mojo::InterfacePtr<DevToolsFrontendHost>;
using RevocableDevToolsFrontendHostPtr = ::blink::RevocableInterfacePtr<DevToolsFrontendHost>;
using DevToolsFrontendHostPtrInfo = mojo::InterfacePtrInfo<DevToolsFrontendHost>;
using ThreadSafeDevToolsFrontendHostPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsFrontendHost>;
using DevToolsFrontendHostRequest = mojo::InterfaceRequest<DevToolsFrontendHost>;
using DevToolsFrontendHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsFrontendHost>;
using ThreadSafeDevToolsFrontendHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsFrontendHost>;
using DevToolsFrontendHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsFrontendHost>;
using DevToolsFrontendHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsFrontendHost>;


class DevToolsFrontendProxy;

template <typename ImplRefTraits>
class DevToolsFrontendStub;

class DevToolsFrontendRequestValidator;

class BLINK_PLATFORM_EXPORT DevToolsFrontend
    : public DevToolsFrontendInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DevToolsFrontendProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsFrontendStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsFrontendRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetupDevToolsFrontendMinVersion = 0,
    kSetupDevToolsExtensionAPIMinVersion = 0,
  };
  virtual ~DevToolsFrontend() {}

  virtual void SetupDevToolsFrontend(const WTF::String& api_script, DevToolsFrontendHostAssociatedPtrInfo host) = 0;

  virtual void SetupDevToolsExtensionAPI(const WTF::String& extension_api) = 0;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendInterceptorForTesting : public DevToolsFrontend {
  virtual DevToolsFrontend* GetForwardingInterface() = 0;
  void SetupDevToolsFrontend(const WTF::String& api_script, DevToolsFrontendHostAssociatedPtrInfo host) override;
  void SetupDevToolsExtensionAPI(const WTF::String& extension_api) override;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendAsyncWaiter {
 public:
  explicit DevToolsFrontendAsyncWaiter(DevToolsFrontend* proxy);
  ~DevToolsFrontendAsyncWaiter();

 private:
  DevToolsFrontend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsFrontendAsyncWaiter);
};

class DevToolsFrontendHostProxy;

template <typename ImplRefTraits>
class DevToolsFrontendHostStub;

class DevToolsFrontendHostRequestValidator;

class BLINK_PLATFORM_EXPORT DevToolsFrontendHost
    : public DevToolsFrontendHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DevToolsFrontendHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsFrontendHostStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsFrontendHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDispatchEmbedderMessageMinVersion = 0,
  };
  virtual ~DevToolsFrontendHost() {}

  virtual void DispatchEmbedderMessage(const WTF::String& message) = 0;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendHostInterceptorForTesting : public DevToolsFrontendHost {
  virtual DevToolsFrontendHost* GetForwardingInterface() = 0;
  void DispatchEmbedderMessage(const WTF::String& message) override;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendHostAsyncWaiter {
 public:
  explicit DevToolsFrontendHostAsyncWaiter(DevToolsFrontendHost* proxy);
  ~DevToolsFrontendHostAsyncWaiter();

 private:
  DevToolsFrontendHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsFrontendHostAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT DevToolsFrontendProxy
    : public DevToolsFrontend {
 public:
  explicit DevToolsFrontendProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetupDevToolsFrontend(const WTF::String& api_script, DevToolsFrontendHostAssociatedPtrInfo host) final;
  void SetupDevToolsExtensionAPI(const WTF::String& extension_api) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT DevToolsFrontendHostProxy
    : public DevToolsFrontendHost {
 public:
  explicit DevToolsFrontendHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchEmbedderMessage(const WTF::String& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendStubDispatch {
 public:
  static bool Accept(DevToolsFrontend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsFrontend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsFrontend>>
class DevToolsFrontendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsFrontendStub() {}
  ~DevToolsFrontendStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsFrontendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsFrontendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendHostStubDispatch {
 public:
  static bool Accept(DevToolsFrontendHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsFrontendHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsFrontendHost>>
class DevToolsFrontendHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsFrontendHostStub() {}
  ~DevToolsFrontendHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsFrontendHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsFrontendHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT DevToolsFrontendHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_BLINK_H_