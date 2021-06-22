// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/ContentViewStaticsImpl

#ifndef org_chromium_content_browser_ContentViewStaticsImpl_JNI
#define org_chromium_content_browser_ContentViewStaticsImpl_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_ContentViewStaticsImpl[];
const char kClassPath_org_chromium_content_browser_ContentViewStaticsImpl[] =
    "org/chromium/content/browser/ContentViewStaticsImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_ContentViewStaticsImpl_clazz = 0;
#ifndef org_chromium_content_browser_ContentViewStaticsImpl_clazz_defined
#define org_chromium_content_browser_ContentViewStaticsImpl_clazz_defined
inline jclass org_chromium_content_browser_ContentViewStaticsImpl_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_ContentViewStaticsImpl,
      &g_org_chromium_content_browser_ContentViewStaticsImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
static void JNI_ContentViewStaticsImpl_SetWebKitSharedTimersSuspended(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jboolean suspend);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_ContentViewStaticsImpl_nativeSetWebKitSharedTimersSuspended(
    JNIEnv* env,
    jclass jcaller,
    jboolean suspend) {
  return JNI_ContentViewStaticsImpl_SetWebKitSharedTimersSuspended(env,
      base::android::JavaParamRef<jclass>(env, jcaller), suspend);
}


#endif  // org_chromium_content_browser_ContentViewStaticsImpl_JNI
