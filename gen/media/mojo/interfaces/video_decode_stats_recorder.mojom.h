// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_H_

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
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/origin.mojom.h"
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
class VideoDecodeStatsRecorder;
using VideoDecodeStatsRecorderPtr = mojo::InterfacePtr<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderPtrInfo = mojo::InterfacePtrInfo<VideoDecodeStatsRecorder>;
using ThreadSafeVideoDecodeStatsRecorderPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderRequest = mojo::InterfaceRequest<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecodeStatsRecorder>;
using ThreadSafeVideoDecodeStatsRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecodeStatsRecorder>;


class VideoDecodeStatsRecorderProxy;

template <typename ImplRefTraits>
class VideoDecodeStatsRecorderStub;

class VideoDecodeStatsRecorderRequestValidator;

class  VideoDecodeStatsRecorder
    : public VideoDecodeStatsRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecodeStatsRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecodeStatsRecorderStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecodeStatsRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartNewRecordMinVersion = 0,
    kUpdateRecordMinVersion = 0,
  };
  virtual ~VideoDecodeStatsRecorder() {}

  virtual void StartNewRecord(::media::mojom::PredictionFeaturesPtr features) = 0;

  virtual void UpdateRecord(::media::mojom::PredictionTargetsPtr targets) = 0;
};
class  VideoDecodeStatsRecorderInterceptorForTesting : public VideoDecodeStatsRecorder {
  virtual VideoDecodeStatsRecorder* GetForwardingInterface() = 0;
  void StartNewRecord(::media::mojom::PredictionFeaturesPtr features) override;
  void UpdateRecord(::media::mojom::PredictionTargetsPtr targets) override;
};
class  VideoDecodeStatsRecorderAsyncWaiter {
 public:
  explicit VideoDecodeStatsRecorderAsyncWaiter(VideoDecodeStatsRecorder* proxy);
  ~VideoDecodeStatsRecorderAsyncWaiter();

 private:
  VideoDecodeStatsRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeStatsRecorderAsyncWaiter);
};

class  VideoDecodeStatsRecorderProxy
    : public VideoDecodeStatsRecorder {
 public:
  explicit VideoDecodeStatsRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartNewRecord(::media::mojom::PredictionFeaturesPtr features) final;
  void UpdateRecord(::media::mojom::PredictionTargetsPtr targets) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDecodeStatsRecorderStubDispatch {
 public:
  static bool Accept(VideoDecodeStatsRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecodeStatsRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecodeStatsRecorder>>
class VideoDecodeStatsRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecodeStatsRecorderStub() {}
  ~VideoDecodeStatsRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeStatsRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeStatsRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecodeStatsRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_H_