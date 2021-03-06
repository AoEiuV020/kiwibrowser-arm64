// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8FontFaceSet_h
#define V8FontFaceSet_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/css/font_face_set.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8FontFaceSet {
  STATIC_ONLY(V8FontFaceSet);
 public:
  CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static FontFaceSet* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<FontFaceSet>();
  }
  CORE_EXPORT static FontFaceSet* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void onloadingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void onloadingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void onloadingdoneAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void onloadingdoneAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void onloadingerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void onloadingerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void readyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void loadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void checkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void hasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void addMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void deleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void iteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<FontFaceSet> : public NativeValueTraitsBase<FontFaceSet> {
  CORE_EXPORT static FontFaceSet* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static FontFaceSet* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<FontFaceSet> {
  typedef V8FontFaceSet Type;
};

}  // namespace blink

#endif  // V8FontFaceSet_h
