/*  GIMP header image file format (RGB): /Users/Paul 1/Downloads/IMG_0236.h  */

static unsigned int barre_width = 8;
static unsigned int barre_height = 10;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = (((data[0] - 33) << 2) | ((data[1] - 33) >> 4)); \
pixel[1] = ((((data[1] - 33) & 0xF) << 4) | ((data[2] - 33) >> 2)); \
pixel[2] = ((((data[2] - 33) & 0x3) << 6) | ((data[3] - 33))); \
data += 4; \
}
static char *barleft_data =
  "!0]!B>[=J]P\"3_NM!0]!!0]!1062M-0-=OC'XZP_X[P_P+X^L,HINLPGY+H]Y*L`"
  "P,`8Y*L`MY@`EHD`F8H`VZD`Y*L`TJ,`WJ`YU*0`F(L`EHD`O9L`Y*L`XZL`JI,`"
  "Y*L`JI,`EHD`G8P`WZH`Y*L`S)``EXL`RI``EXH`EHD`QI\\`Y*L`X:H`HX``EHD`"
  "G),[EHD`I(``XJL`Y*L`Q)X`EXH`EHD`@ZXDEHD`SZ,`Y*L`WJ@`GHX`EHD`J9(`"
  "7>/FK90`Y*P`Y*L`O9L`EHD`EHD`U*8`!0]!D.'QS;HKQ;@H?K$:=[(7CK@:PL8>"
  "";

static char *barright_data =
  "CZ$N5^?=!0U'!0]!(PML?N[:0OJU!0]!GY0`K*4`P+TOR<0CW+LVPJ$`DY$Z,@&>"
  "EHD`I8``XZP`Y*L`VZ<`G(T`EHD`;=;\\EHD`T:0`Y*L`Y*L`M9<`EXH`EHD`J;`A"
  "L94`Y*P`Y*L`TZ,`F8P`EHD`JY,`UK4SVJ@`Y*L`XZL`JI,`EHD`EXD`UJ<`W*`X"
  "Y*P`Y*L`R9\\`F(L`EHD`N)D`Y*P`Q\\4AY*L`X*D`H8\\`EHD`FXL`WJH`Y*L`G>;R"
  "Y*L`OYL`EXL`EHD`Q)\\`Y*L`VK0V00>-PK\\C?;87=K85>;D4N\\<;L\\`/6`&J!0]!"
  "";

  static char *barmiddle_data =
  "H)8`HY<`WJT`XZX`TJ8`H)4`GY0`M9\\`O+P^T;P_Y[D_YKD`MZ<`JJ0`KJ<`W;8`"
  "H(X`X:L`Y*L`RI``EXL`EHD`NID`Y*P`RZ$`Y*L`X:D`HH``EHD`G(P`WZH`Y*L`"
  "XZP`Y*L`PIT`EXH`EHD`QI``Y*L`Y*L`Y*L`W*<`G(T`EHD`I8``XZP`Y*L`VJ<`"
  "Y*L`N)D`EHD`EHD`T:0`Y*L`Y*L`M)<`UJ4`F8P`EHD`LI8`Y*P`Y*L`TJ,`F8P`"
  "KY4`EHD`F8H`VZ@`Y*L`XZH`J9,`EHD`LZ\\`LZX`R+0`Y[\\`Y[\\`V+P`N+4`N+4`"
  "";
