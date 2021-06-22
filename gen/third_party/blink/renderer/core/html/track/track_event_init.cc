// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/html/track/track_event_init.h"

namespace blink {

TrackEventInit::TrackEventInit() {
}

TrackEventInit::~TrackEventInit() {}

TrackEventInit::TrackEventInit(const TrackEventInit&) = default;

TrackEventInit& TrackEventInit::operator=(const TrackEventInit&) = default;

void TrackEventInit::setTrack(const VideoTrackOrAudioTrackOrTextTrack& value) {
  track_ = value;
}
void TrackEventInit::setTrackToNull() {
  track_ = VideoTrackOrAudioTrackOrTextTrack();
}

void TrackEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(track_);
  EventInit::Trace(visitor);
}

}  // namespace blink
