// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/gain_options.h"

namespace blink {

GainOptions::GainOptions() {
  setGain(1);
}

GainOptions::~GainOptions() {}

GainOptions::GainOptions(const GainOptions&) = default;

GainOptions& GainOptions::operator=(const GainOptions&) = default;

void GainOptions::Trace(blink::Visitor* visitor) {
  AudioNodeOptions::Trace(visitor);
}

}  // namespace blink
