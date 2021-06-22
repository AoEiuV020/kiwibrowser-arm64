// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MIDIMessageEventInit_h
#define MIDIMessageEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT MIDIMessageEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MIDIMessageEventInit();
  virtual ~MIDIMessageEventInit();
  MIDIMessageEventInit(const MIDIMessageEventInit&);
  MIDIMessageEventInit& operator=(const MIDIMessageEventInit&);

  bool hasData() const { return data_; }
  NotShared<DOMUint8Array> data() const {
    return data_;
  }
  inline void setData(NotShared<DOMUint8Array>);
  inline void setDataToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<DOMUint8Array> data_;

  friend class V8MIDIMessageEventInit;
};

void MIDIMessageEventInit::setData(NotShared<DOMUint8Array> value) {
  data_ = value.View();
}
void MIDIMessageEventInit::setDataToNull() {
  data_ = Member<DOMUint8Array>();
}

}  // namespace blink

#endif  // MIDIMessageEventInit_h
