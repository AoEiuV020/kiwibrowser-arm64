// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content_public/common/ResourceRequestBody

#ifndef org_chromium_content_public_common_ResourceRequestBody_JNI
#define org_chromium_content_public_common_ResourceRequestBody_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_1public_common_ResourceRequestBody[];
const char kClassPath_org_chromium_content_1public_common_ResourceRequestBody[] =
    "org/chromium/content_public/common/ResourceRequestBody";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_1public_common_ResourceRequestBody_clazz = 0;
#ifndef org_chromium_content_1public_common_ResourceRequestBody_clazz_defined
#define org_chromium_content_1public_common_ResourceRequestBody_clazz_defined
inline jclass org_chromium_content_1public_common_ResourceRequestBody_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_1public_common_ResourceRequestBody,
      &g_org_chromium_content_1public_common_ResourceRequestBody_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static base::android::ScopedJavaLocalRef<jbyteArray>
    JNI_ResourceRequestBody_CreateResourceRequestBodyFromBytes(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jbyteArray>& httpBody);

JNI_GENERATOR_EXPORT jbyteArray
    Java_org_chromium_content_1public_common_ResourceRequestBody_nativeCreateResourceRequestBodyFromBytes(
    JNIEnv* env,
    jclass jcaller,
    jbyteArray httpBody) {
  return JNI_ResourceRequestBody_CreateResourceRequestBodyFromBytes(env,
      base::android::JavaParamRef<jclass>(env, jcaller),
      base::android::JavaParamRef<jbyteArray>(env, httpBody)).Release();
}


static base::subtle::AtomicWord
    g_org_chromium_content_1public_common_ResourceRequestBody_createFromEncodedNativeForm = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ResourceRequestBody_createFromEncodedNativeForm(JNIEnv* env, const
    base::android::JavaRef<jbyteArray>& encodedNativeForm) {
  CHECK_CLAZZ(env, org_chromium_content_1public_common_ResourceRequestBody_clazz(env),
      org_chromium_content_1public_common_ResourceRequestBody_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_1public_common_ResourceRequestBody_clazz(env),
          "createFromEncodedNativeForm",
          "([B)Lorg/chromium/content_public/common/ResourceRequestBody;",
          &g_org_chromium_content_1public_common_ResourceRequestBody_createFromEncodedNativeForm);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_content_1public_common_ResourceRequestBody_clazz(env),
          method_id, encodedNativeForm.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_content_1public_common_ResourceRequestBody_getEncodedNativeForm = 0;
static base::android::ScopedJavaLocalRef<jbyteArray>
    Java_ResourceRequestBody_getEncodedNativeForm(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_1public_common_ResourceRequestBody_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_1public_common_ResourceRequestBody_clazz(env),
          "getEncodedNativeForm",
          "()[B",
          &g_org_chromium_content_1public_common_ResourceRequestBody_getEncodedNativeForm);

  jbyteArray ret =
      static_cast<jbyteArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

}  // namespace content

#endif  // org_chromium_content_public_common_ResourceRequestBody_JNI
