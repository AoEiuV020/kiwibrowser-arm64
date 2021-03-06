// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "media/mojo/interfaces/media_drm_storage.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "media/mojo/interfaces/media_drm_storage.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace media {
namespace mojom {
namespace blink {
SessionData::SessionData()
    : key_set_id(),
      mime_type() {}

SessionData::SessionData(
    const WTF::Vector<uint8_t>& key_set_id_in,
    const WTF::String& mime_type_in)
    : key_set_id(std::move(key_set_id_in)),
      mime_type(std::move(mime_type_in)) {}

SessionData::~SessionData() = default;

bool SessionData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaDrmStorage::Name_[] = "media.mojom.MediaDrmStorage";

class MediaDrmStorage_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDrmStorage_Initialize_ForwardToCallback(
      MediaDrmStorage::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDrmStorage::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_Initialize_ForwardToCallback);
};

class MediaDrmStorage_OnProvisioned_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDrmStorage_OnProvisioned_ForwardToCallback(
      MediaDrmStorage::OnProvisionedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDrmStorage::OnProvisionedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_OnProvisioned_ForwardToCallback);
};

class MediaDrmStorage_SavePersistentSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDrmStorage_SavePersistentSession_ForwardToCallback(
      MediaDrmStorage::SavePersistentSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDrmStorage::SavePersistentSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_SavePersistentSession_ForwardToCallback);
};

class MediaDrmStorage_LoadPersistentSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDrmStorage_LoadPersistentSession_ForwardToCallback(
      MediaDrmStorage::LoadPersistentSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDrmStorage::LoadPersistentSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_LoadPersistentSession_ForwardToCallback);
};

class MediaDrmStorage_RemovePersistentSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDrmStorage_RemovePersistentSession_ForwardToCallback(
      MediaDrmStorage::RemovePersistentSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDrmStorage::RemovePersistentSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_RemovePersistentSession_ForwardToCallback);
};

