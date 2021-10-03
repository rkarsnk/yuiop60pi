#pragma once

//////////////////////////////////////////////////////////////////////////////
// for usb_descriptors.c

#define VENDOR_ID       0x7890
#define PRODUCT_ID      0x000a
#define DEVICE_VER      0x0001
#define MANUFACTURER    koron
#define PRODUCT         YUIOP60Pi

//////////////////////////////////////////////////////////////////////////////
// for matrix.c

#define COL_PINS    { 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10 }
#define COL_NUM     15
#define ROW_PINS    { 8, 7, 6, 5, 4 }
#define ROW_NUM     5

//define SCANSHIFT_INTERVAL     10
//define DEBOUNCE_USEC          500

//////////////////////////////////////////////////////////////////////////////
// for ledarray.c

#define LEDARRAY_NUM    56
#define LEDARRAY_PIN    9
#define LEDARRAY_PIO	pio0
