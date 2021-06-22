// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/progress_event_init.h"

namespace blink {

ProgressEventInit::ProgressEventInit() {
  setLengthComputable(false);
  setLoaded(0);
  setTotal(0);
}

ProgressEventInit::~ProgressEventInit() {}

ProgressEventInit::ProgressEventInit(const ProgressEventInit&) = default;

ProgressEventInit& ProgressEventInit::operator=(const ProgressEventInit&) = default;

void ProgressEventInit::Trace(blink::Visitor* visitor) {
  EventInit::Trace(visitor);
}

}  // namespace blink
