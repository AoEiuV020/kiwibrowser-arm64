// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/media_stream_audio_source_options.h"

#include "third_party/blink/renderer/modules/mediastream/media_stream.h"

namespace blink {

MediaStreamAudioSourceOptions::MediaStreamAudioSourceOptions() {
}

MediaStreamAudioSourceOptions::~MediaStreamAudioSourceOptions() {}

MediaStreamAudioSourceOptions::MediaStreamAudioSourceOptions(const MediaStreamAudioSourceOptions&) = default;

MediaStreamAudioSourceOptions& MediaStreamAudioSourceOptions::operator=(const MediaStreamAudioSourceOptions&) = default;

void MediaStreamAudioSourceOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(media_stream_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
