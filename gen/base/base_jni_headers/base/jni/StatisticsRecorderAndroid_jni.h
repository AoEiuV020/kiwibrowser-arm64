// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/metrics/StatisticsRecorderAndroid

#ifndef org_chromium_base_metrics_StatisticsRecorderAndroid_JNI
#define org_chromium_base_metrics_StatisticsRecorderAndroid_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_base_metrics_StatisticsRecorderAndroid[];
const char kClassPath_org_chromium_base_metrics_StatisticsRecorderAndroid[] =
    "org/chromium/base/metrics/StatisticsRecorderAndroid";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_base_metrics_StatisticsRecorderAndroid_clazz = 0;
#ifndef org_chromium_base_metrics_StatisticsRecorderAndroid_clazz_defined
#define org_chromium_base_metrics_StatisticsRecorderAndroid_clazz_defined
inline jclass org_chromium_base_metrics_StatisticsRecorderAndroid_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_base_metrics_StatisticsRecorderAndroid,
      &g_org_chromium_base_metrics_StatisticsRecorderAndroid_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {

static base::android::ScopedJavaLocalRef<jstring> JNI_StatisticsRecorderAndroid_ToJson(JNIEnv* env,
    const base::android::JavaParamRef<jclass>& jcaller,
    jint verbosityLevel);

JNI_GENERATOR_EXPORT jstring Java_org_chromium_base_metrics_StatisticsRecorderAndroid_nativeToJson(
    JNIEnv* env,
    jclass jcaller,
    jint verbosityLevel) {
  return JNI_StatisticsRecorderAndroid_ToJson(env, base::android::JavaParamRef<jclass>(env,
      jcaller), verbosityLevel).Release();
}


}  // namespace android
}  // namespace base

#endif  // org_chromium_base_metrics_StatisticsRecorderAndroid_JNI
