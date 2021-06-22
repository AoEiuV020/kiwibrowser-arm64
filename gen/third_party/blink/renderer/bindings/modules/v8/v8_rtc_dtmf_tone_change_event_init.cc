// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_tone_change_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCDTMFToneChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "tone",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCDTMFToneChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCDTMFToneChangeEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCDTMFToneChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> toneValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&toneValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (toneValue.IsEmpty() || toneValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> toneCppValue = toneValue;
    if (!toneCppValue.Prepare(exceptionState))
      return;
    impl.setTone(toneCppValue);
  }
}

v8::Local<v8::Value> RTCDTMFToneChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCDTMFToneChangeEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCDTMFToneChangeEventInit(const RTCDTMFToneChangeEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCDTMFToneChangeEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> toneValue;
  bool toneHasValueOrDefault = false;
  if (impl.hasTone()) {
    toneValue = V8String(isolate, impl.tone());
    toneHasValueOrDefault = true;
  }
  if (toneHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), toneValue))) {
    return false;
  }

  return true;
}

RTCDTMFToneChangeEventInit NativeValueTraits<RTCDTMFToneChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCDTMFToneChangeEventInit impl;
  V8RTCDTMFToneChangeEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
