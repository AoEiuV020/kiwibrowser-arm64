// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_SHORTHAND_MARKER_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_SHORTHAND_MARKER_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/shorthand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSShorthand {

// Implements the 'marker' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class Marker final : public Shorthand {
 public:
  constexpr Marker() : Shorthand() {}
  const char* GetPropertyName() const override { return "marker\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("marker\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("marker\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyMarker; }
  bool ParseShorthand(bool, CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&, HeapVector<CSSPropertyValue, 256>&) const override;
};

}  // namespace CSSShorthand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_SHORTHAND_MARKER_H_
