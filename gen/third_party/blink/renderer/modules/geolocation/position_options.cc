// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/geolocation/position_options.h"

namespace blink {

PositionOptions::PositionOptions() {
  setEnableHighAccuracy(false);
  setMaximumAge(0u);
  setTimeout(4294967295u);
}

PositionOptions::~PositionOptions() {}

PositionOptions::PositionOptions(const PositionOptions&) = default;

PositionOptions& PositionOptions::operator=(const PositionOptions&) = default;

void PositionOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
