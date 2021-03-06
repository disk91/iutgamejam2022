/*  GIMP header image file format (RGB): /Users/Paul 1/Downloads/brique1.h  */

static unsigned int brique_width = 32;
static unsigned int brique_height = 10;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = (((data[0] - 33) << 2) | ((data[1] - 33) >> 4)); \
pixel[1] = ((((data[1] - 33) & 0xF) << 4) | ((data[2] - 33) >> 2)); \
pixel[2] = ((((data[2] - 33) & 0x3) << 6) | ((data[3] - 33))); \
data += 4; \
}
static char *brique1_data =
  "?M$Z@,`Z?M$Z@,`Z?M$Z\\HLZ?M$Z\\HLZ?M$Z@,`Z?M$Z@,`Z?M$Z@,`Z\\HLZ@,`Z"
  "\\HLZ@,`Z?M$Z@,`Z?M$Z@,`Z?M$Z@,`Z\\HLZ@,`Z\\HLZ@,`Z?M$Z@,`Z?M$Z%P=A"
  "\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ"
  "\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\8PZ\\HLZ\\8PZ\\8PZ\\HLZ\\8PZ%P=A"
  "?M$Z@,`Z?M$Z@,`Z?M$Z\\HLZ?M$Z\\HLZ?M$Z@,`Z?M$Z@,`Z?M$Z@,`Z\\HLZ@,`Z"
  "\\HLZ@,`Z?M$Z@,`Z?M$Z@,`Z?M$Z@,`Z\\HLZ@<\\Z\\HLZ@<\\Z@<\\Z@,`Z?M$Z%P=A"
  "@,`Z@,`Z@,`Z@,`Z@,`Z\\HLZ@,`Z\\HLZ@,`Z@,`Z@,`Z@,`Z@,`Z@,`Z\\HLZ@,`Z"
  "\\HLZ@,`Z@,`Z@,`Z@,`Z@,`Z@,`Z@,`Z\\HLZ@,`Z\\HLZ@,`Z@,`Z@,`Z@,`Z&01B"
  "\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ"
  "\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ%P=A"
  "@,`Z@,`Z@,`Z@,`Z@,`Z\\HLZ@,`Z\\HLZ@,`Z@,`Z@,`Z@,`Z@,`ZC<@Z\\HLZ@,`Z"
  "\\HLZ@,`Z@,`Z@,`Z@,`Z@,`Z@,`Z@,`Z\\HLZ@,`Z\\HLZ@,`Z@,`Z@,`Z@,`Z%P=A"
  "?M$Z@,`Z?M$Z@,`Z?M$Z\\HLZ?M$Z\\HLZ?M$Z@,`Z?M$Z@,`Z?M$ZC<@Z\\HLZ@,`Z"
  "\\HLZ@,`Z?M$Z@,`Z?M$Z@,`Z?M$Z@,`Z\\HLZ@,`Z\\HLZ@,`Z?M$Z@,`Z?M$Z%P=A"
  "\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ"
  "\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ\\HLZ%P=A"
  "?M$Z@,`Z?M$Z@,`Z?M$Z\\HLZ?M$ZT9\\Z?M$Z@,`Z?M$Z@,`Z?M$ZC<@Z\\HLZ@,`Z"
  "\\HLZ@,`Z?M$Z@,`Z?M$Z@,`Z?M$Z@,`Z\\HLZ@,`Z\\HLZ@,`Z?M$Z@,`Z?M$Z%P=A"
  "'P!H%P=A'P!H%P=A%P=A%P=A'P!H%P=A%P=A%P=A'P!H%P=A%P=A%P=A'P!H%P=A"
  "%P=A%P=A'P!H%P=A%P=A%P=A'P!H%P=A%P=A%P=A'P!H%P=A%P=A%P=A'P!H%P=A"
  "";

