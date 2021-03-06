// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_H_

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
#include "services/video_capture/public/mojom/producer.mojom-shared.h"
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
class Producer;
using ProducerPtr = mojo::InterfacePtr<Producer>;
using ProducerPtrInfo = mojo::InterfacePtrInfo<Producer>;
using ThreadSafeProducerPtr =
    mojo::ThreadSafeInterfacePtr<Producer>;
using ProducerRequest = mojo::InterfaceRequest<Producer>;
using ProducerAssociatedPtr =
    mojo::AssociatedInterfacePtr<Producer>;
using ThreadSafeProducerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Producer>;
using ProducerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Producer>;
using ProducerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Producer>;


class ProducerProxy;

template <typename ImplRefTraits>
class ProducerStub;

class ProducerRequestValidator;
class ProducerResponseValidator;

class  Producer
    : public ProducerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProducerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProducerStub<ImplRefTraits>;

  using RequestValidator_ = ProducerRequestValidator;
  using ResponseValidator_ = ProducerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnNewBufferHandleMinVersion = 0,
    kOnBufferRetiredMinVersion = 0,
  };
  virtual ~Producer() {}


  using OnNewBufferHandleCallback = base::OnceCallback<void()>;
  virtual void OnNewBufferHandle(int32_t buffer_id, mojo::ScopedSharedBufferHandle buffer_handle, OnNewBufferHandleCallback callback) = 0;

  virtual void OnBufferRetired(int32_t buffer_id) = 0;
};
class  ProducerInterceptorForTesting : public Producer {
  virtual Producer* GetForwardingInterface() = 0;
  void OnNewBufferHandle(int32_t buffer_id, mojo::ScopedSharedBufferHandle buffer_handle, OnNewBufferHandleCallback callback) override;
  void OnBufferRetired(int32_t buffer_id) override;
};
class  ProducerAsyncWaiter {
 public:
  explicit ProducerAsyncWaiter(Producer* proxy);
  ~ProducerAsyncWaiter();
  void OnNewBufferHandle(
      int32_t buffer_id, mojo::ScopedSharedBufferHandle buffer_handle);

 private:
  Producer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProducerAsyncWaiter);
};

class  ProducerProxy
    : public Producer {
 public:
  explicit ProducerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnNewBufferHandle(int32_t buffer_id, mojo::ScopedSharedBufferHandle buffer_handle, OnNewBufferHandleCallback callback) final;
  void OnBufferRetired(int32_t buffer_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProducerStubDispatch {
 public:
  static bool Accept(Producer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Producer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Producer>>
class ProducerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProducerStub() {}
  ~ProducerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProducerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProducerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_H_