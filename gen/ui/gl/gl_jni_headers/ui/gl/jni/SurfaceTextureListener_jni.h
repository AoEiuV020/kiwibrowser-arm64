// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/ui/gl/SurfaceTextureListener

#ifndef org_chromium_ui_gl_SurfaceTextureListener_JNI
#define org_chromium_ui_gl_SurfaceTextureListener_JNI

#include <jni.h>

#include "../../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_ui_gl_SurfaceTextureListener[];
const char kClassPath_org_chromium_ui_gl_SurfaceTextureListener[] =
    "org/chromium/ui/gl/SurfaceTextureListener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_ui_gl_SurfaceTextureListener_clazz =
    0;
#ifndef org_chromium_ui_gl_SurfaceTextureListener_clazz_defined
#define org_chromium_ui_gl_SurfaceTextureListener_clazz_defined
inline jclass org_chromium_ui_gl_SurfaceTextureListener_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_ui_gl_SurfaceTextureListener,
      &g_org_chromium_ui_gl_SurfaceTextureListener_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace gl {

JNI_GENERATOR_EXPORT void Java_org_chromium_ui_gl_SurfaceTextureListener_nativeFrameAvailable(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeSurfaceTextureListener) {
  SurfaceTextureListener* native =
      reinterpret_cast<SurfaceTextureListener*>(nativeSurfaceTextureListener);
  CHECK_NATIVE_PTR(env, jcaller, native, "FrameAvailable");
  return native->FrameAvailable(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

JNI_GENERATOR_EXPORT void Java_org_chromium_ui_gl_SurfaceTextureListener_nativeDestroy(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeSurfaceTextureListener) {
  SurfaceTextureListener* native =
      reinterpret_cast<SurfaceTextureListener*>(nativeSurfaceTextureListener);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env, jcaller));
}


}  // namespace gl

#endif  // org_chromium_ui_gl_SurfaceTextureListener_JNI
