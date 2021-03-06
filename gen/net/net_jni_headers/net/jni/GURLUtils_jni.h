// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/GURLUtils

#ifndef org_chromium_net_GURLUtils_JNI
#define org_chromium_net_GURLUtils_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_GURLUtils[];
const char kClassPath_org_chromium_net_GURLUtils[] = "org/chromium/net/GURLUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_net_GURLUtils_clazz = 0;
#ifndef org_chromium_net_GURLUtils_clazz_defined
#define org_chromium_net_GURLUtils_clazz_defined
inline jclass org_chromium_net_GURLUtils_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_GURLUtils,
      &g_org_chromium_net_GURLUtils_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {

static base::android::ScopedJavaLocalRef<jstring> JNI_GURLUtils_GetOrigin(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring Java_org_chromium_net_GURLUtils_nativeGetOrigin(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_GURLUtils_GetOrigin(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_GURLUtils_GetScheme(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring Java_org_chromium_net_GURLUtils_nativeGetScheme(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_GURLUtils_GetScheme(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url)).Release();
}


}  // namespace net

#endif  // org_chromium_net_GURLUtils_JNI
