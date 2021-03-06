// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/ProxyChangeListener

#ifndef org_chromium_net_ProxyChangeListener_JNI
#define org_chromium_net_ProxyChangeListener_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_ProxyChangeListener[];
const char kClassPath_org_chromium_net_ProxyChangeListener[] =
    "org/chromium/net/ProxyChangeListener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_net_ProxyChangeListener_clazz = 0;
#ifndef org_chromium_net_ProxyChangeListener_clazz_defined
#define org_chromium_net_ProxyChangeListener_clazz_defined
inline jclass org_chromium_net_ProxyChangeListener_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_ProxyChangeListener,
      &g_org_chromium_net_ProxyChangeListener_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {

JNI_GENERATOR_EXPORT void Java_org_chromium_net_ProxyChangeListener_nativeProxySettingsChangedTo(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jstring host,
    jint port,
    jstring pacUrl,
    jobjectArray exclusionList) {
  ProxyConfigServiceAndroid::JNIDelegate* native =
      reinterpret_cast<ProxyConfigServiceAndroid::JNIDelegate*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "ProxySettingsChangedTo");
  return native->ProxySettingsChangedTo(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, host), port,
      base::android::JavaParamRef<jstring>(env, pacUrl),
      base::android::JavaParamRef<jobjectArray>(env, exclusionList));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_net_ProxyChangeListener_nativeProxySettingsChanged(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr) {
  ProxyConfigServiceAndroid::JNIDelegate* native =
      reinterpret_cast<ProxyConfigServiceAndroid::JNIDelegate*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "ProxySettingsChanged");
  return native->ProxySettingsChanged(env, base::android::JavaParamRef<jobject>(env, jcaller));
}


static base::subtle::AtomicWord g_org_chromium_net_ProxyChangeListener_create = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ProxyChangeListener_create(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_net_ProxyChangeListener_clazz(env),
      org_chromium_net_ProxyChangeListener_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_ProxyChangeListener_clazz(env),
          "create",
          "()Lorg/chromium/net/ProxyChangeListener;",
          &g_org_chromium_net_ProxyChangeListener_create);

  jobject ret =
      env->CallStaticObjectMethod(org_chromium_net_ProxyChangeListener_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_net_ProxyChangeListener_getProperty = 0;
static base::android::ScopedJavaLocalRef<jstring> Java_ProxyChangeListener_getProperty(JNIEnv* env,
    const base::android::JavaRef<jstring>& property) {
  CHECK_CLAZZ(env, org_chromium_net_ProxyChangeListener_clazz(env),
      org_chromium_net_ProxyChangeListener_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_ProxyChangeListener_clazz(env),
          "getProperty",
          "(Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_net_ProxyChangeListener_getProperty);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(org_chromium_net_ProxyChangeListener_clazz(env),
          method_id, property.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_net_ProxyChangeListener_start = 0;
static void Java_ProxyChangeListener_start(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    jlong nativePtr) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_ProxyChangeListener_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_ProxyChangeListener_clazz(env),
          "start",
          "(J)V",
          &g_org_chromium_net_ProxyChangeListener_start);

     env->CallVoidMethod(obj.obj(),
          method_id, nativePtr);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_ProxyChangeListener_stop = 0;
static void Java_ProxyChangeListener_stop(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_ProxyChangeListener_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_ProxyChangeListener_clazz(env),
          "stop",
          "()V",
          &g_org_chromium_net_ProxyChangeListener_stop);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

}  // namespace net

#endif  // org_chromium_net_ProxyChangeListener_JNI
