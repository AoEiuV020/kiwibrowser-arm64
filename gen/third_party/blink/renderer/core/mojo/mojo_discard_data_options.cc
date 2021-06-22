// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/mojo/mojo_discard_data_options.h"

namespace blink {

MojoDiscardDataOptions::MojoDiscardDataOptions() {
  setAllOrNone(false);
}

MojoDiscardDataOptions::~MojoDiscardDataOptions() {}

MojoDiscardDataOptions::MojoDiscardDataOptions(const MojoDiscardDataOptions&) = default;

MojoDiscardDataOptions& MojoDiscardDataOptions::operator=(const MojoDiscardDataOptions&) = default;

void MojoDiscardDataOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink