// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/ContentFeatureList

#ifndef org_chromium_content_browser_ContentFeatureList_JNI
#define org_chromium_content_browser_ContentFeatureList_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_ContentFeatureList[];
const char kClassPath_org_chromium_content_browser_ContentFeatureList[] =
    "org/chromium/content/browser/ContentFeatureList";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_ContentFeatureList_clazz = 0;
#ifndef org_chromium_content_browser_ContentFeatureList_clazz_defined
#define org_chromium_content_browser_ContentFeatureList_clazz_defined
inline jclass org_chromium_content_browser_ContentFeatureList_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_ContentFeatureList,
      &g_org_chromium_content_browser_ContentFeatureList_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {
namespace android {

static jboolean JNI_ContentFeatureList_IsEnabled(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& featureName);

JNI_GENERATOR_EXPORT jboolean Java_org_chromium_content_browser_ContentFeatureList_nativeIsEnabled(
    JNIEnv* env,
    jclass jcaller,
    jstring featureName) {
  return JNI_ContentFeatureList_IsEnabled(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, featureName));
}


}  // namespace android
}  // namespace content

#endif  // org_chromium_content_browser_ContentFeatureList_JNI