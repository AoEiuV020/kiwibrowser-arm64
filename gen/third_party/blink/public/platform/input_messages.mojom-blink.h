// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/input_messages.mojom-shared.h"

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
class TextSuggestionBackend;
using TextSuggestionBackendPtr = mojo::InterfacePtr<TextSuggestionBackend>;
using RevocableTextSuggestionBackendPtr = ::blink::RevocableInterfacePtr<TextSuggestionBackend>;
using TextSuggestionBackendPtrInfo = mojo::InterfacePtrInfo<TextSuggestionBackend>;
using ThreadSafeTextSuggestionBackendPtr =
    mojo::ThreadSafeInterfacePtr<TextSuggestionBackend>;
using TextSuggestionBackendRequest = mojo::InterfaceRequest<TextSuggestionBackend>;
using TextSuggestionBackendAssociatedPtr =
    mojo::AssociatedInterfacePtr<TextSuggestionBackend>;
using ThreadSafeTextSuggestionBackendAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TextSuggestionBackend>;
using TextSuggestionBackendAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TextSuggestionBackend>;
using TextSuggestionBackendAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TextSuggestionBackend>;


class TextSuggestionBackendProxy;

template <typename ImplRefTraits>
class TextSuggestionBackendStub;

class TextSuggestionBackendRequestValidator;

class BLINK_PLATFORM_EXPORT TextSuggestionBackend
    : public TextSuggestionBackendInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TextSuggestionBackendProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextSuggestionBackendStub<ImplRefTraits>;

  using RequestValidator_ = TextSuggestionBackendRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kApplySpellCheckSuggestionMinVersion = 0,
    kApplyTextSuggestionMinVersion = 0,
    kDeleteActiveSuggestionRangeMinVersion = 0,
    kOnNewWordAddedToDictionaryMinVersion = 0,
    kOnSuggestionMenuClosedMinVersion = 0,
    kSuggestionMenuTimeoutCallbackMinVersion = 0,
  };
  virtual ~TextSuggestionBackend() {}

  virtual void ApplySpellCheckSuggestion(const WTF::String& suggestion) = 0;

  virtual void ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) = 0;

  virtual void DeleteActiveSuggestionRange() = 0;

  virtual void OnNewWordAddedToDictionary(const WTF::String& suggestion) = 0;

  virtual void OnSuggestionMenuClosed() = 0;

  virtual void SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) = 0;
};
class BLINK_PLATFORM_EXPORT TextSuggestionBackendInterceptorForTesting : public TextSuggestionBackend {
  virtual TextSuggestionBackend* GetForwardingInterface() = 0;
  void ApplySpellCheckSuggestion(const WTF::String& suggestion) override;
  void ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) override;
  void DeleteActiveSuggestionRange() override;
  void OnNewWordAddedToDictionary(const WTF::String& suggestion) override;
  void OnSuggestionMenuClosed() override;
  void SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) override;
};
class BLINK_PLATFORM_EXPORT TextSuggestionBackendAsyncWaiter {
 public:
  explicit TextSuggestionBackendAsyncWaiter(TextSuggestionBackend* proxy);
  ~TextSuggestionBackendAsyncWaiter();

 private:
  TextSuggestionBackend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextSuggestionBackendAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT TextSuggestionBackendProxy
    : public TextSuggestionBackend {
 public:
  explicit TextSuggestionBackendProxy(mojo::MessageReceiverWithResponder* receiver);
  void ApplySpellCheckSuggestion(const WTF::String& suggestion) final;
  void ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) final;
  void DeleteActiveSuggestionRange() final;
  void OnNewWordAddedToDictionary(const WTF::String& suggestion) final;
  void OnSuggestionMenuClosed() final;
  void SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT TextSuggestionBackendStubDispatch {
 public:
  static bool Accept(TextSuggestionBackend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextSuggestionBackend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextSuggestionBackend>>
class TextSuggestionBackendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextSuggestionBackendStub() {}
  ~TextSuggestionBackendStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextSuggestionBackendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextSuggestionBackendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TextSuggestionBackendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_BLINK_H_