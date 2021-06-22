// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_HYPHENATION_HYPHENATION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_HYPHENATION_HYPHENATION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/hyphenation/hyphenation.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"

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


namespace blink {
namespace mojom {
namespace blink {
class Hyphenation;
using HyphenationPtr = mojo::InterfacePtr<Hyphenation>;
using RevocableHyphenationPtr = ::blink::RevocableInterfacePtr<Hyphenation>;
using HyphenationPtrInfo = mojo::InterfacePtrInfo<Hyphenation>;
using ThreadSafeHyphenationPtr =
    mojo::ThreadSafeInterfacePtr<Hyphenation>;
using HyphenationRequest = mojo::InterfaceRequest<Hyphenation>;
using HyphenationAssociatedPtr =
    mojo::AssociatedInterfacePtr<Hyphenation>;
using ThreadSafeHyphenationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Hyphenation>;
using HyphenationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Hyphenation>;
using HyphenationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Hyphenation>;


class HyphenationProxy;

template <typename ImplRefTraits>
class HyphenationStub;

class HyphenationRequestValidator;
class HyphenationResponseValidator;

class BLINK_PLATFORM_EXPORT Hyphenation
    : public HyphenationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = HyphenationProxy;

  template <typename ImplRefTraits>
  using Stub_ = HyphenationStub<ImplRefTraits>;

  using RequestValidator_ = HyphenationRequestValidator;
  using ResponseValidator_ = HyphenationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenDictionaryMinVersion = 0,
  };
  virtual ~Hyphenation() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenDictionary(const WTF::String& locale, base::File* out_hyphenation_dictionary_handle);

  using OpenDictionaryCallback = base::OnceCallback<void(base::File)>;
  virtual void OpenDictionary(const WTF::String& locale, OpenDictionaryCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT HyphenationInterceptorForTesting : public Hyphenation {
  virtual Hyphenation* GetForwardingInterface() = 0;
  void OpenDictionary(const WTF::String& locale, OpenDictionaryCallback callback) override;
};
class BLINK_PLATFORM_EXPORT HyphenationAsyncWaiter {
 public:
  explicit HyphenationAsyncWaiter(Hyphenation* proxy);
  ~HyphenationAsyncWaiter();
  void OpenDictionary(
      const WTF::String& locale, base::File* out_hyphenation_dictionary_handle);

 private:
  Hyphenation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HyphenationAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT HyphenationProxy
    : public Hyphenation {
 public:
  explicit HyphenationProxy(mojo::MessageReceiverWithResponder* receiver);
  bool OpenDictionary(const WTF::String& locale, base::File* out_hyphenation_dictionary_handle) final;
  void OpenDictionary(const WTF::String& locale, OpenDictionaryCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT HyphenationStubDispatch {
 public:
  static bool Accept(Hyphenation* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Hyphenation* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Hyphenation>>
class HyphenationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HyphenationStub() {}
  ~HyphenationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HyphenationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HyphenationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT HyphenationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HyphenationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_HYPHENATION_HYPHENATION_MOJOM_BLINK_H_