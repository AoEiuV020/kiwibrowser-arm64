// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/geolocation_config.mojom-shared.h"

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


namespace device {
namespace mojom {
namespace blink {
class GeolocationConfig;
using GeolocationConfigPtr = mojo::InterfacePtr<GeolocationConfig>;
using RevocableGeolocationConfigPtr = ::blink::RevocableInterfacePtr<GeolocationConfig>;
using GeolocationConfigPtrInfo = mojo::InterfacePtrInfo<GeolocationConfig>;
using ThreadSafeGeolocationConfigPtr =
    mojo::ThreadSafeInterfacePtr<GeolocationConfig>;
using GeolocationConfigRequest = mojo::InterfaceRequest<GeolocationConfig>;
using GeolocationConfigAssociatedPtr =
    mojo::AssociatedInterfacePtr<GeolocationConfig>;
using ThreadSafeGeolocationConfigAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GeolocationConfig>;
using GeolocationConfigAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GeolocationConfig>;
using GeolocationConfigAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GeolocationConfig>;


class GeolocationConfigProxy;

template <typename ImplRefTraits>
class GeolocationConfigStub;

class GeolocationConfigRequestValidator;
class GeolocationConfigResponseValidator;

class BLINK_PLATFORM_EXPORT GeolocationConfig
    : public GeolocationConfigInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GeolocationConfigProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationConfigStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationConfigRequestValidator;
  using ResponseValidator_ = GeolocationConfigResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIsHighAccuracyLocationBeingCapturedMinVersion = 0,
  };
  virtual ~GeolocationConfig() {}


  using IsHighAccuracyLocationBeingCapturedCallback = base::OnceCallback<void(bool)>;
  virtual void IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT GeolocationConfigInterceptorForTesting : public GeolocationConfig {
  virtual GeolocationConfig* GetForwardingInterface() = 0;
  void IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) override;
};
class BLINK_PLATFORM_EXPORT GeolocationConfigAsyncWaiter {
 public:
  explicit GeolocationConfigAsyncWaiter(GeolocationConfig* proxy);
  ~GeolocationConfigAsyncWaiter();
  void IsHighAccuracyLocationBeingCaptured(
      bool* out_high_accuracy);

 private:
  GeolocationConfig* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationConfigAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT GeolocationConfigProxy
    : public GeolocationConfig {
 public:
  explicit GeolocationConfigProxy(mojo::MessageReceiverWithResponder* receiver);
  void IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT GeolocationConfigStubDispatch {
 public:
  static bool Accept(GeolocationConfig* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GeolocationConfig* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GeolocationConfig>>
class GeolocationConfigStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationConfigStub() {}
  ~GeolocationConfigStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationConfigStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationConfigStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT GeolocationConfigRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT GeolocationConfigResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_BLINK_H_