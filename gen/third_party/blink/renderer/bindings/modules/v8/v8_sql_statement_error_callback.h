// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off

#ifndef V8SQLStatementErrorCallback_h
#define V8SQLStatementErrorCallback_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_interface_base.h"

namespace blink {

class SQLError;
class SQLTransaction;

class MODULES_EXPORT V8SQLStatementErrorCallback final : public CallbackInterfaceBase {
 public:
  static V8SQLStatementErrorCallback* Create(v8::Local<v8::Object> callback_object) {
    return new V8SQLStatementErrorCallback(callback_object);
  }

  ~V8SQLStatementErrorCallback() override = default;

  // Performs "call a user object's operation".
  // https://heycam.github.io/webidl/#call-a-user-objects-operation
  v8::Maybe<bool> handleEvent(ScriptWrappable* callback_this_value, SQLTransaction* transaction, SQLError* error) WARN_UNUSED_RESULT;

 private:
  explicit V8SQLStatementErrorCallback(v8::Local<v8::Object> callback_object)
      : CallbackInterfaceBase(callback_object, kSingleOperation) {}
};

template <>
class MODULES_TEMPLATE_CLASS_EXPORT V8PersistentCallbackInterface<V8SQLStatementErrorCallback> final : public V8PersistentCallbackInterfaceBase {
  using V8CallbackInterface = V8SQLStatementErrorCallback;

 public:
  ~V8PersistentCallbackInterface() override = default;

  MODULES_EXTERN_TEMPLATE_EXPORT
  v8::Maybe<bool> handleEvent(ScriptWrappable* callback_this_value, SQLTransaction* transaction, SQLError* error) WARN_UNUSED_RESULT;

 private:
  explicit V8PersistentCallbackInterface(V8CallbackInterface* callback_interface)
      : V8PersistentCallbackInterfaceBase(callback_interface) {}

  V8CallbackInterface* Proxy() {
    return As<V8CallbackInterface>();
  }

  template <typename V8CallbackInterface>
  friend V8PersistentCallbackInterface<V8CallbackInterface>*
  ToV8PersistentCallbackInterface(V8CallbackInterface*);
};

// V8SQLStatementErrorCallback is designed to be used with wrapper-tracing.
// As blink::Persistent does not perform wrapper-tracing, use of
// |WrapPersistent| for callback interfaces is likely (if not always) misuse.
// Thus, this code prohibits such a use case. The call sites should explicitly
// use WrapPersistent(V8PersistentCallbackInterface<T>*).
Persistent<V8SQLStatementErrorCallback> WrapPersistent(V8SQLStatementErrorCallback*) = delete;

}  // namespace blink

#endif  // V8SQLStatementErrorCallback_h
