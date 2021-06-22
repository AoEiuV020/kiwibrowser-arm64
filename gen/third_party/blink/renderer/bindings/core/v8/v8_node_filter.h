// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off

#ifndef V8NodeFilter_h
#define V8NodeFilter_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_interface_base.h"
#include "third_party/blink/renderer/platform/bindings/dom_wrapper_world.h"

namespace blink {

class Node;

class CORE_EXPORT V8NodeFilter final : public CallbackInterfaceBase {
 public:
  // Support of "legacy callback interface"
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static const WrapperTypeInfo wrapperTypeInfo;
  // Constants
  static constexpr uint16_t FILTER_ACCEPT = 1;
  static constexpr uint16_t FILTER_REJECT = 2;
  static constexpr uint16_t FILTER_SKIP = 3;
  static constexpr uint32_t SHOW_ALL = 0xFFFFFFFF;
  static constexpr uint32_t SHOW_ELEMENT = 0x1;
  static constexpr uint32_t SHOW_ATTRIBUTE = 0x2;
  static constexpr uint32_t SHOW_TEXT = 0x4;
  static constexpr uint32_t SHOW_CDATA_SECTION = 0x8;
  static constexpr uint32_t SHOW_ENTITY_REFERENCE = 0x10;
  static constexpr uint32_t SHOW_ENTITY = 0x20;
  static constexpr uint32_t SHOW_PROCESSING_INSTRUCTION = 0x40;
  static constexpr uint32_t SHOW_COMMENT = 0x80;
  static constexpr uint32_t SHOW_DOCUMENT = 0x100;
  static constexpr uint32_t SHOW_DOCUMENT_TYPE = 0x200;
  static constexpr uint32_t SHOW_DOCUMENT_FRAGMENT = 0x400;
  static constexpr uint32_t SHOW_NOTATION = 0x800;

  static V8NodeFilter* Create(v8::Local<v8::Object> callback_object) {
    return new V8NodeFilter(callback_object);
  }

  ~V8NodeFilter() override = default;

  // Performs "call a user object's operation".
  // https://heycam.github.io/webidl/#call-a-user-objects-operation
  v8::Maybe<uint16_t> acceptNode(ScriptWrappable* callback_this_value, Node* node) WARN_UNUSED_RESULT;

 private:
  explicit V8NodeFilter(v8::Local<v8::Object> callback_object)
      : CallbackInterfaceBase(callback_object, kSingleOperation) {}
};

template <>
class CORE_TEMPLATE_CLASS_EXPORT V8PersistentCallbackInterface<V8NodeFilter> final : public V8PersistentCallbackInterfaceBase {
  using V8CallbackInterface = V8NodeFilter;

 public:
  ~V8PersistentCallbackInterface() override = default;

  CORE_EXTERN_TEMPLATE_EXPORT
  v8::Maybe<uint16_t> acceptNode(ScriptWrappable* callback_this_value, Node* node) WARN_UNUSED_RESULT;

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

// V8NodeFilter is designed to be used with wrapper-tracing.
// As blink::Persistent does not perform wrapper-tracing, use of
// |WrapPersistent| for callback interfaces is likely (if not always) misuse.
// Thus, this code prohibits such a use case. The call sites should explicitly
// use WrapPersistent(V8PersistentCallbackInterface<T>*).
Persistent<V8NodeFilter> WrapPersistent(V8NodeFilter*) = delete;

}  // namespace blink

#endif  // V8NodeFilter_h
