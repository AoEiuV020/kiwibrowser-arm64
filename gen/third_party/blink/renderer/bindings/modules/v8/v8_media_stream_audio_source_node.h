// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8MediaStreamAudioSourceNode_h
#define V8MediaStreamAudioSourceNode_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/media_stream_audio_source_node.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8MediaStreamAudioSourceNode {
  STATIC_ONLY(V8MediaStreamAudioSourceNode);
 public:
  MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static MediaStreamAudioSourceNode* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<MediaStreamAudioSourceNode>();
  }
  MODULES_EXPORT static MediaStreamAudioSourceNode* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions
  MODULES_EXPORT static void constructorCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void mediaStreamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<MediaStreamAudioSourceNode> : public NativeValueTraitsBase<MediaStreamAudioSourceNode> {
  MODULES_EXPORT static MediaStreamAudioSourceNode* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static MediaStreamAudioSourceNode* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<MediaStreamAudioSourceNode> {
  typedef V8MediaStreamAudioSourceNode Type;
};

}  // namespace blink

#endif  // V8MediaStreamAudioSourceNode_h