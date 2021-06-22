// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/components/url_formatter/UrlFormatter

#ifndef org_chromium_components_url_formatter_UrlFormatter_JNI
#define org_chromium_components_url_formatter_UrlFormatter_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_components_url_1formatter_UrlFormatter[];
const char kClassPath_org_chromium_components_url_1formatter_UrlFormatter[] =
    "org/chromium/components/url_formatter/UrlFormatter";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_components_url_1formatter_UrlFormatter_clazz = 0;
#ifndef org_chromium_components_url_1formatter_UrlFormatter_clazz_defined
#define org_chromium_components_url_1formatter_UrlFormatter_clazz_defined
inline jclass org_chromium_components_url_1formatter_UrlFormatter_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_components_url_1formatter_UrlFormatter,
      &g_org_chromium_components_url_1formatter_UrlFormatter_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace url_formatter {
namespace android {

static base::android::ScopedJavaLocalRef<jstring> JNI_UrlFormatter_FixupUrl(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_components_url_1formatter_UrlFormatter_nativeFixupUrl(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_UrlFormatter_FixupUrl(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_UrlFormatter_FormatUrlForDisplayOmitScheme(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_components_url_1formatter_UrlFormatter_nativeFormatUrlForDisplayOmitScheme(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_UrlFormatter_FormatUrlForDisplayOmitScheme(env,
      base::android::JavaParamRef<jclass>(env, jcaller), base::android::JavaParamRef<jstring>(env,
      url)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_UrlFormatter_FormatUrlForDisplayOmitHTTPScheme(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_components_url_1formatter_UrlFormatter_nativeFormatUrlForDisplayOmitHTTPScheme(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_UrlFormatter_FormatUrlForDisplayOmitHTTPScheme(env,
      base::android::JavaParamRef<jclass>(env, jcaller), base::android::JavaParamRef<jstring>(env,
      url)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_UrlFormatter_FormatUrlForCopy(JNIEnv* env,
    const base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_components_url_1formatter_UrlFormatter_nativeFormatUrlForCopy(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_UrlFormatter_FormatUrlForCopy(env, base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_UrlFormatter_FormatUrlForSecurityDisplay(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_components_url_1formatter_UrlFormatter_nativeFormatUrlForSecurityDisplay(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_UrlFormatter_FormatUrlForSecurityDisplay(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, url)).Release();
}

static base::android::ScopedJavaLocalRef<jstring>
    JNI_UrlFormatter_FormatUrlForSecurityDisplayOmitScheme(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& url);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_components_url_1formatter_UrlFormatter_nativeFormatUrlForSecurityDisplayOmitScheme(
    JNIEnv* env,
    jclass jcaller,
    jstring url) {
  return JNI_UrlFormatter_FormatUrlForSecurityDisplayOmitScheme(env,
      base::android::JavaParamRef<jclass>(env, jcaller), base::android::JavaParamRef<jstring>(env,
      url)).Release();
}


}  // namespace android
}  // namespace url_formatter

#endif  // org_chromium_components_url_formatter_UrlFormatter_JNI
