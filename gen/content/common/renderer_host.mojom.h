// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_HOST_MOJOM_H_
#define CONTENT_COMMON_RENDERER_HOST_MOJOM_H_

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
#include "content/common/renderer_host.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
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
class RendererHost;
using RendererHostPtr = mojo::InterfacePtr<RendererHost>;
using RendererHostPtrInfo = mojo::InterfacePtrInfo<RendererHost>;
using ThreadSafeRendererHostPtr =
    mojo::ThreadSafeInterfacePtr<RendererHost>;
using RendererHostRequest = mojo::InterfaceRequest<RendererHost>;
using RendererHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererHost>;
using ThreadSafeRendererHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RendererHost>;
using RendererHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererHost>;
using RendererHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererHost>;


class RendererHostProxy;

template <typename ImplRefTraits>
class RendererHostStub;

class RendererHostRequestValidator;
class RendererHostResponseValidator;

class CONTENT_EXPORT RendererHost
    : public RendererHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = RendererHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererHostStub<ImplRefTraits>;

  using RequestValidator_ = RendererHostRequestValidator;
  using ResponseValidator_ = RendererHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetBlobURLLoaderFactoryMinVersion = 0,
    kGetBrowserHistogramMinVersion = 0,
    kSuddenTerminationChangedMinVersion = 0,
    kShutdownRequestMinVersion = 0,
  };
  virtual ~RendererHost() {}

  virtual void GetBlobURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest loader) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetBrowserHistogram(const std::string& name, std::string* out_histogram_json);

  using GetBrowserHistogramCallback = base::OnceCallback<void(const std::string&)>;
  virtual void GetBrowserHistogram(const std::string& name, GetBrowserHistogramCallback callback) = 0;

  virtual void SuddenTerminationChanged(bool enabled) = 0;

  virtual void ShutdownRequest() = 0;
};
class CONTENT_EXPORT RendererHostInterceptorForTesting : public RendererHost {
  virtual RendererHost* GetForwardingInterface() = 0;
  void GetBlobURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest loader) override;
  void GetBrowserHistogram(const std::string& name, GetBrowserHistogramCallback callback) override;
  void SuddenTerminationChanged(bool enabled) override;
  void ShutdownRequest() override;
};
class CONTENT_EXPORT RendererHostAsyncWaiter {
 public:
  explicit RendererHostAsyncWaiter(RendererHost* proxy);
  ~RendererHostAsyncWaiter();
  void GetBrowserHistogram(
      const std::string& name, std::string* out_histogram_json);

 private:
  RendererHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererHostAsyncWaiter);
};

class CONTENT_EXPORT RendererHostProxy
    : public RendererHost {
 public:
  explicit RendererHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetBlobURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest loader) final;
  bool GetBrowserHistogram(const std::string& name, std::string* out_histogram_json) final;
  void GetBrowserHistogram(const std::string& name, GetBrowserHistogramCallback callback) final;
  void SuddenTerminationChanged(bool enabled) final;
  void ShutdownRequest() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RendererHostStubDispatch {
 public:
  static bool Accept(RendererHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererHost>>
class RendererHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererHostStub() {}
  ~RendererHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RendererHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RendererHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_RENDERER_HOST_MOJOM_H_