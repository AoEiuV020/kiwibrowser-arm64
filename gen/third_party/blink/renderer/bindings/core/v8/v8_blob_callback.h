// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_function.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off

#ifndef V8BlobCallback_h
#define V8BlobCallback_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_function_base.h"

namespace blink {

class Blob;
class ScriptWrappable;

class CORE_EXPORT V8BlobCallback final : public CallbackFunctionBase {
 public:
  static V8BlobCallback* Create(v8::Local<v8::Function> callback_function) {
    return new V8BlobCallback(callback_function);
  }

  ~V8BlobCallback() override = default;

  // Performs "invoke".
  // https://heycam.github.io/webidl/#es-invoking-callback-functions
  v8::Maybe<void> Invoke(ScriptWrappable* callback_this_value, Blob* blob) WARN_UNUSED_RESULT;

  // Performs "invoke", and then reports an exception, if any, to the global
  // error handler such as DevTools' console.
  void InvokeAndReportException(ScriptWrappable* callback_this_value, Blob* blob);

 private:
  explicit V8BlobCallback(v8::Local<v8::Function> callback_function)
      : CallbackFunctionBase(callback_function) {}
};

template <>
class CORE_TEMPLATE_CLASS_EXPORT V8PersistentCallbackFunction<V8BlobCallback> final : public V8PersistentCallbackFunctionBase {
  using V8CallbackFunction = V8BlobCallback;

 public:
  ~V8PersistentCallbackFunction() override = default;

  // Returns a wrapper-tracing version of this callback function.
  V8CallbackFunction* ToNonV8Persistent() { return Proxy(); }

  CORE_EXTERN_TEMPLATE_EXPORT
  v8::Maybe<void> Invoke(ScriptWrappable* callback_this_value, Blob* blob) WARN_UNUSED_RESULT;
  CORE_EXTERN_TEMPLATE_EXPORT
  void InvokeAndReportException(ScriptWrappable* callback_this_value, Blob* blob);

 private:
  explicit V8PersistentCallbackFunction(V8CallbackFunction* callback_function)
      : V8PersistentCallbackFunctionBase(callback_function) {}

  V8CallbackFunction* Proxy() {
    return As<V8CallbackFunction>();
  }

  template <typename V8CallbackFunction>
  friend V8PersistentCallbackFunction<V8CallbackFunction>*
  ToV8PersistentCallbackFunction(V8CallbackFunction*);
};

// V8BlobCallback is designed to be used with wrapper-tracing.
// As blink::Persistent does not perform wrapper-tracing, use of
// |WrapPersistent| for callback functions is likely (if not always) misuse.
// Thus, this code prohibits such a use case. The call sites should explicitly
// use WrapPersistent(V8PersistentCallbackFunction<T>*).
Persistent<V8BlobCallback> WrapPersistent(V8BlobCallback*) = delete;

}  // namespace blink

#endif  // V8BlobCallback_h
