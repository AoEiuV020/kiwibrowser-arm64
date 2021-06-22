// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/focus_event_init.h"

#include "third_party/blink/renderer/core/dom/events/event_target.h"

namespace blink {

FocusEventInit::FocusEventInit() {
}

FocusEventInit::~FocusEventInit() {}

FocusEventInit::FocusEventInit(const FocusEventInit&) = default;

FocusEventInit& FocusEventInit::operator=(const FocusEventInit&) = default;

void FocusEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(related_target_);
  UIEventInit::Trace(visitor);
}

}  // namespace blink
