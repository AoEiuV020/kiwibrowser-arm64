// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef XRInputSourceEventInit_h
#define XRInputSourceEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class XRInputSource;
class XRPresentationFrame;

class MODULES_EXPORT XRInputSourceEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  XRInputSourceEventInit();
  virtual ~XRInputSourceEventInit();
  XRInputSourceEventInit(const XRInputSourceEventInit&);
  XRInputSourceEventInit& operator=(const XRInputSourceEventInit&);

  bool hasFrame() const { return frame_; }
  XRPresentationFrame* frame() const {
    return frame_;
  }
  inline void setFrame(XRPresentationFrame*);

  bool hasInputSource() const { return input_source_; }
  XRInputSource* inputSource() const {
    return input_source_;
  }
  inline void setInputSource(XRInputSource*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<XRPresentationFrame> frame_;
  Member<XRInputSource> input_source_;

  friend class V8XRInputSourceEventInit;
};

void XRInputSourceEventInit::setFrame(XRPresentationFrame* value) {
  frame_ = value;
}

void XRInputSourceEventInit::setInputSource(XRInputSource* value) {
  input_source_ = value;
}

}  // namespace blink

#endif  // XRInputSourceEventInit_h
