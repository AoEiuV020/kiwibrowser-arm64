// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/NetworkChangeNotifier

#ifndef org_chromium_net_NetworkChangeNotifier_JNI
#define org_chromium_net_NetworkChangeNotifier_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_NetworkChangeNotifier[];
const char kClassPath_org_chromium_net_NetworkChangeNotifier[] =
    "org/chromium/net/NetworkChangeNotifier";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_clazz = 0;
#ifndef org_chromium_net_NetworkChangeNotifier_clazz_defined
#define org_chromium_net_NetworkChangeNotifier_clazz_defined
inline jclass org_chromium_net_NetworkChangeNotifier_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_NetworkChangeNotifier,
      &g_org_chromium_net_NetworkChangeNotifier_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {

JNI_GENERATOR_EXPORT void
    Java_org_chromium_net_NetworkChangeNotifier_nativeNotifyConnectionTypeChanged(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jint newConnectionType,
    jlong defaultNetId) {
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyConnectionTypeChanged");
  return native->NotifyConnectionTypeChanged(env, base::android::JavaParamRef<jobject>(env,
      jcaller), newConnectionType, defaultNetId);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_net_NetworkChangeNotifier_nativeNotifyMaxBandwidthChanged(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jint subType) {
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyMaxBandwidthChanged");
  return native->NotifyMaxBandwidthChanged(env, base::android::JavaParamRef<jobject>(env, jcaller),
      subType);
}

JNI_GENERATOR_EXPORT void Java_org_chromium_net_NetworkChangeNotifier_nativeNotifyOfNetworkConnect(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jlong netId,
    jint connectionType) {
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyOfNetworkConnect");
  return native->NotifyOfNetworkConnect(env, base::android::JavaParamRef<jobject>(env, jcaller),
      netId, connectionType);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_net_NetworkChangeNotifier_nativeNotifyOfNetworkSoonToDisconnect(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jlong netId) {
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyOfNetworkSoonToDisconnect");
  return native->NotifyOfNetworkSoonToDisconnect(env, base::android::JavaParamRef<jobject>(env,
      jcaller), netId);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_net_NetworkChangeNotifier_nativeNotifyOfNetworkDisconnect(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jlong netId) {
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyOfNetworkDisconnect");
  return native->NotifyOfNetworkDisconnect(env, base::android::JavaParamRef<jobject>(env, jcaller),
      netId);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_net_NetworkChangeNotifier_nativeNotifyPurgeActiveNetworkList(
    JNIEnv* env,
    jobject jcaller,
    jlong nativePtr,
    jlongArray activeNetIds) {
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "NotifyPurgeActiveNetworkList");
  return native->NotifyPurgeActiveNetworkList(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jlongArray>(env, activeNetIds));
}


static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_init = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_NetworkChangeNotifier_init(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "init",
          "()Lorg/chromium/net/NetworkChangeNotifier;",
          &g_org_chromium_net_NetworkChangeNotifier_init);

  jobject ret =
      env->CallStaticObjectMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_getCurrentConnectionType =
    0;
static jint Java_NetworkChangeNotifier_getCurrentConnectionType(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "getCurrentConnectionType",
          "()I",
          &g_org_chromium_net_NetworkChangeNotifier_getCurrentConnectionType);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_getCurrentConnectionSubtype
    = 0;
static jint Java_NetworkChangeNotifier_getCurrentConnectionSubtype(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "getCurrentConnectionSubtype",
          "()I",
          &g_org_chromium_net_NetworkChangeNotifier_getCurrentConnectionSubtype);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_getCurrentDefaultNetId = 0;
static jlong Java_NetworkChangeNotifier_getCurrentDefaultNetId(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "getCurrentDefaultNetId",
          "()J",
          &g_org_chromium_net_NetworkChangeNotifier_getCurrentDefaultNetId);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_getCurrentNetworksAndTypes
    = 0;
static base::android::ScopedJavaLocalRef<jlongArray>
    Java_NetworkChangeNotifier_getCurrentNetworksAndTypes(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "getCurrentNetworksAndTypes",
          "()[J",
          &g_org_chromium_net_NetworkChangeNotifier_getCurrentNetworksAndTypes);

  jlongArray ret =
      static_cast<jlongArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jlongArray>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_addNativeObserver = 0;
static void Java_NetworkChangeNotifier_addNativeObserver(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong nativeChangeNotifier) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "addNativeObserver",
          "(J)V",
          &g_org_chromium_net_NetworkChangeNotifier_addNativeObserver);

     env->CallVoidMethod(obj.obj(),
          method_id, nativeChangeNotifier);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_removeNativeObserver = 0;
static void Java_NetworkChangeNotifier_removeNativeObserver(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong nativeChangeNotifier) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "removeNativeObserver",
          "(J)V",
          &g_org_chromium_net_NetworkChangeNotifier_removeNativeObserver);

     env->CallVoidMethod(obj.obj(),
          method_id, nativeChangeNotifier);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_net_NetworkChangeNotifier_registerNetworkCallbackFailed = 0;
static jboolean Java_NetworkChangeNotifier_registerNetworkCallbackFailed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_net_NetworkChangeNotifier_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "registerNetworkCallbackFailed",
          "()Z",
          &g_org_chromium_net_NetworkChangeNotifier_registerNetworkCallbackFailed);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_forceConnectivityState = 0;
static void Java_NetworkChangeNotifier_forceConnectivityState(JNIEnv* env, jboolean
    networkAvailable) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "forceConnectivityState",
          "(Z)V",
          &g_org_chromium_net_NetworkChangeNotifier_forceConnectivityState);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, networkAvailable);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_fakeNetworkConnected = 0;
