// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/software_rendering_list_autogen.h"

#include "gpu/config/software_rendering_list_arrays_and_structs_autogen.h"
#include "gpu/config/software_rendering_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kSoftwareRenderingListEntries[] = {
{
4,  // id
"The Intel Mobile 945 Express family of chipsets is not compatible with WebGL",
base::size(kFeatureListForEntry4),  // features size
kFeatureListForEntry4,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry4),  // CrBugs size
kCrBugsForEntry4,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForEntry4),  // DeviceIDs size
kDeviceIDsForEntry4,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
8,  // id
"NVIDIA GeForce FX Go5200 is assumed to be buggy",
base::size(kFeatureListForEntry8),  // features size
kFeatureListForEntry8,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry8),  // CrBugs size
kCrBugsForEntry8,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
base::size(kDeviceIDsForEntry8),  // DeviceIDs size
kDeviceIDsForEntry8,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
53,  // id
"The Intel GMA500 is too slow for Stage3D",
base::size(kFeatureListForEntry53),  // features size
kFeatureListForEntry53,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry53),  // CrBugs size
kCrBugsForEntry53,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForEntry53),  // DeviceIDs size
kDeviceIDsForEntry53,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
76,  // id
"WebGL is disabled on Android unless the GPU runs in a separate process or reset notification is supported",
base::size(kFeatureListForEntry76),  // features size
kFeatureListForEntry76,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry76,  // more data
},
base::size(kExceptionsForEntry76),  // exceptions count
kExceptionsForEntry76,  // exceptions
},
{
96,  // id
"Blacklist GPU raster/canvas on all except known good GPUs and newer Android releases",
base::size(kFeatureListForEntry96),  // features size
kFeatureListForEntry96,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry96),  // CrBugs size
kCrBugsForEntry96,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry96),  // exceptions count
kExceptionsForEntry96,  // exceptions
},
{
100,  // id
"GPU rasterization and canvas is blacklisted on Nexus 10",
base::size(kFeatureListForEntry100),  // features size
kFeatureListForEntry100,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry100),  // CrBugs size
kCrBugsForEntry100,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry100,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
102,  // id
"Accelerated 2D canvas and Ganesh broken on Galaxy Tab 2",
base::size(kFeatureListForEntry102),  // features size
kFeatureListForEntry102,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry102),  // CrBugs size
kCrBugsForEntry102,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry102,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
104,  // id
"GPU raster broken on PowerVR Rogue",
base::size(kFeatureListForEntry104),  // features size
kFeatureListForEntry104,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry104),  // CrBugs size
kCrBugsForEntry104,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry104,  // driver info
&kGLStringsForEntry104,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
105,  // id
"GPU raster broken on PowerVR SGX even on Lollipop",
base::size(kFeatureListForEntry105),  // features size
kFeatureListForEntry105,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry105),  // CrBugs size
kCrBugsForEntry105,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry105,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
106,  // id
"GPU raster broken on ES2-only Adreno 3xx drivers",
base::size(kFeatureListForEntry106),  // features size
kFeatureListForEntry106,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry106),  // CrBugs size
kCrBugsForEntry106,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry106,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry106,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
108,  // id
"GPU rasterization image color broken on Vivante",
base::size(kFeatureListForEntry108),  // features size
kFeatureListForEntry108,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry108),  // CrBugs size
kCrBugsForEntry108,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry108,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
109,  // id
"MediaCodec on Adreno 330 / 4.2.2 doesn't always send FORMAT_CHANGED",
base::size(kFeatureListForEntry109),  // features size
kFeatureListForEntry109,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry109),  // CrBugs size
kCrBugsForEntry109,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "4.2.2", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry109,  // driver info
&kGLStringsForEntry109,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
117,  // id
"MediaCodec on Vivante hangs in MediaCodec often",
base::size(kFeatureListForEntry117),  // features size
kFeatureListForEntry117,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry117),  // CrBugs size
kCrBugsForEntry117,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry117,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
118,  // id
"webgl/canvas crashy on imporperly parsed vivante driver",
base::size(kFeatureListForEntry118),  // features size
kFeatureListForEntry118,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry118),  // CrBugs size
kCrBugsForEntry118,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry118,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
133,  // id
"MediaCodec on VideoCore IV HW crashes on JB",
base::size(kFeatureListForEntry133),  // features size
kFeatureListForEntry133,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry133),  // CrBugs size
kCrBugsForEntry133,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry133,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
140,  // id
"MSAA and depth texture buggy on Adreno 3xx, also disable WebGL2",
base::size(kFeatureListForEntry140),  // features size
kFeatureListForEntry140,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry140),  // CrBugs size
kCrBugsForEntry140,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry140,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
147,  // id
"GPU raster broken on Mali-T760 on KitKat",
base::size(kFeatureListForEntry147),  // features size
kFeatureListForEntry147,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry147),  // CrBugs size
kCrBugsForEntry147,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry147,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
148,  // id
"VideoCore V has corrupt rendering with GPU Rasterization",
base::size(kFeatureListForEntry148),  // features size
kFeatureListForEntry148,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry148),  // CrBugs size
kCrBugsForEntry148,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry148,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
149,  // id
"Adreno 420 support for EXT_multisampled_render_to_texture is buggy on Android < 5.1",
base::size(kFeatureListForEntry149),  // features size
kFeatureListForEntry149,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry149),  // CrBugs size
kCrBugsForEntry149,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry149,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
152,  // id
"Test entry where all features except WebGL blacklisted",
base::size(kFeatureListForEntry152),  // features size
kFeatureListForEntry152,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry152,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
153,  // id
"Test entry where WebGL is blacklisted",
base::size(kFeatureListForEntry153),  // features size
kFeatureListForEntry153,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry153,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
154,  // id
"Protected video decoding with swap chain is for Windows and Intel only",
base::size(kFeatureListForEntry154),  // features size
kFeatureListForEntry154,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry154),  // exceptions count
kExceptionsForEntry154,  // exceptions
},
};
const size_t kSoftwareRenderingListEntryCount = 22;
}  // namespace gpu
