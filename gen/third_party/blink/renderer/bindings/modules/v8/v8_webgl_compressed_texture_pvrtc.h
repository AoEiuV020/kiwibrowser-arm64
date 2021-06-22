// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8WebGLCompressedTexturePVRTC_h
#define V8WebGLCompressedTexturePVRTC_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgl/webgl_compressed_texture_pvrtc.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8WebGLCompressedTexturePVRTC {
  STATIC_ONLY(V8WebGLCompressedTexturePVRTC);
 public:
  MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static WebGLCompressedTexturePVRTC* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<WebGLCompressedTexturePVRTC>();
  }
  MODULES_EXPORT static WebGLCompressedTexturePVRTC* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<WebGLCompressedTexturePVRTC> : public NativeValueTraitsBase<WebGLCompressedTexturePVRTC> {
  MODULES_EXPORT static WebGLCompressedTexturePVRTC* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static WebGLCompressedTexturePVRTC* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<WebGLCompressedTexturePVRTC> {
  typedef V8WebGLCompressedTexturePVRTC Type;
};

}  // namespace blink

#endif  // V8WebGLCompressedTexturePVRTC_h
