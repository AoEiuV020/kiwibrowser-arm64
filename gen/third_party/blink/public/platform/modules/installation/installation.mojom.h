// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSTALLATION_INSTALLATION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSTALLATION_INSTALLATION_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/installation/installation.mojom-shared.h"
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


namespace blink {
namespace mojom {
class InstallationService;
using InstallationServicePtr = mojo::InterfacePtr<InstallationService>;
using InstallationServicePtrInfo = mojo::InterfacePtrInfo<InstallationService>;
using ThreadSafeInstallationServicePtr =
    mojo::ThreadSafeInterfacePtr<InstallationService>;
using InstallationServiceRequest = mojo::InterfaceRequest<InstallationService>;
using InstallationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<InstallationService>;
using ThreadSafeInstallationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InstallationService>;
using InstallationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InstallationService>;
using InstallationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InstallationService>;


class InstallationServiceProxy;

template <typename ImplRefTraits>
class InstallationServiceStub;

class InstallationServiceRequestValidator;

class CONTENT_EXPORT InstallationService
    : public InstallationServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InstallationServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = InstallationServiceStub<ImplRefTraits>;

  using RequestValidator_ = InstallationServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnInstallMinVersion = 0,
  };
  virtual ~InstallationService() {}

  virtual void OnInstall() = 0;
};
class CONTENT_EXPORT InstallationServiceInterceptorForTesting : public InstallationService {
  virtual InstallationService* GetForwardingInterface() = 0;
  void OnInstall() override;
};
class CONTENT_EXPORT InstallationServiceAsyncWaiter {
 public:
  explicit InstallationServiceAsyncWaiter(InstallationService* proxy);
  ~InstallationServiceAsyncWaiter();

 private:
  InstallationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InstallationServiceAsyncWaiter);
};

class CONTENT_EXPORT InstallationServiceProxy
    : public InstallationService {
 public:
  explicit InstallationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnInstall() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT InstallationServiceStubDispatch {
 public:
  static bool Accept(InstallationService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InstallationService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InstallationService>>
class InstallationServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InstallationServiceStub() {}
  ~InstallationServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InstallationServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InstallationServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT InstallationServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSTALLATION_INSTALLATION_MOJOM_H_