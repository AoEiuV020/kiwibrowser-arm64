// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef IconDefinition_h
#define IconDefinition_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT IconDefinition : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  IconDefinition();
  virtual ~IconDefinition();
  IconDefinition(const IconDefinition&);
  IconDefinition& operator=(const IconDefinition&);

  bool hasSizes() const { return !sizes_.IsNull(); }
  const String& sizes() const {
    return sizes_;
  }
  inline void setSizes(const String&);

  bool hasSrc() const { return !src_.IsNull(); }
  const String& src() const {
    return src_;
  }
  inline void setSrc(const String&);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String sizes_;
  String src_;
  String type_;

  friend class V8IconDefinition;
};

void IconDefinition::setSizes(const String& value) {
  sizes_ = value;
}

void IconDefinition::setSrc(const String& value) {
  src_ = value;
}

void IconDefinition::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // IconDefinition_h
