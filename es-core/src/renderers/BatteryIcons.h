/* GIMP RGB C-Source image dump (BatteryIcons.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[32 * 80 * 2 + 1];
} battery_image = {
  32, 80, 2,
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\370\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370"
  "\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000"
  "\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370"
  "\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370\000"
  "\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370\000\000"
  "\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370\000\000\000"
  "\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370\000\000\000\370"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\370\000\370\000\000\000\370\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\370\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\370\000\000\000\000\000\000\000\000\000\000\000\000\000\370\000\000\000\000\000\000\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340"
  "\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000"
  "\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340\007"
  "\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000"
  "\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377"
  "\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000"
  "\000\000\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340"
  "\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377\340\007\340\007"
  "\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377"
  "\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377\340\007\340\007"
  "\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377\377\340\007\340\007"
  "\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000"
  "\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007"
  "\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000"
  "\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000"
  "\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000"
  "\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377"
  "\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340"
  "\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000"
  "\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340"
  "\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340"
  "\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007"
  "\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340"
  "\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007"
  "\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377"
  "\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340"
  "\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340"
  "\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377\340"
  "\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340"
  "\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000"
  "\000\000\000\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007"
  "\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340"
  "\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377"
  "\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007"
  "\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\000\000\000\000\000\000\377\377\340"
  "\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340"
  "\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\000\000\000"
  "\000\000\000\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340"
  "\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007"
  "\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340"
  "\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000"
  "\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340"
  "\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\377\377"
  "\377\377\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\377\377\377\377\000\000\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\377\377\377\377\000\000\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\377\377\377\377\000\000\377\377\340\007\340\007\340\007\340\007"
  "\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340"
  "\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377"
  "\377\000\000\000\000\000\000\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340"
  "\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340"
  "\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\377\377"
  "\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007\340\007\340\007\340"
  "\007\340\007\377\377\340\007\340\007\340\007\340\007\340\007\340\007\377\377\340\007\340\007"
  "\340\007\340\007\340\007\340\007\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000",
};
