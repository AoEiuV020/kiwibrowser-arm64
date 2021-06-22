// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/shapedetection/landmark.h"

namespace blink {

Landmark::Landmark() {
}

Landmark::~Landmark() {}

Landmark::Landmark(const Landmark&) = default;

Landmark& Landmark::operator=(const Landmark&) = default;

void Landmark::setLocations(const HeapVector<Point2D>& value) {
  locations_ = value;
  has_locations_ = true;
}

void Landmark::Trace(blink::Visitor* visitor) {
  visitor->Trace(locations_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
