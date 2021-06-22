// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef EventListenerOptions_h
#define EventListenerOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT EventListenerOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  EventListenerOptions();
  virtual ~EventListenerOptions();
  EventListenerOptions(const EventListenerOptions&);
  EventListenerOptions& operator=(const EventListenerOptions&);

  bool hasCapture() const { return has_capture_; }
  bool capture() const {
    DCHECK(has_capture_);
    return capture_;
  }
  inline void setCapture(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_capture_ = false;

  bool capture_;

  friend class V8EventListenerOptions;
};

void EventListenerOptions::setCapture(bool value) {
  capture_ = value;
  has_capture_ = true;
}

}  // namespace blink

#endif  // EventListenerOptions_h
