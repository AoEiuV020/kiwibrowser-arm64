// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_entity.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialEntityKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "icon",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PublicKeyCredentialEntity::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PublicKeyCredentialEntity& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): name.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialEntityKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> iconValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&iconValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iconValue.IsEmpty() || iconValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> iconCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, iconValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIcon(iconCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> nameCppValue = nameValue;
    if (!nameCppValue.Prepare(exceptionState))
      return;
    impl.setName(nameCppValue);
  }
}

v8::Local<v8::Value> PublicKeyCredentialEntity::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialEntity(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialEntity(const PublicKeyCredentialEntity& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialEntityKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> iconValue;
  bool iconHasValueOrDefault = false;
  if (impl.hasIcon()) {
    iconValue = V8String(isolate, impl.icon());
    iconHasValueOrDefault = true;
  }
  if (iconHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), iconValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), nameValue))) {
    return false;
  }

  return true;
}

PublicKeyCredentialEntity NativeValueTraits<PublicKeyCredentialEntity>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PublicKeyCredentialEntity impl;
  V8PublicKeyCredentialEntity::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
