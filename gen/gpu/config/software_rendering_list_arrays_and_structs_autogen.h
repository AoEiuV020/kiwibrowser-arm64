// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
#define GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

#include "gpu/config/gpu_feature_type.h"

namespace gpu {
const int kFeatureListForEntry4[4] = {
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForEntry4[1] = {
232035,
};

const uint32_t kDeviceIDsForEntry4[2] = {
0x27AE,
0x27A2,
};

const int kFeatureListForEntry8[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry8[1] = {
72938,
};

const uint32_t kDeviceIDsForEntry8[1] = {
0x0324,
};

const int kFeatureListForEntry53[1] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
};

const uint32_t kCrBugsForEntry53[1] = {
152096,
};

const uint32_t kDeviceIDsForEntry53[2] = {
0x8108,
0x8109,
};

const int kFeatureListForEntry76[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
};

const GpuControlList::More kMoreForEntry76 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
true,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const GpuControlList::More kMoreForEntry76Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
33362,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const GpuControlList::GLStrings kGLStringsForEntry76Exception1 = {
nullptr,
"Mali-4.*",
".*EXT_robustness.*",
nullptr,
};

const int kFeatureListForEntry96[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry96[2] = {
362779,
424970,
};

const GpuControlList::GLStrings kGLStringsForEntry96Exception0 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const GpuControlList::GLStrings kGLStringsForEntry96Exception1 = {
nullptr,
"Mali-4.*",
nullptr,
nullptr,
};

const GpuControlList::GLStrings kGLStringsForEntry96Exception2 = {
nullptr,
"NVIDIA.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry96Exception3 = {
GpuControlList::kGLTypeGLES,  // gl_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "3.0", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const GpuControlList::GLStrings kGLStringsForEntry96Exception4 = {
nullptr,
".*Google.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry100[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry100[1] = {
407144,
};

const GpuControlList::GLStrings kGLStringsForEntry100 = {
nullptr,
".*Mali-T604.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry102[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry102[1] = {
416910,
};

const GpuControlList::GLStrings kGLStringsForEntry102 = {
nullptr,
"PowerVR SGX 540",
nullptr,
nullptr,
};

const int kFeatureListForEntry104[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry104[3] = {
436331,
483574,
684586,
};

const GpuControlList::DriverInfo kDriverInfoForEntry104 = {
nullptr,  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "1.8", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry104 = {
nullptr,
"PowerVR Rogue.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry105[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry105[1] = {
461456,
};

const GpuControlList::GLStrings kGLStringsForEntry105 = {
nullptr,
"PowerVR SGX.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry106[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry106[1] = {
480149,
};

const GpuControlList::GLStrings kGLStringsForEntry106 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry106 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "2.0", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const int kFeatureListForEntry108[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry108[1] = {
560587,
};

const GpuControlList::GLStrings kGLStringsForEntry108 = {
nullptr,
".*Vivante.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry109[1] = {
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForEntry109[1] = {
585963,
};

const GpuControlList::DriverInfo kDriverInfoForEntry109 = {
nullptr,  // driver_vendor
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "45.0", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry109 = {
nullptr,
"Adreno \\(TM\\) 330",
nullptr,
nullptr,
};

const int kFeatureListForEntry117[1] = {
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForEntry117[1] = {
626814,
};

const GpuControlList::GLStrings kGLStringsForEntry117 = {
nullptr,
".*Vivante.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry118[2] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForEntry118[1] = {
628059,
};

const GpuControlList::GLStrings kGLStringsForEntry118 = {
"Vivante.*",
".*PXA.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry133[1] = {
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForEntry133[1] = {
654905,
};

const GpuControlList::GLStrings kGLStringsForEntry133 = {
nullptr,
".*VideoCore IV.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry140[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
};

const uint32_t kCrBugsForEntry140[2] = {
449116,
698197,
};

const GpuControlList::GLStrings kGLStringsForEntry140 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry147[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry147[1] = {
737048,
};

const GpuControlList::GLStrings kGLStringsForEntry147 = {
nullptr,
"Mali-T760.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry148[1] = {
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForEntry148[1] = {
710273,
};

const GpuControlList::GLStrings kGLStringsForEntry148 = {
nullptr,
".*VideoCore V.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry149[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
};

const uint32_t kCrBugsForEntry149[2] = {
490379,
767913,
};

const GpuControlList::GLStrings kGLStringsForEntry149 = {
nullptr,
"Adreno \\(TM\\) 4.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry152[9] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const GpuControlList::More kMoreForEntry152 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
1,  // test_group
};

const int kFeatureListForEntry153[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
};

const GpuControlList::More kMoreForEntry153 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
2,  // test_group
};

const int kFeatureListForEntry154[1] = {
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
};

}  // namespace gpu

#endif  // GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
