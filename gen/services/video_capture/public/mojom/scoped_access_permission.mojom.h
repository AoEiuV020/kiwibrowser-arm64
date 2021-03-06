// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_SCOPED_ACCESS_PERMISSION_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_SCOPED_ACCESS_PERMISSION_MOJOM_H_

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
#include "services/video_capture/public/mojom/scoped_access_permission.mojom-shared.h"
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


namespace video_capture {
namespace mojom {
class ScopedAccessPermission;
using ScopedAccessPermissionPtr = mojo::InterfacePtr<ScopedAccessPermission>;
using ScopedAccessPermissionPtrInfo = mojo::InterfacePtrInfo<ScopedAccessPermission>;
using ThreadSafeScopedAccessPermissionPtr =
    mojo::ThreadSafeInterfacePtr<ScopedAccessPermission>;
using ScopedAccessPermissionRequest = mojo::InterfaceRequest<ScopedAccessPermission>;
using ScopedAccessPermissionAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScopedAccessPermission>;
using ThreadSafeScopedAccessPermissionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScopedAccessPermission>;
using ScopedAccessPermissionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScopedAccessPermission>;
using ScopedAccessPermissionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScopedAccessPermission>;


class ScopedAccessPermissionProxy;

template <typename ImplRefTraits>
class ScopedAccessPermissionStub;

class ScopedAccessPermissionRequestValidator;

class  ScopedAccessPermission
    : public ScopedAccessPermissionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ScopedAccessPermissionProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScopedAccessPermissionStub<ImplRefTraits>;

  using RequestValidator_ = ScopedAccessPermissionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~ScopedAccessPermission() {}
};
class  ScopedAccessPermissionInterceptorForTesting : public ScopedAccessPermission {
  virtual ScopedAccessPermission* GetForwardingInterface() = 0;
};
class  ScopedAccessPermissionAsyncWaiter {
 public:
  explicit ScopedAccessPermissionAsyncWaiter(ScopedAccessPermission* proxy);
  ~ScopedAccessPermissionAsyncWaiter();

 private:
  ScopedAccessPermission* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScopedAccessPermissionAsyncWaiter);
};

class  ScopedAccessPermissionProxy
    : public ScopedAccessPermission {
 public:
  explicit ScopedAccessPermissionProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ScopedAccessPermissionStubDispatch {
 public:
  static bool Accept(ScopedAccessPermission* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScopedAccessPermission* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScopedAccessPermission>>
class ScopedAccessPermissionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScopedAccessPermissionStub() {}
  ~ScopedAccessPermissionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScopedAccessPermissionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScopedAccessPermissionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ScopedAccessPermissionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_SCOPED_ACCESS_PERMISSION_MOJOM_H_