// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_peer_connection_ice_event_init.h"

#include "third_party/blink/renderer/modules/peerconnection/rtc_ice_candidate.h"

namespace blink {

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit() {
}

RTCPeerConnectionIceEventInit::~RTCPeerConnectionIceEventInit() {}

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit(const RTCPeerConnectionIceEventInit&) = default;

RTCPeerConnectionIceEventInit& RTCPeerConnectionIceEventInit::operator=(const RTCPeerConnectionIceEventInit&) = default;

void RTCPeerConnectionIceEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(candidate_);
  EventInit::Trace(visitor);
}

}  // namespace blink
