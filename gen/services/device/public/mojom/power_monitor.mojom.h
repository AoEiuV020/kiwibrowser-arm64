// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_H_

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
#include "services/device/public/mojom/power_monitor.mojom-shared.h"
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


namespace device {
namespace mojom {
class PowerMonitor;
using PowerMonitorPtr = mojo::InterfacePtr<PowerMonitor>;
using PowerMonitorPtrInfo = mojo::InterfacePtrInfo<PowerMonitor>;
using ThreadSafePowerMonitorPtr =
    mojo::ThreadSafeInterfacePtr<PowerMonitor>;
using PowerMonitorRequest = mojo::InterfaceRequest<PowerMonitor>;
using PowerMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<PowerMonitor>;
using ThreadSafePowerMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PowerMonitor>;
using PowerMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PowerMonitor>;
using PowerMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PowerMonitor>;

class PowerMonitorClient;
using PowerMonitorClientPtr = mojo::InterfacePtr<PowerMonitorClient>;
using PowerMonitorClientPtrInfo = mojo::InterfacePtrInfo<PowerMonitorClient>;
using ThreadSafePowerMonitorClientPtr =
    mojo::ThreadSafeInterfacePtr<PowerMonitorClient>;
using PowerMonitorClientRequest = mojo::InterfaceRequest<PowerMonitorClient>;
using PowerMonitorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PowerMonitorClient>;
using ThreadSafePowerMonitorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PowerMonitorClient>;
using PowerMonitorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PowerMonitorClient>;
using PowerMonitorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PowerMonitorClient>;


class PowerMonitorProxy;

template <typename ImplRefTraits>
class PowerMonitorStub;

class PowerMonitorRequestValidator;

class  PowerMonitor
    : public PowerMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PowerMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = PowerMonitorStub<ImplRefTraits>;

  using RequestValidator_ = PowerMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddClientMinVersion = 0,
  };
  virtual ~PowerMonitor() {}

  virtual void AddClient(PowerMonitorClientPtr client) = 0;
};
class  PowerMonitorInterceptorForTesting : public PowerMonitor {
  virtual PowerMonitor* GetForwardingInterface() = 0;
  void AddClient(PowerMonitorClientPtr client) override;
};
class  PowerMonitorAsyncWaiter {
 public:
  explicit PowerMonitorAsyncWaiter(PowerMonitor* proxy);
  ~PowerMonitorAsyncWaiter();

 private:
  PowerMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PowerMonitorAsyncWaiter);
};

class PowerMonitorClientProxy;

template <typename ImplRefTraits>
class PowerMonitorClientStub;

class PowerMonitorClientRequestValidator;

class  PowerMonitorClient
    : public PowerMonitorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PowerMonitorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PowerMonitorClientStub<ImplRefTraits>;

  using RequestValidator_ = PowerMonitorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPowerStateChangeMinVersion = 0,
    kSuspendMinVersion = 0,
    kResumeMinVersion = 0,
  };
  virtual ~PowerMonitorClient() {}

  virtual void PowerStateChange(bool on_battery_power) = 0;

  virtual void Suspend() = 0;

  virtual void Resume() = 0;
};
class  PowerMonitorClientInterceptorForTesting : public PowerMonitorClient {
  virtual PowerMonitorClient* GetForwardingInterface() = 0;
  void PowerStateChange(bool on_battery_power) override;
  void Suspend() override;
  void Resume() override;
};
class  PowerMonitorClientAsyncWaiter {
 public:
  explicit PowerMonitorClientAsyncWaiter(PowerMonitorClient* proxy);
  ~PowerMonitorClientAsyncWaiter();

 private:
  PowerMonitorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PowerMonitorClientAsyncWaiter);
};

class  PowerMonitorProxy
    : public PowerMonitor {
 public:
  explicit PowerMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddClient(PowerMonitorClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PowerMonitorClientProxy
    : public PowerMonitorClient {
 public:
  explicit PowerMonitorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void PowerStateChange(bool on_battery_power) final;
  void Suspend() final;
  void Resume() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PowerMonitorStubDispatch {
 public:
  static bool Accept(PowerMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PowerMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PowerMonitor>>
class PowerMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PowerMonitorStub() {}
  ~PowerMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PowerMonitorClientStubDispatch {
 public:
  static bool Accept(PowerMonitorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PowerMonitorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PowerMonitorClient>>
class PowerMonitorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PowerMonitorClientStub() {}
  ~PowerMonitorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PowerMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PowerMonitorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_H_