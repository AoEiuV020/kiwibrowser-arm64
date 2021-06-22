// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_H_

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
#include "services/metrics/public/mojom/ukm_interface.mojom-shared.h"
#include "url/mojom/url.mojom-blink.h"

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


namespace ukm {
namespace mojom {
namespace blink {
class UkmRecorderInterface;
using UkmRecorderInterfacePtr = mojo::InterfacePtr<UkmRecorderInterface>;
using RevocableUkmRecorderInterfacePtr = ::blink::RevocableInterfacePtr<UkmRecorderInterface>;
using UkmRecorderInterfacePtrInfo = mojo::InterfacePtrInfo<UkmRecorderInterface>;
using ThreadSafeUkmRecorderInterfacePtr =
    mojo::ThreadSafeInterfacePtr<UkmRecorderInterface>;
using UkmRecorderInterfaceRequest = mojo::InterfaceRequest<UkmRecorderInterface>;
using UkmRecorderInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<UkmRecorderInterface>;
using ThreadSafeUkmRecorderInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UkmRecorderInterface>;
using UkmRecorderInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UkmRecorderInterface>;
using UkmRecorderInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UkmRecorderInterface>;

class UkmEntry;
using UkmEntryPtr = mojo::StructPtr<UkmEntry>;


class UkmRecorderInterfaceProxy;

template <typename ImplRefTraits>
class UkmRecorderInterfaceStub;

class UkmRecorderInterfaceRequestValidator;

class  UkmRecorderInterface
    : public UkmRecorderInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UkmRecorderInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = UkmRecorderInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = UkmRecorderInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddEntryMinVersion = 0,
    kUpdateSourceURLMinVersion = 0,
  };
  virtual ~UkmRecorderInterface() {}

  virtual void AddEntry(UkmEntryPtr entry) = 0;

  virtual void UpdateSourceURL(int64_t source_id, const WTF::String& url) = 0;
};
class  UkmRecorderInterfaceInterceptorForTesting : public UkmRecorderInterface {
  virtual UkmRecorderInterface* GetForwardingInterface() = 0;
  void AddEntry(UkmEntryPtr entry) override;
  void UpdateSourceURL(int64_t source_id, const WTF::String& url) override;
};
class  UkmRecorderInterfaceAsyncWaiter {
 public:
  explicit UkmRecorderInterfaceAsyncWaiter(UkmRecorderInterface* proxy);
  ~UkmRecorderInterfaceAsyncWaiter();

 private:
  UkmRecorderInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UkmRecorderInterfaceAsyncWaiter);
};

class  UkmRecorderInterfaceProxy
    : public UkmRecorderInterface {
 public:
  explicit UkmRecorderInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddEntry(UkmEntryPtr entry) final;
  void UpdateSourceURL(int64_t source_id, const WTF::String& url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UkmRecorderInterfaceStubDispatch {
 public:
  static bool Accept(UkmRecorderInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UkmRecorderInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UkmRecorderInterface>>
class UkmRecorderInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UkmRecorderInterfaceStub() {}
  ~UkmRecorderInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UkmRecorderInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UkmRecorderInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UkmRecorderInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  UkmEntry {
 public:
  using DataView = UkmEntryDataView;
  using Data_ = internal::UkmEntry_Data;

  template <typename... Args>
  static UkmEntryPtr New(Args&&... args) {
    return UkmEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UkmEntryPtr From(const U& u) {
    return mojo::TypeConverter<UkmEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UkmEntry>::Convert(*this);
  }


  UkmEntry();

  UkmEntry(
      int64_t source_id,
      uint64_t event_hash,
      const WTF::HashMap<uint64_t, int64_t>& metrics);

  ~UkmEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UkmEntryPtr>
  UkmEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UkmEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UkmEntry::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UkmEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UkmEntry_UnserializedMessageContext<
            UserType, UkmEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UkmEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return UkmEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UkmEntry_UnserializedMessageContext<
            UserType, UkmEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UkmEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t source_id;
  uint64_t event_hash;
  WTF::HashMap<uint64_t, int64_t> metrics;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
UkmEntryPtr UkmEntry::Clone() const {
  return New(
      mojo::Clone(source_id),
      mojo::Clone(event_hash),
      mojo::Clone(metrics)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UkmEntry>::value>::type*>
bool UkmEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->event_hash, other_struct.event_hash))
    return false;
  if (!mojo::Equals(this->metrics, other_struct.metrics))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace ukm

namespace mojo {


template <>
struct  StructTraits<::ukm::mojom::blink::UkmEntry::DataView,
                                         ::ukm::mojom::blink::UkmEntryPtr> {
  static bool IsNull(const ::ukm::mojom::blink::UkmEntryPtr& input) { return !input; }
  static void SetToNull(::ukm::mojom::blink::UkmEntryPtr* output) { output->reset(); }

  static decltype(::ukm::mojom::blink::UkmEntry::source_id) source_id(
      const ::ukm::mojom::blink::UkmEntryPtr& input) {
    return input->source_id;
  }

  static decltype(::ukm::mojom::blink::UkmEntry::event_hash) event_hash(
      const ::ukm::mojom::blink::UkmEntryPtr& input) {
    return input->event_hash;
  }

  static const decltype(::ukm::mojom::blink::UkmEntry::metrics)& metrics(
      const ::ukm::mojom::blink::UkmEntryPtr& input) {
    return input->metrics;
  }

  static bool Read(::ukm::mojom::blink::UkmEntry::DataView input, ::ukm::mojom::blink::UkmEntryPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_H_