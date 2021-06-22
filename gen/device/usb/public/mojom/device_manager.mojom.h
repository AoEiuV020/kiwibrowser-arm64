// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_H_

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
#include "device/usb/public/mojom/device_manager.mojom-shared.h"
#include "device/usb/public/mojom/device.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
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
class UsbDeviceManager;
using UsbDeviceManagerPtr = mojo::InterfacePtr<UsbDeviceManager>;
using UsbDeviceManagerPtrInfo = mojo::InterfacePtrInfo<UsbDeviceManager>;
using ThreadSafeUsbDeviceManagerPtr =
    mojo::ThreadSafeInterfacePtr<UsbDeviceManager>;
using UsbDeviceManagerRequest = mojo::InterfaceRequest<UsbDeviceManager>;
using UsbDeviceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDeviceManager>;
using ThreadSafeUsbDeviceManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDeviceManager>;
using UsbDeviceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDeviceManager>;
using UsbDeviceManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDeviceManager>;

class UsbDeviceManagerClient;
using UsbDeviceManagerClientPtr = mojo::InterfacePtr<UsbDeviceManagerClient>;
using UsbDeviceManagerClientPtrInfo = mojo::InterfacePtrInfo<UsbDeviceManagerClient>;
using ThreadSafeUsbDeviceManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<UsbDeviceManagerClient>;
using UsbDeviceManagerClientRequest = mojo::InterfaceRequest<UsbDeviceManagerClient>;
using UsbDeviceManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDeviceManagerClient>;
using ThreadSafeUsbDeviceManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDeviceManagerClient>;
using UsbDeviceManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDeviceManagerClient>;
using UsbDeviceManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDeviceManagerClient>;

class UsbDeviceFilter;
using UsbDeviceFilterPtr = mojo::StructPtr<UsbDeviceFilter>;

class UsbEnumerationOptions;
using UsbEnumerationOptionsPtr = mojo::StructPtr<UsbEnumerationOptions>;


class UsbDeviceManagerProxy;

template <typename ImplRefTraits>
class UsbDeviceManagerStub;

class UsbDeviceManagerRequestValidator;
class UsbDeviceManagerResponseValidator;

class  UsbDeviceManager
    : public UsbDeviceManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UsbDeviceManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceManagerStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceManagerRequestValidator;
  using ResponseValidator_ = UsbDeviceManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDevicesMinVersion = 0,
    kGetDeviceMinVersion = 0,
    kSetClientMinVersion = 0,
  };
  virtual ~UsbDeviceManager() {}


  using GetDevicesCallback = base::OnceCallback<void(std::vector<::device::mojom::UsbDeviceInfoPtr>)>;
  virtual void GetDevices(UsbEnumerationOptionsPtr options, GetDevicesCallback callback) = 0;

  virtual void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request) = 0;

  virtual void SetClient(UsbDeviceManagerClientPtr client) = 0;
};
class  UsbDeviceManagerInterceptorForTesting : public UsbDeviceManager {
  virtual UsbDeviceManager* GetForwardingInterface() = 0;
  void GetDevices(UsbEnumerationOptionsPtr options, GetDevicesCallback callback) override;
  void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request) override;
  void SetClient(UsbDeviceManagerClientPtr client) override;
};
class  UsbDeviceManagerAsyncWaiter {
 public:
  explicit UsbDeviceManagerAsyncWaiter(UsbDeviceManager* proxy);
  ~UsbDeviceManagerAsyncWaiter();
  void GetDevices(
      UsbEnumerationOptionsPtr options, std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results);

 private:
  UsbDeviceManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManagerAsyncWaiter);
};

class UsbDeviceManagerClientProxy;

template <typename ImplRefTraits>
class UsbDeviceManagerClientStub;

class UsbDeviceManagerClientRequestValidator;

class  UsbDeviceManagerClient
    : public UsbDeviceManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UsbDeviceManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceAddedMinVersion = 0,
    kOnDeviceRemovedMinVersion = 0,
  };
  virtual ~UsbDeviceManagerClient() {}

  virtual void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) = 0;

  virtual void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) = 0;
};
class  UsbDeviceManagerClientInterceptorForTesting : public UsbDeviceManagerClient {
  virtual UsbDeviceManagerClient* GetForwardingInterface() = 0;
  void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) override;
  void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) override;
};
class  UsbDeviceManagerClientAsyncWaiter {
 public:
  explicit UsbDeviceManagerClientAsyncWaiter(UsbDeviceManagerClient* proxy);
  ~UsbDeviceManagerClientAsyncWaiter();

 private:
  UsbDeviceManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManagerClientAsyncWaiter);
};

