// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/vibration_manager.mojom-shared.h"

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
class VibrationManager;
using VibrationManagerPtr = mojo::InterfacePtr<VibrationManager>;
using RevocableVibrationManagerPtr = ::blink::RevocableInterfacePtr<VibrationManager>;
using VibrationManagerPtrInfo = mojo::InterfacePtrInfo<VibrationManager>;
using ThreadSafeVibrationManagerPtr =
    mojo::ThreadSafeInterfacePtr<VibrationManager>;
using VibrationManagerRequest = mojo::InterfaceRequest<VibrationManager>;
using VibrationManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<VibrationManager>;
using ThreadSafeVibrationManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VibrationManager>;
using VibrationManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VibrationManager>;
using VibrationManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VibrationManager>;


class VibrationManagerProxy;

template <typename ImplRefTraits>
class VibrationManagerStub;

class VibrationManagerRequestValidator;
class VibrationManagerResponseValidator;

class BLINK_PLATFORM_EXPORT VibrationManager
    : public VibrationManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VibrationManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = VibrationManagerStub<ImplRefTraits>;

  using RequestValidator_ = VibrationManagerRequestValidator;
  using ResponseValidator_ = VibrationManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kVibrateMinVersion = 0,
    kCancelMinVersion = 0,
  };
  virtual ~VibrationManager() {}


  using VibrateCallback = base::OnceCallback<void()>;
  virtual void Vibrate(int64_t milliseconds, VibrateCallback callback) = 0;


  using CancelCallback = base::OnceCallback<void()>;
  virtual void Cancel(CancelCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT VibrationManagerInterceptorForTesting : public VibrationManager {
  virtual VibrationManager* GetForwardingInterface() = 0;
  void Vibrate(int64_t milliseconds, VibrateCallback callback) override;
  void Cancel(CancelCallback callback) override;
};
class BLINK_PLATFORM_EXPORT VibrationManagerAsyncWaiter {
 public:
  explicit VibrationManagerAsyncWaiter(VibrationManager* proxy);
  ~VibrationManagerAsyncWaiter();
  void Vibrate(
      int64_t milliseconds);
  void Cancel(
      );

 private:
  VibrationManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VibrationManagerAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT VibrationManagerProxy
    : public VibrationManager {
 public:
  explicit VibrationManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Vibrate(int64_t milliseconds, VibrateCallback callback) final;
  void Cancel(CancelCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT VibrationManagerStubDispatch {
 public:
  static bool Accept(VibrationManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VibrationManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VibrationManager>>
class VibrationManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VibrationManagerStub() {}
  ~VibrationManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VibrationManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VibrationManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT VibrationManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT VibrationManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_H_