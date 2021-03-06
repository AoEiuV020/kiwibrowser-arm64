// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/metrics/RecordUserAction

#ifndef org_chromium_base_metrics_RecordUserAction_JNI
#define org_chromium_base_metrics_RecordUserAction_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_metrics_RecordUserAction[];
const char kClassPath_org_chromium_base_metrics_RecordUserAction[] =
    "org/chromium/base/metrics/RecordUserAction";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback[];
const char kClassPath_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback[] =
    "org/chromium/base/metrics/RecordUserAction$UserActionCallback";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_base_metrics_RecordUserAction_clazz
    = 0;
#ifndef org_chromium_base_metrics_RecordUserAction_clazz_defined
#define org_chromium_base_metrics_RecordUserAction_clazz_defined
inline jclass org_chromium_base_metrics_RecordUserAction_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_metrics_RecordUserAction,
      &g_org_chromium_base_metrics_RecordUserAction_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz = 0;
#ifndef org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz_defined
#define org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz_defined
inline jclass org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback,
      &g_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {

static void JNI_RecordUserAction_RecordUserAction(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& action);

JNI_GENERATOR_EXPORT void Java_org_chromium_base_metrics_RecordUserAction_nativeRecordUserAction(
    JNIEnv* env,
    jclass jcaller,
    jstring action) {
  return JNI_RecordUserAction_RecordUserAction(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, action));
}

static jlong JNI_RecordUserAction_AddActionCallbackForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jobject>& callback);

JNI_GENERATOR_EXPORT jlong
    Java_org_chromium_base_metrics_RecordUserAction_nativeAddActionCallbackForTesting(
    JNIEnv* env,
    jclass jcaller,
    jobject callback) {
  return JNI_RecordUserAction_AddActionCallbackForTesting(env,
      base::android::JavaParamRef<jclass>(env, jcaller), base::android::JavaParamRef<jobject>(env,
      callback));
}

static void JNI_RecordUserAction_RemoveActionCallbackForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jlong callbackId);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_metrics_RecordUserAction_nativeRemoveActionCallbackForTesting(
    JNIEnv* env,
    jclass jcaller,
    jlong callbackId) {
  return JNI_RecordUserAction_RemoveActionCallbackForTesting(env,
      base::android::JavaParamRef<jclass>(env, jcaller), callbackId);
}


static base::subtle::AtomicWord
    g_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_onActionRecorded = 0;
static void Java_UserActionCallback_onActionRecorded(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& action) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_clazz(env),
          "onActionRecorded",
          "(Ljava/lang/String;)V",
          &g_org_chromium_base_metrics_RecordUserAction_00024UserActionCallback_onActionRecorded);

     env->CallVoidMethod(obj.obj(),
          method_id, action.obj());
  jni_generator::CheckException(env);
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_metrics_RecordUserAction_JNI
