// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/error_event_init.h"

namespace blink {

ErrorEventInit::ErrorEventInit() {
}

ErrorEventInit::~ErrorEventInit() {}

ErrorEventInit::ErrorEventInit(const ErrorEventInit&) = default;

ErrorEventInit& ErrorEventInit::operator=(const ErrorEventInit&) = default;

void ErrorEventInit::setError(ScriptValue value) {
  error_ = value;
}

void ErrorEventInit::Trace(blink::Visitor* visitor) {
  EventInit::Trace(visitor);
}

}  // namespace blink
