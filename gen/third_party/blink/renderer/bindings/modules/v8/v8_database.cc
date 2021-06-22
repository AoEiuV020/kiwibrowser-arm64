// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_database.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction_error_callback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Database::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Database::domTemplate,
    nullptr,
    "Database",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Database.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Database::wrapper_type_info_ = V8Database::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Database>::value,
    "Database inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Database::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Database is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DatabaseV8Internal {

static void versionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Database* impl = V8Database::ToImpl(holder);

  V8SetReturnValueString(info, impl->version(), info.GetIsolate());
}

static void changeVersionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Database* impl = V8Database::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> oldVersion;
  V8StringResource<> newVersion;
  V8SQLTransactionCallback* callback;
  V8SQLTransactionErrorCallback* errorCallback;
  V8VoidCallback* successCallback;
  oldVersion = info[0];
  if (!oldVersion.Prepare())
    return;

  newVersion = info[1];
  if (!newVersion.Prepare())
    return;

  if (info[2]->IsObject()) {
    callback = V8SQLTransactionCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", "The callback provided as parameter 3 is not an object."));
    return;
  }

  if (info[3]->IsObject()) {
    errorCallback = V8SQLTransactionErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", "The callback provided as parameter 4 is not an object."));
    return;
  }

  if (info[4]->IsObject()) {
    successCallback = V8VoidCallback::Create(info[4].As<v8::Object>());
  } else if (info[4]->IsNullOrUndefined()) {
    successCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", "The callback provided as parameter 5 is not an object."));
    return;
  }

  impl->changeVersion(oldVersion, newVersion, callback, errorCallback, successCallback);
}

static void transactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Database* impl = V8Database::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8SQLTransactionCallback* callback;
  V8SQLTransactionErrorCallback* errorCallback;
  V8VoidCallback* successCallback;
  if (info[0]->IsObject()) {
    callback = V8SQLTransactionCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    errorCallback = V8SQLTransactionErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    successCallback = V8VoidCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    successCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", "The callback provided as parameter 3 is not an object."));
    return;
  }

  impl->transaction(callback, errorCallback, successCallback);
}

static void readTransactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Database* impl = V8Database::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8SQLTransactionCallback* callback;
  V8SQLTransactionErrorCallback* errorCallback;
  V8VoidCallback* successCallback;
  if (info[0]->IsObject()) {
    callback = V8SQLTransactionCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    errorCallback = V8SQLTransactionErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    successCallback = V8VoidCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    successCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", "The callback provided as parameter 3 is not an object."));
    return;
  }

  impl->readTransaction(callback, errorCallback, successCallback);
}

} // namespace DatabaseV8Internal

void V8Database::versionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_version_Getter");

  DatabaseV8Internal::versionAttributeGetter(info);
}

void V8Database::changeVersionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_changeVersion");

  DatabaseV8Internal::changeVersionMethod(info);
}

void V8Database::transactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_transaction");

  DatabaseV8Internal::transactionMethod(info);
}

void V8Database::readTransactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_readTransaction");

  DatabaseV8Internal::readTransactionMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8DatabaseAccessors[] = {
    { "version", V8Database::versionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8DatabaseMethods[] = {
    {"changeVersion", V8Database::changeVersionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transaction", V8Database::transactionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readTransaction", V8Database::readTransactionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8DatabaseTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Database::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Database::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DatabaseAccessors, arraysize(V8DatabaseAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DatabaseMethods, arraysize(V8DatabaseMethods));

  // Custom signature

  V8Database::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Database::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8Database::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DatabaseTemplate);
}

bool V8Database::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Database::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Database* V8Database::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Database* NativeValueTraits<Database>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Database* nativeValue = V8Database::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Database"));
  }
  return nativeValue;
}

}  // namespace blink