MediaDrmStorageProxy::MediaDrmStorageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaDrmStorageProxy::Initialize(
    InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaDrmStorage::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDrmStorage_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDrmStorageProxy::OnProvisioned(
    OnProvisionedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaDrmStorage::OnProvisioned");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_OnProvisioned_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_OnProvisioned_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDrmStorage_OnProvisioned_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDrmStorageProxy::SavePersistentSession(
    const WTF::String& in_session_id, SessionDataPtr in_session_data, SavePersistentSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaDrmStorage::SavePersistentSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_SavePersistentSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_SavePersistentSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in MediaDrmStorage.SavePersistentSession request");
  typename decltype(params->session_data)::BaseType::BufferWriter
      session_data_writer;
  mojo::internal::Serialize<::media::mojom::SessionDataDataView>(
      in_session_data, buffer, &session_data_writer, &serialization_context);
  params->session_data.Set(
      session_data_writer.is_null() ? nullptr : session_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_data in MediaDrmStorage.SavePersistentSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDrmStorage_SavePersistentSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDrmStorageProxy::LoadPersistentSession(
    const WTF::String& in_session_id, LoadPersistentSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaDrmStorage::LoadPersistentSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_LoadPersistentSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_LoadPersistentSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in MediaDrmStorage.LoadPersistentSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDrmStorage_LoadPersistentSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDrmStorageProxy::RemovePersistentSession(
    const WTF::String& in_session_id, RemovePersistentSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaDrmStorage::RemovePersistentSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_RemovePersistentSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_RemovePersistentSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in MediaDrmStorage.RemovePersistentSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDrmStorage_RemovePersistentSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaDrmStorage_Initialize_ProxyToResponder {
 public:
  static MediaDrmStorage::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDrmStorage_Initialize_ProxyToResponder> proxy(
        new MediaDrmStorage_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDrmStorage_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDrmStorage_Initialize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaDrmStorage_Initialize_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaDrmStorage::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::mojo_base::mojom::blink::UnguessableTokenPtr in_origin_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_Initialize_ProxyToResponder);
};

bool MediaDrmStorage_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaDrmStorage::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDrmStorage_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDrmStorage_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::mojo_base::mojom::blink::UnguessableTokenPtr p_origin_id{};
  MediaDrmStorage_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadOriginId(&p_origin_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaDrmStorage::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_origin_id));
  return true;
}

void MediaDrmStorage_Initialize_ProxyToResponder::Run(
    ::mojo_base::mojom::blink::UnguessableTokenPtr in_origin_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin_id)::BaseType::BufferWriter
      origin_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_origin_id, buffer, &origin_id_writer, &serialization_context);
  params->origin_id.Set(
      origin_id_writer.is_null() ? nullptr : origin_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDrmStorage_OnProvisioned_ProxyToResponder {
 public:
  static MediaDrmStorage::OnProvisionedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDrmStorage_OnProvisioned_ProxyToResponder> proxy(
        new MediaDrmStorage_OnProvisioned_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDrmStorage_OnProvisioned_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDrmStorage_OnProvisioned_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaDrmStorage_OnProvisioned_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaDrmStorage::OnProvisionedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_OnProvisioned_ProxyToResponder);
};

bool MediaDrmStorage_OnProvisioned_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaDrmStorage::OnProvisionedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDrmStorage_OnProvisioned_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDrmStorage_OnProvisioned_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  MediaDrmStorage_OnProvisioned_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaDrmStorage::OnProvisioned response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void MediaDrmStorage_OnProvisioned_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_OnProvisioned_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_OnProvisioned_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::OnProvisionedCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDrmStorage_SavePersistentSession_ProxyToResponder {
 public:
  static MediaDrmStorage::SavePersistentSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDrmStorage_SavePersistentSession_ProxyToResponder> proxy(
        new MediaDrmStorage_SavePersistentSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDrmStorage_SavePersistentSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDrmStorage_SavePersistentSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaDrmStorage_SavePersistentSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaDrmStorage::SavePersistentSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_SavePersistentSession_ProxyToResponder);
};

bool MediaDrmStorage_SavePersistentSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaDrmStorage::SavePersistentSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDrmStorage_SavePersistentSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDrmStorage_SavePersistentSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  MediaDrmStorage_SavePersistentSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaDrmStorage::SavePersistentSession response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void MediaDrmStorage_SavePersistentSession_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_SavePersistentSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_SavePersistentSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::SavePersistentSessionCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDrmStorage_LoadPersistentSession_ProxyToResponder {
 public:
  static MediaDrmStorage::LoadPersistentSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDrmStorage_LoadPersistentSession_ProxyToResponder> proxy(
        new MediaDrmStorage_LoadPersistentSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDrmStorage_LoadPersistentSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDrmStorage_LoadPersistentSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaDrmStorage_LoadPersistentSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaDrmStorage::LoadPersistentSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SessionDataPtr in_session_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_LoadPersistentSession_ProxyToResponder);
};

bool MediaDrmStorage_LoadPersistentSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaDrmStorage::LoadPersistentSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDrmStorage_LoadPersistentSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDrmStorage_LoadPersistentSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SessionDataPtr p_session_data{};
  MediaDrmStorage_LoadPersistentSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSessionData(&p_session_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaDrmStorage::LoadPersistentSession response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_session_data));
  return true;
}

void MediaDrmStorage_LoadPersistentSession_ProxyToResponder::Run(
    SessionDataPtr in_session_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_LoadPersistentSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_LoadPersistentSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_data)::BaseType::BufferWriter
      session_data_writer;
  mojo::internal::Serialize<::media::mojom::SessionDataDataView>(
      in_session_data, buffer, &session_data_writer, &serialization_context);
  params->session_data.Set(
      session_data_writer.is_null() ? nullptr : session_data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::LoadPersistentSessionCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDrmStorage_RemovePersistentSession_ProxyToResponder {
 public:
  static MediaDrmStorage::RemovePersistentSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDrmStorage_RemovePersistentSession_ProxyToResponder> proxy(
        new MediaDrmStorage_RemovePersistentSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDrmStorage_RemovePersistentSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDrmStorage_RemovePersistentSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaDrmStorage_RemovePersistentSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaDrmStorage::RemovePersistentSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDrmStorage_RemovePersistentSession_ProxyToResponder);
};

bool MediaDrmStorage_RemovePersistentSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaDrmStorage::RemovePersistentSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDrmStorage_RemovePersistentSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDrmStorage_RemovePersistentSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  MediaDrmStorage_RemovePersistentSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaDrmStorage::RemovePersistentSession response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void MediaDrmStorage_RemovePersistentSession_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDrmStorage_RemovePersistentSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaDrmStorage_RemovePersistentSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::RemovePersistentSessionCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaDrmStorageStubDispatch::Accept(
    MediaDrmStorage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaDrmStorage_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaDrmStorage_OnProvisioned_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::OnProvisioned",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaDrmStorage_SavePersistentSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::SavePersistentSession",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaDrmStorage_LoadPersistentSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::LoadPersistentSession",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaDrmStorage_RemovePersistentSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::RemovePersistentSession",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaDrmStorageStubDispatch::AcceptWithResponder(
    MediaDrmStorage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaDrmStorage_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDrmStorage_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::MediaDrmStorage_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaDrmStorage_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDrmStorage::Initialize deserializer");
        return false;
      }
      MediaDrmStorage::InitializeCallback callback =
          MediaDrmStorage_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(std::move(callback));
      return true;
    }
    case internal::kMediaDrmStorage_OnProvisioned_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::OnProvisioned",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDrmStorage_OnProvisioned_Params_Data* params =
          reinterpret_cast<
              internal::MediaDrmStorage_OnProvisioned_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaDrmStorage_OnProvisioned_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDrmStorage::OnProvisioned deserializer");
        return false;
      }
      MediaDrmStorage::OnProvisionedCallback callback =
          MediaDrmStorage_OnProvisioned_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnProvisioned(std::move(callback));
      return true;
    }
    case internal::kMediaDrmStorage_SavePersistentSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::SavePersistentSession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDrmStorage_SavePersistentSession_Params_Data* params =
          reinterpret_cast<
              internal::MediaDrmStorage_SavePersistentSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      SessionDataPtr p_session_data{};
      MediaDrmStorage_SavePersistentSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!input_data_view.ReadSessionData(&p_session_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDrmStorage::SavePersistentSession deserializer");
        return false;
      }
      MediaDrmStorage::SavePersistentSessionCallback callback =
          MediaDrmStorage_SavePersistentSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SavePersistentSession(
std::move(p_session_id), 
std::move(p_session_data), std::move(callback));
      return true;
    }
    case internal::kMediaDrmStorage_LoadPersistentSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::LoadPersistentSession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDrmStorage_LoadPersistentSession_Params_Data* params =
          reinterpret_cast<
              internal::MediaDrmStorage_LoadPersistentSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      MediaDrmStorage_LoadPersistentSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDrmStorage::LoadPersistentSession deserializer");
        return false;
      }
      MediaDrmStorage::LoadPersistentSessionCallback callback =
          MediaDrmStorage_LoadPersistentSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LoadPersistentSession(
std::move(p_session_id), std::move(callback));
      return true;
    }
    case internal::kMediaDrmStorage_RemovePersistentSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaDrmStorage::RemovePersistentSession",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDrmStorage_RemovePersistentSession_Params_Data* params =
          reinterpret_cast<
              internal::MediaDrmStorage_RemovePersistentSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      MediaDrmStorage_RemovePersistentSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDrmStorage::RemovePersistentSession deserializer");
        return false;
      }
      MediaDrmStorage::RemovePersistentSessionCallback callback =
          MediaDrmStorage_RemovePersistentSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemovePersistentSession(
std::move(p_session_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaDrmStorageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDrmStorage RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaDrmStorage_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_OnProvisioned_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_OnProvisioned_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_SavePersistentSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_SavePersistentSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_LoadPersistentSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_LoadPersistentSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_RemovePersistentSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_RemovePersistentSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool MediaDrmStorageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDrmStorage ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaDrmStorage_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_OnProvisioned_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_OnProvisioned_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_SavePersistentSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_SavePersistentSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_LoadPersistentSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_LoadPersistentSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDrmStorage_RemovePersistentSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDrmStorage_RemovePersistentSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void MediaDrmStorageInterceptorForTesting::Initialize(InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(callback));
}
void MediaDrmStorageInterceptorForTesting::OnProvisioned(OnProvisionedCallback callback) {
  GetForwardingInterface()->OnProvisioned(std::move(callback));
}
void MediaDrmStorageInterceptorForTesting::SavePersistentSession(const WTF::String& session_id, SessionDataPtr session_data, SavePersistentSessionCallback callback) {
  GetForwardingInterface()->SavePersistentSession(std::move(session_id), std::move(session_data), std::move(callback));
}
void MediaDrmStorageInterceptorForTesting::LoadPersistentSession(const WTF::String& session_id, LoadPersistentSessionCallback callback) {
  GetForwardingInterface()->LoadPersistentSession(std::move(session_id), std::move(callback));
}
void MediaDrmStorageInterceptorForTesting::RemovePersistentSession(const WTF::String& session_id, RemovePersistentSessionCallback callback) {
  GetForwardingInterface()->RemovePersistentSession(std::move(session_id), std::move(callback));
}
MediaDrmStorageAsyncWaiter::MediaDrmStorageAsyncWaiter(
    MediaDrmStorage* proxy) : proxy_(proxy) {}

MediaDrmStorageAsyncWaiter::~MediaDrmStorageAsyncWaiter() = default;

void MediaDrmStorageAsyncWaiter::Initialize(
    ::mojo_base::mojom::blink::UnguessableTokenPtr* out_origin_id) {
  base::RunLoop loop;
  proxy_->Initialize(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::mojo_base::mojom::blink::UnguessableTokenPtr* out_origin_id
,
             ::mojo_base::mojom::blink::UnguessableTokenPtr origin_id) {*out_origin_id = std::move(origin_id);
            loop->Quit();
          },
          &loop,
          out_origin_id));
  loop.Run();
}
void MediaDrmStorageAsyncWaiter::OnProvisioned(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->OnProvisioned(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void MediaDrmStorageAsyncWaiter::SavePersistentSession(
    const WTF::String& session_id, SessionDataPtr session_data, bool* out_success) {
  base::RunLoop loop;
  proxy_->SavePersistentSession(std::move(session_id),std::move(session_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void MediaDrmStorageAsyncWaiter::LoadPersistentSession(
    const WTF::String& session_id, SessionDataPtr* out_session_data) {
  base::RunLoop loop;
  proxy_->LoadPersistentSession(std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             SessionDataPtr* out_session_data
,
             SessionDataPtr session_data) {*out_session_data = std::move(session_data);
            loop->Quit();
          },
          &loop,
          out_session_data));
  loop.Run();
}
void MediaDrmStorageAsyncWaiter::RemovePersistentSession(
    const WTF::String& session_id, bool* out_success) {
  base::RunLoop loop;
  proxy_->RemovePersistentSession(std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::SessionData::DataView, ::media::mojom::blink::SessionDataPtr>::Read(
    ::media::mojom::blink::SessionData::DataView input,
    ::media::mojom::blink::SessionDataPtr* output) {
  bool success = true;
  ::media::mojom::blink::SessionDataPtr result(::media::mojom::blink::SessionData::New());
  
      if (!input.ReadKeySetId(&result->key_set_id))
        success = false;
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif