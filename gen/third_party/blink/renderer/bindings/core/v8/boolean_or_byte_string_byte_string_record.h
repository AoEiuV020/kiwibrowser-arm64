// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BooleanOrByteStringByteStringRecord_h
#define BooleanOrByteStringByteStringRecord_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT BooleanOrByteStringByteStringRecord final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BooleanOrByteStringByteStringRecord();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsBoolean() const { return type_ == SpecificType::kBoolean; }
  bool GetAsBoolean() const;
  void SetBoolean(bool);
  static BooleanOrByteStringByteStringRecord FromBoolean(bool);

  bool IsByteStringByteStringRecord() const { return type_ == SpecificType::kByteStringByteStringRecord; }
  const Vector<std::pair<String, String>>& GetAsByteStringByteStringRecord() const;
  void SetByteStringByteStringRecord(const Vector<std::pair<String, String>>&);
  static BooleanOrByteStringByteStringRecord FromByteStringByteStringRecord(const Vector<std::pair<String, String>>&);

  BooleanOrByteStringByteStringRecord(const BooleanOrByteStringByteStringRecord&);
  ~BooleanOrByteStringByteStringRecord();
  BooleanOrByteStringByteStringRecord& operator=(const BooleanOrByteStringByteStringRecord&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kBoolean,
    kByteStringByteStringRecord,
  };
  SpecificType type_;

  bool boolean_;
  Vector<std::pair<String, String>> byte_string_byte_string_record_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const BooleanOrByteStringByteStringRecord&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8BooleanOrByteStringByteStringRecord final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, BooleanOrByteStringByteStringRecord&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const BooleanOrByteStringByteStringRecord&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, BooleanOrByteStringByteStringRecord& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, BooleanOrByteStringByteStringRecord& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<BooleanOrByteStringByteStringRecord> : public NativeValueTraitsBase<BooleanOrByteStringByteStringRecord> {
  CORE_EXPORT static BooleanOrByteStringByteStringRecord NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static BooleanOrByteStringByteStringRecord NullValue() { return BooleanOrByteStringByteStringRecord(); }
};

template <>
struct V8TypeOf<BooleanOrByteStringByteStringRecord> {
  typedef V8BooleanOrByteStringByteStringRecord Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::BooleanOrByteStringByteStringRecord);

#endif  // BooleanOrByteStringByteStringRecord_h
