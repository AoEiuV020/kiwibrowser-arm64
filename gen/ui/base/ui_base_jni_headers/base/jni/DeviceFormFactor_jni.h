// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/base/DeviceFormFactor

#ifndef org_chromium_ui_base_DeviceFormFactor_JNI
#define org_chromium_ui_base_DeviceFormFactor_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_ui_base_DeviceFormFactor[];
const char kClassPath_org_chromium_ui_base_DeviceFormFactor[] =
    "org/chromium/ui/base/DeviceFormFactor";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_ui_base_DeviceFormFactor_clazz = 0;
#ifndef org_chromium_ui_base_DeviceFormFactor_clazz_defined
#define org_chromium_ui_base_DeviceFormFactor_clazz_defined
inline jclass org_chromium_ui_base_DeviceFormFactor_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_ui_base_DeviceFormFactor,
      &g_org_chromium_ui_base_DeviceFormFactor_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static base::subtle::AtomicWord g_org_chromium_ui_base_DeviceFormFactor_isTablet = 0;
static jboolean Java_DeviceFormFactor_isTablet(JNIEnv* env) {
  CHECK_CLAZZ(env, org_chromium_ui_base_DeviceFormFactor_clazz(env),
      org_chromium_ui_base_DeviceFormFactor_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_ui_base_DeviceFormFactor_clazz(env),
          "isTablet",
          "()Z",
          &g_org_chromium_ui_base_DeviceFormFactor_isTablet);

  jboolean ret =
      env->CallStaticBooleanMethod(org_chromium_ui_base_DeviceFormFactor_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

#endif  // org_chromium_ui_base_DeviceFormFactor_JNI
