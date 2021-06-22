// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_CONFIG_SOFTWARE_RENDERING_LIST_EXCEPTIONS_AUTOGEN_H_
#define GPU_CONFIG_SOFTWARE_RENDERING_LIST_EXCEPTIONS_AUTOGEN_H_

namespace gpu {
const GpuControlList::Conditions kExceptionsForEntry76[2] = {
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
&kMoreForEntry76Exception0,  // more data
},
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry76Exception1,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
};

const GpuControlList::Conditions kExceptionsForEntry96[5] = {
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry96Exception0,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "4.4", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry96Exception1,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry96Exception2,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "4.4", nullptr},  // os_version
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
&kMoreForEntry96Exception3,  // more data
},
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry96Exception4,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
};

const GpuControlList::Conditions kExceptionsForEntry154[1] = {
{
GpuControlList::kOsWin,  // os_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0", nullptr},  // os_version
0x8086,  // vendor_id
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
};

}  // namespace gpu

#endif  // GPU_CONFIG_SOFTWARE_RENDERING_LIST_EXCEPTIONS_AUTOGEN_H_
