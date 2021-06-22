// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_color.h"

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

void BorderBottomColor::ApplyInitial(StyleResolverState& state) const {
  StyleColor color = StyleColor::CurrentColor();
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->SetBorderBottomColor(color);
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->SetVisitedLinkBorderBottomColor(color);
}

void BorderBottomColor::ApplyInherit(StyleResolverState& state) const {
  // Visited link style can never explicitly inherit from parent visited link
  // style so no separate getters are needed.
  StyleColor color = state.ParentStyle()->BorderBottomColor();
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->SetBorderBottomColor(color);
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->SetVisitedLinkBorderBottomColor(color);
}

void BorderBottomColor::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->SetBorderBottomColor(StyleBuilderConverter::ConvertStyleColor(state, value));
  if (state.ApplyPropertyToVisitedLinkStyle()) {
    state.Style()->SetVisitedLinkBorderBottomColor(
        StyleBuilderConverter::ConvertStyleColor(state, value, true));
  }
}

}  // namespace CSSLonghand
}  // namespace blink
