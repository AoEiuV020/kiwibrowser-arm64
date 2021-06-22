// Generated by third_party/WebKit/Source/build/scripts/gperf.py
/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf --key-positions='*' -P -n -m 50 -D  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif


// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/css/parser/at_rule_descriptors.h"

#include "third_party/blink/renderer/core/css/hash_tools.h"

#ifdef _MSC_VER
// Disable the warnings from casting a 64-bit pointer to 32-bit long
// warning C4302: 'type cast': truncation from 'char (*)[28]' to 'long'
// warning C4311: 'type cast': pointer truncation from 'char (*)[18]' to 'long'
#pragma warning(disable : 4302 4311)
#endif

namespace blink {

namespace {

/* maximum key range = 36, duplicates = 0 */

class AtRuleDescriptorHash
{
private:
  static inline unsigned int descriptor_hash_function (const char *str, size_t len);
public:
  static const struct Property *findDescriptorImpl (const char *str, size_t len);
};

inline unsigned int
AtRuleDescriptorHash::descriptor_hash_function (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36,  3, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36,  2,  0,  4,
       1,  1,  4,  0,  0,  0, 36,  0,  3,  0,
       0,  0,  0, 36,  7,  0,  0,  1,  3,  1,
       1,  2,  0, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
      36, 36, 36, 36, 36, 36
    };
  unsigned int hval = 0;

  switch (len)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[28])];
        FALLTHROUGH;
      case 28:
        hval += asso_values[static_cast<unsigned char>(str[27])];
        FALLTHROUGH;
      case 27:
        hval += asso_values[static_cast<unsigned char>(str[26])];
        FALLTHROUGH;
      case 26:
        hval += asso_values[static_cast<unsigned char>(str[25])];
        FALLTHROUGH;
      case 25:
        hval += asso_values[static_cast<unsigned char>(str[24])];
        FALLTHROUGH;
      case 24:
        hval += asso_values[static_cast<unsigned char>(str[23])];
        FALLTHROUGH;
      case 23:
        hval += asso_values[static_cast<unsigned char>(str[22])];
        FALLTHROUGH;
      case 22:
        hval += asso_values[static_cast<unsigned char>(str[21])];
        FALLTHROUGH;
      case 21:
        hval += asso_values[static_cast<unsigned char>(str[20])];
        FALLTHROUGH;
      case 20:
        hval += asso_values[static_cast<unsigned char>(str[19])];
        FALLTHROUGH;
      case 19:
        hval += asso_values[static_cast<unsigned char>(str[18])];
        FALLTHROUGH;
      case 18:
        hval += asso_values[static_cast<unsigned char>(str[17])];
        FALLTHROUGH;
      case 17:
        hval += asso_values[static_cast<unsigned char>(str[16])];
        FALLTHROUGH;
      case 16:
        hval += asso_values[static_cast<unsigned char>(str[15])];
        FALLTHROUGH;
      case 15:
        hval += asso_values[static_cast<unsigned char>(str[14])];
        FALLTHROUGH;
      case 14:
        hval += asso_values[static_cast<unsigned char>(str[13])];
        FALLTHROUGH;
      case 13:
        hval += asso_values[static_cast<unsigned char>(str[12])];
        FALLTHROUGH;
      case 12:
        hval += asso_values[static_cast<unsigned char>(str[11])];
        FALLTHROUGH;
      case 11:
        hval += asso_values[static_cast<unsigned char>(str[10])];
        FALLTHROUGH;
      case 10:
        hval += asso_values[static_cast<unsigned char>(str[9])];
        FALLTHROUGH;
      case 9:
        hval += asso_values[static_cast<unsigned char>(str[8])];
        FALLTHROUGH;
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
        FALLTHROUGH;
      case 7:
        hval += asso_values[static_cast<unsigned char>(str[6])];
        FALLTHROUGH;
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
        FALLTHROUGH;
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
        FALLTHROUGH;
      case 4:
        hval += asso_values[static_cast<unsigned char>(str[3])];
        FALLTHROUGH;
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
        FALLTHROUGH;
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1])];
        FALLTHROUGH;
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval;
}

