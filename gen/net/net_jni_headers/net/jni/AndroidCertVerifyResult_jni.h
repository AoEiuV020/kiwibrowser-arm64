// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/AndroidCertVerifyResult

#ifndef org_chromium_net_AndroidCertVerifyResult_JNI
#define org_chromium_net_AndroidCertVerifyResult_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_AndroidCertVerifyResult[];
const char kClassPath_org_chromium_net_AndroidCertVerifyResult[] =
    "org/chromium/net/AndroidCertVerifyResult";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_net_AndroidCertVerifyResult_clazz =
    0;
#ifndef org_chromium_net_AndroidCertVerifyResult_clazz_defined
#define org_chromium_net_AndroidCertVerifyResult_clazz_defined
inline jclass org_chromium_net_AndroidCertVerifyResult_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_AndroidCertVerifyResult,
      &g_org_chromium_net_AndroidCertVerifyResult_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {
namespace android {


static base::subtle::AtomicWord g_org_chromium_net_AndroidCertVerifyResult_getStatus = 0;
static jint Java_AndroidCertVerifyResult_getStatus(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_AndroidCertVerifyResult_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_AndroidCertVerifyResult_clazz(env),
          "getStatus",
          "()I",
          &g_org_chromium_net_AndroidCertVerifyResult_getStatus);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_net_AndroidCertVerifyResult_isIssuedByKnownRoot = 0;
static jboolean Java_AndroidCertVerifyResult_isIssuedByKnownRoot(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_AndroidCertVerifyResult_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_AndroidCertVerifyResult_clazz(env),
          "isIssuedByKnownRoot",
          "()Z",
          &g_org_chromium_net_AndroidCertVerifyResult_isIssuedByKnownRoot);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_net_AndroidCertVerifyResult_getCertificateChainEncoded = 0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_AndroidCertVerifyResult_getCertificateChainEncoded(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_AndroidCertVerifyResult_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_AndroidCertVerifyResult_clazz(env),
          "getCertificateChainEncoded",
          "()[[B",
          &g_org_chromium_net_AndroidCertVerifyResult_getCertificateChainEncoded);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

}  // namespace android
}  // namespace net

#endif  // org_chromium_net_AndroidCertVerifyResult_JNI
