// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaDrmStorageBridge

#ifndef org_chromium_media_MediaDrmStorageBridge_JNI
#define org_chromium_media_MediaDrmStorageBridge_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo[];
const char kClassPath_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo[] =
    "org/chromium/media/MediaDrmStorageBridge$PersistentInfo";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_MediaDrmStorageBridge[];
const char kClassPath_org_chromium_media_MediaDrmStorageBridge[] =
    "org/chromium/media/MediaDrmStorageBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz = 0;
#ifndef org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz_defined
#define org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz_defined
inline jclass org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo,
      &g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_media_MediaDrmStorageBridge_clazz =
    0;
#ifndef org_chromium_media_MediaDrmStorageBridge_clazz_defined
#define org_chromium_media_MediaDrmStorageBridge_clazz_defined
inline jclass org_chromium_media_MediaDrmStorageBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_MediaDrmStorageBridge,
      &g_org_chromium_media_MediaDrmStorageBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {

JNI_GENERATOR_EXPORT void Java_org_chromium_media_MediaDrmStorageBridge_nativeOnProvisioned(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmStorageBridge,
    jobject cb) {
  MediaDrmStorageBridge* native =
      reinterpret_cast<MediaDrmStorageBridge*>(nativeMediaDrmStorageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnProvisioned");
  return native->OnProvisioned(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, cb));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_media_MediaDrmStorageBridge_nativeOnLoadInfo(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmStorageBridge,
    jbyteArray sessionId,
    jobject cb) {
  MediaDrmStorageBridge* native =
      reinterpret_cast<MediaDrmStorageBridge*>(nativeMediaDrmStorageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnLoadInfo");
  return native->OnLoadInfo(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jbyteArray>(env, sessionId),
      base::android::JavaParamRef<jobject>(env, cb));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_media_MediaDrmStorageBridge_nativeOnSaveInfo(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmStorageBridge,
    jobject info,
    jobject cb) {
  MediaDrmStorageBridge* native =
      reinterpret_cast<MediaDrmStorageBridge*>(nativeMediaDrmStorageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnSaveInfo");
  return native->OnSaveInfo(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, info), base::android::JavaParamRef<jobject>(env,
      cb));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_media_MediaDrmStorageBridge_nativeOnClearInfo(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaDrmStorageBridge,
    jbyteArray sessionId,
    jobject cb) {
  MediaDrmStorageBridge* native =
      reinterpret_cast<MediaDrmStorageBridge*>(nativeMediaDrmStorageBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnClearInfo");
  return native->OnClearInfo(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jbyteArray>(env, sessionId),
      base::android::JavaParamRef<jobject>(env, cb));
}


static base::subtle::AtomicWord
    g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_create = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_PersistentInfo_create(JNIEnv* env, const
    base::android::JavaRef<jbyteArray>& emeId,
    const base::android::JavaRef<jbyteArray>& keySetId,
    const base::android::JavaRef<jstring>& mime) {
  CHECK_CLAZZ(env, org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env),
      org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env),
          "create",
          "([B[BLjava/lang/String;)Lorg/chromium/media/MediaDrmStorageBridge$PersistentInfo;",
          &g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_create);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env),
          method_id, emeId.obj(), keySetId.obj(), mime.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_emeId
    = 0;
static base::android::ScopedJavaLocalRef<jbyteArray> Java_PersistentInfo_emeId(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env),
          "emeId",
          "()[B",
          &g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_emeId);

  jbyteArray ret =
      static_cast<jbyteArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_keySetId = 0;
static base::android::ScopedJavaLocalRef<jbyteArray> Java_PersistentInfo_keySetId(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env),
          "keySetId",
          "()[B",
          &g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_keySetId);

  jbyteArray ret =
      static_cast<jbyteArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_mimeType = 0;
static base::android::ScopedJavaLocalRef<jstring> Java_PersistentInfo_mimeType(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_clazz(env),
          "mimeType",
          "()Ljava/lang/String;",
          &g_org_chromium_media_MediaDrmStorageBridge_00024PersistentInfo_mimeType);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

}  // namespace media

#endif  // org_chromium_media_MediaDrmStorageBridge_JNI
