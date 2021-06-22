// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unparsed_value.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_variable_reference_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8CSSUnparsedValue::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8CSSUnparsedValue::domTemplate,
    nullptr,
    "CSSUnparsedValue",
    &V8CSSStyleValue::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSUnparsedValue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSUnparsedValue::wrapper_type_info_ = V8CSSUnparsedValue::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSUnparsedValue>::value,
    "CSSUnparsedValue inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSUnparsedValue::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSUnparsedValue is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CSSUnparsedValueV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSUnparsedValue* impl = V8CSSUnparsedValue::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSUnparsedValue_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSUnparsedValue");

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<StringOrCSSVariableReferenceValue> members;
  members = NativeValueTraits<IDLSequence<StringOrCSSVariableReferenceValue>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  CSSUnparsedValue* impl = CSSUnparsedValue::Create(members);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8CSSUnparsedValue::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kIndexedGetterContext, "CSSUnparsedValue");

  CSSUnparsedValue* impl = V8CSSUnparsedValue::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  StringOrCSSVariableReferenceValue result = impl->AnonymousIndexedGetter(index, exceptionState);
  V8SetReturnValue(info, result);
}

static void indexedPropertyDescriptor(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8CSSUnparsedValue::indexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getterValue = info.GetReturnValue().Get();
  if (!getterValue->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getterValue, true);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kIndexedSetterContext, "CSSUnparsedValue");

  CSSUnparsedValue* impl = V8CSSUnparsedValue::ToImpl(info.Holder());
  StringOrCSSVariableReferenceValue propertyValue;
  V8StringOrCSSVariableReferenceValue::ToImpl(info.GetIsolate(), v8Value, propertyValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  bool result = impl->AnonymousIndexedSetter(index, propertyValue, exceptionState);
  if (exceptionState.HadException())
    return;
  if (!result)
    return;
  V8SetReturnValue(info, v8Value);
}

} // namespace CSSUnparsedValueV8Internal

void V8CSSUnparsedValue::lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSUnparsedValue_length_Getter");

  CSSUnparsedValueV8Internal::lengthAttributeGetter(info);
}

void V8CSSUnparsedValue::indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSUnparsedValue_IndexedPropertyGetter");

  CSSUnparsedValueV8Internal::indexedPropertyGetter(index, info);
}

void V8CSSUnparsedValue::indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  CSSUnparsedValueV8Internal::indexedPropertyDescriptor(index, info);
}

void V8CSSUnparsedValue::indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  CSSUnparsedValueV8Internal::indexedPropertySetter(index, v8Value, info);
}

void V8CSSUnparsedValue::indexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.1. If the result of calling IsDataDescriptor(Desc) is false, then
  //   return false.
  if (desc.has_get() || desc.has_set()) {
    V8SetReturnValue(info, v8::Null(info.GetIsolate()));
    if (info.ShouldThrowOnError()) {
      ExceptionState exceptionState(info.GetIsolate(),
                                    ExceptionState::kIndexedSetterContext,
                                    "CSSUnparsedValue");
      exceptionState.ThrowTypeError("Accessor properties are not allowed.");
    }
    return;
  }

  // Return nothing and fall back to indexedPropertySetterCallback.
}

static const V8DOMConfiguration::AccessorConfiguration V8CSSUnparsedValueAccessors[] = {
    { "length", V8CSSUnparsedValue::lengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8CSSUnparsedValue::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSUnparsedValue_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("CSSUnparsedValue"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  CSSUnparsedValueV8Internal::constructor(info);
}

static void installV8CSSUnparsedValueTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSSUnparsedValue::wrapperTypeInfo.interface_name, V8CSSStyleValue::domTemplate(isolate, world), V8CSSUnparsedValue::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8CSSUnparsedValue::constructorCallback);
  interfaceTemplate->SetLength(1);

  if (!RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CSSUnparsedValueAccessors, arraysize(V8CSSUnparsedValueAccessors));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8CSSUnparsedValue::indexedPropertyGetterCallback,
      V8CSSUnparsedValue::indexedPropertySetterCallback,
      V8CSSUnparsedValue::indexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<CSSUnparsedValue>,
      V8CSSUnparsedValue::indexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
  // For value iterators, the properties below must originally be set to the corresponding ones in %ArrayPrototype%.
  // See https://heycam.github.io/webidl/#es-iterators.
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "entries"), v8::kArrayProto_entries);
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "forEach"), v8::kArrayProto_forEach);
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "keys"), v8::kArrayProto_keys);
  prototypeTemplate->SetIntrinsicDataProperty(V8AtomicString(isolate, "values"), v8::kArrayProto_values);

  // Custom signature

  V8CSSUnparsedValue::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8CSSUnparsedValue::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8CSSUnparsedValue::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSUnparsedValueTemplate);
}

bool V8CSSUnparsedValue::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSUnparsedValue::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSUnparsedValue* V8CSSUnparsedValue::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSUnparsedValue* NativeValueTraits<CSSUnparsedValue>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSUnparsedValue* nativeValue = V8CSSUnparsedValue::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSUnparsedValue"));
  }
  return nativeValue;
}

}  // namespace blink