class  UsbDeviceManagerProxy
    : public UsbDeviceManager {
 public:
  explicit UsbDeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(UsbEnumerationOptionsPtr options, GetDevicesCallback callback) final;
  void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request) final;
  void SetClient(UsbDeviceManagerClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UsbDeviceManagerClientProxy
    : public UsbDeviceManagerClient {
 public:
  explicit UsbDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) final;
  void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbDeviceManagerStubDispatch {
 public:
  static bool Accept(UsbDeviceManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceManager>>
class UsbDeviceManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceManagerStub() {}
  ~UsbDeviceManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceManagerClientStubDispatch {
 public:
  static bool Accept(UsbDeviceManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceManagerClient>>
class UsbDeviceManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceManagerClientStub() {}
  ~UsbDeviceManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbDeviceManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbDeviceManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  UsbDeviceFilter {
 public:
  using DataView = UsbDeviceFilterDataView;
  using Data_ = internal::UsbDeviceFilter_Data;

  template <typename... Args>
  static UsbDeviceFilterPtr New(Args&&... args) {
    return UsbDeviceFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbDeviceFilterPtr From(const U& u) {
    return mojo::TypeConverter<UsbDeviceFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbDeviceFilter>::Convert(*this);
  }


  UsbDeviceFilter();

  UsbDeviceFilter(
      bool has_vendor_id,
      uint16_t vendor_id,
      bool has_product_id,
      uint16_t product_id,
      bool has_class_code,
      uint8_t class_code,
      bool has_subclass_code,
      uint8_t subclass_code,
      bool has_protocol_code,
      uint8_t protocol_code,
      const base::Optional<base::string16>& serial_number);

  ~UsbDeviceFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbDeviceFilterPtr>
  UsbDeviceFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbDeviceFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbDeviceFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbDeviceFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbDeviceFilter_UnserializedMessageContext<
            UserType, UsbDeviceFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbDeviceFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbDeviceFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbDeviceFilter_UnserializedMessageContext<
            UserType, UsbDeviceFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbDeviceFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool has_vendor_id;
  uint16_t vendor_id;
  bool has_product_id;
  uint16_t product_id;
  bool has_class_code;
  uint8_t class_code;
  bool has_subclass_code;
  uint8_t subclass_code;
  bool has_protocol_code;
  uint8_t protocol_code;
  base::Optional<base::string16> serial_number;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  UsbEnumerationOptions {
 public:
  using DataView = UsbEnumerationOptionsDataView;
  using Data_ = internal::UsbEnumerationOptions_Data;

  template <typename... Args>
  static UsbEnumerationOptionsPtr New(Args&&... args) {
    return UsbEnumerationOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbEnumerationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<UsbEnumerationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbEnumerationOptions>::Convert(*this);
  }


  UsbEnumerationOptions();

  explicit UsbEnumerationOptions(
      std::vector<UsbDeviceFilterPtr> filters);

  ~UsbEnumerationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbEnumerationOptionsPtr>
  UsbEnumerationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbEnumerationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbEnumerationOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbEnumerationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbEnumerationOptions_UnserializedMessageContext<
            UserType, UsbEnumerationOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbEnumerationOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbEnumerationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbEnumerationOptions_UnserializedMessageContext<
            UserType, UsbEnumerationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbEnumerationOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<UsbDeviceFilterPtr> filters;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UsbEnumerationOptions);
};

template <typename StructPtrType>
UsbDeviceFilterPtr UsbDeviceFilter::Clone() const {
  return New(
      mojo::Clone(has_vendor_id),
      mojo::Clone(vendor_id),
      mojo::Clone(has_product_id),
      mojo::Clone(product_id),
      mojo::Clone(has_class_code),
      mojo::Clone(class_code),
      mojo::Clone(has_subclass_code),
      mojo::Clone(subclass_code),
      mojo::Clone(has_protocol_code),
      mojo::Clone(protocol_code),
      mojo::Clone(serial_number)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbDeviceFilter>::value>::type*>
bool UsbDeviceFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->has_vendor_id, other_struct.has_vendor_id))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->has_product_id, other_struct.has_product_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->has_class_code, other_struct.has_class_code))
    return false;
  if (!mojo::Equals(this->class_code, other_struct.class_code))
    return false;
  if (!mojo::Equals(this->has_subclass_code, other_struct.has_subclass_code))
    return false;
  if (!mojo::Equals(this->subclass_code, other_struct.subclass_code))
    return false;
  if (!mojo::Equals(this->has_protocol_code, other_struct.has_protocol_code))
    return false;
  if (!mojo::Equals(this->protocol_code, other_struct.protocol_code))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  return true;
}
template <typename StructPtrType>
UsbEnumerationOptionsPtr UsbEnumerationOptions::Clone() const {
  return New(
      mojo::Clone(filters)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbEnumerationOptions>::value>::type*>
bool UsbEnumerationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->filters, other_struct.filters))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::UsbDeviceFilter::DataView,
                                         ::device::mojom::UsbDeviceFilterPtr> {
  static bool IsNull(const ::device::mojom::UsbDeviceFilterPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbDeviceFilterPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbDeviceFilter::has_vendor_id) has_vendor_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_vendor_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::vendor_id) vendor_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_product_id) has_product_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_product_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::product_id) product_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->product_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_class_code) has_class_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_class_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::class_code) class_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->class_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_subclass_code) has_subclass_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_subclass_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::subclass_code) subclass_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->subclass_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_protocol_code) has_protocol_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_protocol_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::protocol_code) protocol_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->protocol_code;
  }

  static const decltype(::device::mojom::UsbDeviceFilter::serial_number)& serial_number(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->serial_number;
  }

  static bool Read(::device::mojom::UsbDeviceFilter::DataView input, ::device::mojom::UsbDeviceFilterPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbEnumerationOptions::DataView,
                                         ::device::mojom::UsbEnumerationOptionsPtr> {
  static bool IsNull(const ::device::mojom::UsbEnumerationOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbEnumerationOptionsPtr* output) { output->reset(); }

  static const decltype(::device::mojom::UsbEnumerationOptions::filters)& filters(
      const ::device::mojom::UsbEnumerationOptionsPtr& input) {
    return input->filters;
  }

  static bool Read(::device::mojom::UsbEnumerationOptions::DataView input, ::device::mojom::UsbEnumerationOptionsPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_H_