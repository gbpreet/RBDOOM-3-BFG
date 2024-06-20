/* Default font for SDL (narrow build) -- this is simply a 256x128x1
   BMP, in #include'able form. The font is 8x16, code page 437, and is
   based on the pc8x16s.bdf font from the vgafonts.tar.gz package, by
   "Myrlin". */

unsigned char font437[] =
{
	0x42, 0x4d, 0x3e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e,
	0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x12, 0x0b, 0x00, 0x00, 0x12, 0x0b,
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x60,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x76, 0xf8, 0xc0, 0x6c, 0xfe, 0x70, 0x7c, 0x18,
	0x7e, 0x38, 0xee, 0x3c, 0x00, 0xc0, 0x1c, 0xc6, 0x00, 0x7e, 0x7e,
	0x7e, 0x18, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
	0x00, 0x00, 0xdc, 0xcc, 0xc0, 0x6c, 0xc6, 0xd8, 0x66, 0x18, 0x18,
	0x6c, 0x6c, 0x66, 0x00, 0x60, 0x30, 0xc6, 0xfe, 0x00, 0x00, 0x00,
	0x18, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x7e,
	0x00, 0xd8, 0xcc, 0xc0, 0x6c, 0x60, 0xd8, 0x66, 0x18, 0x3c, 0xc6,
	0x6c, 0x66, 0x7e, 0x7e, 0x60, 0xc6, 0x00, 0x00, 0x30, 0x0c, 0x18,
	0xd8, 0x18, 0xdc, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x7e, 0x00,
	0xd8, 0xcc, 0xc0, 0x6c, 0x30, 0xd8, 0x66, 0x18, 0x66, 0xc6, 0x6c,
	0x66, 0xdb, 0xf3, 0x60, 0xc6, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x00, 0x76, 0x00, 0x18, 0x00, 0x6c, 0x00, 0x00, 0x7e, 0x00, 0xd8,
	0xc8, 0xc0, 0x6c, 0x18, 0xd8, 0x66, 0x18, 0x66, 0xc6, 0x6c, 0x66,
	0xdb, 0xdb, 0x60, 0xc6, 0xfe, 0x18, 0x0c, 0x30, 0x18, 0x18, 0x7e,
	0x00, 0x00, 0x18, 0x18, 0xec, 0x00, 0x00, 0x7e, 0x00, 0xdc, 0xdc,
	0xc0, 0x6c, 0x18, 0xd8, 0x66, 0x18, 0x66, 0xfe, 0xc6, 0x3e, 0xdb,
	0xdb, 0x7c, 0xc6, 0x00, 0x7e, 0x06, 0x60, 0x18, 0x18, 0x00, 0xdc,
	0x00, 0x00, 0x00, 0x0c, 0x36, 0x7e, 0x7e, 0x00, 0x76, 0xce, 0xc0,
	0xfe, 0x30, 0x7e, 0x66, 0xdc, 0x66, 0xc6, 0xc6, 0x0c, 0x7e, 0x7e,
	0x60, 0xc6, 0x00, 0x18, 0x0c, 0x30, 0x18, 0x18, 0x18, 0x76, 0x00,
	0x00, 0x00, 0x0c, 0x36, 0x32, 0x7e, 0x00, 0x00, 0xc6, 0xc6, 0x00,
	0x60, 0x00, 0x00, 0x76, 0x3c, 0xc6, 0xc6, 0x18, 0x00, 0x06, 0x60,
	0xc6, 0xfe, 0x18, 0x18, 0x18, 0x1b, 0x18, 0x00, 0x00, 0x38, 0x00,
	0x00, 0x0c, 0x36, 0x18, 0x7e, 0x00, 0x00, 0xce, 0xc6, 0x00, 0xc6,
	0x00, 0x00, 0x00, 0x18, 0x6c, 0x6c, 0x30, 0x00, 0x03, 0x30, 0x7c,
	0x00, 0x00, 0x30, 0x0c, 0x1b, 0x18, 0x00, 0x00, 0x6c, 0x00, 0x00,
	0x0c, 0x36, 0x0c, 0x00, 0x00, 0x00, 0x7c, 0xfe, 0x00, 0xfe, 0x00,
	0x00, 0x00, 0x7e, 0x38, 0x38, 0x1e, 0x00, 0x00, 0x1c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0e, 0x18, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x0c,
	0x36, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0f, 0x6c,
	0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x36, 0x00,
	0x36, 0x00, 0x36, 0x36, 0x00, 0x36, 0x00, 0x00, 0x18, 0x36, 0x00,
	0x00, 0x18, 0x36, 0x36, 0x18, 0x00, 0x18, 0xff, 0xff, 0xf0, 0x0f,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x36, 0x00, 0x36,
	0x00, 0x36, 0x36, 0x00, 0x36, 0x00, 0x00, 0x18, 0x36, 0x00, 0x00,
	0x18, 0x36, 0x36, 0x18, 0x00, 0x18, 0xff, 0xff, 0xf0, 0x0f, 0x00,
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x36, 0x00, 0x36, 0x00,
	0x36, 0x36, 0x00, 0x36, 0x00, 0x00, 0x18, 0x36, 0x00, 0x00, 0x18,
	0x36, 0x36, 0x18, 0x00, 0x18, 0xff, 0xff, 0xf0, 0x0f, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x36, 0x00, 0x36, 0x00, 0x36,
	0x36, 0x00, 0x36, 0x00, 0x00, 0x18, 0x36, 0x00, 0x00, 0x18, 0x36,
	0x36, 0x18, 0x00, 0x18, 0xff, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x00, 0x18, 0x18, 0x36, 0x00, 0x36, 0x00, 0x36, 0x36,
	0x00, 0x36, 0x00, 0x00, 0x18, 0x36, 0x00, 0x00, 0x18, 0x36, 0x36,
	0x18, 0x00, 0x18, 0xff, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x18, 0x18, 0x36, 0x00, 0x36, 0x00, 0x36, 0x36, 0x00,
	0x36, 0x00, 0x00, 0x18, 0x36, 0x00, 0x00, 0x18, 0x36, 0x36, 0x18,
	0x00, 0x18, 0xff, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x18, 0x18,
	0x00, 0x18, 0x18, 0x36, 0x00, 0x36, 0x00, 0x36, 0x36, 0x00, 0x36,
	0x00, 0x00, 0x18, 0x36, 0x00, 0x00, 0x18, 0x36, 0x36, 0x18, 0x00,
	0x18, 0xff, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x18, 0x18, 0x36, 0x00, 0x36, 0x00, 0x36, 0x36, 0x00, 0x36, 0x00,
	0x00, 0x18, 0x36, 0x00, 0x00, 0x18, 0x36, 0x36, 0x18, 0x00, 0x18,
	0xff, 0xff, 0xf0, 0x0f, 0x00, 0x1f, 0xff, 0xff, 0x1f, 0xff, 0xff,
	0x1f, 0x37, 0x3f, 0x37, 0xff, 0xf7, 0x37, 0xff, 0xf7, 0xff, 0xff,
	0xff, 0xff, 0x3f, 0x1f, 0x1f, 0x3f, 0xff, 0xff, 0xf8, 0x1f, 0xff,
	0xff, 0xf0, 0x0f, 0x00, 0x18, 0x18, 0x00, 0x18, 0x00, 0x18, 0x18,
	0x36, 0x30, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x36, 0x00,
	0x00, 0x36, 0x18, 0x18, 0x00, 0x36, 0x18, 0x18, 0x00, 0xff, 0x00,
	0xf0, 0x0f, 0xff, 0x18, 0x18, 0x00, 0x18, 0x00, 0x18, 0x1f, 0x36,
	0x37, 0x3f, 0xf7, 0xff, 0x37, 0xff, 0xf7, 0xff, 0x36, 0xff, 0x00,
	0x36, 0x1f, 0x1f, 0x00, 0x36, 0xff, 0x18, 0x00, 0xff, 0x00, 0xf0,
	0x0f, 0xff, 0x18, 0x18, 0x00, 0x18, 0x00, 0x18, 0x18, 0x36, 0x36,
	0x00, 0x36, 0x00, 0x36, 0x00, 0x36, 0x18, 0x36, 0x00, 0x00, 0x36,
	0x18, 0x00, 0x00, 0x36, 0x18, 0x18, 0x00, 0xff, 0x00, 0xf0, 0x0f,
	0xff, 0x18, 0x18, 0x00, 0x18, 0x00, 0x18, 0x18, 0x36, 0x36, 0x00,
	0x36, 0x00, 0x36, 0x00, 0x36, 0x18, 0x36, 0x00, 0x00, 0x36, 0x18,
	0x00, 0x00, 0x36, 0x18, 0x18, 0x00, 0xff, 0x00, 0xf0, 0x0f, 0xff,
	0x18, 0x18, 0x00, 0x18, 0x00, 0x18, 0x18, 0x36, 0x36, 0x00, 0x36,
	0x00, 0x36, 0x00, 0x36, 0x18, 0x36, 0x00, 0x00, 0x36, 0x18, 0x00,
	0x00, 0x36, 0x18, 0x18, 0x00, 0xff, 0x00, 0xf0, 0x0f, 0xff, 0x18,
	0x18, 0x00, 0x18, 0x00, 0x18, 0x18, 0x36, 0x36, 0x00, 0x36, 0x00,
	0x36, 0x00, 0x36, 0x18, 0x36, 0x00, 0x00, 0x36, 0x18, 0x00, 0x00,
	0x36, 0x18, 0x18, 0x00, 0xff, 0x00, 0xf0, 0x0f, 0xff, 0x18, 0x18,
	0x00, 0x18, 0x00, 0x18, 0x18, 0x36, 0x36, 0x00, 0x36, 0x00, 0x36,
	0x00, 0x36, 0x18, 0x36, 0x00, 0x00, 0x36, 0x18, 0x00, 0x00, 0x36,
	0x18, 0x18, 0x00, 0xff, 0x00, 0xf0, 0x0f, 0xff, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x44, 0xaa, 0x77, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18,
	0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x11, 0x55, 0xdd, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36,
	0x36, 0x36, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x06, 0x00, 0x00, 0x00,
	0x44, 0xaa, 0x77, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36,
	0x36, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 0x00, 0x11,
	0x55, 0xdd, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36,
	0x00, 0x00, 0x00, 0x18, 0x76, 0x18, 0x7c, 0x78, 0x66, 0xc6, 0x00,
	0x00, 0x7c, 0x00, 0x00, 0x0c, 0x3f, 0x18, 0x00, 0x00, 0x44, 0xaa,
	0x77, 0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00,
	0x00, 0x00, 0x18, 0xcc, 0x18, 0xc6, 0xcc, 0x66, 0xc6, 0x00, 0x00,
	0xc6, 0xc0, 0x06, 0x86, 0x9a, 0x3c, 0x00, 0x00, 0x11, 0x55, 0xdd,
	0x18, 0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00, 0x00,
	0x00, 0x18, 0xcc, 0x18, 0xc6, 0xcc, 0x66, 0xc6, 0x00, 0x00, 0xc6,
	0xc0, 0x06, 0xdc, 0xce, 0x3c, 0x36, 0xd8, 0x44, 0xaa, 0x77, 0x18,
	0x18, 0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00, 0x00, 0x00,
	0x18, 0xcc, 0x18, 0xc6, 0xcc, 0x66, 0xce, 0x00, 0x00, 0xc0, 0xc0,
	0x06, 0x60, 0x66, 0x3c, 0x6c, 0x6c, 0x11, 0x55, 0xdd, 0x18, 0x18,
	0x18, 0x36, 0x36, 0x18, 0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x18,
	0x7c, 0x18, 0xc6, 0xcc, 0x66, 0xde, 0x7e, 0x7c, 0x60, 0xc0, 0x06,
	0x30, 0x30, 0x18, 0xd8, 0x36, 0x44, 0xaa, 0x77, 0x18, 0xf8, 0xf8,
	0xf6, 0xfe, 0xf8, 0xf6, 0x36, 0xf6, 0xfe, 0xfe, 0xf8, 0xf8, 0x0c,
	0x18, 0xc6, 0xcc, 0x66, 0xfe, 0x00, 0x00, 0x30, 0xfe, 0xfe, 0x18,
	0x18, 0x18, 0x6c, 0x6c, 0x11, 0x55, 0xdd, 0x18, 0x18, 0x18, 0x36,
	0x00, 0x18, 0x06, 0x36, 0x06, 0x06, 0x36, 0x18, 0x00, 0x78, 0x38,
	0x7c, 0xcc, 0x5c, 0xf6, 0x3e, 0x38, 0x30, 0x00, 0x00, 0x6c, 0x6c,
	0x18, 0x36, 0xd8, 0x44, 0xaa, 0x77, 0x18, 0x18, 0xf8, 0x36, 0x00,
	0xf8, 0xf6, 0x36, 0xfe, 0xf6, 0x36, 0xf8, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xe6, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x66, 0x66, 0x00,
	0x00, 0x00, 0x11, 0x55, 0xdd, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00,
	0x36, 0x36, 0x00, 0x36, 0x36, 0x18, 0x00, 0x60, 0x30, 0x60, 0x60,
	0xdc, 0xc6, 0x6c, 0x6c, 0x30, 0x00, 0x00, 0x62, 0x62, 0x18, 0x00,
	0x00, 0x44, 0xaa, 0x77, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00, 0x36,
	0x36, 0x00, 0x36, 0x36, 0x18, 0x00, 0x30, 0x18, 0x30, 0x30, 0x76,
	0x00, 0x3c, 0x38, 0x30, 0x00, 0x00, 0xe0, 0xe0, 0x18, 0x00, 0x00,
	0x11, 0x55, 0xdd, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00, 0x36, 0x36,
	0x00, 0x36, 0x36, 0x18, 0x00, 0x18, 0x0c, 0x18, 0x18, 0x00, 0xdc,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x44,
	0xaa, 0x77, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00, 0x36, 0x36, 0x00,
	0x36, 0x36, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x55,
	0xdd, 0x18, 0x18, 0x18, 0x36, 0x00, 0x00, 0x36, 0x36, 0x00, 0x36,
	0x36, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x78, 0x7c, 0x76, 0x76, 0x76, 0x76, 0x7c, 0x7c, 0x7c, 0x7c, 0x18,
	0x18, 0x18, 0xc6, 0xc6, 0xfc, 0x6e, 0xce, 0x7c, 0x7c, 0x7c, 0x78,
	0x78, 0x76, 0x7c, 0x7c, 0x18, 0xfe, 0x18, 0xc6, 0x70, 0x3c, 0xcc,
	0xc2, 0xcc, 0xcc, 0xcc, 0xcc, 0xc6, 0xc2, 0xc2, 0xc2, 0x18, 0x18,
	0x18, 0xc6, 0xc6, 0xc0, 0xd8, 0xcc, 0xc6, 0xc6, 0xc6, 0xcc, 0xcc,
	0xce, 0xc6, 0xc6, 0x18, 0x60, 0x7e, 0xcc, 0xd8, 0x66, 0xcc, 0xc0,
	0xcc, 0xcc, 0xcc, 0xcc, 0xc0, 0xc0, 0xc0, 0xc0, 0x18, 0x18, 0x18,
	0xc6, 0xc6, 0xc0, 0xd8, 0xcc, 0xc6, 0xc6, 0xc6, 0xcc, 0xcc, 0xc6,
	0xc6, 0xc6, 0x7c, 0x60, 0x18, 0xcc, 0x18, 0xc6, 0xcc, 0xc0, 0xcc,
	0xcc, 0xcc, 0xcc, 0xc0, 0xc0, 0xc0, 0xc0, 0x18, 0x18, 0x18, 0xfe,
	0xc6, 0xc0, 0x7e, 0xcc, 0xc6, 0xc6, 0xc6, 0xcc, 0xcc, 0xc6, 0xc6,
	0xc6, 0xc6, 0x60, 0x7e, 0xcc, 0x18, 0xc0, 0xcc, 0xfe, 0x7c, 0x7c,
	0x7c, 0x7c, 0xc0, 0xfe, 0xfe, 0xfe, 0x18, 0x18, 0x18, 0xc6, 0xfe,
	0xf0, 0x36, 0xcc, 0xc6, 0xc6, 0xc6, 0xcc, 0xcc, 0xc6, 0xc6, 0xc6,
	0xc0, 0x60, 0x18, 0xde, 0x18, 0xc0, 0xcc, 0xc6, 0x0c, 0x0c, 0x0c,
	0x0c, 0xc6, 0xc6, 0xc6, 0xc6, 0x18, 0x18, 0x18, 0xc6, 0xc6, 0xc0,
	0x36, 0xfe, 0xc6, 0xc6, 0xc6, 0xcc, 0xcc, 0xc6, 0xc6, 0xc6, 0xc0,
	0xf8, 0x3c, 0xcc, 0x7e, 0xc0, 0xcc, 0x7c, 0x78, 0x78, 0x78, 0x78,
	0x7c, 0x7c, 0x7c, 0x7c, 0x38, 0x38, 0x38, 0x6c, 0x6c, 0xc0, 0xec,
	0xcc, 0x7c, 0x7c, 0x7c, 0xcc, 0xcc, 0xc6, 0xc6, 0xc6, 0xc0, 0x60,
	0x66, 0xc4, 0x18, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0xc0, 0x00, 0xcc,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0x60, 0x66,
	0xf8, 0x18, 0x3c, 0xcc, 0x30, 0x6c, 0x00, 0x18, 0x38, 0x00, 0x6c,
	0x00, 0x18, 0x00, 0x66, 0x18, 0x10, 0x10, 0xfc, 0x00, 0x6c, 0x6c,
	0x00, 0x18, 0xcc, 0x18, 0x00, 0x7c, 0xc6, 0x7c, 0x62, 0x66, 0xcc,
	0x18, 0x00, 0xcc, 0x18, 0x38, 0xcc, 0x30, 0x6c, 0x00, 0x38, 0xc6,
	0x30, 0x66, 0x3c, 0x30, 0x00, 0x38, 0x00, 0x00, 0x3e, 0x38, 0xc6,
	0x30, 0x78, 0x30, 0xc6, 0x00, 0x00, 0x18, 0x3c, 0x66, 0xcc, 0x1b,
	0x00, 0x00, 0x0c, 0x10, 0x00, 0x60, 0x38, 0x00, 0x10, 0x00, 0x60,
	0x00, 0x18, 0x60, 0xc6, 0x6c, 0x30, 0x00, 0x00, 0x10, 0x00, 0x60,
	0x30, 0x60, 0x00, 0xc6, 0xc6, 0x18, 0x00, 0x00, 0xf8, 0x0e, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xc0, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xc0, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xc0, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xf8, 0x78, 0x7c, 0x7c,
	0x30, 0x7c, 0xcc, 0x18, 0x0c, 0xcc, 0x18, 0xc6, 0xcc, 0x78, 0xf8,
	0x7c, 0xc0, 0x7c, 0x30, 0x78, 0x10, 0x6c, 0xc6, 0x76, 0xfe, 0x0e,
	0x18, 0x70, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xc4, 0xcc, 0xc2, 0x30,
	0xcc, 0xcc, 0x18, 0x0c, 0xcc, 0x18, 0xd6, 0xcc, 0xcc, 0xcc, 0xcc,
	0xc0, 0x86, 0x30, 0xcc, 0x6c, 0xfe, 0x6c, 0xce, 0xc0, 0x18, 0x18,
	0x18, 0x00, 0xfe, 0x00, 0xcc, 0xcc, 0xc0, 0xcc, 0xc0, 0x30, 0xcc,
	0xcc, 0x18, 0x0c, 0xd8, 0x18, 0xd6, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,
	0x06, 0x30, 0xcc, 0xc6, 0xd6, 0x38, 0xc6, 0x60, 0x18, 0x18, 0x18,
	0x00, 0xc6, 0x00, 0xcc, 0xcc, 0xc0, 0xcc, 0xc0, 0x30, 0xcc, 0xcc,
	0x18, 0x0c, 0xf0, 0x18, 0xd6, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0, 0x1c,
	0x30, 0xcc, 0xc6, 0xd6, 0x38, 0xc6, 0x30, 0x18, 0x18, 0x18, 0x00,
	0xc6, 0x00, 0x7c, 0xcc, 0xc0, 0xcc, 0xfe, 0x30, 0xcc, 0xcc, 0x18,
	0x0c, 0xf0, 0x18, 0xd6, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x70, 0x30,
	0xcc, 0xc6, 0xd6, 0x38, 0xc6, 0x18, 0x18, 0x18, 0x18, 0x00, 0xc6,
	0x00, 0x0c, 0xcc, 0xc4, 0xcc, 0xc6, 0x78, 0xcc, 0xec, 0x18, 0x0c,
	0xd8, 0x18, 0xfe, 0xcc, 0xcc, 0xcc, 0xcc, 0xec, 0xc2, 0x30, 0xcc,
	0xc6, 0xc6, 0x6c, 0xc6, 0x0c, 0x70, 0x18, 0x0e, 0x00, 0x6c, 0x00,
	0x78, 0xf8, 0x78, 0x7c, 0x7c, 0x30, 0x7c, 0xd8, 0x38, 0x0c, 0xcc,
	0x18, 0xec, 0xb8, 0x78, 0xf8, 0x7c, 0xb8, 0x7c, 0xfc, 0xcc, 0xc6,
	0xc6, 0xc6, 0xc6, 0xfe, 0x18, 0x18, 0x18, 0x00, 0x38, 0x00, 0x00,
	0xc0, 0x00, 0x0c, 0x00, 0x32, 0x00, 0xc0, 0x00, 0x00, 0xc0, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x00, 0x10, 0x0c, 0x00, 0xc0,
	0x00, 0x0c, 0x00, 0x36, 0x00, 0xc0, 0x18, 0x0c, 0xc0, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00, 0xc0, 0x00,
	0x0c, 0x00, 0x1c, 0x00, 0xc0, 0x18, 0x0c, 0xc0, 0x38, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0e, 0x18, 0x70, 0xdc, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0xc6, 0xfc, 0x3c, 0xf8, 0xfc, 0xc0, 0x3e, 0xc6, 0x18, 0x78,
	0xc2, 0xfc, 0xc6, 0xc6, 0x7c, 0xc0, 0x7c, 0xc6, 0x7c, 0x18, 0x7c,
	0x10, 0x6c, 0xc6, 0x18, 0xfe, 0x3c, 0x02, 0x3c, 0x00, 0x00, 0xc0,
	0xc6, 0xc6, 0x66, 0xdc, 0xc0, 0xc0, 0x66, 0xc6, 0x18, 0xcc, 0xc6,
	0xc0, 0xc6, 0xc6, 0xc6, 0xc0, 0xde, 0xc6, 0x86, 0x18, 0xc6, 0x38,
	0xee, 0xc6, 0x18, 0xc0, 0x30, 0x06, 0x0c, 0x00, 0x00, 0xdc, 0xc6,
	0xc6, 0xc2, 0xce, 0xc0, 0xc0, 0xc6, 0xc6, 0x18, 0xcc, 0xcc, 0xc0,
	0xc6, 0xc6, 0xc6, 0xc0, 0xd6, 0xcc, 0x06, 0x18, 0xc6, 0x6c, 0xfe,
	0x6c, 0x18, 0xc0, 0x30, 0x0e, 0x0c, 0x00, 0x00, 0xde, 0xc6, 0xc6,
	0xc0, 0xc6, 0xc0, 0xc0, 0xc6, 0xc6, 0x18, 0xcc, 0xd8, 0xc0, 0xc6,
	0xc6, 0xc6, 0xc0, 0xc6, 0xcc, 0x06, 0x18, 0xc6, 0xc6, 0xd6, 0x7c,
	0x18, 0x60, 0x30, 0x1c, 0x0c, 0x00, 0x00, 0xde, 0xfe, 0xc6, 0xc0,
	0xc6, 0xc0, 0xc0, 0xde, 0xc6, 0x18, 0x0c, 0xf0, 0xc0, 0xc6, 0xce,
	0xc6, 0xc0, 0xc6, 0xd8, 0x0c, 0x18, 0xc6, 0xc6, 0xd6, 0x38, 0x18,
	0x30, 0x30, 0x38, 0x0c, 0x00, 0x00, 0xde, 0xc6, 0xfc, 0xc0, 0xc6,
	0xf8, 0xf8, 0xc0, 0xfe, 0x18, 0x0c, 0xf0, 0xc0, 0xd6, 0xde, 0xc6,
	0xfc, 0xc6, 0xfc, 0x38, 0x18, 0xc6, 0xc6, 0xd6, 0x38, 0x3c, 0x18,
	0x30, 0x70, 0x0c, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc0, 0xc6, 0xc0,
	0xc0, 0xc0, 0xc6, 0x18, 0x0c, 0xd8, 0xc0, 0xfe, 0xfe, 0xc6, 0xc6,
	0xc6, 0xc6, 0x60, 0x18, 0xc6, 0xc6, 0xc6, 0x7c, 0x66, 0x0c, 0x30,
	0xe0, 0x0c, 0x00, 0x00, 0xc6, 0x6c, 0xc6, 0xc2, 0xce, 0xc0, 0xc0,
	0xc0, 0xc6, 0x18, 0x0c, 0xcc, 0xc0, 0xfe, 0xf6, 0xc6, 0xc6, 0xc6,
	0xc6, 0xc0, 0x18, 0xc6, 0xc6, 0xc6, 0x6c, 0x66, 0x06, 0x30, 0xc0,
	0x0c, 0x00, 0x00, 0x7c, 0x38, 0xc6, 0x66, 0xdc, 0xc0, 0xc0, 0x62,
	0xc6, 0x18, 0x0c, 0xc6, 0xc0, 0xee, 0xe6, 0xc6, 0xc6, 0xc6, 0xc6,
	0xc2, 0x7e, 0xc6, 0xc6, 0xc6, 0xc6, 0x66, 0x06, 0x30, 0x80, 0x0c,
	0xc6, 0x00, 0x00, 0x10, 0xfc, 0x3c, 0xf8, 0xfc, 0xfc, 0x3c, 0xc6,
	0x18, 0x1e, 0xc2, 0xc0, 0xc6, 0xc6, 0x7c, 0xfc, 0x7c, 0xfc, 0x7c,
	0x7e, 0xc6, 0xc6, 0xc6, 0xc6, 0x66, 0xfe, 0x3c, 0x00, 0x3c, 0x6c,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x6c, 0x7c,
	0x86, 0x76, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x18, 0x00, 0x18, 0x80,
	0x38, 0x18, 0xfe, 0x7c, 0x0c, 0x7c, 0x7c, 0x30, 0x7c, 0x78, 0x00,
	0x30, 0x06, 0x00, 0x60, 0x18, 0x00, 0x18, 0x00, 0x6c, 0xc6, 0xc6,
	0xcc, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00, 0x18, 0xc0, 0x6c,
	0x18, 0xc0, 0x86, 0x0c, 0x86, 0xc6, 0x30, 0xc6, 0x8c, 0x18, 0x18,
	0x0c, 0x00, 0x30, 0x18, 0x00, 0x00, 0x00, 0xfe, 0x86, 0x60, 0xcc,
	0x00, 0x30, 0x0c, 0x66, 0x18, 0x18, 0x00, 0x00, 0x60, 0xc6, 0x18,
	0xc0, 0x06, 0x0c, 0x06, 0xc6, 0x30, 0xc6, 0x06, 0x18, 0x18, 0x18,
	0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x6c, 0x06, 0x30, 0xcc, 0x00,
	0x30, 0x0c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x30, 0xe6, 0x18, 0x60,
	0x06, 0x0c, 0x06, 0xc6, 0x30, 0xc6, 0x06, 0x00, 0x00, 0x30, 0x7e,
	0x0c, 0x18, 0x00, 0x18, 0x00, 0x6c, 0x06, 0x18, 0xdc, 0x00, 0x30,
	0x0c, 0xff, 0x7e, 0x00, 0xfe, 0x00, 0x18, 0xf6, 0x18, 0x30, 0x06,
	0xfe, 0x06, 0xe6, 0x18, 0xc6, 0x06, 0x00, 0x00, 0x60, 0x00, 0x06,
	0x18, 0x00, 0x18, 0x00, 0x6c, 0x7c, 0x0c, 0x76, 0x00, 0x30, 0x0c,
	0x3c, 0x18, 0x00, 0x00, 0x00, 0x0c, 0xde, 0x18, 0x18, 0x3c, 0xcc,
	0xfc, 0xdc, 0x0c, 0x7c, 0x7e, 0x00, 0x00, 0x30, 0x00, 0x0c, 0x18,
	0x00, 0x3c, 0x00, 0xfe, 0xc0, 0xc6, 0x38, 0x00, 0x30, 0x0c, 0x66,
	0x18, 0x00, 0x00, 0x00, 0x06, 0xce, 0x18, 0x0c, 0x06, 0x6c, 0xc0,
	0xc0, 0x06, 0xc6, 0xc6, 0x18, 0x18, 0x18, 0x7e, 0x18, 0x0c, 0x00,
	0x3c, 0x24, 0x6c, 0xc2, 0xc2, 0x6c, 0x60, 0x30, 0x0c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0xc6, 0x78, 0x06, 0x06, 0x3c, 0xc0, 0xc0,
	0x06, 0xc6, 0xc6, 0x18, 0x18, 0x0c, 0x00, 0x30, 0xc6, 0x00, 0x3c,
	0x66, 0x6c, 0xc6, 0x00, 0x6c, 0x30, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x6c, 0x38, 0xc6, 0x86, 0x1c, 0xc0, 0x60, 0x06,
	0xc6, 0xc6, 0x00, 0x00, 0x06, 0x00, 0x60, 0xc6, 0x00, 0x18, 0x66,
	0x00, 0x7c, 0x00, 0x38, 0x30, 0x0c, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x38, 0x18, 0x7c, 0x7c, 0x0c, 0xfe, 0x3c, 0xfe, 0x7c,
	0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x66, 0x00,
	0x18, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0x00, 0xff, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7e, 0x7e, 0x10, 0x00, 0x3c, 0x3c, 0x00, 0xff, 0x00,
	0xff, 0x78, 0x18, 0xe0, 0xe6, 0x18, 0x80, 0x02, 0x00, 0x66, 0x1b,
	0xc6, 0xfe, 0x7e, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x81, 0xff, 0x38, 0x10, 0x18, 0x18, 0x00, 0xff, 0x3c, 0xc3,
	0xcc, 0x18, 0xf0, 0xe7, 0x18, 0xc0, 0x06, 0x18, 0x66, 0x1b, 0x0c,
	0xfe, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x10, 0x00,
	0x81, 0xff, 0x7c, 0x38, 0x18, 0x18, 0x18, 0xe7, 0x66, 0x99, 0xcc,
	0x7e, 0x70, 0x67, 0xdb, 0xe0, 0x0e, 0x3c, 0x00, 0x1b, 0x38, 0xfe,
	0x3c, 0x18, 0x7e, 0x18, 0x30, 0xfe, 0x28, 0xfe, 0x38, 0x00, 0x99,
	0xe7, 0xfe, 0x7c, 0xe7, 0x7e, 0x3c, 0xc3, 0x42, 0xbd, 0xcc, 0x18,
	0x30, 0x63, 0x3c, 0xf0, 0x1e, 0x7e, 0x66, 0x1b, 0x6c, 0xfe, 0x7e,
	0x18, 0x18, 0x0c, 0x60, 0xc0, 0x6c, 0x7c, 0x38, 0x00, 0xbd, 0xc3,
	0xfe, 0xfe, 0xe7, 0xff, 0x3c, 0xc3, 0x42, 0xbd, 0xcc, 0x3c, 0x30,
	0x63, 0xe7, 0xf8, 0x3e, 0x18, 0x66, 0x1b, 0xc6, 0x00, 0x18, 0x18,
	0x18, 0xfe, 0xfe, 0xc0, 0xfe, 0x7c, 0x7c, 0x00, 0x81, 0xff, 0xfe,
	0x7c, 0xe7, 0xff, 0x18, 0xe7, 0x66, 0x99, 0x78, 0x66, 0x30, 0x63,
	0x3c, 0xfe, 0xfe, 0x18, 0x66, 0x7b, 0xc6, 0x00, 0x18, 0x18, 0x18,
	0x0c, 0x60, 0xc0, 0x6c, 0x38, 0x7c, 0x00, 0x81, 0xff, 0xfe, 0x38,
	0x3c, 0x7e, 0x00, 0xff, 0x3c, 0xc3, 0x32, 0x66, 0x30, 0x63, 0xdb,
	0xf8, 0x3e, 0x18, 0x66, 0xdb, 0x6c, 0x00, 0x18, 0x18, 0x18, 0x18,
	0x30, 0x00, 0x28, 0x38, 0xfe, 0x00, 0xa5, 0xdb, 0x6c, 0x10, 0x3c,
	0x3c, 0x00, 0xff, 0x00, 0xff, 0x1a, 0x66, 0x3f, 0x7f, 0x18, 0xf0,
	0x1e, 0x7e, 0x66, 0xdb, 0x38, 0x00, 0x7e, 0x7e, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x10, 0xfe, 0x00, 0x81, 0xff, 0x00, 0x00, 0x18, 0x18,
	0x00, 0xff, 0x00, 0xff, 0x0e, 0x66, 0x33, 0x63, 0x18, 0xe0, 0x0e,
	0x3c, 0x66, 0xdb, 0x60, 0x00, 0x3c, 0x3c, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0x00, 0xff, 0x1e, 0x3c, 0x3f, 0x7f, 0x00, 0xc0, 0x06, 0x18,
	0x66, 0x7f, 0xc6, 0x00, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00,
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
