// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8MIDIInputMap_h
#define V8MIDIInputMap_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webmidi/midi_input_map.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8MIDIInputMap {
  STATIC_ONLY(V8MIDIInputMap);
 public:
  MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static MIDIInputMap* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<MIDIInputMap>();
  }
  MODULES_EXPORT static MIDIInputMap* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  MODULES_EXPORT static void sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void hasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void iteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<MIDIInputMap> : public NativeValueTraitsBase<MIDIInputMap> {
  MODULES_EXPORT static MIDIInputMap* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static MIDIInputMap* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<MIDIInputMap> {
  typedef V8MIDIInputMap Type;
};

}  // namespace blink

#endif  // V8MIDIInputMap_h
