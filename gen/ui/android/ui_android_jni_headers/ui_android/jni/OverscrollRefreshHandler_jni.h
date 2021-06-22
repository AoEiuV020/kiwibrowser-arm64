// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/OverscrollRefreshHandler

#ifndef org_chromium_ui_OverscrollRefreshHandler_JNI
#define org_chromium_ui_OverscrollRefreshHandler_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_ui_OverscrollRefreshHandler[];
const char kClassPath_org_chromium_ui_OverscrollRefreshHandler[] =
    "org/chromium/ui/OverscrollRefreshHandler";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_ui_OverscrollRefreshHandler_clazz =
    0;
#ifndef org_chromium_ui_OverscrollRefreshHandler_clazz_defined
#define org_chromium_ui_OverscrollRefreshHandler_clazz_defined
inline jclass org_chromium_ui_OverscrollRefreshHandler_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_ui_OverscrollRefreshHandler,
      &g_org_chromium_ui_OverscrollRefreshHandler_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static base::subtle::AtomicWord g_org_chromium_ui_OverscrollRefreshHandler_start = 0;
static jboolean Java_OverscrollRefreshHandler_start(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat xDelta,
    jfloat yDelta) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_OverscrollRefreshHandler_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_OverscrollRefreshHandler_clazz(env),
          "start",
          "(FF)Z",
          &g_org_chromium_ui_OverscrollRefreshHandler_start);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, xDelta, yDelta);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_ui_OverscrollRefreshHandler_pull = 0;
static void Java_OverscrollRefreshHandler_pull(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jfloat xDelta,
    jfloat yDelta) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_OverscrollRefreshHandler_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_OverscrollRefreshHandler_clazz(env),
          "pull",
          "(FF)V",
          &g_org_chromium_ui_OverscrollRefreshHandler_pull);

     env->CallVoidMethod(obj.obj(),
          method_id, xDelta, yDelta);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_OverscrollRefreshHandler_release = 0;
static void Java_OverscrollRefreshHandler_release(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean allowRefresh) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_OverscrollRefreshHandler_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_OverscrollRefreshHandler_clazz(env),
          "release",
          "(Z)V",
          &g_org_chromium_ui_OverscrollRefreshHandler_release);

     env->CallVoidMethod(obj.obj(),
          method_id, allowRefresh);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_ui_OverscrollRefreshHandler_reset = 0;
static void Java_OverscrollRefreshHandler_reset(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_ui_OverscrollRefreshHandler_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_ui_OverscrollRefreshHandler_clazz(env),
          "reset",
          "()V",
          &g_org_chromium_ui_OverscrollRefreshHandler_reset);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

#endif  // org_chromium_ui_OverscrollRefreshHandler_JNI