// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/encryptedmedia/media_keys_policy.h"

namespace blink {

MediaKeysPolicy::MediaKeysPolicy() {
  setMinHdcpVersion(WTF::g_empty_string);
}

MediaKeysPolicy::~MediaKeysPolicy() {}

MediaKeysPolicy::MediaKeysPolicy(const MediaKeysPolicy&) = default;

MediaKeysPolicy& MediaKeysPolicy::operator=(const MediaKeysPolicy&) = default;

void MediaKeysPolicy::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
