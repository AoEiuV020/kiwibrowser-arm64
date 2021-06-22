// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_ice_server.h"

namespace blink {

RTCIceServer::RTCIceServer() {
}

RTCIceServer::~RTCIceServer() {}

RTCIceServer::RTCIceServer(const RTCIceServer&) = default;

RTCIceServer& RTCIceServer::operator=(const RTCIceServer&) = default;

void RTCIceServer::setURLs(const StringOrStringSequence& value) {
  urls_ = value;
}

void RTCIceServer::Trace(blink::Visitor* visitor) {
  visitor->Trace(urls_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
