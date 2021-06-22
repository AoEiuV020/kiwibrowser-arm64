// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/base/ViewAndroidDelegate

#ifndef org_chromium_ui_base_ViewAndroidDelegate_JNI
#define org_chromium_ui_base_ViewAndroidDelegate_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_ui_base_ViewAndroidDelegate[];
const char kClassPath_org_chromium_ui_base_ViewAndroidDelegate[] =
    "org/chromium/ui/base/ViewAndroidDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_clazz =
    0;
#ifndef org_chromium_ui_base_ViewAndroidDelegate_clazz_defined
#define org_chromium_ui_base_ViewAndroidDelegate_clazz_defined
inline jclass org_chromium_ui_base_ViewAndroidDelegate_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_ui_base_ViewAndroidDelegate,
      &g_org_chromium_ui_base_ViewAndroidDelegate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace ui {


static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_acquireView = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ViewAndroidDelegate_acquireView(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "acquireView",
          "()Landroid/view/View;",
          &g_org_chromium_ui_base_ViewAndroidDelegate_acquireView);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_removeView = 0;
static void Java_ViewAndroidDelegate_removeView(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& anchorView) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "removeView",
          "(Landroid/view/View;)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_removeView);

     env->CallVoidMethod(obj.obj(),
          method_id, anchorView.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_setViewPosition = 0;
static void Java_ViewAndroidDelegate_setViewPosition(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& view,
    jfloat x,
    jfloat y,
    jfloat width,
    jfloat height,
    JniIntWrapper leftMargin,
    JniIntWrapper topMargin) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "setViewPosition",
          "(Landroid/view/View;FFFFII)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_setViewPosition);

     env->CallVoidMethod(obj.obj(),
          method_id, view.obj(), x, y, width, height, as_jint(leftMargin), as_jint(topMargin));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_startDragAndDrop = 0;
static jboolean Java_ViewAndroidDelegate_startDragAndDrop(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& text,
    const base::android::JavaRef<jobject>& shadowImage) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "startDragAndDrop",
          "(Ljava/lang/String;Landroid/graphics/Bitmap;)Z",
          &g_org_chromium_ui_base_ViewAndroidDelegate_startDragAndDrop);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, text.obj(), shadowImage.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChangedToCustom =
    0;
static void Java_ViewAndroidDelegate_onCursorChangedToCustom(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& customCursorBitmap,
    JniIntWrapper hotspotX,
    JniIntWrapper hotspotY) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "onCursorChangedToCustom",
          "(Landroid/graphics/Bitmap;II)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChangedToCustom);

     env->CallVoidMethod(obj.obj(),
          method_id, customCursorBitmap.obj(), as_jint(hotspotX), as_jint(hotspotY));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChanged = 0;
static void Java_ViewAndroidDelegate_onCursorChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper cursorType) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "onCursorChanged",
          "(I)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onCursorChanged);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(cursorType));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_onBackgroundColorChanged
    = 0;
static void Java_ViewAndroidDelegate_onBackgroundColorChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper color) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "onBackgroundColorChanged",
          "(I)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onBackgroundColorChanged);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(color));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_onTopControlsChanged = 0;
static void Java_ViewAndroidDelegate_onTopControlsChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat topControlsOffsetY,
    jfloat topContentOffsetY) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "onTopControlsChanged",
          "(FF)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onTopControlsChanged);

     env->CallVoidMethod(obj.obj(),
          method_id, topControlsOffsetY, topContentOffsetY);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_onBottomControlsChanged =
    0;
static void Java_ViewAndroidDelegate_onBottomControlsChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat bottomControlsOffsetY,
    jfloat bottomContentOffsetY) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "onBottomControlsChanged",
          "(FF)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_onBottomControlsChanged);

     env->CallVoidMethod(obj.obj(),
          method_id, bottomControlsOffsetY, bottomContentOffsetY);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_ui_base_ViewAndroidDelegate_getSystemWindowInsetBottom = 0;
static jint Java_ViewAndroidDelegate_getSystemWindowInsetBottom(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "getSystemWindowInsetBottom",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getSystemWindowInsetBottom);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_getContainerView = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ViewAndroidDelegate_getContainerView(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "getContainerView",
          "()Landroid/view/ViewGroup;",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getContainerView);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOfContainerViewInWindow = 0;
static jint Java_ViewAndroidDelegate_getXLocationOfContainerViewInWindow(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "getXLocationOfContainerViewInWindow",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOfContainerViewInWindow);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOfContainerViewInWindow = 0;
static jint Java_ViewAndroidDelegate_getYLocationOfContainerViewInWindow(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "getYLocationOfContainerViewInWindow",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOfContainerViewInWindow);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOnScreen = 0;
static jint Java_ViewAndroidDelegate_getXLocationOnScreen(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "getXLocationOnScreen",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getXLocationOnScreen);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOnScreen = 0;
static jint Java_ViewAndroidDelegate_getYLocationOnScreen(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "getYLocationOnScreen",
          "()I",
          &g_org_chromium_ui_base_ViewAndroidDelegate_getYLocationOnScreen);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_ui_base_ViewAndroidDelegate_requestDisallowInterceptTouchEvent = 0;
static void Java_ViewAndroidDelegate_requestDisallowInterceptTouchEvent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "requestDisallowInterceptTouchEvent",
          "()V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_requestDisallowInterceptTouchEvent);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_requestUnbufferedDispatch
    = 0;
static void Java_ViewAndroidDelegate_requestUnbufferedDispatch(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& event) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "requestUnbufferedDispatch",
          "(Landroid/view/MotionEvent;)V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_requestUnbufferedDispatch);

     env->CallVoidMethod(obj.obj(),
          method_id, event.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_hasFocus = 0;
static jboolean Java_ViewAndroidDelegate_hasFocus(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "hasFocus",
          "()Z",
          &g_org_chromium_ui_base_ViewAndroidDelegate_hasFocus);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_ui_base_ViewAndroidDelegate_requestFocus = 0;
static void Java_ViewAndroidDelegate_requestFocus(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_base_ViewAndroidDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_base_ViewAndroidDelegate_clazz(env),
          "requestFocus",
          "()V",
          &g_org_chromium_ui_base_ViewAndroidDelegate_requestFocus);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

}  // namespace ui

#endif  // org_chromium_ui_base_ViewAndroidDelegate_JNI