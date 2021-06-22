// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_registration_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RegistrationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "scope",
    "updateViaCache",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RegistrationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RegistrationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RegistrationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> scopeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&scopeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (scopeValue.IsEmpty() || scopeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> scopeCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, scopeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setScope(scopeCppValue);
  }

  v8::Local<v8::Value> updateViaCacheValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&updateViaCacheValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (updateViaCacheValue.IsEmpty() || updateViaCacheValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> updateViaCacheCppValue = updateViaCacheValue;
    if (!updateViaCacheCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "imports",
        "all",
        "none",
        nullptr,
    };
    if (!IsValidEnum(updateViaCacheCppValue, validValues, arraysize(validValues), "ServiceWorkerUpdateViaCache", exceptionState))
      return;
    impl.setUpdateViaCache(updateViaCacheCppValue);
  }
}

v8::Local<v8::Value> RegistrationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RegistrationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RegistrationOptions(const RegistrationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RegistrationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> scopeValue;
  bool scopeHasValueOrDefault = false;
  if (impl.hasScope()) {
    scopeValue = V8String(isolate, impl.scope());
    scopeHasValueOrDefault = true;
  }
  if (scopeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), scopeValue))) {
    return false;
  }

  v8::Local<v8::Value> updateViaCacheValue;
  bool updateViaCacheHasValueOrDefault = false;
  if (impl.hasUpdateViaCache()) {
    updateViaCacheValue = V8String(isolate, impl.updateViaCache());
    updateViaCacheHasValueOrDefault = true;
  } else {
    updateViaCacheValue = V8String(isolate, "imports");
    updateViaCacheHasValueOrDefault = true;
  }
  if (updateViaCacheHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), updateViaCacheValue))) {
    return false;
  }

  return true;
}

RegistrationOptions NativeValueTraits<RegistrationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RegistrationOptions impl;
  V8RegistrationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
