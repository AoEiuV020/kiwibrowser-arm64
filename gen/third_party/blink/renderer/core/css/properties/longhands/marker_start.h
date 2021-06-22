// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_MARKER_START_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_MARKER_START_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/core/style/svg_computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'marker-start' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class MarkerStart final : public Longhand {
 public:
  constexpr MarkerStart() : Longhand() {}
  const char* GetPropertyName() const override { return "marker-start\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("marker-start\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("markerStart\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyMarkerStart; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInherited() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->AccessSVGStyle().SetMarkerStartResource(SVGComputedStyle::InitialMarkerStartResource());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->AccessSVGStyle().SetMarkerStartResource(state.ParentStyle()->SvgStyle().MarkerStartResource());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->AccessSVGStyle().SetMarkerStartResource(StyleBuilderConverter::ConvertElementReference(state, value));
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_MARKER_START_H_
