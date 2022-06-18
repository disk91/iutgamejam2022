/*  GIMP header image file format (RGB): /Users/Paul 1/Downloads/Illustration_sans_titre.h  */

static unsigned int ball_width = 10;
static unsigned int ball_height = 10;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define BALL_PIXEL(data,pixel) {\
pixel[0] = (((data[0] - 33) << 2) | ((data[1] - 33) >> 4)); \
pixel[1] = ((((data[1] - 33) & 0xF) << 4) | ((data[2] - 33) >> 2)); \
pixel[2] = ((((data[2] - 33) & 0x3) << 6) | ((data[3] - 33))); \
data += 4; \
}
static char *ball_data =
  "!0]!!0]!!0]!]`(TU^03U]D0[^`K!0]!!0]!!0]!!0]!``X`WN4;PJW\\R8T=K'<0"
  "AHW2N;KZ`08\\!0]!!0]!T]40Q,7_PJDY@Z4@;W;'@8;2O)`-N:WS!0]!]_HRBIO@"
  "K:<IE<D^GJS@9W2@:GBQJ'0FS)8+[_(LV-40?I_PD-$[D<@8@HBX9G.DMKWS[>HV"
  "\\=(OW-X9V=D3F:_XIM(KAK\\+:G6G7FN=X>,=``H]X=0@U]H5[_(LI:SHJIXPL;,@"
  "BIW/BY/#W^HEV.`_K+X7[>@H!0]!N;CVE9KYQWTSE(?BM;`3Z.$WH\\<WPL48!0]!"
  "!0]!`@@]N[7VB(?4F8OFC:`6M[L(T,,,_`4]!0]!!0]!!0]!!0]!\\_4NVLT7U,(."
  "\\N\\M!0]!!0]!!0]!";
