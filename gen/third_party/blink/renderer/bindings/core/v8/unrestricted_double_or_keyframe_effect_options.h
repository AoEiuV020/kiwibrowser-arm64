// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef UnrestrictedDoubleOrKeyframeEffectOptions_h
#define UnrestrictedDoubleOrKeyframeEffectOptions_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect_options.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT UnrestrictedDoubleOrKeyframeEffectOptions final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  UnrestrictedDoubleOrKeyframeEffectOptions();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsKeyframeEffectOptions() const { return type_ == SpecificType::kKeyframeEffectOptions; }
  const KeyframeEffectOptions& GetAsKeyframeEffectOptions() const;
  void SetKeyframeEffectOptions(const KeyframeEffectOptions&);
  static UnrestrictedDoubleOrKeyframeEffectOptions FromKeyframeEffectOptions(const KeyframeEffectOptions&);

  bool IsUnrestrictedDouble() const { return type_ == SpecificType::kUnrestrictedDouble; }
  double GetAsUnrestrictedDouble() const;
  void SetUnrestrictedDouble(double);
  static UnrestrictedDoubleOrKeyframeEffectOptions FromUnrestrictedDouble(double);

  UnrestrictedDoubleOrKeyframeEffectOptions(const UnrestrictedDoubleOrKeyframeEffectOptions&);
  ~UnrestrictedDoubleOrKeyframeEffectOptions();
  UnrestrictedDoubleOrKeyframeEffectOptions& operator=(const UnrestrictedDoubleOrKeyframeEffectOptions&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kKeyframeEffectOptions,
    kUnrestrictedDouble,
  };
  SpecificType type_;

  KeyframeEffectOptions keyframe_effect_options_;
  double unrestricted_double_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const UnrestrictedDoubleOrKeyframeEffectOptions&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8UnrestrictedDoubleOrKeyframeEffectOptions final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, UnrestrictedDoubleOrKeyframeEffectOptions&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const UnrestrictedDoubleOrKeyframeEffectOptions&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, UnrestrictedDoubleOrKeyframeEffectOptions& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, UnrestrictedDoubleOrKeyframeEffectOptions& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<UnrestrictedDoubleOrKeyframeEffectOptions> : public NativeValueTraitsBase<UnrestrictedDoubleOrKeyframeEffectOptions> {
  CORE_EXPORT static UnrestrictedDoubleOrKeyframeEffectOptions NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static UnrestrictedDoubleOrKeyframeEffectOptions NullValue() { return UnrestrictedDoubleOrKeyframeEffectOptions(); }
};

template <>
struct V8TypeOf<UnrestrictedDoubleOrKeyframeEffectOptions> {
  typedef V8UnrestrictedDoubleOrKeyframeEffectOptions Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::UnrestrictedDoubleOrKeyframeEffectOptions);

#endif  // UnrestrictedDoubleOrKeyframeEffectOptions_h
