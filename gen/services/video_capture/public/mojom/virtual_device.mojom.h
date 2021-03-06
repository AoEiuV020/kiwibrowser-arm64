// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_H_

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
#include "services/video_capture/public/mojom/virtual_device.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "services/video_capture/public/mojom/producer.mojom.h"
#include "services/video_capture/public/mojom/scoped_access_permission.mojom.h"
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


namespace video_capture {
namespace mojom {
class SharedMemoryVirtualDevice;
using SharedMemoryVirtualDevicePtr = mojo::InterfacePtr<SharedMemoryVirtualDevice>;
using SharedMemoryVirtualDevicePtrInfo = mojo::InterfacePtrInfo<SharedMemoryVirtualDevice>;
using ThreadSafeSharedMemoryVirtualDevicePtr =
    mojo::ThreadSafeInterfacePtr<SharedMemoryVirtualDevice>;
using SharedMemoryVirtualDeviceRequest = mojo::InterfaceRequest<SharedMemoryVirtualDevice>;
using SharedMemoryVirtualDeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<SharedMemoryVirtualDevice>;
using ThreadSafeSharedMemoryVirtualDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SharedMemoryVirtualDevice>;
using SharedMemoryVirtualDeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SharedMemoryVirtualDevice>;
using SharedMemoryVirtualDeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SharedMemoryVirtualDevice>;

class TextureVirtualDevice;
using TextureVirtualDevicePtr = mojo::InterfacePtr<TextureVirtualDevice>;
using TextureVirtualDevicePtrInfo = mojo::InterfacePtrInfo<TextureVirtualDevice>;
using ThreadSafeTextureVirtualDevicePtr =
    mojo::ThreadSafeInterfacePtr<TextureVirtualDevice>;
using TextureVirtualDeviceRequest = mojo::InterfaceRequest<TextureVirtualDevice>;
using TextureVirtualDeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<TextureVirtualDevice>;
using ThreadSafeTextureVirtualDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TextureVirtualDevice>;
using TextureVirtualDeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TextureVirtualDevice>;
using TextureVirtualDeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TextureVirtualDevice>;


class SharedMemoryVirtualDeviceProxy;

template <typename ImplRefTraits>
class SharedMemoryVirtualDeviceStub;

class SharedMemoryVirtualDeviceRequestValidator;
class SharedMemoryVirtualDeviceResponseValidator;

class  SharedMemoryVirtualDevice
    : public SharedMemoryVirtualDeviceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SharedMemoryVirtualDeviceProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedMemoryVirtualDeviceStub<ImplRefTraits>;

  using RequestValidator_ = SharedMemoryVirtualDeviceRequestValidator;
  using ResponseValidator_ = SharedMemoryVirtualDeviceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestFrameBufferMinVersion = 0,
    kOnFrameReadyInBufferMinVersion = 0,
  };
  virtual ~SharedMemoryVirtualDevice() {}


  using RequestFrameBufferCallback = base::OnceCallback<void(int32_t)>;
  virtual void RequestFrameBuffer(const gfx::Size& dimension, media::VideoPixelFormat pixel_format, RequestFrameBufferCallback callback) = 0;

  virtual void OnFrameReadyInBuffer(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr frame_info) = 0;
};
class  SharedMemoryVirtualDeviceInterceptorForTesting : public SharedMemoryVirtualDevice {
  virtual SharedMemoryVirtualDevice* GetForwardingInterface() = 0;
  void RequestFrameBuffer(const gfx::Size& dimension, media::VideoPixelFormat pixel_format, RequestFrameBufferCallback callback) override;
  void OnFrameReadyInBuffer(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr frame_info) override;
};
class  SharedMemoryVirtualDeviceAsyncWaiter {
 public:
  explicit SharedMemoryVirtualDeviceAsyncWaiter(SharedMemoryVirtualDevice* proxy);
  ~SharedMemoryVirtualDeviceAsyncWaiter();
  void RequestFrameBuffer(
      const gfx::Size& dimension, media::VideoPixelFormat pixel_format, int32_t* out_buffer_id);

 private:
  SharedMemoryVirtualDevice* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedMemoryVirtualDeviceAsyncWaiter);
};

class TextureVirtualDeviceProxy;

template <typename ImplRefTraits>
class TextureVirtualDeviceStub;

class TextureVirtualDeviceRequestValidator;

class  TextureVirtualDevice
    : public TextureVirtualDeviceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TextureVirtualDeviceProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextureVirtualDeviceStub<ImplRefTraits>;

  using RequestValidator_ = TextureVirtualDeviceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnNewMailboxHolderBufferHandleMinVersion = 0,
    kOnFrameReadyInBufferMinVersion = 0,
    kOnBufferRetiredMinVersion = 0,
  };
  virtual ~TextureVirtualDevice() {}

  virtual void OnNewMailboxHolderBufferHandle(int32_t buffer_id, ::media::mojom::MailboxBufferHandleSetPtr mailbox_handles) = 0;

  virtual void OnFrameReadyInBuffer(int32_t buffer_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) = 0;

  virtual void OnBufferRetired(int32_t buffer_id) = 0;
};
class  TextureVirtualDeviceInterceptorForTesting : public TextureVirtualDevice {
  virtual TextureVirtualDevice* GetForwardingInterface() = 0;
  void OnNewMailboxHolderBufferHandle(int32_t buffer_id, ::media::mojom::MailboxBufferHandleSetPtr mailbox_handles) override;
  void OnFrameReadyInBuffer(int32_t buffer_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) override;
  void OnBufferRetired(int32_t buffer_id) override;
};
class  TextureVirtualDeviceAsyncWaiter {
 public:
  explicit TextureVirtualDeviceAsyncWaiter(TextureVirtualDevice* proxy);
  ~TextureVirtualDeviceAsyncWaiter();

 private:
  TextureVirtualDevice* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextureVirtualDeviceAsyncWaiter);
};

class  SharedMemoryVirtualDeviceProxy
    : public SharedMemoryVirtualDevice {
 public:
  explicit SharedMemoryVirtualDeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestFrameBuffer(const gfx::Size& dimension, media::VideoPixelFormat pixel_format, RequestFrameBufferCallback callback) final;
  void OnFrameReadyInBuffer(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr frame_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TextureVirtualDeviceProxy
    : public TextureVirtualDevice {
 public:
  explicit TextureVirtualDeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnNewMailboxHolderBufferHandle(int32_t buffer_id, ::media::mojom::MailboxBufferHandleSetPtr mailbox_handles) final;
  void OnFrameReadyInBuffer(int32_t buffer_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) final;
  void OnBufferRetired(int32_t buffer_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SharedMemoryVirtualDeviceStubDispatch {
 public:
  static bool Accept(SharedMemoryVirtualDevice* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedMemoryVirtualDevice* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedMemoryVirtualDevice>>
class SharedMemoryVirtualDeviceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedMemoryVirtualDeviceStub() {}
  ~SharedMemoryVirtualDeviceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedMemoryVirtualDeviceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedMemoryVirtualDeviceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TextureVirtualDeviceStubDispatch {
 public:
  static bool Accept(TextureVirtualDevice* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextureVirtualDevice* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextureVirtualDevice>>
class TextureVirtualDeviceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextureVirtualDeviceStub() {}
  ~TextureVirtualDeviceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextureVirtualDeviceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextureVirtualDeviceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SharedMemoryVirtualDeviceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TextureVirtualDeviceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SharedMemoryVirtualDeviceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_H_