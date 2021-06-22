// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediasession/media_image.h"

namespace blink {

MediaImage::MediaImage() {
  setSizes(WTF::g_empty_string);
  setType(WTF::g_empty_string);
}

MediaImage::~MediaImage() {}

MediaImage::MediaImage(const MediaImage&) = default;

MediaImage& MediaImage::operator=(const MediaImage&) = default;

void MediaImage::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
