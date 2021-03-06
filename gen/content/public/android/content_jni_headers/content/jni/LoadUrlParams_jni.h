// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content_public/browser/LoadUrlParams

#ifndef org_chromium_content_public_browser_LoadUrlParams_JNI
#define org_chromium_content_public_browser_LoadUrlParams_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_1public_browser_LoadUrlParams[];
const char kClassPath_org_chromium_content_1public_browser_LoadUrlParams[] =
    "org/chromium/content_public/browser/LoadUrlParams";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_1public_browser_LoadUrlParams_clazz = 0;
#ifndef org_chromium_content_1public_browser_LoadUrlParams_clazz_defined
#define org_chromium_content_1public_browser_LoadUrlParams_clazz_defined
inline jclass org_chromium_content_1public_browser_LoadUrlParams_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_1public_browser_LoadUrlParams,
      &g_org_chromium_content_1public_browser_LoadUrlParams_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jboolean JNI_LoadUrlParams_IsDataScheme(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_1public_browser_LoadUrlParams_nativeIsDataScheme(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_LoadUrlParams_IsDataScheme(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url));
}


}  // namespace content

#endif  // org_chromium_content_public_browser_LoadUrlParams_JNI
