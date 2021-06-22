// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/app/ContentChildProcessServiceDelegate

#ifndef org_chromium_content_app_ContentChildProcessServiceDelegate_JNI
#define org_chromium_content_app_ContentChildProcessServiceDelegate_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_app_ContentChildProcessServiceDelegate[];
const char kClassPath_org_chromium_content_app_ContentChildProcessServiceDelegate[] =
    "org/chromium/content/app/ContentChildProcessServiceDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_app_ContentChildProcessServiceDelegate_clazz = 0;
#ifndef org_chromium_content_app_ContentChildProcessServiceDelegate_clazz_defined
#define org_chromium_content_app_ContentChildProcessServiceDelegate_clazz_defined
inline jclass org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_app_ContentChildProcessServiceDelegate,
      &g_org_chromium_content_app_ContentChildProcessServiceDelegate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static void JNI_ContentChildProcessServiceDelegate_InitChildProcess(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jint cpuCount,
    jlong cpuFeatures);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_app_ContentChildProcessServiceDelegate_nativeInitChildProcess(
    JNIEnv* env,
    jobject jcaller,
    jint cpuCount,
    jlong cpuFeatures) {
  return JNI_ContentChildProcessServiceDelegate_InitChildProcess(env,
      base::android::JavaParamRef<jobject>(env, jcaller), cpuCount, cpuFeatures);
}

static void JNI_ContentChildProcessServiceDelegate_ShutdownMainThread(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_app_ContentChildProcessServiceDelegate_nativeShutdownMainThread(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_ContentChildProcessServiceDelegate_ShutdownMainThread(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

static void JNI_ContentChildProcessServiceDelegate_RetrieveFileDescriptorsIdsToKeys(JNIEnv* env,
    const base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_app_ContentChildProcessServiceDelegate_nativeRetrieveFileDescriptorsIdsToKeys(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_ContentChildProcessServiceDelegate_RetrieveFileDescriptorsIdsToKeys(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}


static base::subtle::AtomicWord
    g_org_chromium_content_app_ContentChildProcessServiceDelegate_setFileDescriptorsIdsToKeys = 0;
static void Java_ContentChildProcessServiceDelegate_setFileDescriptorsIdsToKeys(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jintArray>& ids,
    const base::android::JavaRef<jobjectArray>& keys) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(env),
          "setFileDescriptorsIdsToKeys",
          "([I[Ljava/lang/String;)V",
&g_org_chromium_content_app_ContentChildProcessServiceDelegate_setFileDescriptorsIdsToKeys);

     env->CallVoidMethod(obj.obj(),
          method_id, ids.obj(), keys.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_app_ContentChildProcessServiceDelegate_forwardSurfaceTextureForSurfaceRequest
    = 0;
static void Java_ContentChildProcessServiceDelegate_forwardSurfaceTextureForSurfaceRequest(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    requestToken,
    const base::android::JavaRef<jobject>& surfaceTexture) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(env),
          "forwardSurfaceTextureForSurfaceRequest",
          "(Lorg/chromium/base/UnguessableToken;Landroid/graphics/SurfaceTexture;)V",
&g_org_chromium_content_app_ContentChildProcessServiceDelegate_forwardSurfaceTextureForSurfaceRequest);

     env->CallVoidMethod(obj.obj(),
          method_id, requestToken.obj(), surfaceTexture.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_app_ContentChildProcessServiceDelegate_getViewSurface = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ContentChildProcessServiceDelegate_getViewSurface(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper surfaceId) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_app_ContentChildProcessServiceDelegate_clazz(env),
          "getViewSurface",
          "(I)Landroid/view/Surface;",
          &g_org_chromium_content_app_ContentChildProcessServiceDelegate_getViewSurface);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(surfaceId));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace content

#endif  // org_chromium_content_app_ContentChildProcessServiceDelegate_JNI
