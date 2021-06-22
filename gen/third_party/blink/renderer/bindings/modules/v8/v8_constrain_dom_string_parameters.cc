// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_dom_string_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConstrainDOMStringParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "exact",
    "ideal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ConstrainDOMStringParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ConstrainDOMStringParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainDOMStringParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exactValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&exactValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exactValue.IsEmpty() || exactValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence exactCppValue;
    V8StringOrStringSequence::ToImpl(isolate, exactValue, exactCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExact(exactCppValue);
  }

  v8::Local<v8::Value> idealValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&idealValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (idealValue.IsEmpty() || idealValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence idealCppValue;
    V8StringOrStringSequence::ToImpl(isolate, idealValue, idealCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIdeal(idealCppValue);
  }
}

v8::Local<v8::Value> ConstrainDOMStringParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConstrainDOMStringParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConstrainDOMStringParameters(const ConstrainDOMStringParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainDOMStringParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exactValue;
  bool exactHasValueOrDefault = false;
  if (impl.hasExact()) {
    exactValue = ToV8(impl.exact(), creationContext, isolate);
    exactHasValueOrDefault = true;
  }
  if (exactHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), exactValue))) {
    return false;
  }

  v8::Local<v8::Value> idealValue;
  bool idealHasValueOrDefault = false;
  if (impl.hasIdeal()) {
    idealValue = ToV8(impl.ideal(), creationContext, isolate);
    idealHasValueOrDefault = true;
  }
  if (idealHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), idealValue))) {
    return false;
  }

  return true;
}

ConstrainDOMStringParameters NativeValueTraits<ConstrainDOMStringParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ConstrainDOMStringParameters impl;
  V8ConstrainDOMStringParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink