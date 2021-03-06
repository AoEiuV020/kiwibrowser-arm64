// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/ApplicationStatus

#ifndef org_chromium_base_ApplicationStatus_JNI
#define org_chromium_base_ApplicationStatus_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_ApplicationStatus[];
const char kClassPath_org_chromium_base_ApplicationStatus[] = "org/chromium/base/ApplicationStatus";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_base_ApplicationStatus_clazz = 0;
#ifndef org_chromium_base_ApplicationStatus_clazz_defined
#define org_chromium_base_ApplicationStatus_clazz_defined
inline jclass org_chromium_base_ApplicationStatus_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_ApplicationStatus,
      &g_org_chromium_base_ApplicationStatus_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {

static void JNI_ApplicationStatus_OnApplicationStateChange(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jint newState);

JNI_GENERATOR_EXPORT void Java_org_chromium_base_ApplicationStatus_nativeOnApplicationStateChange(
    JNIEnv* env,
    jclass jcaller,
    jint newState) {
  return JNI_ApplicationStatus_OnApplicationStateChange(env,
      base::android::JavaParamRef<jclass>(env, jcaller), newState);
}


static base::subtle::AtomicWord g_org_chromium_base_ApplicationStatus_getStateForApplication = 0;
static jint Java_ApplicationStatus_getStateForApplication(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_base_ApplicationStatus_clazz(env),
      org_chromium_base_ApplicationStatus_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_ApplicationStatus_clazz(env),
          "getStateForApplication",
          "()I",
          &g_org_chromium_base_ApplicationStatus_getStateForApplication);

  jint ret =
      env->CallStaticIntMethod(org_chromium_base_ApplicationStatus_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_base_ApplicationStatus_registerThreadSafeNativeApplicationStateListener = 0;
static void Java_ApplicationStatus_registerThreadSafeNativeApplicationStateListener(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_base_ApplicationStatus_clazz(env),
      org_chromium_base_ApplicationStatus_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_ApplicationStatus_clazz(env),
          "registerThreadSafeNativeApplicationStateListener",
          "()V",
          &g_org_chromium_base_ApplicationStatus_registerThreadSafeNativeApplicationStateListener);

     env->CallStaticVoidMethod(org_chromium_base_ApplicationStatus_clazz(env),
          method_id);
  jni_generator::CheckException(env);
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_ApplicationStatus_JNI
