// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_paint_worklet_global_scope.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyword_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_invert.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_max.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_min.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_negate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_product.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_sum.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_matrix_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_perspective.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_position_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rotate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_scale.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_translate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unit_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unparsed_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_variable_reference_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_paint_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_paint_size.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_paint_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/paint_worklet_global_scope_core_constructors.h"
#include "third_party/blink/renderer/modules/paint_worklet_global_scope_modules_constructors.h"
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
const WrapperTypeInfo V8PaintWorkletGlobalScope::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8PaintWorkletGlobalScope::domTemplate,
    nullptr,
    "PaintWorkletGlobalScope",
    &V8WorkletGlobalScope::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PaintWorkletGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PaintWorkletGlobalScope::wrapper_type_info_ = V8PaintWorkletGlobalScope::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, PaintWorkletGlobalScope>::value,
    "PaintWorkletGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&PaintWorkletGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PaintWorkletGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PaintWorkletGlobalScopeV8Internal {

static void devicePixelRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaintWorkletGlobalScope* impl = V8PaintWorkletGlobalScope::ToImpl(holder);

  V8SetReturnValue(info, impl->devicePixelRatio());
}

static void registerPaintMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "PaintWorkletGlobalScope", "registerPaint");

  PaintWorkletGlobalScope* impl = V8PaintWorkletGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> name;
  ScriptValue paintCtor;
  name = info[0];
  if (!name.Prepare())
    return;

  if (info[1]->IsFunction()) {
    paintCtor = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  impl->registerPaint(name, paintCtor, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace PaintWorkletGlobalScopeV8Internal

void V8PaintWorkletGlobalScope::devicePixelRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_devicePixelRatio_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter);

  PaintWorkletGlobalScopeV8Internal::devicePixelRatioAttributeGetter(info);
}

void V8PaintWorkletGlobalScope::CSSStyleValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSStyleValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSStyleValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::StylePropertyMapReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_StylePropertyMapReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StylePropertyMapReadOnly::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSImageValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSImageValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSImageValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSKeywordValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSKeywordValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSKeywordValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathInvertConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathInvert_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathInvert::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathMaxConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathMax_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathMax::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathMinConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathMin_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathMin::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathNegateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathNegate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathNegate::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathProductConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathProduct_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathProduct::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathSumConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathSum_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathSum::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMathValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMathValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSMatrixComponentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSMatrixComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMatrixComponent::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSNumericArrayConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSNumericArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNumericArray::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSNumericValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSNumericValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNumericValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSPerspectiveConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSPerspective_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPerspective::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSPositionValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSPositionValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPositionValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSRotateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSRotate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSRotate::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSScaleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSScale_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSScale::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSSkewConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSSkew_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSSkew::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSTransformComponentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSTransformComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTransformComponent::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSTransformValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSTransformValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTransformValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSTranslateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSTranslate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTranslate::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSUnitValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSUnitValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSUnitValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSUnparsedValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSUnparsedValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSUnparsedValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::CSSVariableReferenceValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_CSSVariableReferenceValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSVariableReferenceValue::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::WorkletGlobalScopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_WorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WorkletGlobalScope::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::PaintRenderingContext2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_PaintRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaintRenderingContext2D::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::PaintSizeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_PaintSize_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaintSize::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::PaintWorkletGlobalScopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_PaintWorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaintWorkletGlobalScope::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::Path2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Path2D::wrapperTypeInfo);
}

void V8PaintWorkletGlobalScope::registerPaintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaintWorkletGlobalScope_registerPaint");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8PaintWorkletGlobalScope_RegisterPaint_Method);
  PaintWorkletGlobalScopeV8Internal::registerPaintMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8PaintWorkletGlobalScopeAccessors[] = {
    { "devicePixelRatio", V8PaintWorkletGlobalScope::devicePixelRatioAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8PaintWorkletGlobalScopeMethods[] = {
    {"registerPaint", V8PaintWorkletGlobalScope::registerPaintMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8PaintWorkletGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PaintWorkletGlobalScope::wrapperTypeInfo.interface_name, V8WorkletGlobalScope::domTemplate(isolate, world), V8PaintWorkletGlobalScope::internalFieldCount);

  if (!RuntimeEnabledFeatures::CSSPaintAPIEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototypeTemplate->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instanceTemplate->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8PaintWorkletGlobalScopeAccessors, arraysize(V8PaintWorkletGlobalScopeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8PaintWorkletGlobalScopeMethods, arraysize(V8PaintWorkletGlobalScopeMethods));

  // Custom signature

  V8PaintWorkletGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8PaintWorkletGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::CSSPaintAPIEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::CSSPaintAPIEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSStyleValue", V8PaintWorkletGlobalScope::CSSStyleValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PaintRenderingContext2D", V8PaintWorkletGlobalScope::PaintRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PaintSize", V8PaintWorkletGlobalScope::PaintSizeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PaintWorkletGlobalScope", V8PaintWorkletGlobalScope::PaintWorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8PaintWorkletGlobalScope::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "StylePropertyMapReadOnly", V8PaintWorkletGlobalScope::StylePropertyMapReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSImageValue", V8PaintWorkletGlobalScope::CSSImageValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSKeywordValue", V8PaintWorkletGlobalScope::CSSKeywordValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathInvert", V8PaintWorkletGlobalScope::CSSMathInvertConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMax", V8PaintWorkletGlobalScope::CSSMathMaxConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMin", V8PaintWorkletGlobalScope::CSSMathMinConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathNegate", V8PaintWorkletGlobalScope::CSSMathNegateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathProduct", V8PaintWorkletGlobalScope::CSSMathProductConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathSum", V8PaintWorkletGlobalScope::CSSMathSumConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathValue", V8PaintWorkletGlobalScope::CSSMathValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMatrixComponent", V8PaintWorkletGlobalScope::CSSMatrixComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericArray", V8PaintWorkletGlobalScope::CSSNumericArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericValue", V8PaintWorkletGlobalScope::CSSNumericValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPerspective", V8PaintWorkletGlobalScope::CSSPerspectiveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPositionValue", V8PaintWorkletGlobalScope::CSSPositionValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSRotate", V8PaintWorkletGlobalScope::CSSRotateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSScale", V8PaintWorkletGlobalScope::CSSScaleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkew", V8PaintWorkletGlobalScope::CSSSkewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformComponent", V8PaintWorkletGlobalScope::CSSTransformComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformValue", V8PaintWorkletGlobalScope::CSSTransformValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTranslate", V8PaintWorkletGlobalScope::CSSTranslateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnitValue", V8PaintWorkletGlobalScope::CSSUnitValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnparsedValue", V8PaintWorkletGlobalScope::CSSUnparsedValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSVariableReferenceValue", V8PaintWorkletGlobalScope::CSSVariableReferenceValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WorkletEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "WorkletGlobalScope", V8PaintWorkletGlobalScope::WorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8PaintWorkletGlobalScope::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PaintWorkletGlobalScopeTemplate);
}

bool V8PaintWorkletGlobalScope::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PaintWorkletGlobalScope::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PaintWorkletGlobalScope* V8PaintWorkletGlobalScope::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PaintWorkletGlobalScope* NativeValueTraits<PaintWorkletGlobalScope>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaintWorkletGlobalScope* nativeValue = V8PaintWorkletGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PaintWorkletGlobalScope"));
  }
  return nativeValue;
}

}  // namespace blink
