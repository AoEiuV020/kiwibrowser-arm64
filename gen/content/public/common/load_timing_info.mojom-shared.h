// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "content/public/common/load_timing_info.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class LoadTimingInfoConnectTimingDataView;

class LoadTimingInfoDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::LoadTimingInfoConnectTimingDataView> {
  using Data = ::content::mojom::internal::LoadTimingInfoConnectTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::LoadTimingInfoDataView> {
  using Data = ::content::mojom::internal::LoadTimingInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
class LoadTimingInfoConnectTimingDataView {
 public:
  LoadTimingInfoConnectTimingDataView() {}

  LoadTimingInfoConnectTimingDataView(
      internal::LoadTimingInfoConnectTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDnsStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDnsStart(UserType* output) {
    auto* pointer = data_->dns_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetDnsEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDnsEnd(UserType* output) {
    auto* pointer = data_->dns_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetConnectStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnectStart(UserType* output) {
    auto* pointer = data_->connect_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetConnectEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnectEnd(UserType* output) {
    auto* pointer = data_->connect_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetSslStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSslStart(UserType* output) {
    auto* pointer = data_->ssl_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetSslEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSslEnd(UserType* output) {
    auto* pointer = data_->ssl_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::LoadTimingInfoConnectTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LoadTimingInfoDataView {
 public:
  LoadTimingInfoDataView() {}

  LoadTimingInfoDataView(
      internal::LoadTimingInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool socket_reused() const {
    return data_->socket_reused;
  }
  uint32_t socket_log_id() const {
    return data_->socket_log_id;
  }
  inline void GetRequestStartTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestStartTime(UserType* output) {
    auto* pointer = data_->request_start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetRequestStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestStart(UserType* output) {
    auto* pointer = data_->request_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetProxyResolveStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyResolveStart(UserType* output) {
    auto* pointer = data_->proxy_resolve_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetProxyResolveEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyResolveEnd(UserType* output) {
    auto* pointer = data_->proxy_resolve_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetConnectTimingDataView(
      LoadTimingInfoConnectTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnectTiming(UserType* output) {
    auto* pointer = data_->connect_timing.Get();
    return mojo::internal::Deserialize<::content::mojom::LoadTimingInfoConnectTimingDataView>(
        pointer, output, context_);
  }
  inline void GetSendStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSendStart(UserType* output) {
    auto* pointer = data_->send_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetSendEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSendEnd(UserType* output) {
    auto* pointer = data_->send_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetReceiveHeadersEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReceiveHeadersEnd(UserType* output) {
    auto* pointer = data_->receive_headers_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetPushStartDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPushStart(UserType* output) {
    auto* pointer = data_->push_start.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetPushEndDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPushEnd(UserType* output) {
    auto* pointer = data_->push_end.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::LoadTimingInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::LoadTimingInfoConnectTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::LoadTimingInfoConnectTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::LoadTimingInfoConnectTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::dns_start, input, custom_context)) in_dns_start = CallWithContext(Traits::dns_start, input, custom_context);
    typename decltype((*output)->dns_start)::BaseType::BufferWriter
        dns_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_dns_start, buffer, &dns_start_writer, context);
    (*output)->dns_start.Set(
        dns_start_writer.is_null() ? nullptr : dns_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dns_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dns_start in LoadTimingInfoConnectTiming struct");
    decltype(CallWithContext(Traits::dns_end, input, custom_context)) in_dns_end = CallWithContext(Traits::dns_end, input, custom_context);
    typename decltype((*output)->dns_end)::BaseType::BufferWriter
        dns_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_dns_end, buffer, &dns_end_writer, context);
    (*output)->dns_end.Set(
        dns_end_writer.is_null() ? nullptr : dns_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dns_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dns_end in LoadTimingInfoConnectTiming struct");
    decltype(CallWithContext(Traits::connect_start, input, custom_context)) in_connect_start = CallWithContext(Traits::connect_start, input, custom_context);
    typename decltype((*output)->connect_start)::BaseType::BufferWriter
        connect_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_connect_start, buffer, &connect_start_writer, context);
    (*output)->connect_start.Set(
        connect_start_writer.is_null() ? nullptr : connect_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->connect_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null connect_start in LoadTimingInfoConnectTiming struct");
    decltype(CallWithContext(Traits::connect_end, input, custom_context)) in_connect_end = CallWithContext(Traits::connect_end, input, custom_context);
    typename decltype((*output)->connect_end)::BaseType::BufferWriter
        connect_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_connect_end, buffer, &connect_end_writer, context);
    (*output)->connect_end.Set(
        connect_end_writer.is_null() ? nullptr : connect_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->connect_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null connect_end in LoadTimingInfoConnectTiming struct");
    decltype(CallWithContext(Traits::ssl_start, input, custom_context)) in_ssl_start = CallWithContext(Traits::ssl_start, input, custom_context);
    typename decltype((*output)->ssl_start)::BaseType::BufferWriter
        ssl_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_ssl_start, buffer, &ssl_start_writer, context);
    (*output)->ssl_start.Set(
        ssl_start_writer.is_null() ? nullptr : ssl_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ssl_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ssl_start in LoadTimingInfoConnectTiming struct");
    decltype(CallWithContext(Traits::ssl_end, input, custom_context)) in_ssl_end = CallWithContext(Traits::ssl_end, input, custom_context);
    typename decltype((*output)->ssl_end)::BaseType::BufferWriter
        ssl_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_ssl_end, buffer, &ssl_end_writer, context);
    (*output)->ssl_end.Set(
        ssl_end_writer.is_null() ? nullptr : ssl_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ssl_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ssl_end in LoadTimingInfoConnectTiming struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::LoadTimingInfoConnectTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::LoadTimingInfoConnectTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::LoadTimingInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::LoadTimingInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::LoadTimingInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->socket_reused = CallWithContext(Traits::socket_reused, input, custom_context);
    (*output)->socket_log_id = CallWithContext(Traits::socket_log_id, input, custom_context);
    decltype(CallWithContext(Traits::request_start_time, input, custom_context)) in_request_start_time = CallWithContext(Traits::request_start_time, input, custom_context);
    typename decltype((*output)->request_start_time)::BaseType::BufferWriter
        request_start_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_request_start_time, buffer, &request_start_time_writer, context);
    (*output)->request_start_time.Set(
        request_start_time_writer.is_null() ? nullptr : request_start_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request_start_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request_start_time in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::request_start, input, custom_context)) in_request_start = CallWithContext(Traits::request_start, input, custom_context);
    typename decltype((*output)->request_start)::BaseType::BufferWriter
        request_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_request_start, buffer, &request_start_writer, context);
    (*output)->request_start.Set(
        request_start_writer.is_null() ? nullptr : request_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request_start in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::proxy_resolve_start, input, custom_context)) in_proxy_resolve_start = CallWithContext(Traits::proxy_resolve_start, input, custom_context);
    typename decltype((*output)->proxy_resolve_start)::BaseType::BufferWriter
        proxy_resolve_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_proxy_resolve_start, buffer, &proxy_resolve_start_writer, context);
    (*output)->proxy_resolve_start.Set(
        proxy_resolve_start_writer.is_null() ? nullptr : proxy_resolve_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxy_resolve_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxy_resolve_start in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::proxy_resolve_end, input, custom_context)) in_proxy_resolve_end = CallWithContext(Traits::proxy_resolve_end, input, custom_context);
    typename decltype((*output)->proxy_resolve_end)::BaseType::BufferWriter
        proxy_resolve_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_proxy_resolve_end, buffer, &proxy_resolve_end_writer, context);
    (*output)->proxy_resolve_end.Set(
        proxy_resolve_end_writer.is_null() ? nullptr : proxy_resolve_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxy_resolve_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxy_resolve_end in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::connect_timing, input, custom_context)) in_connect_timing = CallWithContext(Traits::connect_timing, input, custom_context);
    typename decltype((*output)->connect_timing)::BaseType::BufferWriter
        connect_timing_writer;
    mojo::internal::Serialize<::content::mojom::LoadTimingInfoConnectTimingDataView>(
        in_connect_timing, buffer, &connect_timing_writer, context);
    (*output)->connect_timing.Set(
        connect_timing_writer.is_null() ? nullptr : connect_timing_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->connect_timing.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null connect_timing in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::send_start, input, custom_context)) in_send_start = CallWithContext(Traits::send_start, input, custom_context);
    typename decltype((*output)->send_start)::BaseType::BufferWriter
        send_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_send_start, buffer, &send_start_writer, context);
    (*output)->send_start.Set(
        send_start_writer.is_null() ? nullptr : send_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->send_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null send_start in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::send_end, input, custom_context)) in_send_end = CallWithContext(Traits::send_end, input, custom_context);
    typename decltype((*output)->send_end)::BaseType::BufferWriter
        send_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_send_end, buffer, &send_end_writer, context);
    (*output)->send_end.Set(
        send_end_writer.is_null() ? nullptr : send_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->send_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null send_end in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::receive_headers_end, input, custom_context)) in_receive_headers_end = CallWithContext(Traits::receive_headers_end, input, custom_context);
    typename decltype((*output)->receive_headers_end)::BaseType::BufferWriter
        receive_headers_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_receive_headers_end, buffer, &receive_headers_end_writer, context);
    (*output)->receive_headers_end.Set(
        receive_headers_end_writer.is_null() ? nullptr : receive_headers_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->receive_headers_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null receive_headers_end in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::push_start, input, custom_context)) in_push_start = CallWithContext(Traits::push_start, input, custom_context);
    typename decltype((*output)->push_start)::BaseType::BufferWriter
        push_start_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_push_start, buffer, &push_start_writer, context);
    (*output)->push_start.Set(
        push_start_writer.is_null() ? nullptr : push_start_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->push_start.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null push_start in LoadTimingInfo struct");
    decltype(CallWithContext(Traits::push_end, input, custom_context)) in_push_end = CallWithContext(Traits::push_end, input, custom_context);
    typename decltype((*output)->push_end)::BaseType::BufferWriter
        push_end_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_push_end, buffer, &push_end_writer, context);
    (*output)->push_end.Set(
        push_end_writer.is_null() ? nullptr : push_end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->push_end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null push_end in LoadTimingInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::LoadTimingInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::LoadTimingInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void LoadTimingInfoConnectTimingDataView::GetDnsStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->dns_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoConnectTimingDataView::GetDnsEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->dns_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoConnectTimingDataView::GetConnectStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->connect_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoConnectTimingDataView::GetConnectEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->connect_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoConnectTimingDataView::GetSslStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->ssl_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoConnectTimingDataView::GetSslEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->ssl_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}


inline void LoadTimingInfoDataView::GetRequestStartTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->request_start_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetRequestStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->request_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetProxyResolveStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->proxy_resolve_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetProxyResolveEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->proxy_resolve_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetConnectTimingDataView(
    LoadTimingInfoConnectTimingDataView* output) {
  auto pointer = data_->connect_timing.Get();
  *output = LoadTimingInfoConnectTimingDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetSendStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->send_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetSendEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->send_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetReceiveHeadersEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->receive_headers_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetPushStartDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->push_start.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LoadTimingInfoDataView::GetPushEndDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->push_end.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_SHARED_H_
