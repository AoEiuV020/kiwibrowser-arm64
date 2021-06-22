// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PushEventInit_h
#define PushEventInit_h

#include "third_party/blink/renderer/bindings/modules/v8/array_buffer_or_array_buffer_view_or_usv_string.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/serviceworkers/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PushEventInit : public ExtendableEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PushEventInit();
  virtual ~PushEventInit();
  PushEventInit(const PushEventInit&);
  PushEventInit& operator=(const PushEventInit&);

  bool hasData() const { return !data_.IsNull(); }
  const ArrayBufferOrArrayBufferViewOrUSVString& data() const {
    return data_;
  }
  void setData(const ArrayBufferOrArrayBufferViewOrUSVString&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ArrayBufferOrArrayBufferViewOrUSVString data_;

  friend class V8PushEventInit;
};

}  // namespace blink

#endif  // PushEventInit_h