struct stringpool_t
  {
    char stringpool_str0[sizeof("zoom")];
    char stringpool_str1[sizeof("height")];
    char stringpool_str2[sizeof("width")];
    char stringpool_str3[sizeof("min-zoom")];
    char stringpool_str4[sizeof("min-height")];
    char stringpool_str5[sizeof("min-width")];
    char stringpool_str6[sizeof("max-zoom")];
    char stringpool_str7[sizeof("max-height")];
    char stringpool_str8[sizeof("max-width")];
    char stringpool_str9[sizeof("font-weight")];
    char stringpool_str10[sizeof("orientation")];
    char stringpool_str11[sizeof("src")];
    char stringpool_str12[sizeof("user-zoom")];
    char stringpool_str13[sizeof("font-style")];
    char stringpool_str14[sizeof("font-display")];
    char stringpool_str15[sizeof("font-family")];
    char stringpool_str16[sizeof("font-stretch")];
    char stringpool_str17[sizeof("unicode-range")];
    char stringpool_str18[sizeof("font-variant")];
    char stringpool_str19[sizeof("font-feature-settings")];
    char stringpool_str20[sizeof("-webkit-font-feature-settings")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "zoom",
    "height",
    "width",
    "min-zoom",
    "min-height",
    "min-width",
    "max-zoom",
    "max-height",
    "max-width",
    "font-weight",
    "orientation",
    "src",
    "user-zoom",
    "font-style",
    "font-display",
    "font-family",
    "font-stretch",
    "unicode-range",
    "font-variant",
    "font-feature-settings",
    "-webkit-font-feature-settings"
  };
#define stringpool ((const char *) &stringpool_contents)
const struct Property *
AtRuleDescriptorHash::findDescriptorImpl (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 21,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 29,
      MIN_HASH_VALUE = 0,
      MAX_HASH_VALUE = 35
    };

  static const struct Property descriptor_word_list[] =
    {
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str0, static_cast<int>(AtRuleDescriptorID::Zoom)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str1, static_cast<int>(AtRuleDescriptorID::Height)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str2, static_cast<int>(AtRuleDescriptorID::Width)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str3, static_cast<int>(AtRuleDescriptorID::MinZoom)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str4, static_cast<int>(AtRuleDescriptorID::MinHeight)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str5, static_cast<int>(AtRuleDescriptorID::MinWidth)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str6, static_cast<int>(AtRuleDescriptorID::MaxZoom)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str7, static_cast<int>(AtRuleDescriptorID::MaxHeight)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str8, static_cast<int>(AtRuleDescriptorID::MaxWidth)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str9, static_cast<int>(AtRuleDescriptorID::FontWeight)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str10, static_cast<int>(AtRuleDescriptorID::Orientation)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str11, static_cast<int>(AtRuleDescriptorID::Src)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str12, static_cast<int>(AtRuleDescriptorID::UserZoom)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str13, static_cast<int>(AtRuleDescriptorID::FontStyle)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str14, static_cast<int>(AtRuleDescriptorID::FontDisplay)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str15, static_cast<int>(AtRuleDescriptorID::FontFamily)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str16, static_cast<int>(AtRuleDescriptorID::FontStretch)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str17, static_cast<int>(AtRuleDescriptorID::UnicodeRange)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str18, static_cast<int>(AtRuleDescriptorID::FontVariant)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str19, static_cast<int>(AtRuleDescriptorID::FontFeatureSettings)},
      {(int)(size_t)&((struct stringpool_t *)0)->stringpool_str20, static_cast<int>(AtRuleDescriptorID::FontFeatureSettings)}
    };

  static const signed char lookup[] =
    {
       0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13,
      -1, 14, -1, -1, 15, 16, 17, 18, -1, -1, -1, -1, -1, 19,
      -1, -1, -1, -1, -1, -1, -1, 20
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = descriptor_hash_function (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          int index = lookup[key];

          if (index >= 0)
            {
              const char *s = descriptor_word_list[index].name_offset + stringpool;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &descriptor_word_list[index];
            }
        }
    }
  return 0;
}


const Property* FindDescriptor(const char* str, unsigned int len) {
  return AtRuleDescriptorHash::findDescriptorImpl(str, len);
}

template <typename CharacterType>
static AtRuleDescriptorID AsAtRuleDescriptorID(
    const CharacterType* descriptor_name,
    unsigned length) {
  if (length == 0)
    return AtRuleDescriptorID::Invalid;
  if (length > 29)
    return AtRuleDescriptorID::Invalid;

  char buffer[29 + 1];  // 1 for null character

  for (unsigned i = 0; i != length; ++i) {
    CharacterType c = descriptor_name[i];
    if (c == 0 || c >= 0x7F)
      return AtRuleDescriptorID::Invalid;  // illegal character
    buffer[i] = ToASCIILower(c);
  }
  buffer[length] = '\0';

  const char* name = buffer;
  const Property* hash_table_entry = FindDescriptor(name, length);
  if (!hash_table_entry)
    return AtRuleDescriptorID::Invalid;
  return static_cast<AtRuleDescriptorID>(hash_table_entry->id);
}

}  // namespace

