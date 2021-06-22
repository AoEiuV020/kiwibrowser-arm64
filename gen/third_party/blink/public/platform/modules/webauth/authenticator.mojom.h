// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/webauth/authenticator.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "url/mojom/url.mojom.h"
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


namespace webauth {
namespace mojom {
class Authenticator;
using AuthenticatorPtr = mojo::InterfacePtr<Authenticator>;
using AuthenticatorPtrInfo = mojo::InterfacePtrInfo<Authenticator>;
using ThreadSafeAuthenticatorPtr =
    mojo::ThreadSafeInterfacePtr<Authenticator>;
using AuthenticatorRequest = mojo::InterfaceRequest<Authenticator>;
using AuthenticatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Authenticator>;
using ThreadSafeAuthenticatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Authenticator>;
using AuthenticatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Authenticator>;
using AuthenticatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Authenticator>;

class CommonCredentialInfo;
using CommonCredentialInfoPtr = mojo::StructPtr<CommonCredentialInfo>;

class MakeCredentialAuthenticatorResponse;
using MakeCredentialAuthenticatorResponsePtr = mojo::StructPtr<MakeCredentialAuthenticatorResponse>;

class GetAssertionAuthenticatorResponse;
using GetAssertionAuthenticatorResponsePtr = mojo::StructPtr<GetAssertionAuthenticatorResponse>;

class PublicKeyCredentialRpEntity;
using PublicKeyCredentialRpEntityPtr = mojo::StructPtr<PublicKeyCredentialRpEntity>;

class PublicKeyCredentialUserEntity;
using PublicKeyCredentialUserEntityPtr = mojo::StructPtr<PublicKeyCredentialUserEntity>;

class PublicKeyCredentialParameters;
using PublicKeyCredentialParametersPtr = mojo::InlinedStructPtr<PublicKeyCredentialParameters>;

class CableAuthentication;
using CableAuthenticationPtr = mojo::StructPtr<CableAuthentication>;

class CableRegistration;
using CableRegistrationPtr = mojo::StructPtr<CableRegistration>;

class PublicKeyCredentialRequestOptions;
using PublicKeyCredentialRequestOptionsPtr = mojo::StructPtr<PublicKeyCredentialRequestOptions>;

class AuthenticatorSelectionCriteria;
using AuthenticatorSelectionCriteriaPtr = mojo::InlinedStructPtr<AuthenticatorSelectionCriteria>;

class PublicKeyCredentialCreationOptions;
using PublicKeyCredentialCreationOptionsPtr = mojo::StructPtr<PublicKeyCredentialCreationOptions>;

class PublicKeyCredentialDescriptor;
using PublicKeyCredentialDescriptorPtr = mojo::StructPtr<PublicKeyCredentialDescriptor>;


class AuthenticatorProxy;

template <typename ImplRefTraits>
class AuthenticatorStub;

class AuthenticatorRequestValidator;
class AuthenticatorResponseValidator;

class CONTENT_EXPORT Authenticator
    : public AuthenticatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AuthenticatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = AuthenticatorStub<ImplRefTraits>;

  using RequestValidator_ = AuthenticatorRequestValidator;
  using ResponseValidator_ = AuthenticatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMakeCredentialMinVersion = 0,
    kGetAssertionMinVersion = 0,
  };
  virtual ~Authenticator() {}


  using MakeCredentialCallback = base::OnceCallback<void(AuthenticatorStatus, MakeCredentialAuthenticatorResponsePtr)>;
  virtual void MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) = 0;


  using GetAssertionCallback = base::OnceCallback<void(AuthenticatorStatus, GetAssertionAuthenticatorResponsePtr)>;
  virtual void GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) = 0;
};
class CONTENT_EXPORT AuthenticatorInterceptorForTesting : public Authenticator {
  virtual Authenticator* GetForwardingInterface() = 0;
  void MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) override;
  void GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) override;
};
class CONTENT_EXPORT AuthenticatorAsyncWaiter {
 public:
  explicit AuthenticatorAsyncWaiter(Authenticator* proxy);
  ~AuthenticatorAsyncWaiter();
  void MakeCredential(
      PublicKeyCredentialCreationOptionsPtr options, AuthenticatorStatus* out_status, MakeCredentialAuthenticatorResponsePtr* out_credential);
  void GetAssertion(
      PublicKeyCredentialRequestOptionsPtr options, AuthenticatorStatus* out_status, GetAssertionAuthenticatorResponsePtr* out_credential);

 private:
  Authenticator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthenticatorAsyncWaiter);
};

