// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_H_
#define CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_H_

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
#include "content/common/field_trial_recorder.mojom-shared.h"
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
class FieldTrialRecorder;
using FieldTrialRecorderPtr = mojo::InterfacePtr<FieldTrialRecorder>;
using FieldTrialRecorderPtrInfo = mojo::InterfacePtrInfo<FieldTrialRecorder>;
using ThreadSafeFieldTrialRecorderPtr =
    mojo::ThreadSafeInterfacePtr<FieldTrialRecorder>;
using FieldTrialRecorderRequest = mojo::InterfaceRequest<FieldTrialRecorder>;
using FieldTrialRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<FieldTrialRecorder>;
using ThreadSafeFieldTrialRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FieldTrialRecorder>;
using FieldTrialRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FieldTrialRecorder>;
using FieldTrialRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FieldTrialRecorder>;


class FieldTrialRecorderProxy;

template <typename ImplRefTraits>
class FieldTrialRecorderStub;

class FieldTrialRecorderRequestValidator;

class CONTENT_EXPORT FieldTrialRecorder
    : public FieldTrialRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FieldTrialRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = FieldTrialRecorderStub<ImplRefTraits>;

  using RequestValidator_ = FieldTrialRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFieldTrialActivatedMinVersion = 0,
  };
  virtual ~FieldTrialRecorder() {}

  virtual void FieldTrialActivated(const std::string& trial_name) = 0;
};
class CONTENT_EXPORT FieldTrialRecorderInterceptorForTesting : public FieldTrialRecorder {
  virtual FieldTrialRecorder* GetForwardingInterface() = 0;
  void FieldTrialActivated(const std::string& trial_name) override;
};
class CONTENT_EXPORT FieldTrialRecorderAsyncWaiter {
 public:
  explicit FieldTrialRecorderAsyncWaiter(FieldTrialRecorder* proxy);
  ~FieldTrialRecorderAsyncWaiter();

 private:
  FieldTrialRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FieldTrialRecorderAsyncWaiter);
};

class CONTENT_EXPORT FieldTrialRecorderProxy
    : public FieldTrialRecorder {
 public:
  explicit FieldTrialRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void FieldTrialActivated(const std::string& trial_name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT FieldTrialRecorderStubDispatch {
 public:
  static bool Accept(FieldTrialRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FieldTrialRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FieldTrialRecorder>>
class FieldTrialRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FieldTrialRecorderStub() {}
  ~FieldTrialRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FieldTrialRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FieldTrialRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FieldTrialRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_H_