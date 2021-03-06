// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_H_
#define CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_H_

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
#include "content/common/input/input_injector.mojom-shared.h"
#include "content/common/native_types.mojom.h"
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


namespace content {
namespace mojom {
class InputInjector;
using InputInjectorPtr = mojo::InterfacePtr<InputInjector>;
using InputInjectorPtrInfo = mojo::InterfacePtrInfo<InputInjector>;
using ThreadSafeInputInjectorPtr =
    mojo::ThreadSafeInterfacePtr<InputInjector>;
using InputInjectorRequest = mojo::InterfaceRequest<InputInjector>;
using InputInjectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputInjector>;
using ThreadSafeInputInjectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputInjector>;
using InputInjectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputInjector>;
using InputInjectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputInjector>;


class InputInjectorProxy;

template <typename ImplRefTraits>
class InputInjectorStub;

class InputInjectorRequestValidator;
class InputInjectorResponseValidator;

class CONTENT_EXPORT InputInjector
    : public InputInjectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InputInjectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputInjectorStub<ImplRefTraits>;

  using RequestValidator_ = InputInjectorRequestValidator;
  using ResponseValidator_ = InputInjectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kQueueSyntheticSmoothDragMinVersion = 0,
    kQueueSyntheticSmoothScrollMinVersion = 0,
    kQueueSyntheticPinchMinVersion = 0,
    kQueueSyntheticTapMinVersion = 0,
    kQueueSyntheticPointerActionMinVersion = 0,
  };
  virtual ~InputInjector() {}


  using QueueSyntheticSmoothDragCallback = base::OnceCallback<void()>;
  virtual void QueueSyntheticSmoothDrag(const content::SyntheticSmoothDragGestureParams& drag, QueueSyntheticSmoothDragCallback callback) = 0;


  using QueueSyntheticSmoothScrollCallback = base::OnceCallback<void()>;
  virtual void QueueSyntheticSmoothScroll(const content::SyntheticSmoothScrollGestureParams& scroll, QueueSyntheticSmoothScrollCallback callback) = 0;


  using QueueSyntheticPinchCallback = base::OnceCallback<void()>;
  virtual void QueueSyntheticPinch(const content::SyntheticPinchGestureParams& pinch, QueueSyntheticPinchCallback callback) = 0;


  using QueueSyntheticTapCallback = base::OnceCallback<void()>;
  virtual void QueueSyntheticTap(const content::SyntheticTapGestureParams& tap, QueueSyntheticTapCallback callback) = 0;


  using QueueSyntheticPointerActionCallback = base::OnceCallback<void()>;
  virtual void QueueSyntheticPointerAction(const content::SyntheticPointerActionListParams& pointer_action, QueueSyntheticPointerActionCallback callback) = 0;
};
class CONTENT_EXPORT InputInjectorInterceptorForTesting : public InputInjector {
  virtual InputInjector* GetForwardingInterface() = 0;
  void QueueSyntheticSmoothDrag(const content::SyntheticSmoothDragGestureParams& drag, QueueSyntheticSmoothDragCallback callback) override;
  void QueueSyntheticSmoothScroll(const content::SyntheticSmoothScrollGestureParams& scroll, QueueSyntheticSmoothScrollCallback callback) override;
  void QueueSyntheticPinch(const content::SyntheticPinchGestureParams& pinch, QueueSyntheticPinchCallback callback) override;
  void QueueSyntheticTap(const content::SyntheticTapGestureParams& tap, QueueSyntheticTapCallback callback) override;
  void QueueSyntheticPointerAction(const content::SyntheticPointerActionListParams& pointer_action, QueueSyntheticPointerActionCallback callback) override;
};
class CONTENT_EXPORT InputInjectorAsyncWaiter {
 public:
  explicit InputInjectorAsyncWaiter(InputInjector* proxy);
  ~InputInjectorAsyncWaiter();
  void QueueSyntheticSmoothDrag(
      const content::SyntheticSmoothDragGestureParams& drag);
  void QueueSyntheticSmoothScroll(
      const content::SyntheticSmoothScrollGestureParams& scroll);
  void QueueSyntheticPinch(
      const content::SyntheticPinchGestureParams& pinch);
  void QueueSyntheticTap(
      const content::SyntheticTapGestureParams& tap);
  void QueueSyntheticPointerAction(
      const content::SyntheticPointerActionListParams& pointer_action);

 private:
  InputInjector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputInjectorAsyncWaiter);
};

class CONTENT_EXPORT InputInjectorProxy
    : public InputInjector {
 public:
  explicit InputInjectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueueSyntheticSmoothDrag(const content::SyntheticSmoothDragGestureParams& drag, QueueSyntheticSmoothDragCallback callback) final;
  void QueueSyntheticSmoothScroll(const content::SyntheticSmoothScrollGestureParams& scroll, QueueSyntheticSmoothScrollCallback callback) final;
  void QueueSyntheticPinch(const content::SyntheticPinchGestureParams& pinch, QueueSyntheticPinchCallback callback) final;
  void QueueSyntheticTap(const content::SyntheticTapGestureParams& tap, QueueSyntheticTapCallback callback) final;
  void QueueSyntheticPointerAction(const content::SyntheticPointerActionListParams& pointer_action, QueueSyntheticPointerActionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT InputInjectorStubDispatch {
 public:
  static bool Accept(InputInjector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputInjector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputInjector>>
class InputInjectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputInjectorStub() {}
  ~InputInjectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputInjectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputInjectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT InputInjectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT InputInjectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_H_