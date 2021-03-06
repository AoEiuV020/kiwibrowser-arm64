// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/ScreenCapture

#ifndef org_chromium_media_ScreenCapture_JNI
#define org_chromium_media_ScreenCapture_JNI

#include <jni.h>

#include "../../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_ScreenCapture[];
const char kClassPath_org_chromium_media_ScreenCapture[] = "org/chromium/media/ScreenCapture";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_media_ScreenCapture_clazz = 0;
#ifndef org_chromium_media_ScreenCapture_clazz_defined
#define org_chromium_media_ScreenCapture_clazz_defined
inline jclass org_chromium_media_ScreenCapture_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_ScreenCapture,
      &g_org_chromium_media_ScreenCapture_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {

JNI_GENERATOR_EXPORT void Java_org_chromium_media_ScreenCapture_nativeOnRGBAFrameAvailable(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeScreenCaptureMachineAndroid,
    jobject buf,
    jint rowStride,
    jint left,
    jint top,
    jint width,
    jint height,
    jlong timestamp) {
  ScreenCaptureMachineAndroid* native =
      reinterpret_cast<ScreenCaptureMachineAndroid*>(nativeScreenCaptureMachineAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRGBAFrameAvailable");
  return native->OnRGBAFrameAvailable(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, buf), rowStride, left, top, width, height,
      timestamp);
}

JNI_GENERATOR_EXPORT void Java_org_chromium_media_ScreenCapture_nativeOnI420FrameAvailable(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeScreenCaptureMachineAndroid,
    jobject yBuffer,
    jint yStride,
    jobject uBuffer,
    jobject vBuffer,
    jint uvRowStride,
    jint uvPixelStride,
    jint left,
    jint top,
    jint width,
    jint height,
    jlong timestamp) {
  ScreenCaptureMachineAndroid* native =
      reinterpret_cast<ScreenCaptureMachineAndroid*>(nativeScreenCaptureMachineAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnI420FrameAvailable");
  return native->OnI420FrameAvailable(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, yBuffer), yStride,
      base::android::JavaParamRef<jobject>(env, uBuffer), base::android::JavaParamRef<jobject>(env,
      vBuffer), uvRowStride, uvPixelStride, left, top, width, height, timestamp);
}

JNI_GENERATOR_EXPORT void Java_org_chromium_media_ScreenCapture_nativeOnActivityResult(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeScreenCaptureMachineAndroid,
    jboolean result) {
  ScreenCaptureMachineAndroid* native =
      reinterpret_cast<ScreenCaptureMachineAndroid*>(nativeScreenCaptureMachineAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnActivityResult");
  return native->OnActivityResult(env, base::android::JavaParamRef<jobject>(env, jcaller), result);
}

JNI_GENERATOR_EXPORT void Java_org_chromium_media_ScreenCapture_nativeOnOrientationChange(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeScreenCaptureMachineAndroid,
    jint rotation) {
  ScreenCaptureMachineAndroid* native =
      reinterpret_cast<ScreenCaptureMachineAndroid*>(nativeScreenCaptureMachineAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnOrientationChange");
  return native->OnOrientationChange(env, base::android::JavaParamRef<jobject>(env, jcaller),
      rotation);
}


static base::subtle::AtomicWord g_org_chromium_media_ScreenCapture_createScreenCaptureMachine = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_ScreenCapture_createScreenCaptureMachine(JNIEnv* env, jlong
    nativeScreenCaptureMachineAndroid) {
  CHECK_CLAZZ(env, org_chromium_media_ScreenCapture_clazz(env),
      org_chromium_media_ScreenCapture_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_media_ScreenCapture_clazz(env),
          "createScreenCaptureMachine",
          "(J)Lorg/chromium/media/ScreenCapture;",
          &g_org_chromium_media_ScreenCapture_createScreenCaptureMachine);

  jobject ret =
      env->CallStaticObjectMethod(org_chromium_media_ScreenCapture_clazz(env),
          method_id, nativeScreenCaptureMachineAndroid);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_ScreenCapture_allocate = 0;
static jboolean Java_ScreenCapture_allocate(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper width,
    JniIntWrapper height) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_ScreenCapture_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_ScreenCapture_clazz(env),
          "allocate",
          "(II)Z",
          &g_org_chromium_media_ScreenCapture_allocate);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(width), as_jint(height));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_ScreenCapture_startPrompt = 0;
static jboolean Java_ScreenCapture_startPrompt(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_ScreenCapture_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_ScreenCapture_clazz(env),
          "startPrompt",
          "()Z",
          &g_org_chromium_media_ScreenCapture_startPrompt);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_ScreenCapture_startCapture = 0;
static jboolean Java_ScreenCapture_startCapture(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_ScreenCapture_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_ScreenCapture_clazz(env),
          "startCapture",
          "()Z",
          &g_org_chromium_media_ScreenCapture_startCapture);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_ScreenCapture_stopCapture = 0;
static void Java_ScreenCapture_stopCapture(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_ScreenCapture_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_ScreenCapture_clazz(env),
          "stopCapture",
          "()V",
          &g_org_chromium_media_ScreenCapture_stopCapture);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

}  // namespace media

#endif  // org_chromium_media_ScreenCapture_JNI
