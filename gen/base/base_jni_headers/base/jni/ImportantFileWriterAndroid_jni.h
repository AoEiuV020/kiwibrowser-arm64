// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/ImportantFileWriterAndroid

#ifndef org_chromium_base_ImportantFileWriterAndroid_JNI
#define org_chromium_base_ImportantFileWriterAndroid_JNI

#include <jni.h>

#include "../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_ImportantFileWriterAndroid[];
const char kClassPath_org_chromium_base_ImportantFileWriterAndroid[] =
    "org/chromium/base/ImportantFileWriterAndroid";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_base_ImportantFileWriterAndroid_clazz = 0;
#ifndef org_chromium_base_ImportantFileWriterAndroid_clazz_defined
#define org_chromium_base_ImportantFileWriterAndroid_clazz_defined
inline jclass org_chromium_base_ImportantFileWriterAndroid_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_ImportantFileWriterAndroid,
      &g_org_chromium_base_ImportantFileWriterAndroid_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {

static jboolean JNI_ImportantFileWriterAndroid_WriteFileAtomically(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& fileName,
    const base::android::JavaParamRef<jbyteArray>& data);

JNI_GENERATOR_EXPORT jboolean
    Java_org_chromium_base_ImportantFileWriterAndroid_nativeWriteFileAtomically(
    JNIEnv* env,
    jclass jcaller,
    jstring fileName,
    jbyteArray data) {
  return JNI_ImportantFileWriterAndroid_WriteFileAtomically(env,
      base::android::JavaParamRef<jclass>(env, jcaller), base::android::JavaParamRef<jstring>(env,
      fileName), base::android::JavaParamRef<jbyteArray>(env, data));
}


}  // namespace android
}  // namespace base

#endif  // org_chromium_base_ImportantFileWriterAndroid_JNI