static void Java_NetworkChangeNotifier_fakeNetworkConnected(JNIEnv* env, jlong netId,
    JniIntWrapper connectionType) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "fakeNetworkConnected",
          "(JI)V",
          &g_org_chromium_net_NetworkChangeNotifier_fakeNetworkConnected);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, netId, as_jint(connectionType));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_net_NetworkChangeNotifier_fakeNetworkSoonToBeDisconnected = 0;
static void Java_NetworkChangeNotifier_fakeNetworkSoonToBeDisconnected(JNIEnv* env, jlong netId) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "fakeNetworkSoonToBeDisconnected",
          "(J)V",
          &g_org_chromium_net_NetworkChangeNotifier_fakeNetworkSoonToBeDisconnected);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, netId);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_fakeNetworkDisconnected =
    0;
static void Java_NetworkChangeNotifier_fakeNetworkDisconnected(JNIEnv* env, jlong netId) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "fakeNetworkDisconnected",
          "(J)V",
          &g_org_chromium_net_NetworkChangeNotifier_fakeNetworkDisconnected);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, netId);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_fakePurgeActiveNetworkList
    = 0;
static void Java_NetworkChangeNotifier_fakePurgeActiveNetworkList(JNIEnv* env, const
    base::android::JavaRef<jlongArray>& activeNetIds) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "fakePurgeActiveNetworkList",
          "([J)V",
          &g_org_chromium_net_NetworkChangeNotifier_fakePurgeActiveNetworkList);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, activeNetIds.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_fakeDefaultNetwork = 0;
static void Java_NetworkChangeNotifier_fakeDefaultNetwork(JNIEnv* env, jlong netId,
    JniIntWrapper connectionType) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "fakeDefaultNetwork",
          "(JI)V",
          &g_org_chromium_net_NetworkChangeNotifier_fakeDefaultNetwork);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, netId, as_jint(connectionType));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_net_NetworkChangeNotifier_fakeConnectionSubtypeChanged = 0;
static void Java_NetworkChangeNotifier_fakeConnectionSubtypeChanged(JNIEnv* env, JniIntWrapper
    connectionSubtype) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "fakeConnectionSubtypeChanged",
          "(I)V",
          &g_org_chromium_net_NetworkChangeNotifier_fakeConnectionSubtypeChanged);

     env->CallStaticVoidMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id, as_jint(connectionSubtype));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_net_NetworkChangeNotifier_isProcessBoundToNetwork =
    0;
static jboolean Java_NetworkChangeNotifier_isProcessBoundToNetwork(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_net_NetworkChangeNotifier_clazz(env),
      org_chromium_net_NetworkChangeNotifier_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_net_NetworkChangeNotifier_clazz(env),
          "isProcessBoundToNetwork",
          "()Z",
          &g_org_chromium_net_NetworkChangeNotifier_isProcessBoundToNetwork);

  jboolean ret =
      env->CallStaticBooleanMethod(org_chromium_net_NetworkChangeNotifier_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

}  // namespace net

#endif  // org_chromium_net_NetworkChangeNotifier_JNI