static char *brique2_data =
  "U8TZU8TZTXXYU8TZUHLZEHLZU8TZU8TZTH\\VU8TZUHLZF8LZU8TZU8TZTH\\WU8TZ"
  "UHLZEHLZS9(QU8TZU8TZU8TZUHLZF8LZU8TZU8TZU8TZU8TZUHLZEHLZUHLZ!PU$"
  "U8TZSXXZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZ"
  "U8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZ!PU$"
  "U8TZG8PZCXLZEHLZUHLZU8TZUHLZF8LZD8LZG8PZUHLZU8TZUHLZG8PZCXLZF8LZ"
  "UHLZU8TZUHLZEHLZD8LZG8PZUHLZU8TZU(PZG8PZCXLZEHLZUHLZU8TZU(PY!PU$"
  "U8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZ"
  "U8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZ!PU$"
  "UHLZU8TZUHLZU8TZSXXZEHLZUHLZU8TZUHLZU8TZUHLZF8LZUHLZU8TZU(PZU8TZ"
  "UHLZEHLZUHLZU8TZUHLZU8TZUHLZF8LZUHLZU8TZUHLZU8TZUHLZEHLZUHLZ!PU$"
  "G8PZU8TZU8TZU8TZG8PZDHLZG8PZU8TZU8TZU8TZG8PZDXLZG8PZU8TZU8TZU8TZ"
  "G8PZDHLZG8PZU8TZU8TZU8TZG8PZDXLZG8PZU8TZU8TZU8TZG8PZDHLZG8PZ!PU$"
  "U8TZU8TZUHLZTXXYUHLZG8PZUHLZU8TZTHTZU8TZUHLZEHLZU8TZU8TZUHLZU8TZ"
  "UHLZG8PZUHLZU8TZUHLZU8TZUHLZEHLZUHLZU8TZUHLZU8TZUHLZG8PZUHLZ!PU$"
  "U8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZ"
  "U8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZU8TZG8PZU8TZU8TZU8TZU8TZ!PU$"
  "U8TZEHLZD(LZF8LZUHLZU8TZSXXZF8LZCXLZEHLZUHLZU8TZPX\\ZEHLZD(LZG8PZ"
  "UHLZU8TZUHLZF8LZCXLZEHLZS(\\ZU8TZTHTWG8PZD(LZG8PZU(TYU8TZUHLZ!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "";

  static char * brique3_data =
  "?]$Z?]$Z?]$ZC9(ZCXLZCHXZ?]$Z?]$Z?=(VCHXZCXPZC9(Z?]$Z?]$Z?=(WC9(Z"
  "CXLZCHXZ>],Q?]$Z?]$ZCHXZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCXLZCHXZ?]$Z!PU$"
  "?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZ"
  "C9(Z?]$Z?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z!PU$"
  "?]$ZC9(ZCXLZC9(Z?]$Z?]$Z?M$ZC9(ZCXPZC9(Z?M$Z?]$Z?]$ZC9(ZCXLZC9(Z"
  "?]$Z?]$Z?M$ZC9(ZCXPZC9(Z?M$Z?]$Z?]$ZC9(ZCXLZC9(Z?]$Z?]$Z?L`Y!PU$"
  "C9(ZCHXZC9(Z?]$Z?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z"
  "?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z?]$ZC9(Z!PU$"
  "CXLZCHXZ?]$Z?]$Z?\\TZCHXZCXPZC9(Z?M$Z?]$Z?]$ZC9(ZCXLZCHXZ?]$Z?]$Z"
  "?M$ZCHXZCXPZC9(Z?M$Z?]$Z?]$ZC9(ZCXLZCHXZ?]$Z?]$Z?M$ZCHXZCXPZ!PU$"
  "C9(Z?]$Z?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z?]$Z"
  "C9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z!PU$"
  "?]$Z?]$Z?M$ZC9(ZCXPZC9(Z?M$Z?]$Z?]$ZC9(ZCXLZC9(Z?]$Z?]$Z?M$ZC9(Z"
  "CXPZC9(Z?M$Z?]$Z?]$ZC9(ZCXLZC9(Z?]$Z?]$Z?M$ZC9(ZCXPZC9(Z?M$Z!PU$"
  "?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z?]$ZC9(ZCXPZ"
  "C9(Z?]$Z?]$Z?]$ZC9(ZCHXZC9(Z?]$Z?]$Z?]$ZC9(ZCXPZC9(Z?]$Z?]$Z!PU$"
  "?]$ZCHXZCXPZC9(Z?M$Z?]$Z?\\XZC9(ZCXLZCHXZ?]$Z?]$Z?\\PZCHXZCXPZC9(Z"
  "?M$Z?]$Z?]$ZC9(ZCXLZCHXZ?\\TZ?]$Z?=$WCHXZCXPZC9(Z?M$Y?]$Z?]$Z!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "";

  static char *brique4_data =
  "CXLZ\\HLZD(PZ\\HLZD(@Z\\HLZD(PZ\\HLZC8TV\\HLZD(@Z\\HLZCXLZ\\HLZC8XW\\HLZ"
  "D(@Z\\HLZBH`Q\\HLZCXLZ\\HLZD(@Z\\HLZDXLZ\\HLZD(PZ\\HLZD(@Z\\HLZCHPZ!PU$"
  "E(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZ"
  "E(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ!PU$"
  "D8PZ\\HLZD(@Z\\HLZD(PZ\\HLZCHPZ\\HLZDXLZ\\HLZCHPZ\\HLZD(PZ\\HLZD(@Z\\HLZ"
  "D(PZ\\HLZCHPZ\\HLZDXLZ\\HLZCHPZ\\HLZD8PZ\\HLZD(@Z\\HLZD(PZ\\HLZCHLY!PU$"
  "E(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZGH@Z\\HLZE(PZ\\HLZGH@Z\\HLZE(PZ\\HLZ"
  "E(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZJ(LZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ!PU$"
  "D(@Z\\HLZCHPZ\\HLZCHLZ\\HLZD(@Z\\HLZCHPZ\\HLZCHPZ\\HLZG8@Z\\HLZCHPZ\\HLZ"
  "CHPZ\\HLZD(@Z\\HLZCHPZ\\HLZCHPZ\\HLZEH@Z\\HLZCHPZ\\HLZCHPZ\\HLZD(@Z!PU$"
  "E(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZJ(LZ\\HLZE(PZ\\HLZ"
  "E(PZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ\\HLZJ(LZ\\HLZE(PZ\\HLZE(PZ\\HLZE(PZ!PU$"
  "D8PZ\\HLZCHPZ\\HLZDXLZ\\HLZCHPZ\\HLZD(PZ\\HLZD(@Z\\HLZK8PZ\\HLZCHPZ\\HLZ"
  "DXLZ\\HLZCHPZ\\HLZD(PZ\\HLZD(@Z\\HLZE(PZ\\HLZCHPZ\\HLZDXLZ\\HLZCHPZ!PU$"
  "E(PZ\\HLZE(PZ\\HLZGH@Z\\HLZE(PZ\\HLZGH@Z\\HLZE(PZ\\HLZK8PZ\\HLZE(PZ\\HLZ"
  "E(PZ\\HLZE(PZ\\HLZGH@Z\\HLZE(PZ\\HLZJ(LZ\\HLZE(PZ\\HLZJ(LZ\\HLZE(PZ!PU$"
  "CXLZ\\HLZD(@Z\\HLZCHPZ\\HLZCHPZ\\HLZD(@Z\\HLZCHPZ\\HLZJ(LZ\\HLZD(@Z\\HLZ"
  "CHPZ\\HLZCHPZ\\HLZD(@Z\\HLZCHPZ\\HLZC8TW\\HLZD(@Z\\HLZCHPY\\HLZCHPZ!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "";

  static char *brique5_data =
  "D(PZ?M$ZD(TY?M$ZD(@Z?M$ZD(PZ?M$ZC8XV?M$ZD(DZ?M$ZD(PZ?M$ZC8XW?M$Z"
  "D(@Z?M$ZBY$Q?\\`ZD(PZ?M$ZD(DZ?M$ZD(PZ?M$ZD(PZ?M$ZD(@Z?M$ZD(PZ!PU$"
  "?M$ZCI0Z?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZCH`Z?M$ZD(PZ?M$ZC94Z"
  "?\\`ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZCH`Z?M$ZCH`Z@,LZD(PZ?M$ZD(PZ?M$Z!PU$"
  "D(PZ?M$ZD(@Z?M$ZD(PZ?M$ZCXLZ?M$ZD(DZ?M$ZCXLZ?M$ZD(PZ?M$ZD(@Z?M$Z"
  "D(PZ@L,ZCH\\ZA+HZD(DZ?M$ZCXLZ?M$ZD(PZ@,LZCXPZ?M$ZD(PZ?M$ZCXLY!PU$"
  "?M$ZD(PZ?M$ZC94Z?M$ZCH`Z?\\`ZD(PZ?M$ZCH`Z?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ"
  "?M$ZCI0Z@<8ZD(PZ?\\`ZCH`Z?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZCH`Z?M$Z!PU$"
  "D(@Z?M$ZD(PZ?M$ZCXLZ?M$ZD(DZ?M$ZCXLZ?M$ZC94Z?M$ZD(@Z?M$ZD(PZ?M$Z"
  "CXLZ?M$ZD(DZ?\\`ZCXLZ?M$ZD(PZ?M$ZD(@Z?M$ZD(PZ?M$ZCH`Z?M$ZD(DZ!PU$"
  "?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?\\`ZC94Z?M$ZD(PZ"
  "?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZD(PZ?M$ZCXTZ?\\`ZD(PZ?M$ZD(PZ?M$Z!PU$"
  "CI0Z?M$ZCXLZ@<8ZD(DZ?M$ZD(@Z?M$ZD(DZ?M$ZD(@Z?M$ZD(PZ?\\`ZCXLZ?M$Z"
  "CI0Z?M$ZCXLZ?M$ZD(PZ?M$ZD(@Z?M$ZC94Z?M$ZCXLZ?\\`ZD(DZ?M$ZCXLZ!PU$"
  "?M$ZCI0Z?M$ZD(PZ?M$ZCH`Z?M$ZD(PZ?M$ZCI0Z?M$ZD(PZ?\\`ZCH`Z?M$ZCI0Z"
  "?M$ZCH`Z@,LZD(PZ?M$ZD(PZ?M$ZD(PZ?\\`ZCH`Z?M$ZD(PZ?\\`ZCI0Z?M$Z!PU$"
  "D(PZ?M$ZD(DZ?M$ZCXLZ?M$ZD(PZ?M$ZD(@Z?M$ZD(PZ@,LZCXLZ?M$ZD(DZ?M$Z"
  "CXLZ?\\`ZD(PZ?M$ZD(@Z?M$ZD(PZ?M$ZCHTW?M$ZD(DZ?M$ZCXPY?M$ZD(PZ!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$!PU$"
  "";
