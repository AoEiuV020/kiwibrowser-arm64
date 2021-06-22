// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_capture_media_stream_track.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_track_content_hint.h"
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
const WrapperTypeInfo V8CanvasCaptureMediaStreamTrack::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8CanvasCaptureMediaStreamTrack::domTemplate,
    nullptr,
    "CanvasCaptureMediaStreamTrack",
    &V8MediaStreamTrack::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CanvasCaptureMediaStreamTrack.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CanvasCaptureMediaStreamTrack::wrapper_type_info_ = V8CanvasCaptureMediaStreamTrack::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, CanvasCaptureMediaStreamTrack>::value,
    "CanvasCaptureMediaStreamTrack does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&CanvasCaptureMediaStreamTrack::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CanvasCaptureMediaStreamTrack is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CanvasCaptureMediaStreamTrackV8Internal {

static void canvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CanvasCaptureMediaStreamTrack* impl = V8CanvasCaptureMediaStreamTrack::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->canvas()), impl);
}

static void requestFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CanvasCaptureMediaStreamTrack* impl = V8CanvasCaptureMediaStreamTrack::ToImpl(info.Holder());

  impl->requestFrame();
}

} // namespace CanvasCaptureMediaStreamTrackV8Internal

void V8CanvasCaptureMediaStreamTrack::canvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasCaptureMediaStreamTrack_canvas_Getter");

  CanvasCaptureMediaStreamTrackV8Internal::canvasAttributeGetter(info);
}

void V8CanvasCaptureMediaStreamTrack::requestFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CanvasCaptureMediaStreamTrack_requestFrame");

  CanvasCaptureMediaStreamTrackV8Internal::requestFrameMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8CanvasCaptureMediaStreamTrackAccessors[] = {
    { "canvas", V8CanvasCaptureMediaStreamTrack::canvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8CanvasCaptureMediaStreamTrackMethods[] = {
    {"requestFrame", V8CanvasCaptureMediaStreamTrack::requestFrameMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8CanvasCaptureMediaStreamTrackTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CanvasCaptureMediaStreamTrack::wrapperTypeInfo.interface_name, V8MediaStreamTrack::domTemplate(isolate, world), V8CanvasCaptureMediaStreamTrack::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CanvasCaptureMediaStreamTrackAccessors, arraysize(V8CanvasCaptureMediaStreamTrackAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8CanvasCaptureMediaStreamTrackMethods, arraysize(V8CanvasCaptureMediaStreamTrackMethods));

  // Custom signature

  V8CanvasCaptureMediaStreamTrack::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8CanvasCaptureMediaStreamTrack::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CanvasCaptureMediaStreamTrack::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CanvasCaptureMediaStreamTrackTemplate);
}

bool V8CanvasCaptureMediaStreamTrack::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CanvasCaptureMediaStreamTrack::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CanvasCaptureMediaStreamTrack* V8CanvasCaptureMediaStreamTrack::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CanvasCaptureMediaStreamTrack* NativeValueTraits<CanvasCaptureMediaStreamTrack>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CanvasCaptureMediaStreamTrack* nativeValue = V8CanvasCaptureMediaStreamTrack::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CanvasCaptureMediaStreamTrack"));
  }
  return nativeValue;
}

}  // namespace blink
