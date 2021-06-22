// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/android_overlay.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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


namespace media {
namespace mojom {
namespace blink {
class AndroidOverlayProvider;
using AndroidOverlayProviderPtr = mojo::InterfacePtr<AndroidOverlayProvider>;
using RevocableAndroidOverlayProviderPtr = ::blink::RevocableInterfacePtr<AndroidOverlayProvider>;
using AndroidOverlayProviderPtrInfo = mojo::InterfacePtrInfo<AndroidOverlayProvider>;
using ThreadSafeAndroidOverlayProviderPtr =
    mojo::ThreadSafeInterfacePtr<AndroidOverlayProvider>;
using AndroidOverlayProviderRequest = mojo::InterfaceRequest<AndroidOverlayProvider>;
using AndroidOverlayProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AndroidOverlayProvider>;
using ThreadSafeAndroidOverlayProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AndroidOverlayProvider>;
using AndroidOverlayProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AndroidOverlayProvider>;
using AndroidOverlayProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AndroidOverlayProvider>;

class AndroidOverlay;
using AndroidOverlayPtr = mojo::InterfacePtr<AndroidOverlay>;
using RevocableAndroidOverlayPtr = ::blink::RevocableInterfacePtr<AndroidOverlay>;
using AndroidOverlayPtrInfo = mojo::InterfacePtrInfo<AndroidOverlay>;
using ThreadSafeAndroidOverlayPtr =
    mojo::ThreadSafeInterfacePtr<AndroidOverlay>;
using AndroidOverlayRequest = mojo::InterfaceRequest<AndroidOverlay>;
using AndroidOverlayAssociatedPtr =
    mojo::AssociatedInterfacePtr<AndroidOverlay>;
using ThreadSafeAndroidOverlayAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AndroidOverlay>;
using AndroidOverlayAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AndroidOverlay>;
using AndroidOverlayAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AndroidOverlay>;

class AndroidOverlayClient;
using AndroidOverlayClientPtr = mojo::InterfacePtr<AndroidOverlayClient>;
using RevocableAndroidOverlayClientPtr = ::blink::RevocableInterfacePtr<AndroidOverlayClient>;
using AndroidOverlayClientPtrInfo = mojo::InterfacePtrInfo<AndroidOverlayClient>;
using ThreadSafeAndroidOverlayClientPtr =
    mojo::ThreadSafeInterfacePtr<AndroidOverlayClient>;
using AndroidOverlayClientRequest = mojo::InterfaceRequest<AndroidOverlayClient>;
using AndroidOverlayClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AndroidOverlayClient>;
using ThreadSafeAndroidOverlayClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AndroidOverlayClient>;
using AndroidOverlayClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AndroidOverlayClient>;
using AndroidOverlayClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AndroidOverlayClient>;

class AndroidOverlayConfig;
using AndroidOverlayConfigPtr = mojo::StructPtr<AndroidOverlayConfig>;


class AndroidOverlayProviderProxy;

template <typename ImplRefTraits>
class AndroidOverlayProviderStub;

class AndroidOverlayProviderRequestValidator;

class  AndroidOverlayProvider
    : public AndroidOverlayProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AndroidOverlayProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AndroidOverlayProviderStub<ImplRefTraits>;

  using RequestValidator_ = AndroidOverlayProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateOverlayMinVersion = 0,
  };
  virtual ~AndroidOverlayProvider() {}

  virtual void CreateOverlay(AndroidOverlayRequest overlay, AndroidOverlayClientPtr client, AndroidOverlayConfigPtr config) = 0;
};
class  AndroidOverlayProviderInterceptorForTesting : public AndroidOverlayProvider {
  virtual AndroidOverlayProvider* GetForwardingInterface() = 0;
  void CreateOverlay(AndroidOverlayRequest overlay, AndroidOverlayClientPtr client, AndroidOverlayConfigPtr config) override;
};
class  AndroidOverlayProviderAsyncWaiter {
 public:
  explicit AndroidOverlayProviderAsyncWaiter(AndroidOverlayProvider* proxy);
  ~AndroidOverlayProviderAsyncWaiter();

