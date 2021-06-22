// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CanvasRenderingContext2DSettings_h
#define CanvasRenderingContext2DSettings_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CanvasRenderingContext2DSettings : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CanvasRenderingContext2DSettings();
  virtual ~CanvasRenderingContext2DSettings();
  CanvasRenderingContext2DSettings(const CanvasRenderingContext2DSettings&);
  CanvasRenderingContext2DSettings& operator=(const CanvasRenderingContext2DSettings&);

  bool hasAlpha() const { return has_alpha_; }
  bool alpha() const {
    DCHECK(has_alpha_);
    return alpha_;
  }
  inline void setAlpha(bool);

  bool hasColorSpace() const { return !color_space_.IsNull(); }
  const String& colorSpace() const {
    return color_space_;
  }
  inline void setColorSpace(const String&);

  bool hasPixelFormat() const { return !pixel_format_.IsNull(); }
  const String& pixelFormat() const {
    return pixel_format_;
  }
  inline void setPixelFormat(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alpha_ = false;

  bool alpha_;
  String color_space_;
  String pixel_format_;

  friend class V8CanvasRenderingContext2DSettings;
};

void CanvasRenderingContext2DSettings::setAlpha(bool value) {
  alpha_ = value;
  has_alpha_ = true;
}

void CanvasRenderingContext2DSettings::setColorSpace(const String& value) {
  color_space_ = value;
}

void CanvasRenderingContext2DSettings::setPixelFormat(const String& value) {
  pixel_format_ = value;
}

}  // namespace blink

#endif  // CanvasRenderingContext2DSettings_h
