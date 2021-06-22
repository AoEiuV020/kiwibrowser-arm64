// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/library_loader/LibraryLoader

#ifndef org_chromium_base_library_loader_LibraryLoader_JNI
#define org_chromium_base_library_loader_LibraryLoader_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_base_library_1loader_LibraryLoader[];
const char kClassPath_org_chromium_base_library_1loader_LibraryLoader[] =
    "org/chromium/base/library_loader/LibraryLoader";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_base_library_1loader_LibraryLoader_clazz = 0;
#ifndef org_chromium_base_library_1loader_LibraryLoader_clazz_defined
#define org_chromium_base_library_1loader_LibraryLoader_clazz_defined
inline jclass org_chromium_base_library_1loader_LibraryLoader_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_base_library_1loader_LibraryLoader,
      &g_org_chromium_base_library_1loader_LibraryLoader_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {

static jboolean JNI_LibraryLoader_LibraryLoaded(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jint processType);

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeLibraryLoaded(
    JNIEnv* env,
    jobject jcaller,
    jint processType) {
  return JNI_LibraryLoader_LibraryLoaded(env, base::android::JavaParamRef<jobject>(env, jcaller),
      processType);
}

static void JNI_LibraryLoader_RecordChromiumAndroidLinkerBrowserHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jboolean isUsingBrowserSharedRelros,
    jboolean loadAtFixedAddressFailed,
    jint libraryLoadFromApkStatus,
    jlong libraryLoadTime);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeRecordChromiumAndroidLinkerBrowserHistogram(
    JNIEnv* env,
    jobject jcaller,
    jboolean isUsingBrowserSharedRelros,
    jboolean loadAtFixedAddressFailed,
    jint libraryLoadFromApkStatus,
    jlong libraryLoadTime) {
  return JNI_LibraryLoader_RecordChromiumAndroidLinkerBrowserHistogram(env,
      base::android::JavaParamRef<jobject>(env, jcaller), isUsingBrowserSharedRelros,
      loadAtFixedAddressFailed, libraryLoadFromApkStatus, libraryLoadTime);
}

static void JNI_LibraryLoader_RecordLibraryPreloaderBrowserHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jint status);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeRecordLibraryPreloaderBrowserHistogram(
    JNIEnv* env,
    jobject jcaller,
    jint status) {
  return JNI_LibraryLoader_RecordLibraryPreloaderBrowserHistogram(env,
      base::android::JavaParamRef<jobject>(env, jcaller), status);
}

static void JNI_LibraryLoader_RegisterChromiumAndroidLinkerRendererHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jboolean requestedSharedRelro,
    jboolean loadAtFixedAddressFailed,
    jlong libraryLoadTime);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeRegisterChromiumAndroidLinkerRendererHistogram(
    JNIEnv* env,
    jobject jcaller,
    jboolean requestedSharedRelro,
    jboolean loadAtFixedAddressFailed,
    jlong libraryLoadTime) {
  return JNI_LibraryLoader_RegisterChromiumAndroidLinkerRendererHistogram(env,
      base::android::JavaParamRef<jobject>(env, jcaller), requestedSharedRelro,
      loadAtFixedAddressFailed, libraryLoadTime);
}

static void JNI_LibraryLoader_RegisterLibraryPreloaderRendererHistogram(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    jint status);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeRegisterLibraryPreloaderRendererHistogram(
    JNIEnv* env,
    jobject jcaller,
    jint status) {
  return JNI_LibraryLoader_RegisterLibraryPreloaderRendererHistogram(env,
      base::android::JavaParamRef<jobject>(env, jcaller), status);
}

static base::android::ScopedJavaLocalRef<jstring> JNI_LibraryLoader_GetVersionNumber(JNIEnv* env,
    const base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT jstring
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeGetVersionNumber(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_LibraryLoader_GetVersionNumber(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

static void JNI_LibraryLoader_ForkAndPrefetchNativeLibrary(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_library_1loader_LibraryLoader_nativeForkAndPrefetchNativeLibrary(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_LibraryLoader_ForkAndPrefetchNativeLibrary(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}

static jint JNI_LibraryLoader_PercentageOfResidentNativeLibraryCode(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT jint
    Java_org_chromium_base_library_1loader_LibraryLoader_nativePercentageOfResidentNativeLibraryCode(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_LibraryLoader_PercentageOfResidentNativeLibraryCode(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}

static void JNI_LibraryLoader_PeriodicallyCollectResidency(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_library_1loader_LibraryLoader_nativePeriodicallyCollectResidency(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_LibraryLoader_PeriodicallyCollectResidency(env,
      base::android::JavaParamRef<jclass>(env, jcaller));
}


}  // namespace android
}  // namespace base

#endif  // org_chromium_base_library_loader_LibraryLoader_JNI
