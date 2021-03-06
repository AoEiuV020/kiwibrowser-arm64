// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/PhotoCapabilities

#ifndef org_chromium_media_PhotoCapabilities_JNI
#define org_chromium_media_PhotoCapabilities_JNI

#include <jni.h>

#include "../../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_media_PhotoCapabilities[];
const char kClassPath_org_chromium_media_PhotoCapabilities[] =
    "org/chromium/media/PhotoCapabilities";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_clazz = 0;
#ifndef org_chromium_media_PhotoCapabilities_clazz_defined
#define org_chromium_media_PhotoCapabilities_clazz_defined
inline jclass org_chromium_media_PhotoCapabilities_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_media_PhotoCapabilities,
      &g_org_chromium_media_PhotoCapabilities_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace media {


static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMinIso = 0;
static jint Java_PhotoCapabilities_getMinIso(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMinIso",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMinIso);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMaxIso = 0;
static jint Java_PhotoCapabilities_getMaxIso(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMaxIso",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMaxIso);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getCurrentIso = 0;
static jint Java_PhotoCapabilities_getCurrentIso(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getCurrentIso",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getCurrentIso);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getStepIso = 0;
static jint Java_PhotoCapabilities_getStepIso(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getStepIso",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getStepIso);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMinHeight = 0;
static jint Java_PhotoCapabilities_getMinHeight(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMinHeight",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMinHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMaxHeight = 0;
static jint Java_PhotoCapabilities_getMaxHeight(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMaxHeight",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMaxHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getCurrentHeight = 0;
static jint Java_PhotoCapabilities_getCurrentHeight(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getCurrentHeight",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getCurrentHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getStepHeight = 0;
static jint Java_PhotoCapabilities_getStepHeight(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getStepHeight",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getStepHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMinWidth = 0;
static jint Java_PhotoCapabilities_getMinWidth(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMinWidth",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMinWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMaxWidth = 0;
static jint Java_PhotoCapabilities_getMaxWidth(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMaxWidth",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMaxWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getCurrentWidth = 0;
static jint Java_PhotoCapabilities_getCurrentWidth(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getCurrentWidth",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getCurrentWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getStepWidth = 0;
static jint Java_PhotoCapabilities_getStepWidth(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getStepWidth",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getStepWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMinZoom = 0;
static jdouble Java_PhotoCapabilities_getMinZoom(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMinZoom",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getMinZoom);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMaxZoom = 0;
static jdouble Java_PhotoCapabilities_getMaxZoom(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMaxZoom",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getMaxZoom);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getCurrentZoom = 0;
static jdouble Java_PhotoCapabilities_getCurrentZoom(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getCurrentZoom",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getCurrentZoom);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getStepZoom = 0;
static jdouble Java_PhotoCapabilities_getStepZoom(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getStepZoom",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getStepZoom);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getFocusMode = 0;
static jint Java_PhotoCapabilities_getFocusMode(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getFocusMode",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getFocusMode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getFocusModes = 0;
static base::android::ScopedJavaLocalRef<jintArray> Java_PhotoCapabilities_getFocusModes(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getFocusModes",
          "()[I",
          &g_org_chromium_media_PhotoCapabilities_getFocusModes);

  jintArray ret =
      static_cast<jintArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getExposureMode = 0;
static jint Java_PhotoCapabilities_getExposureMode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getExposureMode",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getExposureMode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getExposureModes = 0;
static base::android::ScopedJavaLocalRef<jintArray> Java_PhotoCapabilities_getExposureModes(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getExposureModes",
          "()[I",
          &g_org_chromium_media_PhotoCapabilities_getExposureModes);

  jintArray ret =
      static_cast<jintArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMinExposureCompensation =
    0;
static jdouble Java_PhotoCapabilities_getMinExposureCompensation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMinExposureCompensation",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getMinExposureCompensation);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMaxExposureCompensation =
    0;
static jdouble Java_PhotoCapabilities_getMaxExposureCompensation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMaxExposureCompensation",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getMaxExposureCompensation);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_media_PhotoCapabilities_getCurrentExposureCompensation = 0;
static jdouble Java_PhotoCapabilities_getCurrentExposureCompensation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getCurrentExposureCompensation",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getCurrentExposureCompensation);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getStepExposureCompensation =
    0;
static jdouble Java_PhotoCapabilities_getStepExposureCompensation(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getStepExposureCompensation",
          "()D",
          &g_org_chromium_media_PhotoCapabilities_getStepExposureCompensation);

  jdouble ret =
      env->CallDoubleMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getWhiteBalanceMode = 0;
static jint Java_PhotoCapabilities_getWhiteBalanceMode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getWhiteBalanceMode",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getWhiteBalanceMode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getWhiteBalanceModes = 0;
static base::android::ScopedJavaLocalRef<jintArray>
    Java_PhotoCapabilities_getWhiteBalanceModes(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getWhiteBalanceModes",
          "()[I",
          &g_org_chromium_media_PhotoCapabilities_getWhiteBalanceModes);

  jintArray ret =
      static_cast<jintArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getFillLightModes = 0;
static base::android::ScopedJavaLocalRef<jintArray> Java_PhotoCapabilities_getFillLightModes(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getFillLightModes",
          "()[I",
          &g_org_chromium_media_PhotoCapabilities_getFillLightModes);

  jintArray ret =
      static_cast<jintArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jintArray>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getSupportsTorch = 0;
static jboolean Java_PhotoCapabilities_getSupportsTorch(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getSupportsTorch",
          "()Z",
          &g_org_chromium_media_PhotoCapabilities_getSupportsTorch);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getTorch = 0;
static jboolean Java_PhotoCapabilities_getTorch(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getTorch",
          "()Z",
          &g_org_chromium_media_PhotoCapabilities_getTorch);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getRedEyeReduction = 0;
static jboolean Java_PhotoCapabilities_getRedEyeReduction(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getRedEyeReduction",
          "()Z",
          &g_org_chromium_media_PhotoCapabilities_getRedEyeReduction);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMinColorTemperature = 0;
static jint Java_PhotoCapabilities_getMinColorTemperature(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMinColorTemperature",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMinColorTemperature);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getMaxColorTemperature = 0;
static jint Java_PhotoCapabilities_getMaxColorTemperature(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getMaxColorTemperature",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getMaxColorTemperature);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getCurrentColorTemperature =
    0;
static jint Java_PhotoCapabilities_getCurrentColorTemperature(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getCurrentColorTemperature",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getCurrentColorTemperature);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_media_PhotoCapabilities_getStepColorTemperature = 0;
static jint Java_PhotoCapabilities_getStepColorTemperature(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_media_PhotoCapabilities_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_media_PhotoCapabilities_clazz(env),
          "getStepColorTemperature",
          "()I",
          &g_org_chromium_media_PhotoCapabilities_getStepColorTemperature);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

}  // namespace media

#endif  // org_chromium_media_PhotoCapabilities_JNI
