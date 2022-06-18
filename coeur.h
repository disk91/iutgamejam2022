static unsigned int width = 11;
static unsigned int height = 11;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = (((data[0] - 33) << 2) | ((data[1] - 33) >> 4)); \
pixel[1] = ((((data[1] - 33) & 0xF) << 4) | ((data[2] - 33) >> 2)); \
pixel[2] = ((((data[2] - 33) & 0x3) << 6) | ((data[3] - 33))); \
data += 4; \
}

static char *header_data =
  "!0]!!0]!!0]!!0]!!0]!!0]!!0]!!0]!!0]!!0]!!0]!!0]!!0]!DBM*E\"A*!0]!"
  "!0]!!0]!E\"A*DBM*!0]!!0]!!@U!DBM*E\"=*E\"A*E\"A*!0]!E\"=*E\"A*E\"A*DBM*"
  "!0]!DBM*E\"A*DBM*E\"A*DBM*E\"A*DBM*E\"A*DBM*E\"A*DBM*E\"=*E\"A*E\"A*E\"A*"
  "E\"=*E\"A*E\"A*E\"A*E\"=*E\"A*E\"A*DBM*E\"A*DBM*E\"A*DBM*E\"A*DBM*E\"A*DBM*"
  "E\"A*D2Q*!0]!DBM*E\"=*E\"A*E\"A*DBM*E\"=*E\"A*E\"A*DBM*!0]!!0]!!0]!DBM*"
  "E\"A*DBM*E\"A*DBM*DBM*DBM*!0]!!0]!!0]!!0]!!0]!E\"A*E\"=*DBM*E\"A*E\"A*"
  "!0]!!0]!!0]!!0]!!0]!!0]!!0]!DBM*E\"A*DBM*!0]!!0]!!0]!!0]!!0]!!0]!"
  "!0]!!0]!!0]!DBM*!0]!!0]!!0]!!0]!!0]!";
