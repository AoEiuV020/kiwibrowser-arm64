// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/video_decode_perf_history.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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


namespace media {
namespace mojom {
namespace blink {
class VideoDecodePerfHistory;
using VideoDecodePerfHistoryPtr = mojo::InterfacePtr<VideoDecodePerfHistory>;
using RevocableVideoDecodePerfHistoryPtr = ::blink::RevocableInterfacePtr<VideoDecodePerfHistory>;
using VideoDecodePerfHistoryPtrInfo = mojo::InterfacePtrInfo<VideoDecodePerfHistory>;
using ThreadSafeVideoDecodePerfHistoryPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecodePerfHistory>;
using VideoDecodePerfHistoryRequest = mojo::InterfaceRequest<VideoDecodePerfHistory>;
using VideoDecodePerfHistoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecodePerfHistory>;
using ThreadSafeVideoDecodePerfHistoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecodePerfHistory>;
using VideoDecodePerfHistoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecodePerfHistory>;
using VideoDecodePerfHistoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecodePerfHistory>;


class VideoDecodePerfHistoryProxy;

template <typename ImplRefTraits>
class VideoDecodePerfHistoryStub;

class VideoDecodePerfHistoryRequestValidator;
class VideoDecodePerfHistoryResponseValidator;

class  VideoDecodePerfHistory
    : public VideoDecodePerfHistoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecodePerfHistoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecodePerfHistoryStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecodePerfHistoryRequestValidator;
  using ResponseValidator_ = VideoDecodePerfHistoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPerfInfoMinVersion = 0,
  };
  virtual ~VideoDecodePerfHistory() {}


  using GetPerfInfoCallback = base::OnceCallback<void(bool, bool)>;
  virtual void GetPerfInfo(::media::mojom::blink::PredictionFeaturesPtr features, GetPerfInfoCallback callback) = 0;
};
class  VideoDecodePerfHistoryInterceptorForTesting : public VideoDecodePerfHistory {
  virtual VideoDecodePerfHistory* GetForwardingInterface() = 0;
  void GetPerfInfo(::media::mojom::blink::PredictionFeaturesPtr features, GetPerfInfoCallback callback) override;
};
class  VideoDecodePerfHistoryAsyncWaiter {
 public:
  explicit VideoDecodePerfHistoryAsyncWaiter(VideoDecodePerfHistory* proxy);
  ~VideoDecodePerfHistoryAsyncWaiter();
  void GetPerfInfo(
      ::media::mojom::blink::PredictionFeaturesPtr features, bool* out_is_smooth, bool* out_is_power_efficient);

 private:
  VideoDecodePerfHistory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodePerfHistoryAsyncWaiter);
};

class  VideoDecodePerfHistoryProxy
    : public VideoDecodePerfHistory {
 public:
  explicit VideoDecodePerfHistoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPerfInfo(::media::mojom::blink::PredictionFeaturesPtr features, GetPerfInfoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDecodePerfHistoryStubDispatch {
 public:
  static bool Accept(VideoDecodePerfHistory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecodePerfHistory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecodePerfHistory>>
class VideoDecodePerfHistoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecodePerfHistoryStub() {}
  ~VideoDecodePerfHistoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodePerfHistoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodePerfHistoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecodePerfHistoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecodePerfHistoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_H_