// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/selection/SelectionPopupControllerImpl

#ifndef org_chromium_content_browser_selection_SelectionPopupControllerImpl_JNI
#define org_chromium_content_browser_selection_SelectionPopupControllerImpl_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_selection_SelectionPopupControllerImpl[];
const char kClassPath_org_chromium_content_browser_selection_SelectionPopupControllerImpl[] =
    "org/chromium/content/browser/selection/SelectionPopupControllerImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz = 0;
#ifndef org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz_defined
#define org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz_defined
inline jclass org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(JNIEnv* env)
    {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_selection_SelectionPopupControllerImpl,
      &g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

static jlong JNI_SelectionPopupControllerImpl_Init(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    const base::android::JavaParamRef<jobject>& webContents);

JNI_GENERATOR_EXPORT jlong
    Java_org_chromium_content_browser_selection_SelectionPopupControllerImpl_nativeInit(
    JNIEnv* env,
    jobject jcaller,
    jobject webContents) {
  return JNI_SelectionPopupControllerImpl_Init(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, webContents));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_selection_SelectionPopupControllerImpl_nativeSetTextHandlesTemporarilyHidden(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeSelectionPopupController,
    jboolean hidden) {
  SelectionPopupController* native =
      reinterpret_cast<SelectionPopupController*>(nativeSelectionPopupController);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetTextHandlesTemporarilyHidden");
  return native->SetTextHandlesTemporarilyHidden(env, base::android::JavaParamRef<jobject>(env,
      jcaller), hidden);
}


static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_showSelectionMenu = 0;
static void Java_SelectionPopupControllerImpl_showSelectionMenu(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper left,
    JniIntWrapper top,
    JniIntWrapper right,
    JniIntWrapper bottom,
    JniIntWrapper handleHeight,
    jboolean isEditable,
    jboolean isPasswordType,
    const base::android::JavaRef<jstring>& selectionText,
    JniIntWrapper selectionStartOffset,
    jboolean canSelectAll,
    jboolean canRichlyEdit,
    jboolean shouldSuggest,
    JniIntWrapper sourceType) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "showSelectionMenu",
          "(IIIIIZZLjava/lang/String;IZZZI)V",
          &g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_showSelectionMenu);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(left), as_jint(top), as_jint(right), as_jint(bottom),
              as_jint(handleHeight), isEditable, isPasswordType, selectionText.obj(),
              as_jint(selectionStartOffset), canSelectAll, canRichlyEdit, shouldSuggest,
              as_jint(sourceType));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onSelectionEvent = 0;
static void Java_SelectionPopupControllerImpl_onSelectionEvent(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper eventType,
    JniIntWrapper left,
    JniIntWrapper top,
    JniIntWrapper right,
    JniIntWrapper bottom) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "onSelectionEvent",
          "(IIIII)V",
          &g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onSelectionEvent);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(eventType), as_jint(left), as_jint(top), as_jint(right),
              as_jint(bottom));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onDragUpdate = 0;
static void Java_SelectionPopupControllerImpl_onDragUpdate(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jfloat x,
    jfloat y) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "onDragUpdate",
          "(FF)V",
          &g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onDragUpdate);

     env->CallVoidMethod(obj.obj(),
          method_id, x, y);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_getContext = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_SelectionPopupControllerImpl_getContext(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "getContext",
          "()Landroid/content/Context;",
          &g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_getContext);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onSelectionChanged = 0;
static void Java_SelectionPopupControllerImpl_onSelectionChanged(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>& text) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "onSelectionChanged",
          "(Ljava/lang/String;)V",
&g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onSelectionChanged);

     env->CallVoidMethod(obj.obj(),
          method_id, text.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onSelectWordAroundCaretAck
    = 0;
static void Java_SelectionPopupControllerImpl_onSelectWordAroundCaretAck(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean didSelect,
    JniIntWrapper startAdjust,
    JniIntWrapper endAdjust) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "onSelectWordAroundCaretAck",
          "(ZII)V",
&g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_onSelectWordAroundCaretAck);

     env->CallVoidMethod(obj.obj(),
          method_id, didSelect, as_jint(startAdjust), as_jint(endAdjust));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_hidePopupsAndPreserveSelection
    = 0;
static void Java_SelectionPopupControllerImpl_hidePopupsAndPreserveSelection(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_selection_SelectionPopupControllerImpl_clazz(env),
          "hidePopupsAndPreserveSelection",
          "()V",
&g_org_chromium_content_browser_selection_SelectionPopupControllerImpl_hidePopupsAndPreserveSelection);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

}  // namespace content

#endif  // org_chromium_content_browser_selection_SelectionPopupControllerImpl_JNI
