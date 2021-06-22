// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/broadcastchannel/broadcast_channel.mojom-shared.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-blink.h"
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
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {
class BroadcastChannelClient;
using BroadcastChannelClientPtr = mojo::InterfacePtr<BroadcastChannelClient>;
using RevocableBroadcastChannelClientPtr = ::blink::RevocableInterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientPtrInfo = mojo::InterfacePtrInfo<BroadcastChannelClient>;
using ThreadSafeBroadcastChannelClientPtr =
    mojo::ThreadSafeInterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientRequest = mojo::InterfaceRequest<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BroadcastChannelClient>;
using ThreadSafeBroadcastChannelClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BroadcastChannelClient>;

class BroadcastChannelProvider;
using BroadcastChannelProviderPtr = mojo::InterfacePtr<BroadcastChannelProvider>;
using RevocableBroadcastChannelProviderPtr = ::blink::RevocableInterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderPtrInfo = mojo::InterfacePtrInfo<BroadcastChannelProvider>;
using ThreadSafeBroadcastChannelProviderPtr =
    mojo::ThreadSafeInterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderRequest = mojo::InterfaceRequest<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<BroadcastChannelProvider>;
using ThreadSafeBroadcastChannelProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BroadcastChannelProvider>;


class BroadcastChannelClientProxy;

template <typename ImplRefTraits>
class BroadcastChannelClientStub;

class BroadcastChannelClientRequestValidator;

class CORE_EXPORT BroadcastChannelClient
    : public BroadcastChannelClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BroadcastChannelClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = BroadcastChannelClientStub<ImplRefTraits>;

  using RequestValidator_ = BroadcastChannelClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnMessageMinVersion = 0,
  };
  virtual ~BroadcastChannelClient() {}

  virtual void OnMessage(::blink::BlinkCloneableMessage message) = 0;
};
class CORE_EXPORT BroadcastChannelClientInterceptorForTesting : public BroadcastChannelClient {
  virtual BroadcastChannelClient* GetForwardingInterface() = 0;
  void OnMessage(::blink::BlinkCloneableMessage message) override;
};
class CORE_EXPORT BroadcastChannelClientAsyncWaiter {
 public:
  explicit BroadcastChannelClientAsyncWaiter(BroadcastChannelClient* proxy);
  ~BroadcastChannelClientAsyncWaiter();

 private:
  BroadcastChannelClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BroadcastChannelClientAsyncWaiter);
};

class BroadcastChannelProviderProxy;

template <typename ImplRefTraits>
class BroadcastChannelProviderStub;

class BroadcastChannelProviderRequestValidator;

class CORE_EXPORT BroadcastChannelProvider
    : public BroadcastChannelProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BroadcastChannelProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = BroadcastChannelProviderStub<ImplRefTraits>;

  using RequestValidator_ = BroadcastChannelProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectToChannelMinVersion = 0,
  };
  virtual ~BroadcastChannelProvider() {}

  virtual void ConnectToChannel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) = 0;
};
class CORE_EXPORT BroadcastChannelProviderInterceptorForTesting : public BroadcastChannelProvider {
  virtual BroadcastChannelProvider* GetForwardingInterface() = 0;
  void ConnectToChannel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) override;
};
class CORE_EXPORT BroadcastChannelProviderAsyncWaiter {
 public:
  explicit BroadcastChannelProviderAsyncWaiter(BroadcastChannelProvider* proxy);
  ~BroadcastChannelProviderAsyncWaiter();

 private:
  BroadcastChannelProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BroadcastChannelProviderAsyncWaiter);
};

class CORE_EXPORT BroadcastChannelClientProxy
    : public BroadcastChannelClient {
 public:
  explicit BroadcastChannelClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnMessage(::blink::BlinkCloneableMessage message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CORE_EXPORT BroadcastChannelProviderProxy
    : public BroadcastChannelProvider {
 public:
  explicit BroadcastChannelProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToChannel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT BroadcastChannelClientStubDispatch {
 public:
  static bool Accept(BroadcastChannelClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BroadcastChannelClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BroadcastChannelClient>>
class BroadcastChannelClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BroadcastChannelClientStub() {}
  ~BroadcastChannelClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BroadcastChannelClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BroadcastChannelClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT BroadcastChannelProviderStubDispatch {
 public:
  static bool Accept(BroadcastChannelProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BroadcastChannelProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BroadcastChannelProvider>>
class BroadcastChannelProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BroadcastChannelProviderStub() {}
  ~BroadcastChannelProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BroadcastChannelProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BroadcastChannelProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT BroadcastChannelClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT BroadcastChannelProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_H_