// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/array_buffer_view_or_blob_or_string_or_form_data.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"

namespace blink {

ArrayBufferViewOrBlobOrStringOrFormData::ArrayBufferViewOrBlobOrStringOrFormData() : type_(SpecificType::kNone) {}

NotShared<DOMArrayBufferView> ArrayBufferViewOrBlobOrStringOrFormData::GetAsArrayBufferView() const {
  DCHECK(IsArrayBufferView());
  return array_buffer_view_;
}

void ArrayBufferViewOrBlobOrStringOrFormData::SetArrayBufferView(NotShared<DOMArrayBufferView> value) {
  DCHECK(IsNull());
  array_buffer_view_ = Member<DOMArrayBufferView>(value.View());
  type_ = SpecificType::kArrayBufferView;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::FromArrayBufferView(NotShared<DOMArrayBufferView> value) {
  ArrayBufferViewOrBlobOrStringOrFormData container;
  container.SetArrayBufferView(value);
  return container;
}

Blob* ArrayBufferViewOrBlobOrStringOrFormData::GetAsBlob() const {
  DCHECK(IsBlob());
  return blob_;
}

void ArrayBufferViewOrBlobOrStringOrFormData::SetBlob(Blob* value) {
  DCHECK(IsNull());
  blob_ = value;
  type_ = SpecificType::kBlob;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::FromBlob(Blob* value) {
  ArrayBufferViewOrBlobOrStringOrFormData container;
  container.SetBlob(value);
  return container;
}

FormData* ArrayBufferViewOrBlobOrStringOrFormData::GetAsFormData() const {
  DCHECK(IsFormData());
  return form_data_;
}

void ArrayBufferViewOrBlobOrStringOrFormData::SetFormData(FormData* value) {
  DCHECK(IsNull());
  form_data_ = value;
  type_ = SpecificType::kFormData;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::FromFormData(FormData* value) {
  ArrayBufferViewOrBlobOrStringOrFormData container;
  container.SetFormData(value);
  return container;
}

const String& ArrayBufferViewOrBlobOrStringOrFormData::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void ArrayBufferViewOrBlobOrStringOrFormData::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::FromString(const String& value) {
  ArrayBufferViewOrBlobOrStringOrFormData container;
  container.SetString(value);
  return container;
}

ArrayBufferViewOrBlobOrStringOrFormData::ArrayBufferViewOrBlobOrStringOrFormData(const ArrayBufferViewOrBlobOrStringOrFormData&) = default;
ArrayBufferViewOrBlobOrStringOrFormData::~ArrayBufferViewOrBlobOrStringOrFormData() = default;
ArrayBufferViewOrBlobOrStringOrFormData& ArrayBufferViewOrBlobOrStringOrFormData::operator=(const ArrayBufferViewOrBlobOrStringOrFormData&) = default;

void ArrayBufferViewOrBlobOrStringOrFormData::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_view_);
  visitor->Trace(blob_);
  visitor->Trace(form_data_);
}

void V8ArrayBufferViewOrBlobOrStringOrFormData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ArrayBufferViewOrBlobOrStringOrFormData& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Blob::hasInstance(v8Value, isolate)) {
    Blob* cppValue = V8Blob::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetBlob(cppValue);
    return;
  }

  if (V8FormData::hasInstance(v8Value, isolate)) {
    FormData* cppValue = V8FormData::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetFormData(cppValue);
    return;
  }

  if (v8Value->IsArrayBufferView()) {
    NotShared<DOMArrayBufferView> cppValue = ToNotShared<NotShared<DOMArrayBufferView>>(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetArrayBufferView(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    impl.SetString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const ArrayBufferViewOrBlobOrStringOrFormData& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificType::kNone:
      return v8::Null(isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificType::kArrayBufferView:
      return ToV8(impl.GetAsArrayBufferView(), creationContext, isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificType::kBlob:
      return ToV8(impl.GetAsBlob(), creationContext, isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificType::kFormData:
      return ToV8(impl.GetAsFormData(), creationContext, isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ArrayBufferViewOrBlobOrStringOrFormData NativeValueTraits<ArrayBufferViewOrBlobOrStringOrFormData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ArrayBufferViewOrBlobOrStringOrFormData impl;
  V8ArrayBufferViewOrBlobOrStringOrFormData::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