class CONTENT_EXPORT AuthenticatorProxy
    : public Authenticator {
 public:
  explicit AuthenticatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) final;
  void GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT AuthenticatorStubDispatch {
 public:
  static bool Accept(Authenticator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Authenticator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Authenticator>>
class AuthenticatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AuthenticatorStub() {}
  ~AuthenticatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthenticatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthenticatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AuthenticatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AuthenticatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class CONTENT_EXPORT PublicKeyCredentialParameters {
 public:
  using DataView = PublicKeyCredentialParametersDataView;
  using Data_ = internal::PublicKeyCredentialParameters_Data;

  template <typename... Args>
  static PublicKeyCredentialParametersPtr New(Args&&... args) {
    return PublicKeyCredentialParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialParametersPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialParameters>::Convert(*this);
  }


  PublicKeyCredentialParameters();

  PublicKeyCredentialParameters(
      PublicKeyCredentialType type,
      int32_t algorithm_identifier);

  ~PublicKeyCredentialParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialParametersPtr>
  PublicKeyCredentialParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialParameters::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialParameters_UnserializedMessageContext<
            UserType, PublicKeyCredentialParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialParameters_UnserializedMessageContext<
            UserType, PublicKeyCredentialParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PublicKeyCredentialType type;
  int32_t algorithm_identifier;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CONTENT_EXPORT AuthenticatorSelectionCriteria {
 public:
  using DataView = AuthenticatorSelectionCriteriaDataView;
  using Data_ = internal::AuthenticatorSelectionCriteria_Data;

  template <typename... Args>
  static AuthenticatorSelectionCriteriaPtr New(Args&&... args) {
    return AuthenticatorSelectionCriteriaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AuthenticatorSelectionCriteriaPtr From(const U& u) {
    return mojo::TypeConverter<AuthenticatorSelectionCriteriaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AuthenticatorSelectionCriteria>::Convert(*this);
  }


  AuthenticatorSelectionCriteria();

  AuthenticatorSelectionCriteria(
      AuthenticatorAttachment authenticator_attachment,
      bool require_resident_key,
      UserVerificationRequirement user_verification);

  ~AuthenticatorSelectionCriteria();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AuthenticatorSelectionCriteriaPtr>
  AuthenticatorSelectionCriteriaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AuthenticatorSelectionCriteria>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AuthenticatorSelectionCriteria::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AuthenticatorSelectionCriteria::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AuthenticatorSelectionCriteria_UnserializedMessageContext<
            UserType, AuthenticatorSelectionCriteria::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AuthenticatorSelectionCriteria::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AuthenticatorSelectionCriteria::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AuthenticatorSelectionCriteria_UnserializedMessageContext<
            UserType, AuthenticatorSelectionCriteria::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AuthenticatorSelectionCriteria::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  AuthenticatorAttachment authenticator_attachment;
  bool require_resident_key;
  UserVerificationRequirement user_verification;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class CONTENT_EXPORT CommonCredentialInfo {
 public:
  using DataView = CommonCredentialInfoDataView;
  using Data_ = internal::CommonCredentialInfo_Data;

  template <typename... Args>
  static CommonCredentialInfoPtr New(Args&&... args) {
    return CommonCredentialInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommonCredentialInfoPtr From(const U& u) {
    return mojo::TypeConverter<CommonCredentialInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommonCredentialInfo>::Convert(*this);
  }


  CommonCredentialInfo();

  CommonCredentialInfo(
      const std::string& id,
      const std::vector<uint8_t>& raw_id,
      const std::vector<uint8_t>& client_data_json);

  ~CommonCredentialInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommonCredentialInfoPtr>
  CommonCredentialInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CommonCredentialInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommonCredentialInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommonCredentialInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommonCredentialInfo_UnserializedMessageContext<
            UserType, CommonCredentialInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CommonCredentialInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CommonCredentialInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommonCredentialInfo_UnserializedMessageContext<
            UserType, CommonCredentialInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommonCredentialInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string id;
  std::vector<uint8_t> raw_id;
  std::vector<uint8_t> client_data_json;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT MakeCredentialAuthenticatorResponse {
 public:
  using DataView = MakeCredentialAuthenticatorResponseDataView;
  using Data_ = internal::MakeCredentialAuthenticatorResponse_Data;

  template <typename... Args>
  static MakeCredentialAuthenticatorResponsePtr New(Args&&... args) {
    return MakeCredentialAuthenticatorResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MakeCredentialAuthenticatorResponsePtr From(const U& u) {
    return mojo::TypeConverter<MakeCredentialAuthenticatorResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MakeCredentialAuthenticatorResponse>::Convert(*this);
  }


  MakeCredentialAuthenticatorResponse();

  MakeCredentialAuthenticatorResponse(
      CommonCredentialInfoPtr info,
      const std::vector<uint8_t>& attestation_object);

  ~MakeCredentialAuthenticatorResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MakeCredentialAuthenticatorResponsePtr>
  MakeCredentialAuthenticatorResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MakeCredentialAuthenticatorResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MakeCredentialAuthenticatorResponse::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MakeCredentialAuthenticatorResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MakeCredentialAuthenticatorResponse_UnserializedMessageContext<
            UserType, MakeCredentialAuthenticatorResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MakeCredentialAuthenticatorResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MakeCredentialAuthenticatorResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MakeCredentialAuthenticatorResponse_UnserializedMessageContext<
            UserType, MakeCredentialAuthenticatorResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MakeCredentialAuthenticatorResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  CommonCredentialInfoPtr info;
  std::vector<uint8_t> attestation_object;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MakeCredentialAuthenticatorResponse);
};


class CONTENT_EXPORT GetAssertionAuthenticatorResponse {
 public:
  using DataView = GetAssertionAuthenticatorResponseDataView;
  using Data_ = internal::GetAssertionAuthenticatorResponse_Data;

  template <typename... Args>
  static GetAssertionAuthenticatorResponsePtr New(Args&&... args) {
    return GetAssertionAuthenticatorResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GetAssertionAuthenticatorResponsePtr From(const U& u) {
    return mojo::TypeConverter<GetAssertionAuthenticatorResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GetAssertionAuthenticatorResponse>::Convert(*this);
  }


  GetAssertionAuthenticatorResponse();

  GetAssertionAuthenticatorResponse(
      CommonCredentialInfoPtr info,
      const std::vector<uint8_t>& authenticator_data,
      const std::vector<uint8_t>& signature,
      const base::Optional<std::vector<uint8_t>>& user_handle,
      bool echo_appid_extension);

  ~GetAssertionAuthenticatorResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GetAssertionAuthenticatorResponsePtr>
  GetAssertionAuthenticatorResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GetAssertionAuthenticatorResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GetAssertionAuthenticatorResponse::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GetAssertionAuthenticatorResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GetAssertionAuthenticatorResponse_UnserializedMessageContext<
            UserType, GetAssertionAuthenticatorResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GetAssertionAuthenticatorResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GetAssertionAuthenticatorResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GetAssertionAuthenticatorResponse_UnserializedMessageContext<
            UserType, GetAssertionAuthenticatorResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GetAssertionAuthenticatorResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  CommonCredentialInfoPtr info;
  std::vector<uint8_t> authenticator_data;
  std::vector<uint8_t> signature;
  base::Optional<std::vector<uint8_t>> user_handle;
  bool echo_appid_extension;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GetAssertionAuthenticatorResponse);
};


class CONTENT_EXPORT PublicKeyCredentialRpEntity {
 public:
  using DataView = PublicKeyCredentialRpEntityDataView;
  using Data_ = internal::PublicKeyCredentialRpEntity_Data;

  template <typename... Args>
  static PublicKeyCredentialRpEntityPtr New(Args&&... args) {
    return PublicKeyCredentialRpEntityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialRpEntityPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialRpEntityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialRpEntity>::Convert(*this);
  }


  PublicKeyCredentialRpEntity();

  PublicKeyCredentialRpEntity(
      const std::string& id,
      const std::string& name,
      const base::Optional<GURL>& icon);

  ~PublicKeyCredentialRpEntity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialRpEntityPtr>
  PublicKeyCredentialRpEntityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialRpEntity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialRpEntity::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialRpEntity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialRpEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialRpEntity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRpEntity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialRpEntity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialRpEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialRpEntity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRpEntity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string id;
  std::string name;
  base::Optional<GURL> icon;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT PublicKeyCredentialUserEntity {
 public:
  using DataView = PublicKeyCredentialUserEntityDataView;
  using Data_ = internal::PublicKeyCredentialUserEntity_Data;

  template <typename... Args>
  static PublicKeyCredentialUserEntityPtr New(Args&&... args) {
    return PublicKeyCredentialUserEntityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialUserEntityPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialUserEntityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialUserEntity>::Convert(*this);
  }


  PublicKeyCredentialUserEntity();

  PublicKeyCredentialUserEntity(
      const std::vector<uint8_t>& id,
      const std::string& name,
      const base::Optional<GURL>& icon,
      const std::string& display_name);

  ~PublicKeyCredentialUserEntity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialUserEntityPtr>
  PublicKeyCredentialUserEntityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialUserEntity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialUserEntity::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialUserEntity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialUserEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialUserEntity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialUserEntity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialUserEntity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialUserEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialUserEntity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialUserEntity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint8_t> id;
  std::string name;
  base::Optional<GURL> icon;
  std::string display_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class CONTENT_EXPORT CableAuthentication {
 public:
  using DataView = CableAuthenticationDataView;
  using Data_ = internal::CableAuthentication_Data;

  template <typename... Args>
  static CableAuthenticationPtr New(Args&&... args) {
    return CableAuthenticationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CableAuthenticationPtr From(const U& u) {
    return mojo::TypeConverter<CableAuthenticationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CableAuthentication>::Convert(*this);
  }


  CableAuthentication();

  CableAuthentication(
      int32_t version,
      const std::vector<uint8_t>& client_eid,
      const std::vector<uint8_t>& authenticator_eid,
      const std::vector<uint8_t>& session_pre_key);

  ~CableAuthentication();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CableAuthenticationPtr>
  CableAuthenticationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CableAuthentication>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CableAuthentication::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CableAuthentication::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CableAuthentication_UnserializedMessageContext<
            UserType, CableAuthentication::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CableAuthentication::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CableAuthentication::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CableAuthentication_UnserializedMessageContext<
            UserType, CableAuthentication::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CableAuthentication::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t version;
  std::vector<uint8_t> client_eid;
  std::vector<uint8_t> authenticator_eid;
  std::vector<uint8_t> session_pre_key;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT CableRegistration {
 public:
  using DataView = CableRegistrationDataView;
  using Data_ = internal::CableRegistration_Data;

  template <typename... Args>
  static CableRegistrationPtr New(Args&&... args) {
    return CableRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CableRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<CableRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CableRegistration>::Convert(*this);
  }


  CableRegistration();

  CableRegistration(
      int32_t version,
      const std::vector<uint8_t>& relying_party_public_key);

  ~CableRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CableRegistrationPtr>
  CableRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CableRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CableRegistration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CableRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CableRegistration_UnserializedMessageContext<
            UserType, CableRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CableRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CableRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CableRegistration_UnserializedMessageContext<
            UserType, CableRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CableRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t version;
  std::vector<uint8_t> relying_party_public_key;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT PublicKeyCredentialRequestOptions {
 public:
  using DataView = PublicKeyCredentialRequestOptionsDataView;
  using Data_ = internal::PublicKeyCredentialRequestOptions_Data;

  template <typename... Args>
  static PublicKeyCredentialRequestOptionsPtr New(Args&&... args) {
    return PublicKeyCredentialRequestOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialRequestOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialRequestOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialRequestOptions>::Convert(*this);
  }


  PublicKeyCredentialRequestOptions();

  PublicKeyCredentialRequestOptions(
      const std::vector<uint8_t>& challenge,
      base::TimeDelta adjusted_timeout,
      const std::string& relying_party_id,
      std::vector<PublicKeyCredentialDescriptorPtr> allow_credentials,
      UserVerificationRequirement user_verification,
      const base::Optional<std::string>& appid,
      std::vector<CableAuthenticationPtr> cable_authentication_data);

  ~PublicKeyCredentialRequestOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialRequestOptionsPtr>
  PublicKeyCredentialRequestOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialRequestOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialRequestOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialRequestOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialRequestOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialRequestOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRequestOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialRequestOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialRequestOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialRequestOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRequestOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint8_t> challenge;
  base::TimeDelta adjusted_timeout;
  std::string relying_party_id;
  std::vector<PublicKeyCredentialDescriptorPtr> allow_credentials;
  UserVerificationRequirement user_verification;
  base::Optional<std::string> appid;
  std::vector<CableAuthenticationPtr> cable_authentication_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PublicKeyCredentialRequestOptions);
};



class CONTENT_EXPORT PublicKeyCredentialCreationOptions {
 public:
  using DataView = PublicKeyCredentialCreationOptionsDataView;
  using Data_ = internal::PublicKeyCredentialCreationOptions_Data;

  template <typename... Args>
  static PublicKeyCredentialCreationOptionsPtr New(Args&&... args) {
    return PublicKeyCredentialCreationOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialCreationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialCreationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialCreationOptions>::Convert(*this);
  }


  PublicKeyCredentialCreationOptions();

  PublicKeyCredentialCreationOptions(
      PublicKeyCredentialRpEntityPtr relying_party,
      PublicKeyCredentialUserEntityPtr user,
      const std::vector<uint8_t>& challenge,
      std::vector<PublicKeyCredentialParametersPtr> public_key_parameters,
      base::TimeDelta adjusted_timeout,
      std::vector<PublicKeyCredentialDescriptorPtr> exclude_credentials,
      AuthenticatorSelectionCriteriaPtr authenticator_selection,
      AttestationConveyancePreference attestation,
      CableRegistrationPtr cable_registration_data);

  ~PublicKeyCredentialCreationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialCreationOptionsPtr>
  PublicKeyCredentialCreationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialCreationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialCreationOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialCreationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialCreationOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialCreationOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialCreationOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialCreationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialCreationOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialCreationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialCreationOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PublicKeyCredentialRpEntityPtr relying_party;
  PublicKeyCredentialUserEntityPtr user;
  std::vector<uint8_t> challenge;
  std::vector<PublicKeyCredentialParametersPtr> public_key_parameters;
  base::TimeDelta adjusted_timeout;
  std::vector<PublicKeyCredentialDescriptorPtr> exclude_credentials;
  AuthenticatorSelectionCriteriaPtr authenticator_selection;
  AttestationConveyancePreference attestation;
  CableRegistrationPtr cable_registration_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PublicKeyCredentialCreationOptions);
};


class CONTENT_EXPORT PublicKeyCredentialDescriptor {
 public:
  using DataView = PublicKeyCredentialDescriptorDataView;
  using Data_ = internal::PublicKeyCredentialDescriptor_Data;

  template <typename... Args>
  static PublicKeyCredentialDescriptorPtr New(Args&&... args) {
    return PublicKeyCredentialDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialDescriptor>::Convert(*this);
  }


  PublicKeyCredentialDescriptor();

  PublicKeyCredentialDescriptor(
      PublicKeyCredentialType type,
      const std::vector<uint8_t>& id,
      const std::vector<AuthenticatorTransport>& transports);

  ~PublicKeyCredentialDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialDescriptorPtr>
  PublicKeyCredentialDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialDescriptor_UnserializedMessageContext<
            UserType, PublicKeyCredentialDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialDescriptor_UnserializedMessageContext<
            UserType, PublicKeyCredentialDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PublicKeyCredentialType type;
  std::vector<uint8_t> id;
  std::vector<AuthenticatorTransport> transports;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CommonCredentialInfoPtr CommonCredentialInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(raw_id),
      mojo::Clone(client_data_json)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CommonCredentialInfo>::value>::type*>
bool CommonCredentialInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->raw_id, other_struct.raw_id))
    return false;
  if (!mojo::Equals(this->client_data_json, other_struct.client_data_json))
    return false;
  return true;
}
template <typename StructPtrType>
MakeCredentialAuthenticatorResponsePtr MakeCredentialAuthenticatorResponse::Clone() const {
  return New(
      mojo::Clone(info),
      mojo::Clone(attestation_object)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MakeCredentialAuthenticatorResponse>::value>::type*>
bool MakeCredentialAuthenticatorResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->info, other_struct.info))
    return false;
  if (!mojo::Equals(this->attestation_object, other_struct.attestation_object))
    return false;
  return true;
}
template <typename StructPtrType>
GetAssertionAuthenticatorResponsePtr GetAssertionAuthenticatorResponse::Clone() const {
  return New(
      mojo::Clone(info),
      mojo::Clone(authenticator_data),
      mojo::Clone(signature),
      mojo::Clone(user_handle),
      mojo::Clone(echo_appid_extension)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GetAssertionAuthenticatorResponse>::value>::type*>
bool GetAssertionAuthenticatorResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->info, other_struct.info))
    return false;
  if (!mojo::Equals(this->authenticator_data, other_struct.authenticator_data))
    return false;
  if (!mojo::Equals(this->signature, other_struct.signature))
    return false;
  if (!mojo::Equals(this->user_handle, other_struct.user_handle))
    return false;
  if (!mojo::Equals(this->echo_appid_extension, other_struct.echo_appid_extension))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialRpEntityPtr PublicKeyCredentialRpEntity::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(icon)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialRpEntity>::value>::type*>
bool PublicKeyCredentialRpEntity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialUserEntityPtr PublicKeyCredentialUserEntity::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(icon),
      mojo::Clone(display_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialUserEntity>::value>::type*>
bool PublicKeyCredentialUserEntity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialParametersPtr PublicKeyCredentialParameters::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(algorithm_identifier)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialParameters>::value>::type*>
bool PublicKeyCredentialParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->algorithm_identifier, other_struct.algorithm_identifier))
    return false;
  return true;
}
template <typename StructPtrType>
CableAuthenticationPtr CableAuthentication::Clone() const {
  return New(
      mojo::Clone(version),
      mojo::Clone(client_eid),
      mojo::Clone(authenticator_eid),
      mojo::Clone(session_pre_key)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CableAuthentication>::value>::type*>
bool CableAuthentication::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->client_eid, other_struct.client_eid))
    return false;
  if (!mojo::Equals(this->authenticator_eid, other_struct.authenticator_eid))
    return false;
  if (!mojo::Equals(this->session_pre_key, other_struct.session_pre_key))
    return false;
  return true;
}
template <typename StructPtrType>
CableRegistrationPtr CableRegistration::Clone() const {
  return New(
      mojo::Clone(version),
      mojo::Clone(relying_party_public_key)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CableRegistration>::value>::type*>
bool CableRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->relying_party_public_key, other_struct.relying_party_public_key))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialRequestOptionsPtr PublicKeyCredentialRequestOptions::Clone() const {
  return New(
      mojo::Clone(challenge),
      mojo::Clone(adjusted_timeout),
      mojo::Clone(relying_party_id),
      mojo::Clone(allow_credentials),
      mojo::Clone(user_verification),
      mojo::Clone(appid),
      mojo::Clone(cable_authentication_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialRequestOptions>::value>::type*>
bool PublicKeyCredentialRequestOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->challenge, other_struct.challenge))
    return false;
  if (!mojo::Equals(this->adjusted_timeout, other_struct.adjusted_timeout))
    return false;
  if (!mojo::Equals(this->relying_party_id, other_struct.relying_party_id))
    return false;
  if (!mojo::Equals(this->allow_credentials, other_struct.allow_credentials))
    return false;
  if (!mojo::Equals(this->user_verification, other_struct.user_verification))
    return false;
  if (!mojo::Equals(this->appid, other_struct.appid))
    return false;
  if (!mojo::Equals(this->cable_authentication_data, other_struct.cable_authentication_data))
    return false;
  return true;
}
template <typename StructPtrType>
AuthenticatorSelectionCriteriaPtr AuthenticatorSelectionCriteria::Clone() const {
  return New(
      mojo::Clone(authenticator_attachment),
      mojo::Clone(require_resident_key),
      mojo::Clone(user_verification)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AuthenticatorSelectionCriteria>::value>::type*>
bool AuthenticatorSelectionCriteria::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->authenticator_attachment, other_struct.authenticator_attachment))
    return false;
  if (!mojo::Equals(this->require_resident_key, other_struct.require_resident_key))
    return false;
  if (!mojo::Equals(this->user_verification, other_struct.user_verification))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialCreationOptionsPtr PublicKeyCredentialCreationOptions::Clone() const {
  return New(
      mojo::Clone(relying_party),
      mojo::Clone(user),
      mojo::Clone(challenge),
      mojo::Clone(public_key_parameters),
      mojo::Clone(adjusted_timeout),
      mojo::Clone(exclude_credentials),
      mojo::Clone(authenticator_selection),
      mojo::Clone(attestation),
      mojo::Clone(cable_registration_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialCreationOptions>::value>::type*>
bool PublicKeyCredentialCreationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->relying_party, other_struct.relying_party))
    return false;
  if (!mojo::Equals(this->user, other_struct.user))
    return false;
  if (!mojo::Equals(this->challenge, other_struct.challenge))
    return false;
  if (!mojo::Equals(this->public_key_parameters, other_struct.public_key_parameters))
    return false;
  if (!mojo::Equals(this->adjusted_timeout, other_struct.adjusted_timeout))
    return false;
  if (!mojo::Equals(this->exclude_credentials, other_struct.exclude_credentials))
    return false;
  if (!mojo::Equals(this->authenticator_selection, other_struct.authenticator_selection))
    return false;
  if (!mojo::Equals(this->attestation, other_struct.attestation))
    return false;
  if (!mojo::Equals(this->cable_registration_data, other_struct.cable_registration_data))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialDescriptorPtr PublicKeyCredentialDescriptor::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id),
      mojo::Clone(transports)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialDescriptor>::value>::type*>
bool PublicKeyCredentialDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->transports, other_struct.transports))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace webauth

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::CommonCredentialInfo::DataView,
                                         ::webauth::mojom::CommonCredentialInfoPtr> {
  static bool IsNull(const ::webauth::mojom::CommonCredentialInfoPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::CommonCredentialInfoPtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::CommonCredentialInfo::id)& id(
      const ::webauth::mojom::CommonCredentialInfoPtr& input) {
    return input->id;
  }

  static const decltype(::webauth::mojom::CommonCredentialInfo::raw_id)& raw_id(
      const ::webauth::mojom::CommonCredentialInfoPtr& input) {
    return input->raw_id;
  }

  static const decltype(::webauth::mojom::CommonCredentialInfo::client_data_json)& client_data_json(
      const ::webauth::mojom::CommonCredentialInfoPtr& input) {
    return input->client_data_json;
  }

  static bool Read(::webauth::mojom::CommonCredentialInfo::DataView input, ::webauth::mojom::CommonCredentialInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::MakeCredentialAuthenticatorResponse::DataView,
                                         ::webauth::mojom::MakeCredentialAuthenticatorResponsePtr> {
  static bool IsNull(const ::webauth::mojom::MakeCredentialAuthenticatorResponsePtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::MakeCredentialAuthenticatorResponsePtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::MakeCredentialAuthenticatorResponse::info)& info(
      const ::webauth::mojom::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->info;
  }

  static const decltype(::webauth::mojom::MakeCredentialAuthenticatorResponse::attestation_object)& attestation_object(
      const ::webauth::mojom::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->attestation_object;
  }

  static bool Read(::webauth::mojom::MakeCredentialAuthenticatorResponse::DataView input, ::webauth::mojom::MakeCredentialAuthenticatorResponsePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::GetAssertionAuthenticatorResponse::DataView,
                                         ::webauth::mojom::GetAssertionAuthenticatorResponsePtr> {
  static bool IsNull(const ::webauth::mojom::GetAssertionAuthenticatorResponsePtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::GetAssertionAuthenticatorResponsePtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::GetAssertionAuthenticatorResponse::info)& info(
      const ::webauth::mojom::GetAssertionAuthenticatorResponsePtr& input) {
    return input->info;
  }

  static const decltype(::webauth::mojom::GetAssertionAuthenticatorResponse::authenticator_data)& authenticator_data(
      const ::webauth::mojom::GetAssertionAuthenticatorResponsePtr& input) {
    return input->authenticator_data;
  }

  static const decltype(::webauth::mojom::GetAssertionAuthenticatorResponse::signature)& signature(
      const ::webauth::mojom::GetAssertionAuthenticatorResponsePtr& input) {
    return input->signature;
  }

  static const decltype(::webauth::mojom::GetAssertionAuthenticatorResponse::user_handle)& user_handle(
      const ::webauth::mojom::GetAssertionAuthenticatorResponsePtr& input) {
    return input->user_handle;
  }

  static decltype(::webauth::mojom::GetAssertionAuthenticatorResponse::echo_appid_extension) echo_appid_extension(
      const ::webauth::mojom::GetAssertionAuthenticatorResponsePtr& input) {
    return input->echo_appid_extension;
  }

  static bool Read(::webauth::mojom::GetAssertionAuthenticatorResponse::DataView input, ::webauth::mojom::GetAssertionAuthenticatorResponsePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::PublicKeyCredentialRpEntity::DataView,
                                         ::webauth::mojom::PublicKeyCredentialRpEntityPtr> {
  static bool IsNull(const ::webauth::mojom::PublicKeyCredentialRpEntityPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::PublicKeyCredentialRpEntityPtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::PublicKeyCredentialRpEntity::id)& id(
      const ::webauth::mojom::PublicKeyCredentialRpEntityPtr& input) {
    return input->id;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRpEntity::name)& name(
      const ::webauth::mojom::PublicKeyCredentialRpEntityPtr& input) {
    return input->name;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRpEntity::icon)& icon(
      const ::webauth::mojom::PublicKeyCredentialRpEntityPtr& input) {
    return input->icon;
  }

  static bool Read(::webauth::mojom::PublicKeyCredentialRpEntity::DataView input, ::webauth::mojom::PublicKeyCredentialRpEntityPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::PublicKeyCredentialUserEntity::DataView,
                                         ::webauth::mojom::PublicKeyCredentialUserEntityPtr> {
  static bool IsNull(const ::webauth::mojom::PublicKeyCredentialUserEntityPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::PublicKeyCredentialUserEntityPtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::PublicKeyCredentialUserEntity::id)& id(
      const ::webauth::mojom::PublicKeyCredentialUserEntityPtr& input) {
    return input->id;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialUserEntity::name)& name(
      const ::webauth::mojom::PublicKeyCredentialUserEntityPtr& input) {
    return input->name;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialUserEntity::icon)& icon(
      const ::webauth::mojom::PublicKeyCredentialUserEntityPtr& input) {
    return input->icon;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialUserEntity::display_name)& display_name(
      const ::webauth::mojom::PublicKeyCredentialUserEntityPtr& input) {
    return input->display_name;
  }

  static bool Read(::webauth::mojom::PublicKeyCredentialUserEntity::DataView input, ::webauth::mojom::PublicKeyCredentialUserEntityPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::PublicKeyCredentialParameters::DataView,
                                         ::webauth::mojom::PublicKeyCredentialParametersPtr> {
  static bool IsNull(const ::webauth::mojom::PublicKeyCredentialParametersPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::PublicKeyCredentialParametersPtr* output) { output->reset(); }

  static decltype(::webauth::mojom::PublicKeyCredentialParameters::type) type(
      const ::webauth::mojom::PublicKeyCredentialParametersPtr& input) {
    return input->type;
  }

  static decltype(::webauth::mojom::PublicKeyCredentialParameters::algorithm_identifier) algorithm_identifier(
      const ::webauth::mojom::PublicKeyCredentialParametersPtr& input) {
    return input->algorithm_identifier;
  }

  static bool Read(::webauth::mojom::PublicKeyCredentialParameters::DataView input, ::webauth::mojom::PublicKeyCredentialParametersPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::CableAuthentication::DataView,
                                         ::webauth::mojom::CableAuthenticationPtr> {
  static bool IsNull(const ::webauth::mojom::CableAuthenticationPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::CableAuthenticationPtr* output) { output->reset(); }

  static decltype(::webauth::mojom::CableAuthentication::version) version(
      const ::webauth::mojom::CableAuthenticationPtr& input) {
    return input->version;
  }

  static const decltype(::webauth::mojom::CableAuthentication::client_eid)& client_eid(
      const ::webauth::mojom::CableAuthenticationPtr& input) {
    return input->client_eid;
  }

  static const decltype(::webauth::mojom::CableAuthentication::authenticator_eid)& authenticator_eid(
      const ::webauth::mojom::CableAuthenticationPtr& input) {
    return input->authenticator_eid;
  }

  static const decltype(::webauth::mojom::CableAuthentication::session_pre_key)& session_pre_key(
      const ::webauth::mojom::CableAuthenticationPtr& input) {
    return input->session_pre_key;
  }

  static bool Read(::webauth::mojom::CableAuthentication::DataView input, ::webauth::mojom::CableAuthenticationPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::CableRegistration::DataView,
                                         ::webauth::mojom::CableRegistrationPtr> {
  static bool IsNull(const ::webauth::mojom::CableRegistrationPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::CableRegistrationPtr* output) { output->reset(); }

  static decltype(::webauth::mojom::CableRegistration::version) version(
      const ::webauth::mojom::CableRegistrationPtr& input) {
    return input->version;
  }

  static const decltype(::webauth::mojom::CableRegistration::relying_party_public_key)& relying_party_public_key(
      const ::webauth::mojom::CableRegistrationPtr& input) {
    return input->relying_party_public_key;
  }

  static bool Read(::webauth::mojom::CableRegistration::DataView input, ::webauth::mojom::CableRegistrationPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::PublicKeyCredentialRequestOptions::DataView,
                                         ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr> {
  static bool IsNull(const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::PublicKeyCredentialRequestOptionsPtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::challenge)& challenge(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->challenge;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::adjusted_timeout)& adjusted_timeout(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->adjusted_timeout;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::relying_party_id)& relying_party_id(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->relying_party_id;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::allow_credentials)& allow_credentials(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->allow_credentials;
  }

  static decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::user_verification) user_verification(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->user_verification;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::appid)& appid(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->appid;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialRequestOptions::cable_authentication_data)& cable_authentication_data(
      const ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->cable_authentication_data;
  }

  static bool Read(::webauth::mojom::PublicKeyCredentialRequestOptions::DataView input, ::webauth::mojom::PublicKeyCredentialRequestOptionsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::AuthenticatorSelectionCriteria::DataView,
                                         ::webauth::mojom::AuthenticatorSelectionCriteriaPtr> {
  static bool IsNull(const ::webauth::mojom::AuthenticatorSelectionCriteriaPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::AuthenticatorSelectionCriteriaPtr* output) { output->reset(); }

  static decltype(::webauth::mojom::AuthenticatorSelectionCriteria::authenticator_attachment) authenticator_attachment(
      const ::webauth::mojom::AuthenticatorSelectionCriteriaPtr& input) {
    return input->authenticator_attachment;
  }

  static decltype(::webauth::mojom::AuthenticatorSelectionCriteria::require_resident_key) require_resident_key(
      const ::webauth::mojom::AuthenticatorSelectionCriteriaPtr& input) {
    return input->require_resident_key;
  }

  static decltype(::webauth::mojom::AuthenticatorSelectionCriteria::user_verification) user_verification(
      const ::webauth::mojom::AuthenticatorSelectionCriteriaPtr& input) {
    return input->user_verification;
  }

  static bool Read(::webauth::mojom::AuthenticatorSelectionCriteria::DataView input, ::webauth::mojom::AuthenticatorSelectionCriteriaPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::PublicKeyCredentialCreationOptions::DataView,
                                         ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr> {
  static bool IsNull(const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::PublicKeyCredentialCreationOptionsPtr* output) { output->reset(); }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::relying_party)& relying_party(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->relying_party;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::user)& user(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->user;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::challenge)& challenge(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->challenge;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::public_key_parameters)& public_key_parameters(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->public_key_parameters;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::adjusted_timeout)& adjusted_timeout(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->adjusted_timeout;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::exclude_credentials)& exclude_credentials(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->exclude_credentials;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::authenticator_selection)& authenticator_selection(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->authenticator_selection;
  }

  static decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::attestation) attestation(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->attestation;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialCreationOptions::cable_registration_data)& cable_registration_data(
      const ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->cable_registration_data;
  }

  static bool Read(::webauth::mojom::PublicKeyCredentialCreationOptions::DataView input, ::webauth::mojom::PublicKeyCredentialCreationOptionsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::webauth::mojom::PublicKeyCredentialDescriptor::DataView,
                                         ::webauth::mojom::PublicKeyCredentialDescriptorPtr> {
  static bool IsNull(const ::webauth::mojom::PublicKeyCredentialDescriptorPtr& input) { return !input; }
  static void SetToNull(::webauth::mojom::PublicKeyCredentialDescriptorPtr* output) { output->reset(); }

  static decltype(::webauth::mojom::PublicKeyCredentialDescriptor::type) type(
      const ::webauth::mojom::PublicKeyCredentialDescriptorPtr& input) {
    return input->type;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialDescriptor::id)& id(
      const ::webauth::mojom::PublicKeyCredentialDescriptorPtr& input) {
    return input->id;
  }

  static const decltype(::webauth::mojom::PublicKeyCredentialDescriptor::transports)& transports(
      const ::webauth::mojom::PublicKeyCredentialDescriptorPtr& input) {
    return input->transports;
  }

  static bool Read(::webauth::mojom::PublicKeyCredentialDescriptor::DataView input, ::webauth::mojom::PublicKeyCredentialDescriptorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_H_