AtRuleDescriptorID AsAtRuleDescriptorID(StringView string) {
  unsigned length = string.length();
  return string.Is8Bit()
             ? AsAtRuleDescriptorID(string.Characters8(), length)
             : AsAtRuleDescriptorID(string.Characters16(), length);
}

CSSPropertyID AtRuleDescriptorIDAsCSSPropertyID(AtRuleDescriptorID id) {
  switch (id) {
  case AtRuleDescriptorID::FontDisplay:
    return CSSPropertyFontDisplay;
  case AtRuleDescriptorID::FontFamily:
    return CSSPropertyFontFamily;
  case AtRuleDescriptorID::FontFeatureSettings:
    return CSSPropertyFontFeatureSettings;
  case AtRuleDescriptorID::FontStretch:
    return CSSPropertyFontStretch;
  case AtRuleDescriptorID::FontStyle:
    return CSSPropertyFontStyle;
  case AtRuleDescriptorID::FontVariant:
    return CSSPropertyFontVariant;
  case AtRuleDescriptorID::FontWeight:
    return CSSPropertyFontWeight;
  case AtRuleDescriptorID::Height:
    return CSSPropertyHeight;
  case AtRuleDescriptorID::MaxHeight:
    return CSSPropertyMaxHeight;
  case AtRuleDescriptorID::MaxWidth:
    return CSSPropertyMaxWidth;
  case AtRuleDescriptorID::MaxZoom:
    return CSSPropertyMaxZoom;
  case AtRuleDescriptorID::MinHeight:
    return CSSPropertyMinHeight;
  case AtRuleDescriptorID::MinWidth:
    return CSSPropertyMinWidth;
  case AtRuleDescriptorID::MinZoom:
    return CSSPropertyMinZoom;
  case AtRuleDescriptorID::Orientation:
    return CSSPropertyOrientation;
  case AtRuleDescriptorID::Src:
    return CSSPropertySrc;
  case AtRuleDescriptorID::UnicodeRange:
    return CSSPropertyUnicodeRange;
  case AtRuleDescriptorID::UserZoom:
    return CSSPropertyUserZoom;
  case AtRuleDescriptorID::Width:
    return CSSPropertyWidth;
  case AtRuleDescriptorID::Zoom:
    return CSSPropertyZoom;
  default:
    NOTREACHED();
    return CSSPropertyInvalid;
  }
}

AtRuleDescriptorID CSSPropertyIDAsAtRuleDescriptor(CSSPropertyID id) {
  switch (id) {
  case CSSPropertyFontDisplay:
    return AtRuleDescriptorID::FontDisplay;
  case CSSPropertyFontFamily:
    return AtRuleDescriptorID::FontFamily;
  case CSSPropertyFontFeatureSettings:
    return AtRuleDescriptorID::FontFeatureSettings;
  case CSSPropertyFontStretch:
    return AtRuleDescriptorID::FontStretch;
  case CSSPropertyFontStyle:
    return AtRuleDescriptorID::FontStyle;
  case CSSPropertyFontVariant:
    return AtRuleDescriptorID::FontVariant;
  case CSSPropertyFontWeight:
    return AtRuleDescriptorID::FontWeight;
  case CSSPropertyHeight:
    return AtRuleDescriptorID::Height;
  case CSSPropertyMaxHeight:
    return AtRuleDescriptorID::MaxHeight;
  case CSSPropertyMaxWidth:
    return AtRuleDescriptorID::MaxWidth;
  case CSSPropertyMaxZoom:
    return AtRuleDescriptorID::MaxZoom;
  case CSSPropertyMinHeight:
    return AtRuleDescriptorID::MinHeight;
  case CSSPropertyMinWidth:
    return AtRuleDescriptorID::MinWidth;
  case CSSPropertyMinZoom:
    return AtRuleDescriptorID::MinZoom;
  case CSSPropertyOrientation:
    return AtRuleDescriptorID::Orientation;
  case CSSPropertySrc:
    return AtRuleDescriptorID::Src;
  case CSSPropertyUnicodeRange:
    return AtRuleDescriptorID::UnicodeRange;
  case CSSPropertyUserZoom:
    return AtRuleDescriptorID::UserZoom;
  case CSSPropertyWidth:
    return AtRuleDescriptorID::Width;
  case CSSPropertyZoom:
    return AtRuleDescriptorID::Zoom;
  default:
    NOTREACHED();
    return AtRuleDescriptorID::Invalid;
  }
}

}  // namespace blink