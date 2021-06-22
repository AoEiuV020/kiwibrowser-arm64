// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/GestureListenerManagerImpl

#ifndef org_chromium_content_browser_GestureListenerManagerImpl_JNI
#define org_chromium_content_browser_GestureListenerManagerImpl_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_GestureListenerManagerImpl[];
const char kClassPath_org_chromium_content_browser_GestureListenerManagerImpl[] =
    "org/chromium/content/browser/GestureListenerManagerImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_GestureListenerManagerImpl_clazz = 0;
#ifndef org_chromium_content_browser_GestureListenerManagerImpl_clazz_defined
#define org_chromium_content_browser_GestureListenerManagerImpl_clazz_defined
inline jclass org_chromium_content_browser_GestureListenerManagerImpl_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_GestureListenerManagerImpl,
      &g_org_chromium_content_browser_GestureListenerManagerImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jlong JNI_GestureListenerManagerImpl_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jlong Java_org_chromium_content_browser_GestureListenerManagerImpl_nativeInit(
    JNIEnv* env,
    jobject jcaller,
    jobject webContents) {
  return JNI_GestureListenerManagerImpl_Init(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, webContents));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_content_browser_GestureListenerManagerImpl_nativeReset(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeGestureListenerManager) {
  GestureListenerManager* native =
      reinterpret_cast<GestureListenerManager*>(nativeGestureListenerManager);
  CHECK_NATIVE_PTR(env, jcaller, native, "Reset");
  return native->Reset(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_GestureListenerManagerImpl_nativeResetGestureDetection(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeGestureListenerManager) {
  GestureListenerManager* native =
      reinterpret_cast<GestureListenerManager*>(nativeGestureListenerManager);
  CHECK_NATIVE_PTR(env, jcaller, native, "ResetGestureDetection");
  return native->ResetGestureDetection(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_GestureListenerManagerImpl_nativeSetDoubleTapSupportEnabled(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeGestureListenerManager,
    jboolean enabled) {
  GestureListenerManager* native =
      reinterpret_cast<GestureListenerManager*>(nativeGestureListenerManager);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetDoubleTapSupportEnabled");
  return native->SetDoubleTapSupportEnabled(env, base::android::JavaParamRef<jobject>(env, jcaller),
      enabled);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_GestureListenerManagerImpl_nativeSetMultiTouchZoomSupportEnabled(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeGestureListenerManager,
    jboolean enabled) {
  GestureListenerManager* native =
      reinterpret_cast<GestureListenerManager*>(nativeGestureListenerManager);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetMultiTouchZoomSupportEnabled");
  return native->SetMultiTouchZoomSupportEnabled(env, base::android::JavaParamRef<jobject>(env,
      jcaller), enabled);
}


static base::subtle::AtomicWord
    g_org_chromium_content_browser_GestureListenerManagerImpl_updateOnTouchDown = 0;
static void Java_GestureListenerManagerImpl_updateOnTouchDown(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "updateOnTouchDown",
          "()V",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_updateOnTouchDown);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_content_browser_GestureListenerManagerImpl_onFlingEnd
    = 0;
static void Java_GestureListenerManagerImpl_onFlingEnd(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "onFlingEnd",
          "()V",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_onFlingEnd);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_content_browser_GestureListenerManagerImpl_onEventAck
    = 0;
static void Java_GestureListenerManagerImpl_onEventAck(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper event,
    jboolean consumed) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "onEventAck",
          "(IZ)V",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_onEventAck);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(event), consumed);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_GestureListenerManagerImpl_resetPopupsAndInput = 0;
static void Java_GestureListenerManagerImpl_resetPopupsAndInput(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean renderProcessGone) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "resetPopupsAndInput",
          "(Z)V",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_resetPopupsAndInput);

     env->CallVoidMethod(obj.obj(),
          method_id, renderProcessGone);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_content_browser_GestureListenerManagerImpl_onDestroy
    = 0;
static void Java_GestureListenerManagerImpl_onDestroy(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "onDestroy",
          "()V",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_onDestroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_GestureListenerManagerImpl_filterTapOrPressEvent = 0;
static jboolean Java_GestureListenerManagerImpl_filterTapOrPressEvent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper type,
    JniIntWrapper x,
    JniIntWrapper y) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "filterTapOrPressEvent",
          "(III)Z",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_filterTapOrPressEvent);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(type), as_jint(x), as_jint(y));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_GestureListenerManagerImpl_updateScrollInfo = 0;
static void Java_GestureListenerManagerImpl_updateScrollInfo(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat scrollOffsetX,
    jfloat scrollOffsetY,
    jfloat pageScaleFactor,
    jfloat minPageScaleFactor,
    jfloat maxPageScaleFactor,
    jfloat contentWidth,
    jfloat contentHeight,
    jfloat viewportWidth,
    jfloat viewportHeight,
    jfloat topBarShownPix,
    jboolean topBarChanged) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_GestureListenerManagerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_GestureListenerManagerImpl_clazz(env),
          "updateScrollInfo",
          "(FFFFFFFFFFZ)V",
          &g_org_chromium_content_browser_GestureListenerManagerImpl_updateScrollInfo);

     env->CallVoidMethod(obj.obj(),
          method_id, scrollOffsetX, scrollOffsetY, pageScaleFactor, minPageScaleFactor,
              maxPageScaleFactor, contentWidth, contentHeight, viewportWidth, viewportHeight,
              topBarShownPix, topBarChanged);
  jni_generator::CheckException(env);
}

}  // namespace content

#endif  // org_chromium_content_browser_GestureListenerManagerImpl_JNI
