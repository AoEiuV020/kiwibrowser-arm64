// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/selection/HandleViewResources

#ifndef org_chromium_content_browser_selection_HandleViewResources_JNI
#define org_chromium_content_browser_selection_HandleViewResources_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_selection_HandleViewResources[];
const char kClassPath_org_chromium_content_browser_selection_HandleViewResources[] =
    "org/chromium/content/browser/selection/HandleViewResources";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_HandleViewResources_clazz = 0;
#ifndef org_chromium_content_browser_selection_HandleViewResources_clazz_defined
#define org_chromium_content_browser_selection_HandleViewResources_clazz_defined
inline jclass org_chromium_content_browser_selection_HandleViewResources_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_selection_HandleViewResources,
      &g_org_chromium_content_browser_selection_HandleViewResources_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {


static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_HandleViewResources_getHandleHorizontalPaddingRatio =
    0;
static jfloat Java_HandleViewResources_getHandleHorizontalPaddingRatio(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
      org_chromium_content_browser_selection_HandleViewResources_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          "getHandleHorizontalPaddingRatio",
          "()F",
&g_org_chromium_content_browser_selection_HandleViewResources_getHandleHorizontalPaddingRatio);

  jfloat ret =
env->CallStaticFloatMethod(org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_HandleViewResources_getLeftHandleBitmap = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HandleViewResources_getLeftHandleBitmap(JNIEnv* env, const base::android::JavaRef<jobject>&
    context) {
  CHECK_CLAZZ(env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
      org_chromium_content_browser_selection_HandleViewResources_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          "getLeftHandleBitmap",
          "(Landroid/content/Context;)Landroid/graphics/Bitmap;",
          &g_org_chromium_content_browser_selection_HandleViewResources_getLeftHandleBitmap);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_HandleViewResources_getCenterHandleBitmap = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HandleViewResources_getCenterHandleBitmap(JNIEnv* env, const
    base::android::JavaRef<jobject>& context) {
  CHECK_CLAZZ(env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
      org_chromium_content_browser_selection_HandleViewResources_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          "getCenterHandleBitmap",
          "(Landroid/content/Context;)Landroid/graphics/Bitmap;",
          &g_org_chromium_content_browser_selection_HandleViewResources_getCenterHandleBitmap);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_HandleViewResources_getRightHandleBitmap = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_HandleViewResources_getRightHandleBitmap(JNIEnv* env, const
    base::android::JavaRef<jobject>& context) {
  CHECK_CLAZZ(env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
      org_chromium_content_browser_selection_HandleViewResources_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          "getRightHandleBitmap",
          "(Landroid/content/Context;)Landroid/graphics/Bitmap;",
          &g_org_chromium_content_browser_selection_HandleViewResources_getRightHandleBitmap);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_content_browser_selection_HandleViewResources_clazz(env),
          method_id, context.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace content

#endif  // org_chromium_content_browser_selection_HandleViewResources_JNI
