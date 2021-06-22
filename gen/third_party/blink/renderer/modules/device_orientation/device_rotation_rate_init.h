// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DeviceRotationRateInit_h
#define DeviceRotationRateInit_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DeviceRotationRateInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DeviceRotationRateInit();
  virtual ~DeviceRotationRateInit();
  DeviceRotationRateInit(const DeviceRotationRateInit&);
  DeviceRotationRateInit& operator=(const DeviceRotationRateInit&);

  bool hasAlpha() const { return has_alpha_; }
  double alpha() const {
    DCHECK(has_alpha_);
    return alpha_;
  }
  inline void setAlpha(double);
  inline void setAlphaToNull();

  bool hasBeta() const { return has_beta_; }
  double beta() const {
    DCHECK(has_beta_);
    return beta_;
  }
  inline void setBeta(double);
  inline void setBetaToNull();

  bool hasGamma() const { return has_gamma_; }
  double gamma() const {
    DCHECK(has_gamma_);
    return gamma_;
  }
  inline void setGamma(double);
  inline void setGammaToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alpha_ = false;
  bool has_beta_ = false;
  bool has_gamma_ = false;

  double alpha_;
  double beta_;
  double gamma_;

  friend class V8DeviceRotationRateInit;
};

void DeviceRotationRateInit::setAlpha(double value) {
  alpha_ = value;
  has_alpha_ = true;
}
void DeviceRotationRateInit::setAlphaToNull() {
  has_alpha_ = false;
}

void DeviceRotationRateInit::setBeta(double value) {
  beta_ = value;
  has_beta_ = true;
}
void DeviceRotationRateInit::setBetaToNull() {
  has_beta_ = false;
}

void DeviceRotationRateInit::setGamma(double value) {
  gamma_ = value;
  has_gamma_ = true;
}
void DeviceRotationRateInit::setGammaToNull() {
  has_gamma_ = false;
}

}  // namespace blink

#endif  // DeviceRotationRateInit_h