 private:
  AndroidOverlayProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AndroidOverlayProviderAsyncWaiter);
};

class AndroidOverlayProxy;

template <typename ImplRefTraits>
class AndroidOverlayStub;

class AndroidOverlayRequestValidator;

class  AndroidOverlay
    : public AndroidOverlayInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AndroidOverlayProxy;

  template <typename ImplRefTraits>
  using Stub_ = AndroidOverlayStub<ImplRefTraits>;

  using RequestValidator_ = AndroidOverlayRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kScheduleLayoutMinVersion = 0,
  };
  virtual ~AndroidOverlay() {}

  virtual void ScheduleLayout(const ::blink::WebRect& rect) = 0;
};
class  AndroidOverlayInterceptorForTesting : public AndroidOverlay {
  virtual AndroidOverlay* GetForwardingInterface() = 0;
  void ScheduleLayout(const ::blink::WebRect& rect) override;
};
class  AndroidOverlayAsyncWaiter {
 public:
  explicit AndroidOverlayAsyncWaiter(AndroidOverlay* proxy);
  ~AndroidOverlayAsyncWaiter();

 private:
  AndroidOverlay* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AndroidOverlayAsyncWaiter);
};

class AndroidOverlayClientProxy;

template <typename ImplRefTraits>
class AndroidOverlayClientStub;

class AndroidOverlayClientRequestValidator;

class  AndroidOverlayClient
    : public AndroidOverlayClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AndroidOverlayClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AndroidOverlayClientStub<ImplRefTraits>;

  using RequestValidator_ = AndroidOverlayClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSurfaceReadyMinVersion = 0,
    kOnDestroyedMinVersion = 0,
    kOnPowerEfficientStateMinVersion = 0,
  };
  virtual ~AndroidOverlayClient() {}

  virtual void OnSurfaceReady(uint64_t surface_key) = 0;

  virtual void OnDestroyed() = 0;

  virtual void OnPowerEfficientState(bool is_power_efficient) = 0;
};
class  AndroidOverlayClientInterceptorForTesting : public AndroidOverlayClient {
  virtual AndroidOverlayClient* GetForwardingInterface() = 0;
  void OnSurfaceReady(uint64_t surface_key) override;
  void OnDestroyed() override;
  void OnPowerEfficientState(bool is_power_efficient) override;
};
class  AndroidOverlayClientAsyncWaiter {
 public:
  explicit AndroidOverlayClientAsyncWaiter(AndroidOverlayClient* proxy);
  ~AndroidOverlayClientAsyncWaiter();

 private:
  AndroidOverlayClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AndroidOverlayClientAsyncWaiter);
};

