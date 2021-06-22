// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediastream/media_track_supported_constraints.h"

namespace blink {

MediaTrackSupportedConstraints::MediaTrackSupportedConstraints() {
  setAspectRatio(true);
  setAutoGainControl(true);
  setBrightness(true);
  setChannelCount(true);
  setColorTemperature(true);
  setContrast(true);
  setDepthFar(true);
  setDepthNear(true);
  setDeviceId(true);
  setEchoCancellation(true);
  setEchoCancellationType(true);
  setExposureCompensation(true);
  setExposureMode(true);
  setFacingMode(true);
  setFocalLengthX(true);
  setFocalLengthY(true);
  setFocusMode(true);
  setFrameRate(true);
  setGroupId(true);
  setHeight(true);
  setIso(true);
  setLatency(true);
  setNoiseSuppression(true);
  setPointsOfInterest(true);
  setSampleRate(true);
  setSampleSize(true);
  setSaturation(true);
  setSharpness(true);
  setTorch(true);
  setVideoKind(true);
  setVolume(true);
  setWhiteBalanceMode(true);
  setWidth(true);
  setZoom(true);
}

MediaTrackSupportedConstraints::~MediaTrackSupportedConstraints() {}

MediaTrackSupportedConstraints::MediaTrackSupportedConstraints(const MediaTrackSupportedConstraints&) = default;

MediaTrackSupportedConstraints& MediaTrackSupportedConstraints::operator=(const MediaTrackSupportedConstraints&) = default;

void MediaTrackSupportedConstraints::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
