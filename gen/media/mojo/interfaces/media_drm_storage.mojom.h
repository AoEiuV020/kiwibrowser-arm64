// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_H_

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
#include "media/mojo/interfaces/media_drm_storage.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
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


namespace media {
namespace mojom {
class MediaDrmStorage;
using MediaDrmStoragePtr = mojo::InterfacePtr<MediaDrmStorage>;
using MediaDrmStoragePtrInfo = mojo::InterfacePtrInfo<MediaDrmStorage>;
using ThreadSafeMediaDrmStoragePtr =
    mojo::ThreadSafeInterfacePtr<MediaDrmStorage>;
using MediaDrmStorageRequest = mojo::InterfaceRequest<MediaDrmStorage>;
using MediaDrmStorageAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDrmStorage>;
using ThreadSafeMediaDrmStorageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDrmStorage>;
using MediaDrmStorageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDrmStorage>;
using MediaDrmStorageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDrmStorage>;

class SessionData;
using SessionDataPtr = mojo::StructPtr<SessionData>;


class MediaDrmStorageProxy;

template <typename ImplRefTraits>
class MediaDrmStorageStub;

class MediaDrmStorageRequestValidator;
class MediaDrmStorageResponseValidator;

class  MediaDrmStorage
    : public MediaDrmStorageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaDrmStorageProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDrmStorageStub<ImplRefTraits>;

  using RequestValidator_ = MediaDrmStorageRequestValidator;
  using ResponseValidator_ = MediaDrmStorageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kOnProvisionedMinVersion = 0,
    kSavePersistentSessionMinVersion = 0,
    kLoadPersistentSessionMinVersion = 0,
    kRemovePersistentSessionMinVersion = 0,
  };
  virtual ~MediaDrmStorage() {}


  using InitializeCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  virtual void Initialize(InitializeCallback callback) = 0;


  using OnProvisionedCallback = base::OnceCallback<void(bool)>;
  virtual void OnProvisioned(OnProvisionedCallback callback) = 0;


  using SavePersistentSessionCallback = base::OnceCallback<void(bool)>;
  virtual void SavePersistentSession(const std::string& session_id, SessionDataPtr session_data, SavePersistentSessionCallback callback) = 0;


  using LoadPersistentSessionCallback = base::OnceCallback<void(SessionDataPtr)>;
  virtual void LoadPersistentSession(const std::string& session_id, LoadPersistentSessionCallback callback) = 0;


  using RemovePersistentSessionCallback = base::OnceCallback<void(bool)>;
  virtual void RemovePersistentSession(const std::string& session_id, RemovePersistentSessionCallback callback) = 0;
};
class  MediaDrmStorageInterceptorForTesting : public MediaDrmStorage {
  virtual MediaDrmStorage* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void OnProvisioned(OnProvisionedCallback callback) override;
  void SavePersistentSession(const std::string& session_id, SessionDataPtr session_data, SavePersistentSessionCallback callback) override;
  void LoadPersistentSession(const std::string& session_id, LoadPersistentSessionCallback callback) override;
  void RemovePersistentSession(const std::string& session_id, RemovePersistentSessionCallback callback) override;
};
class  MediaDrmStorageAsyncWaiter {
 public:
  explicit MediaDrmStorageAsyncWaiter(MediaDrmStorage* proxy);
  ~MediaDrmStorageAsyncWaiter();
  void Initialize(
      base::UnguessableToken* out_origin_id);
  void OnProvisioned(
      bool* out_success);
  void SavePersistentSession(
      const std::string& session_id, SessionDataPtr session_data, bool* out_success);
  void LoadPersistentSession(
      const std::string& session_id, SessionDataPtr* out_session_data);
  void RemovePersistentSession(
      const std::string& session_id, bool* out_success);

 private:
  MediaDrmStorage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorageAsyncWaiter);
};

class  MediaDrmStorageProxy
    : public MediaDrmStorage {
 public:
  explicit MediaDrmStorageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(InitializeCallback callback) final;
  void OnProvisioned(OnProvisionedCallback callback) final;
  void SavePersistentSession(const std::string& session_id, SessionDataPtr session_data, SavePersistentSessionCallback callback) final;
  void LoadPersistentSession(const std::string& session_id, LoadPersistentSessionCallback callback) final;
  void RemovePersistentSession(const std::string& session_id, RemovePersistentSessionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaDrmStorageStubDispatch {
 public:
  static bool Accept(MediaDrmStorage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDrmStorage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDrmStorage>>
class MediaDrmStorageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDrmStorageStub() {}
  ~MediaDrmStorageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDrmStorageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDrmStorageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaDrmStorageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaDrmStorageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  SessionData {
 public:
  using DataView = SessionDataDataView;
  using Data_ = internal::SessionData_Data;

  template <typename... Args>
  static SessionDataPtr New(Args&&... args) {
    return SessionDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SessionDataPtr From(const U& u) {
    return mojo::TypeConverter<SessionDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SessionData>::Convert(*this);
  }


  SessionData();

  SessionData(
      const std::vector<uint8_t>& key_set_id,
      const std::string& mime_type);

  ~SessionData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SessionDataPtr>
  SessionDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SessionData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SessionData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SessionData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SessionData_UnserializedMessageContext<
            UserType, SessionData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SessionData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SessionData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SessionData_UnserializedMessageContext<
            UserType, SessionData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SessionData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<uint8_t> key_set_id;
  std::string mime_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SessionDataPtr SessionData::Clone() const {
  return New(
      mojo::Clone(key_set_id),
      mojo::Clone(mime_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SessionData>::value>::type*>
bool SessionData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key_set_id, other_struct.key_set_id))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::SessionData::DataView,
                                         ::media::mojom::SessionDataPtr> {
  static bool IsNull(const ::media::mojom::SessionDataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::SessionDataPtr* output) { output->reset(); }

  static const decltype(::media::mojom::SessionData::key_set_id)& key_set_id(
      const ::media::mojom::SessionDataPtr& input) {
    return input->key_set_id;
  }

  static const decltype(::media::mojom::SessionData::mime_type)& mime_type(
      const ::media::mojom::SessionDataPtr& input) {
    return input->mime_type;
  }

  static bool Read(::media::mojom::SessionData::DataView input, ::media::mojom::SessionDataPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_DRM_STORAGE_MOJOM_H_