// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/framehost/NavigationControllerImpl

#ifndef org_chromium_content_browser_framehost_NavigationControllerImpl_JNI
#define org_chromium_content_browser_framehost_NavigationControllerImpl_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_content_browser_framehost_NavigationControllerImpl[];
const char kClassPath_org_chromium_content_browser_framehost_NavigationControllerImpl[] =
    "org/chromium/content/browser/framehost/NavigationControllerImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_content_browser_framehost_NavigationControllerImpl_clazz = 0;
#ifndef org_chromium_content_browser_framehost_NavigationControllerImpl_clazz_defined
#define org_chromium_content_browser_framehost_NavigationControllerImpl_clazz_defined
inline jclass org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_content_browser_framehost_NavigationControllerImpl,
      &g_org_chromium_content_browser_framehost_NavigationControllerImpl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace content {

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCanGoBack(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CanGoBack", false);
  return native->CanGoBack(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCanGoForward(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CanGoForward", false);
  return native->CanGoForward(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeIsInitialNavigation(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "IsInitialNavigation", false);
  return native->IsInitialNavigation(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeLoadIfNecessary(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "LoadIfNecessary");
  return native->LoadIfNecessary(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeNeedsReload(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "NeedsReload", false);
  return native->NeedsReload(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeSetNeedsReload(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetNeedsReload");
  return native->SetNeedsReload(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCanGoToOffset(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint offset) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CanGoToOffset", false);
  return native->CanGoToOffset(env, base::android::JavaParamRef<jobject>(env, jcaller), offset);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGoBack(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GoBack");
  return native->GoBack(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGoForward(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GoForward");
  return native->GoForward(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGoToOffset(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint offset) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GoToOffset");
  return native->GoToOffset(env, base::android::JavaParamRef<jobject>(env, jcaller), offset);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGoToNavigationIndex(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint index) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GoToNavigationIndex");
  return native->GoToNavigationIndex(env, base::android::JavaParamRef<jobject>(env, jcaller),
      index);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCancelPendingReload(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CancelPendingReload");
  return native->CancelPendingReload(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeContinuePendingReload(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ContinuePendingReload");
  return native->ContinuePendingReload(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeReload(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jboolean checkForRepost) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "Reload");
  return native->Reload(env, base::android::JavaParamRef<jobject>(env, jcaller), checkForRepost);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeReloadBypassingCache(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jboolean checkForRepost) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReloadBypassingCache");
  return native->ReloadBypassingCache(env, base::android::JavaParamRef<jobject>(env, jcaller),
      checkForRepost);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeLoadUrl(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jstring url,
    jint loadUrlType,
    jint transitionType,
    jstring referrerUrl,
    jint referrerPolicy,
    jint uaOverrideOption,
    jstring extraHeaders,
    jobject postData,
    jstring baseUrlForDataUrl,
    jstring virtualUrlForDataUrl,
    jstring dataUrlAsString,
    jboolean canLoadLocalResources,
    jboolean isRendererInitiated,
    jboolean shouldReplaceCurrentEntry) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "LoadUrl");
  return native->LoadUrl(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, url), loadUrlType, transitionType,
      base::android::JavaParamRef<jstring>(env, referrerUrl), referrerPolicy, uaOverrideOption,
      base::android::JavaParamRef<jstring>(env, extraHeaders),
      base::android::JavaParamRef<jobject>(env, postData), base::android::JavaParamRef<jstring>(env,
      baseUrlForDataUrl), base::android::JavaParamRef<jstring>(env, virtualUrlForDataUrl),
      base::android::JavaParamRef<jstring>(env, dataUrlAsString), canLoadLocalResources,
      isRendererInitiated, shouldReplaceCurrentEntry);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeClearHistory(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ClearHistory");
  return native->ClearHistory(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jint
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetNavigationHistory(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jobject history) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetNavigationHistory", 0);
  return native->GetNavigationHistory(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, history));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetDirectedNavigationHistory(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jobject history,
    jboolean isForward,
    jint itemLimit) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetDirectedNavigationHistory");
  return native->GetDirectedNavigationHistory(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, history), isForward, itemLimit);
}

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetOriginalUrlForVisibleNavigationEntry(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetOriginalUrlForVisibleNavigationEntry", NULL);
  return native->GetOriginalUrlForVisibleNavigationEntry(env,
      base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeClearSslPreferences(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "ClearSslPreferences");
  return native->ClearSslPreferences(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetUseDesktopUserAgent(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetUseDesktopUserAgent", false);
  return native->GetUseDesktopUserAgent(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeSetUseDesktopUserAgent(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jboolean override,
    jboolean reloadOnChange) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetUseDesktopUserAgent");
  return native->SetUseDesktopUserAgent(env, base::android::JavaParamRef<jobject>(env, jcaller),
      override, reloadOnChange);
}

JNI_GENERATOR_EXPORT jobject
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetEntryAtIndex(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint index) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetEntryAtIndex", NULL);
  return native->GetEntryAtIndex(env, base::android::JavaParamRef<jobject>(env, jcaller),
      index).Release();
}

JNI_GENERATOR_EXPORT jobject
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetPendingEntry(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetPendingEntry", NULL);
  return native->GetPendingEntry(env, base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

JNI_GENERATOR_EXPORT jint
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetLastCommittedEntryIndex(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetLastCommittedEntryIndex", 0);
  return native->GetLastCommittedEntryIndex(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeRemoveEntryAtIndex(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint index) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "RemoveEntryAtIndex", false);
  return native->RemoveEntryAtIndex(env, base::android::JavaParamRef<jobject>(env, jcaller), index);
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCanCopyStateOver(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CanCopyStateOver", false);
  return native->CanCopyStateOver(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCanPruneAllButLastCommitted(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CanPruneAllButLastCommitted", false);
  return native->CanPruneAllButLastCommitted(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCopyStateFrom(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jlong sourceNavigationControllerAndroid,
    jboolean needsReload) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CopyStateFrom");
  return native->CopyStateFrom(env, base::android::JavaParamRef<jobject>(env, jcaller),
      sourceNavigationControllerAndroid, needsReload);
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeCopyStateFromAndPrune(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jlong sourceNavigationControllerAndroid,
    jboolean replaceEntry) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "CopyStateFromAndPrune");
  return native->CopyStateFromAndPrune(env, base::android::JavaParamRef<jobject>(env, jcaller),
      sourceNavigationControllerAndroid, replaceEntry);
}

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeGetEntryExtraData(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint index,
    jstring key) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetEntryExtraData", NULL);
  return native->GetEntryExtraData(env, base::android::JavaParamRef<jobject>(env, jcaller), index,
      base::android::JavaParamRef<jstring>(env, key)).Release();
}

JNI_GENERATOR_EXPORT void
    Java_org_chromium_content_browser_framehost_NavigationControllerImpl_nativeSetEntryExtraData(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeNavigationControllerAndroid,
    jint index,
    jstring key,
    jstring value) {
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  CHECK_NATIVE_PTR(env, jcaller, native, "SetEntryExtraData");
  return native->SetEntryExtraData(env, base::android::JavaParamRef<jobject>(env, jcaller), index,
      base::android::JavaParamRef<jstring>(env, key), base::android::JavaParamRef<jstring>(env,
      value));
}


static base::subtle::AtomicWord
    g_org_chromium_content_browser_framehost_NavigationControllerImpl_create = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_NavigationControllerImpl_create(JNIEnv* env,
    jlong nativeNavigationControllerAndroid) {
  CHECK_CLAZZ(env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
      org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          "create",
          "(J)Lorg/chromium/content/browser/framehost/NavigationControllerImpl;",
          &g_org_chromium_content_browser_framehost_NavigationControllerImpl_create);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          method_id, nativeNavigationControllerAndroid);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_framehost_NavigationControllerImpl_destroy = 0;
static void Java_NavigationControllerImpl_destroy(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          "destroy",
          "()V",
          &g_org_chromium_content_browser_framehost_NavigationControllerImpl_destroy);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_framehost_NavigationControllerImpl_addToNavigationHistory = 0;
static void Java_NavigationControllerImpl_addToNavigationHistory(JNIEnv* env, const
    base::android::JavaRef<jobject>& history,
    const base::android::JavaRef<jobject>& navigationEntry) {
  CHECK_CLAZZ(env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
      org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          "addToNavigationHistory",
          "(Ljava/lang/Object;Ljava/lang/Object;)V",
&g_org_chromium_content_browser_framehost_NavigationControllerImpl_addToNavigationHistory);

env->CallStaticVoidMethod(org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          method_id, history.obj(), navigationEntry.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord
    g_org_chromium_content_browser_framehost_NavigationControllerImpl_createNavigationEntry = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_NavigationControllerImpl_createNavigationEntry(JNIEnv* env, JniIntWrapper index,
    const base::android::JavaRef<jstring>& url,
    const base::android::JavaRef<jstring>& virtualUrl,
    const base::android::JavaRef<jstring>& originalUrl,
    const base::android::JavaRef<jstring>& title,
    const base::android::JavaRef<jobject>& favicon,
    JniIntWrapper transition) {
  CHECK_CLAZZ(env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
      org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          "createNavigationEntry",
"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Bitmap;I)Lorg/chromium/content_public/browser/NavigationEntry;",
          &g_org_chromium_content_browser_framehost_NavigationControllerImpl_createNavigationEntry);

  jobject ret =
env->CallStaticObjectMethod(org_chromium_content_browser_framehost_NavigationControllerImpl_clazz(env),
          method_id, as_jint(index), url.obj(), virtualUrl.obj(), originalUrl.obj(), title.obj(),
              favicon.obj(), as_jint(transition));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace content

#endif  // org_chromium_content_browser_framehost_NavigationControllerImpl_JNI