class  AndroidOverlayProviderProxy
    : public AndroidOverlayProvider {
 public:
  explicit AndroidOverlayProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateOverlay(AndroidOverlayRequest overlay, AndroidOverlayClientPtr client, AndroidOverlayConfigPtr config) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AndroidOverlayProxy
    : public AndroidOverlay {
 public:
  explicit AndroidOverlayProxy(mojo::MessageReceiverWithResponder* receiver);
  void ScheduleLayout(const ::blink::WebRect& rect) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AndroidOverlayClientProxy
    : public AndroidOverlayClient {
 public:
  explicit AndroidOverlayClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSurfaceReady(uint64_t surface_key) final;
  void OnDestroyed() final;
  void OnPowerEfficientState(bool is_power_efficient) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AndroidOverlayProviderStubDispatch {
 public:
  static bool Accept(AndroidOverlayProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AndroidOverlayProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AndroidOverlayProvider>>
class AndroidOverlayProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AndroidOverlayProviderStub() {}
  ~AndroidOverlayProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AndroidOverlayProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AndroidOverlayProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AndroidOverlayStubDispatch {
 public:
  static bool Accept(AndroidOverlay* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AndroidOverlay* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AndroidOverlay>>
class AndroidOverlayStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AndroidOverlayStub() {}
  ~AndroidOverlayStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AndroidOverlayStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AndroidOverlayStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AndroidOverlayClientStubDispatch {
 public:
  static bool Accept(AndroidOverlayClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AndroidOverlayClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AndroidOverlayClient>>
class AndroidOverlayClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AndroidOverlayClientStub() {}
  ~AndroidOverlayClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AndroidOverlayClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AndroidOverlayClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AndroidOverlayProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AndroidOverlayRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AndroidOverlayClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  AndroidOverlayConfig {
 public:
  using DataView = AndroidOverlayConfigDataView;
  using Data_ = internal::AndroidOverlayConfig_Data;

  template <typename... Args>
  static AndroidOverlayConfigPtr New(Args&&... args) {
    return AndroidOverlayConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AndroidOverlayConfigPtr From(const U& u) {
    return mojo::TypeConverter<AndroidOverlayConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AndroidOverlayConfig>::Convert(*this);
  }


  AndroidOverlayConfig();

  AndroidOverlayConfig(
      ::mojo_base::mojom::blink::UnguessableTokenPtr routing_token,
      const ::blink::WebRect& rect,
      bool secure,
      bool power_efficient);

  ~AndroidOverlayConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AndroidOverlayConfigPtr>
  AndroidOverlayConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AndroidOverlayConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AndroidOverlayConfig::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AndroidOverlayConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AndroidOverlayConfig_UnserializedMessageContext<
            UserType, AndroidOverlayConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AndroidOverlayConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AndroidOverlayConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AndroidOverlayConfig_UnserializedMessageContext<
            UserType, AndroidOverlayConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AndroidOverlayConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::mojo_base::mojom::blink::UnguessableTokenPtr routing_token;
  ::blink::WebRect rect;
  bool secure;
  bool power_efficient;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AndroidOverlayConfig);
};

template <typename StructPtrType>
AndroidOverlayConfigPtr AndroidOverlayConfig::Clone() const {
  return New(
      mojo::Clone(routing_token),
      mojo::Clone(rect),
      mojo::Clone(secure),
      mojo::Clone(power_efficient)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AndroidOverlayConfig>::value>::type*>
bool AndroidOverlayConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->routing_token, other_struct.routing_token))
    return false;
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  if (!mojo::Equals(this->secure, other_struct.secure))
    return false;
  if (!mojo::Equals(this->power_efficient, other_struct.power_efficient))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::blink::AndroidOverlayConfig::DataView,
                                         ::media::mojom::blink::AndroidOverlayConfigPtr> {
  static bool IsNull(const ::media::mojom::blink::AndroidOverlayConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::AndroidOverlayConfigPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::AndroidOverlayConfig::routing_token)& routing_token(
      const ::media::mojom::blink::AndroidOverlayConfigPtr& input) {
    return input->routing_token;
  }

  static const decltype(::media::mojom::blink::AndroidOverlayConfig::rect)& rect(
      const ::media::mojom::blink::AndroidOverlayConfigPtr& input) {
    return input->rect;
  }

  static decltype(::media::mojom::blink::AndroidOverlayConfig::secure) secure(
      const ::media::mojom::blink::AndroidOverlayConfigPtr& input) {
    return input->secure;
  }

  static decltype(::media::mojom::blink::AndroidOverlayConfig::power_efficient) power_efficient(
      const ::media::mojom::blink::AndroidOverlayConfigPtr& input) {
    return input->power_efficient;
  }

  static bool Read(::media::mojom::blink::AndroidOverlayConfig::DataView input, ::media::mojom::blink::AndroidOverlayConfigPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_ANDROID_OVERLAY_MOJOM_BLINK_H_