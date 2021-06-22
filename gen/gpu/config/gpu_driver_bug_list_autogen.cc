// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/gpu_driver_bug_list_autogen.h"

#include "gpu/config/gpu_driver_bug_list_arrays_and_structs_autogen.h"
#include "gpu/config/gpu_driver_bug_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kGpuDriverBugListEntries[] = {
{
1,  // id
"Imagination driver doesn't like uploading lots of buffer data constantly",
base::size(kFeatureListForEntry1),  // features size
kFeatureListForEntry1,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry1),  // CrBugs size
kCrBugsForEntry1,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry1,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
2,  // id
"ARM driver doesn't like uploading lots of buffer data constantly",
base::size(kFeatureListForEntry2),  // features size
kFeatureListForEntry2,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry2),  // CrBugs size
kCrBugsForEntry2,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry2,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
6,  // id
"Restore scissor on FBO change with Qualcomm GPUs on older versions of Android",
base::size(kFeatureListForEntry6),  // features size
kFeatureListForEntry6,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry6),  // CrBugs size
kCrBugsForEntry6,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.3", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry6,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
19,  // id
"Disable depth textures on older Qualcomm GPUs (legacy blacklist entry, original problem unclear)",
base::size(kFeatureListForEntry19),  // features size
kFeatureListForEntry19,  // features
base::size(kDisabledExtensionsForEntry19),  // DisabledExtensions size
kDisabledExtensionsForEntry19,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry19),  // CrBugs size
kCrBugsForEntry19,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry19,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
21,  // id
"Vivante GPUs are buggy with context switching",
base::size(kFeatureListForEntry21),  // features size
kFeatureListForEntry21,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry21),  // CrBugs size
kCrBugsForEntry21,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry21,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
22,  // id
"Imagination drivers are buggy with context switching",
base::size(kFeatureListForEntry22),  // features size
kFeatureListForEntry22,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry22),  // CrBugs size
kCrBugsForEntry22,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry22,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
24,  // id
"Mali-4xx drivers throw an error when a buffer object's size is set to 0",
base::size(kFeatureListForEntry24),  // features size
kFeatureListForEntry24,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry24),  // CrBugs size
kCrBugsForEntry24,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry24,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
31,  // id
"The Mali-Txxx driver does not guarantee flush ordering",
base::size(kFeatureListForEntry31),  // features size
kFeatureListForEntry31,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry31),  // CrBugs size
kCrBugsForEntry31,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry31,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
32,  // id
"Share groups are not working on (older?) Broadcom drivers",
base::size(kFeatureListForEntry32),  // features size
kFeatureListForEntry32,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry32),  // CrBugs size
kCrBugsForEntry32,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry32,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
33,  // id
"Share group-related crashes and poor context switching perf on Imagination drivers",
base::size(kFeatureListForEntry33),  // features size
kFeatureListForEntry33,  // features
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
&kGLStringsForEntry33,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
34,  // id
"Share groups are not working on (older?) Vivante drivers",
base::size(kFeatureListForEntry34),  // features size
kFeatureListForEntry34,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry34),  // CrBugs size
kCrBugsForEntry34,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry34,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
35,  // id
"Share-group related crashes on older NVIDIA drivers",
base::size(kFeatureListForEntry35),  // features size
kFeatureListForEntry35,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry35),  // CrBugs size
kCrBugsForEntry35,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.3", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry35,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
36,  // id
"Share-group related crashes on Qualcomm drivers",
base::size(kFeatureListForEntry36),  // features size
kFeatureListForEntry36,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry36),  // CrBugs size
kCrBugsForEntry36,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.3", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry36,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
38,  // id
"Non-virtual contexts on Qualcomm sometimes cause out-of-order frames",
base::size(kFeatureListForEntry38),  // features size
kFeatureListForEntry38,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry38),  // CrBugs size
kCrBugsForEntry38,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry38,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
40,  // id
"Framebuffer discarding causes flickering on old ARM drivers",
base::size(kFeatureListForEntry40),  // features size
kFeatureListForEntry40,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry40),  // CrBugs size
kCrBugsForEntry40,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry40,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
42,  // id
"Framebuffer discarding causes flickering on older IMG drivers",
base::size(kFeatureListForEntry42),  // features size
kFeatureListForEntry42,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry42),  // CrBugs size
kCrBugsForEntry42,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry42,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
43,  // id
"Framebuffer discarding doesn't accept trivial attachments on Vivante",
base::size(kFeatureListForEntry43),  // features size
kFeatureListForEntry43,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry43),  // CrBugs size
kCrBugsForEntry43,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry43,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
49,  // id
"The first draw operation from an idle state is slow",
base::size(kFeatureListForEntry49),  // features size
kFeatureListForEntry49,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry49),  // CrBugs size
kCrBugsForEntry49,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry49,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
54,  // id
"Clear uniforms before first program use on all platforms",
base::size(kFeatureListForEntry54),  // features size
kFeatureListForEntry54,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry54),  // CrBugs size
kCrBugsForEntry54,  // CrBugs
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
base::size(kExceptionsForEntry54),  // exceptions count
kExceptionsForEntry54,  // exceptions
},
{
69,  // id
"Some shaders in Skia need more than the min available vertex and fragment shader uniform vectors in case of OSMesa",
base::size(kFeatureListForEntry69),  // features size
kFeatureListForEntry69,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry69),  // CrBugs size
kCrBugsForEntry69,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry69,  // driver info
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
71,  // id
"Vivante's support of OES_standard_derivatives is buggy",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry71),  // DisabledExtensions size
kDisabledExtensionsForEntry71,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry71),  // CrBugs size
kCrBugsForEntry71,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry71,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
72,  // id
"Use virtual contexts on NVIDIA with GLES 3.1",
base::size(kFeatureListForEntry72),  // features size
kFeatureListForEntry72,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry72),  // CrBugs size
kCrBugsForEntry72,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry72,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry72,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
74,  // id
"Testing EGL sync fences was broken on most Qualcomm drivers",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry74),  // DisabledExtensions size
kDisabledExtensionsForEntry74,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry74),  // CrBugs size
kCrBugsForEntry74,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry74,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
75,  // id
"Mali-4xx support of EXT_multisampled_render_to_texture is buggy on Android < 4.3",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry75),  // DisabledExtensions size
kDisabledExtensionsForEntry75,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry75),  // CrBugs size
kCrBugsForEntry75,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.3", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry75,  // GL strings
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
"Testing EGL sync fences was broken on IMG",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry76),  // DisabledExtensions size
kDisabledExtensionsForEntry76,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry76),  // CrBugs size
kCrBugsForEntry76,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry76,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
77,  // id
"Testing fences was broken on Mali ES2 drivers",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry77),  // DisabledExtensions size
kDisabledExtensionsForEntry77,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry77),  // CrBugs size
kCrBugsForEntry77,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry77,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry77,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
78,  // id
"Testing fences was broken on Broadcom drivers",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry78),  // DisabledExtensions size
kDisabledExtensionsForEntry78,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry78),  // CrBugs size
kCrBugsForEntry78,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "4.4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry78,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
82,  // id
"PBO mappings segfault on certain older Qualcomm drivers",
base::size(kFeatureListForEntry82),  // features size
kFeatureListForEntry82,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry82),  // CrBugs size
kCrBugsForEntry82,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.3", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry82,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
88,  // id
"Always rewrite vec/mat constructors to be consistent",
base::size(kFeatureListForEntry88),  // features size
kFeatureListForEntry88,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry88),  // CrBugs size
kCrBugsForEntry88,  // CrBugs
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
0,  // exceptions count
nullptr,  // exceptions
},
{
91,  // id
"ETC1 non-power-of-two sized textures crash older IMG drivers",
base::size(kFeatureListForEntry91),  // features size
kFeatureListForEntry91,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry91),  // CrBugs size
kCrBugsForEntry91,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry91,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
93,  // id
"The GL implementation on the Android emulator has problems with PBOs.",
base::size(kFeatureListForEntry93),  // features size
kFeatureListForEntry93,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry93),  // CrBugs size
kCrBugsForEntry93,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry93,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry93,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
94,  // id
"Disable EGL_KHR_wait_sync on NVIDIA with GLES 3.1",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry94),  // DisabledExtensions size
kDisabledExtensionsForEntry94,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry94),  // CrBugs size
kCrBugsForEntry94,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "5.0.2", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry94,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry94,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
95,  // id
"glClear does not always work on these drivers",
base::size(kFeatureListForEntry95),  // features size
kFeatureListForEntry95,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry95),  // CrBugs size
kCrBugsForEntry95,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry95,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry95,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
97,  // id
"Multisampling has poor performance in Intel BayTrail",
base::size(kFeatureListForEntry97),  // features size
kFeatureListForEntry97,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry97),  // CrBugs size
kCrBugsForEntry97,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry97,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
98,  // id
"PowerVR SGX 540 drivers throw GL_OUT_OF_MEMORY error when a buffer object's size is set to 0",
base::size(kFeatureListForEntry98),  // features size
kFeatureListForEntry98,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry98),  // CrBugs size
kCrBugsForEntry98,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry98,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
99,  // id
"Qualcomm driver before Lollipop deletes egl sync objects after context destruction",
base::size(kFeatureListForEntry99),  // features size
kFeatureListForEntry99,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry99),  // CrBugs size
kCrBugsForEntry99,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.0.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry99,  // GL strings
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
"Adreno 420 driver loses FBO attachment contents on bound FBO deletion",
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
{GpuControlList::kGT, GpuControlList::kVersionStyleNumerical, "5.0.2", nullptr},  // os_version
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
103,  // id
"Adreno 420 driver drops draw calls after FBO invalidation",
base::size(kFeatureListForEntry103),  // features size
kFeatureListForEntry103,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry103),  // CrBugs size
kCrBugsForEntry103,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry103,  // GL strings
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
"EXT_occlusion_query_boolean hangs on MediaTek MT8135 pre-Lollipop",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry104),  // DisabledExtensions size
kDisabledExtensionsForEntry104,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.0.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
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
"Framebuffer discarding causes corruption on Mali-4xx",
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
"EXT_occlusion_query_boolean hangs on PowerVR SGX 544 (IMG) drivers",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry106),  // DisabledExtensions size
kDisabledExtensionsForEntry106,  // DisabledExtensions
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
&kGLStringsForEntry106,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
107,  // id
"Workaround IMG PowerVR G6xxx drivers bugs",
base::size(kFeatureListForEntry107),  // features size
kFeatureListForEntry107,  // features
base::size(kDisabledExtensionsForEntry107),  // DisabledExtensions size
kDisabledExtensionsForEntry107,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry107),  // CrBugs size
kCrBugsForEntry107,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kBetween, GpuControlList::kVersionStyleNumerical, "5.0.0", "5.1.99"},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry107,  // driver info
&kGLStringsForEntry107,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
108,  // id
"Mali-4xx does not support GL_RGB format",
base::size(kFeatureListForEntry108),  // features size
kFeatureListForEntry108,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry108),  // CrBugs size
kCrBugsForEntry108,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
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
110,  // id
"EGL Sync server causes crashes on Adreno 2xx and 3xx drivers",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry110),  // DisabledExtensions size
kDisabledExtensionsForEntry110,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry110),  // CrBugs size
kCrBugsForEntry110,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry110,  // driver info
&kGLStringsForEntry110,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
112,  // id
"EXT_disjoint_timer_query fails after 2 queries on adreno 3xx in lollypop",
base::size(kFeatureListForEntry112),  // features size
kFeatureListForEntry112,  // features
base::size(kDisabledExtensionsForEntry112),  // DisabledExtensions size
kDisabledExtensionsForEntry112,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry112),  // CrBugs size
kCrBugsForEntry112,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "5.0.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry112,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
113,  // id
"EXT_disjoint_timer_query fails after 256 queries on adreno 4xx",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry113),  // DisabledExtensions size
kDisabledExtensionsForEntry113,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry113),  // CrBugs size
kCrBugsForEntry113,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry113,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
115,  // id
"glGetIntegerv with GL_GPU_DISJOINT_EXT causes GL_INVALID_ENUM error",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry115),  // DisabledExtensions size
kDisabledExtensionsForEntry115,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry115),  // CrBugs size
kCrBugsForEntry115,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry115,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry115,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
116,  // id
"Adreno 420 support for EXT_multisampled_render_to_texture is buggy on Android < 5.1",
base::size(kFeatureListForEntry116),  // features size
kFeatureListForEntry116,  // features
base::size(kDisabledExtensionsForEntry116),  // DisabledExtensions size
kDisabledExtensionsForEntry116,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry116),  // CrBugs size
kCrBugsForEntry116,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry116,  // GL strings
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
"GL_KHR_blend_equation_advanced breaks blending on Adreno 4xx",
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
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
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
119,  // id
"Context lost recovery often fails on Mali-400/450 on Android.",
base::size(kFeatureListForEntry119),  // features size
kFeatureListForEntry119,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry119),  // CrBugs size
kCrBugsForEntry119,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry119,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
120,  // id
"CHROMIUM_copy_texture is slow on Mali pre-Lollipop",
base::size(kFeatureListForEntry120),  // features size
kFeatureListForEntry120,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry120),  // CrBugs size
kCrBugsForEntry120,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.0.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry120,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
125,  // id
"glFinish doesn't clear caches on Android",
base::size(kFeatureListForEntry125),  // features size
kFeatureListForEntry125,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry125),  // CrBugs size
kCrBugsForEntry125,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry125,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
126,  // id
"Program binaries contain incorrect bound attribute locations on Adreno 3xx GPUs",
base::size(kFeatureListForEntry126),  // features size
kFeatureListForEntry126,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry126),  // CrBugs size
kCrBugsForEntry126,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry126,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
127,  // id
"Android Adreno crashes on binding incomplete cube map texture to FBO",
base::size(kFeatureListForEntry127),  // features size
kFeatureListForEntry127,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry127),  // CrBugs size
kCrBugsForEntry127,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry127,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
132,  // id
"On Intel GPUs MSAA performance is not acceptable for GPU rasterization",
base::size(kFeatureListForEntry132),  // features size
kFeatureListForEntry132,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry132),  // CrBugs size
kCrBugsForEntry132,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryActive,  // multi_gpu_category
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
133,  // id
"CHROMIUM_copy_texture with 1MB copy per flush to avoid unwanted cache growth on Adreno",
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
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
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
134,  // id
"glReadPixels fails on FBOs with SRGB_ALPHA textures",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry134),  // DisabledExtensions size
kDisabledExtensionsForEntry134,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry134),  // CrBugs size
kCrBugsForEntry134,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry134,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
137,  // id
"NVIDIA fails glReadPixels from incomplete cube map texture",
base::size(kFeatureListForEntry137),  // features size
kFeatureListForEntry137,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry137),  // CrBugs size
kCrBugsForEntry137,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry137,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
138,  // id
"NVIDIA drivers before 346 lack features in NV_path_rendering and related extensions to implement driver level path rendering.",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry138),  // DisabledExtensions size
kDisabledExtensionsForEntry138,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry138),  // CrBugs size
kCrBugsForEntry138,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry138,  // driver info
&kGLStringsForEntry138,  // GL strings
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
"glReadPixels fails on FBOs with SRGB_ALPHA textures, Nexus 5X",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry140),  // DisabledExtensions size
kDisabledExtensionsForEntry140,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry140),  // CrBugs size
kCrBugsForEntry140,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
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
145,  // id
"EGLImage ref counting across EGLContext/threads is broken",
base::size(kFeatureListForEntry145),  // features size
kFeatureListForEntry145,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry145),  // CrBugs size
kCrBugsForEntry145,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry145,  // GL strings
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
"Limit max texure size to 4096 on all of Android",
base::size(kFeatureListForEntry147),  // features size
kFeatureListForEntry147,  // features
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
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
157,  // id
"Testing fences was broken on Mali ES2 drivers for specific phone models",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry157),  // DisabledExtensions size
kDisabledExtensionsForEntry157,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry157),  // CrBugs size
kCrBugsForEntry157,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry157,  // GL strings
&kMachineModelInfoForEntry157,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry157,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
162,  // id
"Framebuffer discarding not useful on NVIDIA Kepler architecture and later",
base::size(kFeatureListForEntry162),  // features size
kFeatureListForEntry162,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry162),  // CrBugs size
kCrBugsForEntry162,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry162,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry162,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
165,  // id
"Unpacking overlapping rows from unpack buffers is unstable on NVIDIA GL driver",
base::size(kFeatureListForEntry165),  // features size
kFeatureListForEntry165,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry165),  // CrBugs size
kCrBugsForEntry165,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry165,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
172,  // id
"Use GL_INTEL_framebuffer_CMAA on ChromeOS",
base::size(kFeatureListForEntry172),  // features size
kFeatureListForEntry172,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry172),  // CrBugs size
kCrBugsForEntry172,  // CrBugs
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
base::size(kExceptionsForEntry172),  // exceptions count
kExceptionsForEntry172,  // exceptions
},
{
174,  // id
"Adreno 4xx support for EXT_multisampled_render_to_texture is buggy on Android 7.0",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry174),  // DisabledExtensions size
kDisabledExtensionsForEntry174,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry174),  // CrBugs size
kCrBugsForEntry174,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kBetween, GpuControlList::kVersionStyleNumerical, "7.0.0", "7.0.99"},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry174,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
175,  // id
"Adreno 5xx support for EXT_multisampled_render_to_texture is buggy on Android < 7.0",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry175),  // DisabledExtensions size
kDisabledExtensionsForEntry175,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry175),  // CrBugs size
kCrBugsForEntry175,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "7.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry175,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
176,  // id
"glClear does not work on Acer Predator GT-810",
base::size(kFeatureListForEntry176),  // features size
kFeatureListForEntry176,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry176),  // CrBugs size
kCrBugsForEntry176,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry176,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
178,  // id
"GL_KHR_blend_equation_advanced is incorrectly implemented on Intel BayTrail on KitKat",
base::size(kFeatureListForEntry178),  // features size
kFeatureListForEntry178,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry178),  // CrBugs size
kCrBugsForEntry178,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "5.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry178,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
180,  // id
"eglCreateImageKHR fails for one component textures on PowerVR",
base::size(kFeatureListForEntry180),  // features size
kFeatureListForEntry180,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry180),  // CrBugs size
kCrBugsForEntry180,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry180,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
182,  // id
"Frequent hang in glClear on old android versions on Mali-T7xx",
base::size(kFeatureListForEntry182),  // features size
kFeatureListForEntry182,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry182),  // CrBugs size
kCrBugsForEntry182,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "6.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry182,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
192,  // id
"Decode and encode before generateMipmap for srgb format textures on os except macosx",
base::size(kFeatureListForEntry192),  // features size
kFeatureListForEntry192,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry192),  // CrBugs size
kCrBugsForEntry192,  // CrBugs
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
&kMoreForEntry192,  // more data
},
base::size(kExceptionsForEntry192),  // exceptions count
kExceptionsForEntry192,  // exceptions
},
{
200,  // id
"ES3 support is unreliable on some older drivers",
base::size(kFeatureListForEntry200),  // features size
kFeatureListForEntry200,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry200),  // CrBugs size
kCrBugsForEntry200,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.4", nullptr},  // os_version
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
0,  // exceptions count
nullptr,  // exceptions
},
{
205,  // id
"Adreno 5xx support for EXT_multisampled_render_to_texture is buggy on Android 7.1",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry205),  // DisabledExtensions size
kDisabledExtensionsForEntry205,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry205),  // CrBugs size
kCrBugsForEntry205,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "7.1.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry205,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
206,  // id
"Disable KHR_blend_equation_advanced until cc shaders are updated",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry206),  // DisabledExtensions size
kDisabledExtensionsForEntry206,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry206),  // CrBugs size
kCrBugsForEntry206,  // CrBugs
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
0,  // exceptions count
nullptr,  // exceptions
},
{
212,  // id
"Program binaries don't contain transform feedback varyings on Qualcomm GPUs",
base::size(kFeatureListForEntry212),  // features size
kFeatureListForEntry212,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry212),  // CrBugs size
kCrBugsForEntry212,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry212,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
213,  // id
"The Mali-Gxx driver does not guarantee flush ordering",
base::size(kFeatureListForEntry213),  // features size
kFeatureListForEntry213,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry213),  // CrBugs size
kCrBugsForEntry213,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry213,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
214,  // id
"Some Adreno 3xx don't setup scissor state correctly when FBO0 is bound, nor support MSAA properly.",
base::size(kFeatureListForEntry214),  // features size
kFeatureListForEntry214,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry214),  // CrBugs size
kCrBugsForEntry214,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry214,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
215,  // id
"Fake no-op GPU driver bug workaround for testing",
base::size(kFeatureListForEntry215),  // features size
kFeatureListForEntry215,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry215),  // CrBugs size
kCrBugsForEntry215,  // CrBugs
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
&kMoreForEntry215,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
216,  // id
"Pack parameters work incorrectly with pack buffer bound",
base::size(kFeatureListForEntry216),  // features size
kFeatureListForEntry216,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry216),  // CrBugs size
kCrBugsForEntry216,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry216,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
217,  // id
"Alignment works incorrectly with unpack buffer bound",
base::size(kFeatureListForEntry217),  // features size
kFeatureListForEntry217,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry217),  // CrBugs size
kCrBugsForEntry217,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry217,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
218,  // id
"Certain Adreno 4xx and 5xx drivers often crash in glProgramBinary.",
base::size(kFeatureListForEntry218),  // features size
kFeatureListForEntry218,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry218),  // CrBugs size
kCrBugsForEntry218,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry218,  // driver info
&kGLStringsForEntry218,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
221,  // id
"Very large instanced draw calls crash on some Adreno 3xx drivers",
base::size(kFeatureListForEntry221),  // features size
kFeatureListForEntry221,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry221),  // CrBugs size
kCrBugsForEntry221,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry221,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
231,  // id
"Multisampled color renderbuffers can't be resized on Qualcomm 4xx/5xx",
base::size(kFeatureListForEntry231),  // features size
kFeatureListForEntry231,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry231),  // CrBugs size
kCrBugsForEntry231,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry231,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
237,  // id
"eglSwapBuffers intermittently fails on Android when app goes to background",
base::size(kFeatureListForEntry237),  // features size
kFeatureListForEntry237,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry237),  // CrBugs size
kCrBugsForEntry237,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "9.0", nullptr},  // os_version
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
0,  // exceptions count
nullptr,  // exceptions
},
{
240,  // id
"glGetQueryObject(GL_QUERY_RESULT_AVAILABLE) blocks unexpectedly on Adreno",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry240),  // DisabledExtensions size
kDisabledExtensionsForEntry240,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry240),  // CrBugs size
kCrBugsForEntry240,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "8.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry240,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
241,  // id
"On Intel GPUs MSAA performance is not acceptable for GPU rasterization. Duplicate of 132 for Android",
base::size(kFeatureListForEntry241),  // features size
kFeatureListForEntry241,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry241),  // CrBugs size
kCrBugsForEntry241,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry241,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
242,  // id
"Code produced by local variable initialization often triggers crashes in Marshmallow Adreno driver",
base::size(kFeatureListForEntry242),  // features size
kFeatureListForEntry242,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry242),  // CrBugs size
kCrBugsForEntry242,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "7.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry242,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
246,  // id
"Code produced by initializing variables using loops can trigger crashes on some Adreno drivers.",
base::size(kFeatureListForEntry246),  // features size
kFeatureListForEntry246,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry246),  // CrBugs size
kCrBugsForEntry246,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry246,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
247,  // id
"EXT_disjoint_timer_query is broken on Samsung Galaxy S6",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry247),  // DisabledExtensions size
kDisabledExtensionsForEntry247,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry247),  // CrBugs size
kCrBugsForEntry247,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry247,  // GL strings
&kMachineModelInfoForEntry247,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
251,  // id
"Vivante GPUs shader cache breaks rendering",
base::size(kFeatureListForEntry251),  // features size
kFeatureListForEntry251,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry251),  // CrBugs size
kCrBugsForEntry251,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry251,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
256,  // id
"Don't expose disjoint_timer_query extensions to WebGL",
0,  // feature size
nullptr,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
base::size(kDisabledWebGLExtensionsForEntry256),  // DisabledWebGLExtensions size
kDisabledWebGLExtensionsForEntry256,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry256),  // CrBugs size
kCrBugsForEntry256,  // CrBugs
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
0,  // exceptions count
nullptr,  // exceptions
},
{
257,  // id
"Fake entry for testing disabling of WebGL extensions",
0,  // feature size
nullptr,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
base::size(kDisabledWebGLExtensionsForEntry257),  // DisabledWebGLExtensions size
kDisabledWebGLExtensionsForEntry257,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry257),  // CrBugs size
kCrBugsForEntry257,  // CrBugs
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
&kMoreForEntry257,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
260,  // id
"eglClientWaitSyncKHR with nonzero timeout waits too long",
base::size(kFeatureListForEntry260),  // features size
kFeatureListForEntry260,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry260),  // CrBugs size
kCrBugsForEntry260,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "8.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry260,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
262,  // id
"Program fails in PowerVR*GX6250 drivers if gl_Position is not set",
base::size(kFeatureListForEntry262),  // features size
kFeatureListForEntry262,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry262),  // CrBugs size
kCrBugsForEntry262,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry262,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
263,  // id
"Program fails in PowerVR SGX54x drivers if gl_Position is not set",
base::size(kFeatureListForEntry263),  // features size
kFeatureListForEntry263,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry263),  // CrBugs size
kCrBugsForEntry263,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry263,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
264,  // id
"Program fails in PowerVR G6200 drivers if gl_Position is not set",
base::size(kFeatureListForEntry264),  // features size
kFeatureListForEntry264,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry264),  // CrBugs size
kCrBugsForEntry264,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry264,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
266,  // id
"Crash in gl::GLApiBase::glGetQueryObjectui64vFn with NetEase devices ",
base::size(kFeatureListForEntry266),  // features size
kFeatureListForEntry266,  // features
base::size(kDisabledExtensionsForEntry266),  // DisabledExtensions size
kDisabledExtensionsForEntry266,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry266),  // CrBugs size
kCrBugsForEntry266,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry266,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
268,  // id
"Limit MSAA to 4x on Android devices",
base::size(kFeatureListForEntry268),  // features size
kFeatureListForEntry268,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry268),  // CrBugs size
kCrBugsForEntry268,  // CrBugs
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
0,  // exceptions count
nullptr,  // exceptions
},
};
const size_t kGpuDriverBugListEntryCount = 100;
}  // namespace gpu
