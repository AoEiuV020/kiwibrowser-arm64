// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/input/SelectPopup

#ifndef org_chromium_content_browser_input_SelectPopup_JNI
#define org_chromium_content_browser_input_SelectPopup_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_input_SelectPopup[];
const char kClassPath_org_chromium_content_browser_input_SelectPopup[] =
    "org/chromium/content/browser/input/SelectPopup";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_input_SelectPopup_clazz = 0;
#ifndef org_chromium_content_browser_input_SelectPopup_clazz_defined
#define org_chromium_content_browser_input_SelectPopup_clazz_defined
inline jclass org_chromium_content_browser_input_SelectPopup_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_content_browser_input_SelectPopup,
      &g_org_chromium_content_browser_input_SelectPopup_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jlong JNI_SelectPopup_Init(JNIEnv* env, const base::android::JavaParamRef<jobject>& jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jlong Java_org_chromium_content_browser_input_SelectPopup_nativeInit(
    JNIEnv* env,
    jobject jcaller,
    jobject webContents) {
  return JNI_SelectPopup_Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, webContents));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_content_browser_input_SelectPopup_nativeSelectMenuItems(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeSelectPopup,
    jlong nativeSelectPopupSourceFrame,
    jintArray indices) {
  SelectPopup* native = reinterpret_cast<SelectPopup*>(nativeSelectPopup);
  CHECK_NATIVE_PTR(env, jcaller, native, "SelectMenuItems");
  return native->SelectMenuItems(env, base::android::JavaParamRef<jobject>(env, jcaller),
      nativeSelectPopupSourceFrame, base::android::JavaParamRef<jintArray>(env, indices));
}

JNI_GENERATOR_EXPORT jobject
    Java_org_chromium_content_browser_input_SelectPopup_nativeGetWindowAndroid(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeSelectPopup) {
  SelectPopup* native = reinterpret_cast<SelectPopup*>(nativeSelectPopup);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetWindowAndroid", NULL);
  return native->GetWindowAndroid(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}


static base::subtle::AtomicWord g_org_chromium_content_browser_input_SelectPopup_show = 0;
static void Java_SelectPopup_show(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& anchorView,
    jlong nativeSelectPopupSourceFrame,
    const base::android::JavaRef<jobjectArray>& items,
    const base::android::JavaRef<jintArray>& enabled,
    jboolean multiple,
    const base::android::JavaRef<jintArray>& selectedIndices,
    jboolean rightAligned) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_SelectPopup_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_input_SelectPopup_clazz(env),
          "show",
          "(Landroid/view/View;J[Ljava/lang/String;[IZ[IZ)V",
          &g_org_chromium_content_browser_input_SelectPopup_show);

     env->CallVoidMethod(obj.obj(),
          method_id, anchorView.obj(), nativeSelectPopupSourceFrame, items.obj(), enabled.obj(),
              multiple, selectedIndices.obj(), rightAligned);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_content_browser_input_SelectPopup_hideWithoutCancel =
    0;
static void Java_SelectPopup_hideWithoutCancel(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_SelectPopup_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_input_SelectPopup_clazz(env),
          "hideWithoutCancel",
          "()V",
          &g_org_chromium_content_browser_input_SelectPopup_hideWithoutCancel);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_chromium_content_browser_input_SelectPopup_destroy = 0;
static void Java_SelectPopup_destroy(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_input_SelectPopup_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_input_SelectPopup_clazz(env),
          "destroy",
          "()V",
          &g_org_chromium_content_browser_input_SelectPopup_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

}  // namespace content

#endif  // org_chromium_content_browser_input_SelectPopup_JNI