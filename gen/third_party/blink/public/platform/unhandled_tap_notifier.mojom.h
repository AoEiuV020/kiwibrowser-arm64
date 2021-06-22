// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_H_

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
#include "third_party/blink/public/platform/unhandled_tap_notifier.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class UnhandledTapNotifier;
using UnhandledTapNotifierPtr = mojo::InterfacePtr<UnhandledTapNotifier>;
using UnhandledTapNotifierPtrInfo = mojo::InterfacePtrInfo<UnhandledTapNotifier>;
using ThreadSafeUnhandledTapNotifierPtr =
    mojo::ThreadSafeInterfacePtr<UnhandledTapNotifier>;
using UnhandledTapNotifierRequest = mojo::InterfaceRequest<UnhandledTapNotifier>;
using UnhandledTapNotifierAssociatedPtr =
    mojo::AssociatedInterfacePtr<UnhandledTapNotifier>;
using ThreadSafeUnhandledTapNotifierAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UnhandledTapNotifier>;
using UnhandledTapNotifierAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UnhandledTapNotifier>;
using UnhandledTapNotifierAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UnhandledTapNotifier>;

class UnhandledTapInfo;
using UnhandledTapInfoPtr = mojo::StructPtr<UnhandledTapInfo>;


class UnhandledTapNotifierProxy;

template <typename ImplRefTraits>
class UnhandledTapNotifierStub;

class UnhandledTapNotifierRequestValidator;

class CONTENT_EXPORT UnhandledTapNotifier
    : public UnhandledTapNotifierInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UnhandledTapNotifierProxy;

  template <typename ImplRefTraits>
  using Stub_ = UnhandledTapNotifierStub<ImplRefTraits>;

  using RequestValidator_ = UnhandledTapNotifierRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kShowUnhandledTapUIIfNeededMinVersion = 0,
  };
  virtual ~UnhandledTapNotifier() {}

  virtual void ShowUnhandledTapUIIfNeeded(UnhandledTapInfoPtr unhandled_tap_info) = 0;
};
class CONTENT_EXPORT UnhandledTapNotifierInterceptorForTesting : public UnhandledTapNotifier {
  virtual UnhandledTapNotifier* GetForwardingInterface() = 0;
  void ShowUnhandledTapUIIfNeeded(UnhandledTapInfoPtr unhandled_tap_info) override;
};
class CONTENT_EXPORT UnhandledTapNotifierAsyncWaiter {
 public:
  explicit UnhandledTapNotifierAsyncWaiter(UnhandledTapNotifier* proxy);
  ~UnhandledTapNotifierAsyncWaiter();

 private:
  UnhandledTapNotifier* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UnhandledTapNotifierAsyncWaiter);
};

class CONTENT_EXPORT UnhandledTapNotifierProxy
    : public UnhandledTapNotifier {
 public:
  explicit UnhandledTapNotifierProxy(mojo::MessageReceiverWithResponder* receiver);
  void ShowUnhandledTapUIIfNeeded(UnhandledTapInfoPtr unhandled_tap_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT UnhandledTapNotifierStubDispatch {
 public:
  static bool Accept(UnhandledTapNotifier* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UnhandledTapNotifier* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UnhandledTapNotifier>>
class UnhandledTapNotifierStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UnhandledTapNotifierStub() {}
  ~UnhandledTapNotifierStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnhandledTapNotifierStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnhandledTapNotifierStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT UnhandledTapNotifierRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CONTENT_EXPORT UnhandledTapInfo {
 public:
  using DataView = UnhandledTapInfoDataView;
  using Data_ = internal::UnhandledTapInfo_Data;

  template <typename... Args>
  static UnhandledTapInfoPtr New(Args&&... args) {
    return UnhandledTapInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UnhandledTapInfoPtr From(const U& u) {
    return mojo::TypeConverter<UnhandledTapInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UnhandledTapInfo>::Convert(*this);
  }


  UnhandledTapInfo();

  UnhandledTapInfo(
      const gfx::Point& tapped_position_in_viewport,
      uint32_t font_size_in_pixels,
      uint32_t element_text_run_length);

  ~UnhandledTapInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UnhandledTapInfoPtr>
  UnhandledTapInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UnhandledTapInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UnhandledTapInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UnhandledTapInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UnhandledTapInfo_UnserializedMessageContext<
            UserType, UnhandledTapInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UnhandledTapInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UnhandledTapInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UnhandledTapInfo_UnserializedMessageContext<
            UserType, UnhandledTapInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UnhandledTapInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::Point tapped_position_in_viewport;
  uint32_t font_size_in_pixels;
  uint32_t element_text_run_length;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
UnhandledTapInfoPtr UnhandledTapInfo::Clone() const {
  return New(
      mojo::Clone(tapped_position_in_viewport),
      mojo::Clone(font_size_in_pixels),
      mojo::Clone(element_text_run_length)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UnhandledTapInfo>::value>::type*>
bool UnhandledTapInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->tapped_position_in_viewport, other_struct.tapped_position_in_viewport))
    return false;
  if (!mojo::Equals(this->font_size_in_pixels, other_struct.font_size_in_pixels))
    return false;
  if (!mojo::Equals(this->element_text_run_length, other_struct.element_text_run_length))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::UnhandledTapInfo::DataView,
                                         ::blink::mojom::UnhandledTapInfoPtr> {
  static bool IsNull(const ::blink::mojom::UnhandledTapInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::UnhandledTapInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::UnhandledTapInfo::tapped_position_in_viewport)& tapped_position_in_viewport(
      const ::blink::mojom::UnhandledTapInfoPtr& input) {
    return input->tapped_position_in_viewport;
  }

  static decltype(::blink::mojom::UnhandledTapInfo::font_size_in_pixels) font_size_in_pixels(
      const ::blink::mojom::UnhandledTapInfoPtr& input) {
    return input->font_size_in_pixels;
  }

  static decltype(::blink::mojom::UnhandledTapInfo::element_text_run_length) element_text_run_length(
      const ::blink::mojom::UnhandledTapInfoPtr& input) {
    return input->element_text_run_length;
  }

  static bool Read(::blink::mojom::UnhandledTapInfo::DataView input, ::blink::mojom::UnhandledTapInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UNHANDLED_TAP_NOTIFIER_MOJOM_H_