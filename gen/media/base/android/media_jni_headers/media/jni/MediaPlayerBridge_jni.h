// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaPlayerBridge

#ifndef org_chromium_media_MediaPlayerBridge_JNI
#define org_chromium_media_MediaPlayerBridge_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_media_MediaPlayerBridge_00024AllowedOperations[];
const char kClassPath_org_chromium_media_MediaPlayerBridge_00024AllowedOperations[] =
    "org/chromium/media/MediaPlayerBridge$AllowedOperations";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_MediaPlayerBridge[];
const char kClassPath_org_chromium_media_MediaPlayerBridge[] =
    "org/chromium/media/MediaPlayerBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz = 0;
#ifndef org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz_defined
#define org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz_defined
inline jclass org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_media_MediaPlayerBridge_00024AllowedOperations,
      &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_clazz = 0;
#ifndef org_chromium_media_MediaPlayerBridge_clazz_defined
#define org_chromium_media_MediaPlayerBridge_clazz_defined
inline jclass org_chromium_media_MediaPlayerBridge_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_MediaPlayerBridge,
      &g_org_chromium_media_MediaPlayerBridge_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {

JNI_GENERATOR_EXPORT void Java_org_chromium_media_MediaPlayerBridge_nativeOnDidSetDataUriDataSource(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeMediaPlayerBridge,
    jboolean success) {
  MediaPlayerBridge* native = reinterpret_cast<MediaPlayerBridge*>(nativeMediaPlayerBridge);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnDidSetDataUriDataSource");
  return native->OnDidSetDataUriDataSource(env, base::android::JavaParamRef<jobject>(env, jcaller),
      success);
}


static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_create = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_MediaPlayerBridge_create(JNIEnv* env, jlong
    nativeMediaPlayerBridge) {
  CHECK_CLAZZ(env, org_chromium_media_MediaPlayerBridge_clazz(env),
      org_chromium_media_MediaPlayerBridge_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "create",
          "(J)Lorg/chromium/media/MediaPlayerBridge;",
          &g_org_chromium_media_MediaPlayerBridge_create);

  jobject ret =
      env->CallStaticObjectMethod(org_chromium_media_MediaPlayerBridge_clazz(env),
          method_id, nativeMediaPlayerBridge);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_destroy = 0;
static void Java_MediaPlayerBridge_destroy(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "destroy",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_setSurface = 0;
static void Java_MediaPlayerBridge_setSurface(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& surface) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "setSurface",
          "(Landroid/view/Surface;)V",
          &g_org_chromium_media_MediaPlayerBridge_setSurface);

     env->CallVoidMethod(obj.obj(),
          method_id, surface.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_prepareAsync = 0;
static jboolean Java_MediaPlayerBridge_prepareAsync(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "prepareAsync",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_prepareAsync);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_isPlaying = 0;
static jboolean Java_MediaPlayerBridge_isPlaying(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "isPlaying",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_isPlaying);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_hasVideo = 0;
static jboolean Java_MediaPlayerBridge_hasVideo(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "hasVideo",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_hasVideo);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_hasAudio = 0;
static jboolean Java_MediaPlayerBridge_hasAudio(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "hasAudio",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_hasAudio);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_getVideoWidth = 0;
static jint Java_MediaPlayerBridge_getVideoWidth(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "getVideoWidth",
          "()I",
          &g_org_chromium_media_MediaPlayerBridge_getVideoWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_getVideoHeight = 0;
static jint Java_MediaPlayerBridge_getVideoHeight(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "getVideoHeight",
          "()I",
          &g_org_chromium_media_MediaPlayerBridge_getVideoHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_getCurrentPosition = 0;
static jint Java_MediaPlayerBridge_getCurrentPosition(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "getCurrentPosition",
          "()I",
          &g_org_chromium_media_MediaPlayerBridge_getCurrentPosition);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_getDuration = 0;
static jint Java_MediaPlayerBridge_getDuration(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "getDuration",
          "()I",
          &g_org_chromium_media_MediaPlayerBridge_getDuration);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_release = 0;
static void Java_MediaPlayerBridge_release(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "release",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_release);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_setVolume = 0;
static void Java_MediaPlayerBridge_setVolume(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, jdouble volume) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "setVolume",
          "(D)V",
          &g_org_chromium_media_MediaPlayerBridge_setVolume);

     env->CallVoidMethod(obj.obj(),
          method_id, volume);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_start = 0;
static void Java_MediaPlayerBridge_start(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "start",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_start);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_pause = 0;
static void Java_MediaPlayerBridge_pause(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "pause",
          "()V",
          &g_org_chromium_media_MediaPlayerBridge_pause);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_seekTo = 0;
static void Java_MediaPlayerBridge_seekTo(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper msec) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "seekTo",
          "(I)V",
          &g_org_chromium_media_MediaPlayerBridge_seekTo);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(msec));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_setDataSource = 0;
static jboolean Java_MediaPlayerBridge_setDataSource(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& url,
    const base::android::JavaRef<jstring>& cookies,
    const base::android::JavaRef<jstring>& userAgent,
    jboolean hideUrlLog) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "setDataSource",
          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z",
          &g_org_chromium_media_MediaPlayerBridge_setDataSource);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, url.obj(), cookies.obj(), userAgent.obj(), hideUrlLog);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_setDataSourceFromFd = 0;
static jboolean Java_MediaPlayerBridge_setDataSourceFromFd(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper fd,
    jlong offset,
    jlong length) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "setDataSourceFromFd",
          "(IJJ)Z",
          &g_org_chromium_media_MediaPlayerBridge_setDataSourceFromFd);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(fd), offset, length);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_setDataUriDataSource = 0;
static jboolean Java_MediaPlayerBridge_setDataUriDataSource(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& url) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "setDataUriDataSource",
          "(Ljava/lang/String;)Z",
          &g_org_chromium_media_MediaPlayerBridge_setDataUriDataSource);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, url.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canPause = 0;
static jboolean Java_AllowedOperations_canPause(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env),
          "canPause",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canPause);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekForward = 0;
static jboolean Java_AllowedOperations_canSeekForward(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env),
          "canSeekForward",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekForward);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekBackward = 0;
static jboolean Java_AllowedOperations_canSeekBackward(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_00024AllowedOperations_clazz(env),
          "canSeekBackward",
          "()Z",
          &g_org_chromium_media_MediaPlayerBridge_00024AllowedOperations_canSeekBackward);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_MediaPlayerBridge_getAllowedOperations = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaPlayerBridge_getAllowedOperations(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_MediaPlayerBridge_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_MediaPlayerBridge_clazz(env),
          "getAllowedOperations",
          "()Lorg/chromium/media/MediaPlayerBridge$AllowedOperations;",
          &g_org_chromium_media_MediaPlayerBridge_getAllowedOperations);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace media

#endif  // org_chromium_media_MediaPlayerBridge_JNI
