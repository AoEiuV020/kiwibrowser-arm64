// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_offer_answer_options.h"

namespace blink {

RTCOfferAnswerOptions::RTCOfferAnswerOptions() {
  setVoiceActivityDetection(true);
}

RTCOfferAnswerOptions::~RTCOfferAnswerOptions() {}

RTCOfferAnswerOptions::RTCOfferAnswerOptions(const RTCOfferAnswerOptions&) = default;

RTCOfferAnswerOptions& RTCOfferAnswerOptions::operator=(const RTCOfferAnswerOptions&) = default;

void RTCOfferAnswerOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
