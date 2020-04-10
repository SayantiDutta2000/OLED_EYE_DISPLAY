#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

static const uint8_t  PROGMEM image_data_20190410_114707[] = {0xfd, 0xb6, 0xd6, 0xab, 0x55, 0xb6, 0xdb, 0x6d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xab, 0x6b, 0x5a, 0xda, 0xb6, 0xd5, 0x6d, 0xb7, 0x55, 0x55, 0x56, 0xdb, 0xbb, 0xdb, 0x76, 0xda, 
0xed, 0xb5, 0x6b, 0x6b, 0x5a, 0xab, 0x55, 0x5a, 0xdb, 0xff, 0xfd, 0xfe, 0xee, 0xff, 0xdf, 0xf7, 
0xb6, 0xdb, 0x55, 0x55, 0xab, 0x5a, 0xad, 0xd7, 0x6e, 0xaa, 0xaf, 0x57, 0xff, 0xbb, 0x7b, 0x5e, 
0xdb, 0x55, 0xb6, 0xad, 0x6d, 0x55, 0x6a, 0x6a, 0xb5, 0xb7, 0xf7, 0xfd, 0x6b, 0xef, 0xff, 0xfb, 
0xb5, 0xb6, 0xab, 0x75, 0x55, 0x56, 0xab, 0x55, 0xad, 0x5a, 0xba, 0xaf, 0xfe, 0xfd, 0xad, 0x6f, 
0xde, 0xda, 0xdd, 0xab, 0x55, 0x55, 0x54, 0xa5, 0x55, 0xad, 0xaf, 0xfb, 0x57, 0xb7, 0xff, 0xfb, 
0xaa, 0xab, 0x6a, 0xad, 0x6a, 0xa8, 0x00, 0x12, 0x54, 0xd5, 0x6a, 0xad, 0xfd, 0xde, 0xdb, 0x5e, 
0xf6, 0xda, 0xab, 0x55, 0x55, 0x42, 0xaa, 0xa1, 0x12, 0xaa, 0xd7, 0x77, 0x6f, 0x7b, 0xf7, 0xf7, 
0x5b, 0x6d, 0xb5, 0xb5, 0xaa, 0x28, 0xaa, 0xd6, 0xa8, 0x15, 0x55, 0xbb, 0xbb, 0xef, 0x5d, 0x7d, 
0xd5, 0xaa, 0xdd, 0x56, 0xa9, 0x16, 0xdc, 0xf3, 0xeb, 0x42, 0xaa, 0xcd, 0x6d, 0x7b, 0xff, 0xd7, 
0xba, 0xdd, 0x66, 0xda, 0x92, 0xea, 0xf6, 0xf5, 0xb7, 0xc8, 0x0a, 0xb6, 0xdf, 0xae, 0xab, 0x7d, 
0xd7, 0x6b, 0xbb, 0x6a, 0x4a, 0xbd, 0x6c, 0xd3, 0xf5, 0xae, 0xa5, 0x55, 0x6a, 0xf5, 0xfd, 0xd7, 
0x6d, 0xad, 0x55, 0x55, 0x2b, 0x6a, 0xfe, 0xf5, 0xef, 0xbd, 0x90, 0x55, 0x5d, 0xaf, 0x57, 0x7b, 
0xb6, 0xb6, 0xdb, 0x54, 0xdd, 0xfc, 0xb4, 0xf3, 0xcf, 0x1b, 0x5d, 0x14, 0xd6, 0xdb, 0xfb, 0xae, 
0xdb, 0x6b, 0x6d, 0x53, 0x6e, 0xda, 0xfe, 0x55, 0xcd, 0x33, 0x36, 0xa2, 0xab, 0x76, 0xad, 0x7b, 
0xad, 0xbd, 0xb5, 0xaa, 0xdb, 0x7c, 0xad, 0x73, 0x8d, 0x64, 0x7f, 0xc8, 0xaa, 0xad, 0x77, 0xd6, 
0xf6, 0xd6, 0xd6, 0xad, 0xee, 0xee, 0x6e, 0x35, 0x54, 0x0d, 0x75, 0x8a, 0x25, 0x6b, 0xad, 0x6d, 
0x5b, 0x6a, 0xaa, 0xaf, 0x5f, 0x3c, 0x4d, 0x22, 0x28, 0xb4, 0xde, 0x3d, 0x4a, 0x96, 0xf6, 0xdb, 
0xd5, 0xbb, 0x75, 0x5b, 0xeb, 0x5a, 0x2a, 0x14, 0x02, 0x19, 0xe1, 0x76, 0x05, 0x6d, 0x5b, 0x76, 
0xbe, 0xd6, 0xad, 0x76, 0xb7, 0x6c, 0x02, 0x80, 0x20, 0x40, 0x16, 0xda, 0xd0, 0x95, 0xad, 0xad, 
0xd5, 0x6d, 0xd5, 0xdb, 0xf6, 0xb2, 0x08, 0x08, 0x00, 0x04, 0xa8, 0xb1, 0x95, 0x56, 0xd6, 0xdb, 
0xbb, 0xb6, 0xab, 0x7d, 0x69, 0x80, 0x21, 0x20, 0x80, 0x00, 0x02, 0x47, 0x62, 0x2a, 0xbb, 0x6d, 
0xee, 0xdb, 0x6d, 0xaf, 0xad, 0x24, 0x80, 0x00, 0x02, 0x40, 0x00, 0x0c, 0x0d, 0x4a, 0xcd, 0xb6, 
0xb5, 0xb5, 0xb7, 0x75, 0x52, 0x40, 0x02, 0xad, 0x00, 0x09, 0x21, 0x01, 0x3a, 0xa5, 0x35, 0x55, 
0xde, 0xdd, 0x5d, 0xdb, 0xe8, 0x10, 0x09, 0x5f, 0x60, 0x04, 0x84, 0x08, 0xf5, 0x40, 0xab, 0x6e, 
0xb5, 0xb6, 0xeb, 0x6e, 0xa5, 0x50, 0x8b, 0xfd, 0xf0, 0x03, 0x10, 0x02, 0x05, 0x35, 0x5a, 0xb5, 
0xef, 0x6b, 0x5d, 0xf1, 0x48, 0xe2, 0x26, 0xff, 0xc5, 0x52, 0xc0, 0x20, 0xb2, 0x84, 0xad, 0xd6, 
0xbb, 0xba, 0xf7, 0x55, 0x13, 0xa4, 0x47, 0xdb, 0x65, 0x41, 0xfd, 0x00, 0x04, 0x55, 0x56, 0xab, 
0xed, 0x6f, 0x5d, 0xaa, 0xaf, 0xe2, 0x91, 0xbf, 0x88, 0x29, 0x56, 0x88, 0x09, 0x2a, 0xa9, 0x5d, 
0xbf, 0xb5, 0xeb, 0x51, 0x3f, 0x64, 0x50, 0xf4, 0x05, 0xa1, 0xfd, 0x41, 0x22, 0x6a, 0xa5, 0x6a, 
0xea, 0xde, 0xbd, 0x4a, 0xed, 0xd2, 0x88, 0x00, 0x15, 0x54, 0xdf, 0xa4, 0x00, 0x95, 0x4a, 0xb7, 
0xbf, 0x77, 0xed, 0x55, 0xbf, 0xe2, 0x68, 0x00, 0x0e, 0xa1, 0x75, 0xf0, 0x08, 0x48, 0x2a, 0xaa, 
0xeb, 0xdd, 0xb5, 0x4b, 0xff, 0xd5, 0x14, 0x00, 0x29, 0xd9, 0xff, 0x55, 0x01, 0x03, 0x97, 0x5b, 
0xfd, 0x7f, 0xea, 0x3f, 0xfe, 0xe9, 0xf6, 0x00, 0x2a, 0xb1, 0xdd, 0xf4, 0x00, 0x14, 0x58, 0xad, 
0xaf, 0xf6, 0xa9, 0xad, 0xb7, 0xf2, 0xbb, 0x80, 0xae, 0xd1, 0xf7, 0xba, 0x90, 0x02, 0xc5, 0x75, 
0xfd, 0xdf, 0xd4, 0xbf, 0xff, 0xea, 0xed, 0x55, 0x77, 0x65, 0xbf, 0xea, 0x04, 0x09, 0x16, 0xd6, 
0xef, 0xfe, 0xaa, 0xee, 0xfe, 0xf8, 0xb7, 0xeb, 0x5d, 0x83, 0xfb, 0x75, 0x20, 0x80, 0x6a, 0xad, 
0xbe, 0xfb, 0x5f, 0xfb, 0xef, 0xfd, 0x6e, 0xb7, 0x77, 0x57, 0x6f, 0xb4, 0x8a, 0x25, 0x15, 0xb7, 
0xfb, 0xee, 0xfa, 0xd7, 0xff, 0xdd, 0x5b, 0xad, 0xdd, 0x0f, 0xfe, 0xda, 0xa0, 0x88, 0xd6, 0xda, 
0xff, 0xfe, 0xaf, 0x7f, 0x7b, 0x7f, 0x2a, 0xd7, 0x76, 0xbd, 0xdb, 0xee, 0xaa, 0x22, 0x2a, 0xb7, 
0xdf, 0xbd, 0xbb, 0xab, 0xbf, 0xfd, 0xca, 0xad, 0x6d, 0x77, 0xff, 0x77, 0x50, 0x94, 0xb7, 0x6d, 
0xfb, 0xf7, 0xee, 0xfe, 0xeb, 0xf7, 0xaa, 0xaf, 0x51, 0x5f, 0x6d, 0xda, 0xad, 0x0a, 0x95, 0xbb, 
0xef, 0xff, 0x7f, 0xef, 0xbe, 0xdf, 0xfa, 0x55, 0x45, 0xfd, 0xff, 0x7d, 0xa2, 0xa2, 0xda, 0xd7, 
0xfe, 0xdf, 0xfb, 0xbb, 0x6f, 0x7a, 0xff, 0xf6, 0xbf, 0xfe, 0xaa, 0x46, 0xaa, 0xb9, 0x6d, 0xbd, 
0xbf, 0xfd, 0xef, 0xff, 0xfd, 0xee, 0xd6, 0xfd, 0xfb, 0xab, 0xd5, 0xba, 0xd6, 0x4a, 0xd6, 0xef, 
0xfb, 0xf7, 0xfe, 0xfd, 0xbb, 0xea, 0xfa, 0xcb, 0x74, 0xfc, 0xba, 0xef, 0x5b, 0x5e, 0xfb, 0xb5, 
0xef, 0xbf, 0xff, 0xd7, 0xef, 0xae, 0xb7, 0x7e, 0x9f, 0x9f, 0xdf, 0x39, 0xea, 0xab, 0x5e, 0xff, 
0xff, 0xff, 0xb7, 0x7e, 0xbb, 0xdf, 0x77, 0xbb, 0xd7, 0x6a, 0xed, 0xdf, 0x5e, 0xfd, 0xeb, 0xad, 
0xfe, 0xfe, 0xff, 0xf7, 0xee, 0xb5, 0x7a, 0xda, 0xb5, 0xf7, 0x77, 0x6e, 0xeb, 0xae, 0xfe, 0xff, 
0xdb, 0xef, 0xfb, 0xbd, 0xbb, 0xdf, 0xad, 0xad, 0xad, 0xbb, 0xdb, 0xf7, 0xbd, 0x7b, 0xb7, 0xed, 
0xff, 0xff, 0xef, 0xff, 0xee, 0x75, 0x77, 0xee, 0xee, 0xed, 0x7d, 0xb5, 0xd7, 0xef, 0xfd, 0xbf, 
0xff, 0xbd, 0xbf, 0x6d, 0xbb, 0xdb, 0x5a, 0xaa, 0xb5, 0x7d, 0xd6, 0xee, 0xba, 0xfd, 0xaf, 0xf7, 
0xdb, 0xff, 0xff, 0xff, 0xfe, 0xad, 0x6b, 0xee, 0xdb, 0xae, 0x7d, 0x5b, 0x77, 0xb7, 0xfd, 0xbe, 
0xff, 0xff, 0xfb, 0xf7, 0x6f, 0xf7, 0x55, 0x36, 0xee, 0xdb, 0xaf, 0xed, 0xdf, 0xfe, 0xf7, 0xfb, 
0xff, 0x77, 0x7f, 0x7f, 0xfb, 0x7a, 0xbb, 0x5e, 0xb5, 0x6d, 0xb4, 0xb6, 0xfa, 0xdf, 0xdf, 0xdf, 
0xdb, 0xff, 0xff, 0xfd, 0xff, 0xdf, 0xea, 0xea, 0xab, 0x56, 0xdb, 0x7b, 0xaf, 0xfb, 0xfe, 0xff, 
0xff, 0xff, 0xed, 0xdf, 0xb7, 0x7b, 0x7f, 0x55, 0xad, 0x6a, 0xad, 0xdf, 0xff, 0xbf, 0x77, 0xed, 
0xff, 0xbb, 0xbf, 0xfb, 0xff, 0xff, 0xd5, 0xee, 0xb6, 0xdf, 0xf7, 0x6a, 0xfb, 0xfd, 0xff, 0xbf, 
0xdb, 0xff, 0xff, 0xff, 0xfb, 0xdb, 0x7f, 0x7b, 0xed, 0xb5, 0x5d, 0xff, 0xbf, 0x77, 0xfd, 0xff, 
0xff, 0xfe, 0xff, 0x7e, 0xdf, 0x7f, 0xfd, 0xde, 0xff, 0xff, 0xf7, 0xbf, 0xf7, 0xff, 0xb7, 0xfb, 
0xfe, 0xdb, 0xfb, 0xef, 0xff, 0xfd, 0xef, 0xfb, 0xb6, 0xdb, 0x7f, 0xed, 0xdf, 0xdf, 0xff, 0xdf, 
0xdb, 0xff, 0xff, 0xff, 0xf7, 0xef, 0xbf, 0xbf, 0xff, 0xff, 0xdd, 0xff, 0xfe, 0xfd, 0xff, 0x7f, 
0xff, 0xff, 0xef, 0xfd, 0xbe, 0xff, 0xfd, 0xfe, 0xee, 0xef, 0x7f, 0xbf, 0x7f, 0xff, 0xbb, 0xfd};
 static const uint8_t  PROGMEM image_data_20190410_114708[] = {0x5a, 0xdb, 0x6d, 0xaa, 0xa9, 0x52, 0x96, 0x45, 0x09, 0x4a, 0xa9, 0x15, 0x25, 0x55, 0xbf, 0xff, 
0xab, 0x6d, 0xb6, 0xd6, 0xaa, 0xa9, 0x59, 0x28, 0xed, 0x6a, 0xa5, 0x42, 0xa8, 0x95, 0x6a, 0xaa, 
0xed, 0xb6, 0xda, 0xaa, 0xaa, 0x94, 0x52, 0xab, 0x25, 0x29, 0x15, 0x58, 0xa6, 0x55, 0xb7, 0xff, 
0x56, 0xaa, 0xab, 0x5a, 0xaa, 0x4b, 0x49, 0x2a, 0xb2, 0x94, 0xd4, 0xa5, 0x29, 0x54, 0xad, 0x55, 
0xaa, 0xdb, 0x6d, 0x6a, 0xaa, 0x51, 0x24, 0xaa, 0x8a, 0xaa, 0x52, 0x54, 0xaa, 0xa5, 0x5b, 0xff, 
0xbb, 0x6d, 0x55, 0xaa, 0x52, 0xac, 0xaa, 0xaa, 0xb5, 0x55, 0x49, 0x2a, 0x95, 0x2a, 0xdd, 0x55, 
0xad, 0x55, 0xb6, 0x55, 0x49, 0x22, 0x8a, 0xaa, 0xaa, 0x52, 0xa6, 0x92, 0x52, 0x95, 0x57, 0xff, 
0xb5, 0xb6, 0xd9, 0xa9, 0x2a, 0x95, 0x55, 0x55, 0x52, 0xaa, 0x29, 0x4a, 0xaa, 0x52, 0xad, 0x55, 
0xaa, 0xda, 0xaa, 0xaa, 0xa4, 0x52, 0x55, 0x55, 0x6a, 0x95, 0x45, 0x29, 0x25, 0x4a, 0xb6, 0xff, 
0xb6, 0xaa, 0xaa, 0x95, 0x11, 0x49, 0x29, 0x2a, 0x95, 0x48, 0xa8, 0x94, 0x50, 0xa4, 0x9b, 0xaa, 
0xab, 0x6b, 0x55, 0x52, 0xaa, 0xa5, 0x54, 0xd6, 0xaa, 0x25, 0x15, 0x45, 0x4a, 0xaa, 0x56, 0xff, 
0xb5, 0x55, 0x55, 0x48, 0x84, 0x14, 0x92, 0xaa, 0x52, 0xa9, 0x44, 0xa9, 0x28, 0x55, 0x5b, 0x55, 
0xad, 0x6d, 0x6a, 0x26, 0x52, 0xa2, 0xaa, 0x55, 0x55, 0x54, 0x28, 0x94, 0x92, 0xa8, 0x55, 0xff, 
0xaa, 0xaa, 0x95, 0x51, 0x29, 0x15, 0x54, 0x94, 0x55, 0x49, 0x82, 0x40, 0x49, 0x12, 0xae, 0xaa, 
0xb5, 0x55, 0x52, 0x0a, 0x04, 0x52, 0x29, 0x55, 0x22, 0x24, 0x54, 0x95, 0x24, 0x49, 0x55, 0xf7, 
0xd5, 0xaa, 0xaa, 0xa4, 0xa9, 0x25, 0x12, 0xab, 0x9b, 0xa2, 0x00, 0x90, 0x51, 0x22, 0x56, 0xad, 
0x55, 0x55, 0x54, 0x92, 0x44, 0x89, 0x4a, 0x54, 0x48, 0x91, 0x2a, 0x2a, 0x85, 0x25, 0x5b, 0xbb, 
0xaa, 0x55, 0x22, 0x49, 0x10, 0x50, 0xa1, 0x0a, 0x02, 0x04, 0x01, 0x20, 0x29, 0x02, 0xaa, 0x6e, 
0xaa, 0xa4, 0x95, 0x20, 0x45, 0x05, 0x04, 0x44, 0x88, 0x10, 0x80, 0x00, 0x02, 0x4a, 0xaa, 0xdb, 
0x55, 0x52, 0xa4, 0x8a, 0x90, 0x52, 0x10, 0x20, 0x20, 0x00, 0x00, 0x92, 0x94, 0x12, 0x55, 0x6d, 
0xa8, 0x8a, 0x52, 0x51, 0x05, 0x04, 0x41, 0x08, 0x00, 0x02, 0x04, 0x00, 0x00, 0x49, 0x2a, 0xb6, 
0xaa, 0x52, 0x94, 0x84, 0x50, 0x11, 0x00, 0x20, 0x01, 0x20, 0x90, 0x00, 0x02, 0x54, 0x95, 0xdd, 
0xd5, 0x28, 0x42, 0x29, 0x00, 0x80, 0x12, 0x00, 0x40, 0x08, 0x00, 0x00, 0x20, 0x02, 0x56, 0xb7, 
0x6a, 0x85, 0x29, 0x04, 0x22, 0x00, 0x40, 0x01, 0x05, 0x00, 0x00, 0xa4, 0x80, 0xa9, 0x4b, 0x6a, 
0xb5, 0x51, 0x44, 0xa0, 0x80, 0x29, 0x00, 0x20, 0x00, 0x24, 0x94, 0x00, 0x00, 0x0a, 0x5a, 0xd6, 
0xd5, 0x54, 0x28, 0x12, 0x10, 0x00, 0x00, 0x00, 0x40, 0x30, 0x0a, 0x88, 0x48, 0x21, 0x55, 0x5b, 
0xba, 0xa5, 0x02, 0x88, 0x42, 0x00, 0x02, 0x00, 0x00, 0xb2, 0xa5, 0x60, 0x91, 0x00, 0x9b, 0xad, 
0xd6, 0xa8, 0xa8, 0x40, 0x00, 0x04, 0x00, 0x01, 0x00, 0x64, 0x0b, 0xae, 0xa0, 0x0a, 0xb5, 0x75, 
0x7b, 0x55, 0x05, 0x12, 0x10, 0x20, 0x08, 0x49, 0xa1, 0x21, 0x55, 0x55, 0x54, 0x80, 0x4b, 0x96, 
0xd5, 0xaa, 0xb0, 0x80, 0x80, 0x80, 0x20, 0x05, 0x8a, 0xaa, 0x0e, 0xf5, 0x54, 0x21, 0x2a, 0x55, 
0xbe, 0xea, 0x8a, 0x28, 0x02, 0x00, 0x00, 0x00, 0xe5, 0xc8, 0xab, 0x5a, 0xaa, 0x84, 0x0b, 0xab, 
0xd5, 0xb5, 0x69, 0x42, 0x40, 0x00, 0x01, 0x2a, 0x77, 0x24, 0x95, 0xae, 0x92, 0x51, 0x50, 0xb6, 
0xbe, 0xde, 0x95, 0x10, 0x08, 0x01, 0x28, 0x00, 0x88, 0x92, 0x2e, 0xf5, 0x49, 0x15, 0x2e, 0xab, 
0xeb, 0x6a, 0xd4, 0x89, 0x00, 0x00, 0x02, 0x49, 0x02, 0x41, 0x55, 0x52, 0x24, 0x44, 0x92, 0xda, 
0xb6, 0xdb, 0x55, 0x20, 0x00, 0x04, 0x28, 0x00, 0x49, 0x14, 0x2e, 0x88, 0x01, 0x12, 0x5b, 0x57, 
0xdd, 0xad, 0xaa, 0x4a, 0x40, 0x80, 0x02, 0x12, 0x10, 0x41, 0x51, 0x21, 0x54, 0x09, 0x25, 0xaa, 
0xb7, 0x76, 0xd5, 0x21, 0x00, 0x00, 0x40, 0x40, 0x82, 0x14, 0x08, 0x0a, 0x42, 0xd2, 0xae, 0xbb, 
0xed, 0xdb, 0x54, 0x80, 0x08, 0x12, 0x01, 0x02, 0x00, 0x41, 0x45, 0x41, 0x2a, 0x54, 0xaa, 0xcd, 
0xbb, 0x6d, 0x6a, 0xa8, 0x01, 0x00, 0x10, 0x08, 0x29, 0x14, 0x20, 0xb8, 0xab, 0x55, 0x55, 0x76, 
0xde, 0xdb, 0xaa, 0x02, 0x50, 0x49, 0x44, 0x42, 0x82, 0x42, 0xae, 0x25, 0x29, 0x55, 0x5b, 0x9b, 
0xb5, 0xb6, 0xd4, 0xa4, 0x05, 0x02, 0x11, 0x29, 0x29, 0x2a, 0x91, 0x24, 0xa5, 0x55, 0x6d, 0x6d, 
0xef, 0x7b, 0x6a, 0x90, 0x90, 0x28, 0x40, 0x4a, 0x12, 0x91, 0x55, 0x55, 0x55, 0x56, 0xd6, 0xd6, 
0xba, 0xd5, 0xb5, 0x4a, 0x42, 0x82, 0x95, 0x24, 0xa4, 0xad, 0x29, 0x2a, 0xaa, 0xb5, 0xbb, 0x7b, 
0xd7, 0xbe, 0xd6, 0xa1, 0x10, 0x54, 0x22, 0x49, 0x11, 0x24, 0x95, 0x4a, 0xa5, 0x5b, 0x55, 0xad, 
0xbd, 0x6b, 0x5a, 0xac, 0xaa, 0x89, 0x91, 0x14, 0x95, 0x52, 0xa0, 0xaa, 0x9b, 0x6d, 0xee, 0xb6, 
0xeb, 0xda, 0xeb, 0x55, 0x25, 0x24, 0x4a, 0xa2, 0x50, 0xaa, 0x96, 0xaa, 0x6d, 0xb6, 0xb5, 0xdb, 
0xbd, 0x6f, 0x5d, 0x6a, 0xaa, 0xaa, 0xa4, 0x99, 0x4a, 0x91, 0x49, 0x55, 0xb5, 0x55, 0xae, 0xad, 
0xd7, 0xb5, 0xaa, 0xaa, 0xd4, 0xa9, 0x52, 0xa5, 0x2a, 0xaa, 0xb5, 0x56, 0xd7, 0xbb, 0x75, 0xf6, 
0xba, 0xda, 0xf7, 0x6d, 0x5b, 0x55, 0x4a, 0x92, 0xa9, 0x55, 0x4a, 0xad, 0x6a, 0xd6, 0xde, 0xad, 
0xef, 0x6f, 0x5a, 0xb6, 0xea, 0xaa, 0xaa, 0x55, 0x55, 0x56, 0xb5, 0x5b, 0xbf, 0x6d, 0xab, 0xdb, 
0xb5, 0xb5, 0xad, 0xdb, 0x55, 0xb5, 0x55, 0x55, 0x55, 0x6a, 0xd6, 0xf6, 0xd5, 0xb7, 0x7a, 0xb6, 
0xde, 0xdd, 0x76, 0xad, 0xbe, 0xd6, 0xaa, 0xd5, 0x55, 0xb6, 0xab, 0x5f, 0x6d, 0x6d, 0xaf, 0x6d, 
0x6b, 0x6b, 0xdb, 0xf6, 0xd3, 0x5b, 0x6d, 0x5b, 0x6d, 0x55, 0xfd, 0xea, 0xdb, 0xb6, 0xf5, 0xdb, 
0xda, 0xdd, 0x6d, 0x5a, 0xbd, 0x6d, 0xb6, 0xed, 0xb6, 0xde, 0xab, 0x5d, 0xb6, 0xdb, 0x5e, 0xb6, 
0xb7, 0x77, 0xb6, 0xd7, 0x66, 0xd6, 0xdb, 0x5a, 0xdb, 0x6b, 0xbd, 0xf6, 0xef, 0x6e, 0xeb, 0x6d, 
0xdb, 0xaa, 0xdb, 0x7a, 0xdb, 0x7b, 0x6d, 0xef, 0x55, 0xbd, 0x6b, 0x5b, 0xba, 0xf7, 0x75, 0xdb, 
0xb6, 0xde, 0xad, 0xad, 0xb6, 0xaa, 0xb6, 0xb5, 0xbe, 0xeb, 0xde, 0xed, 0x6d, 0xad, 0xae, 0xb6, 
0xdd, 0x6b, 0xf6, 0xd6, 0xdb, 0xdd, 0xdb, 0x5a, 0xeb, 0x6e, 0xb5, 0xb7, 0xb7, 0x76, 0xfb, 0x6f, 
0xb7, 0xbd, 0x5b, 0x7b, 0x6d, 0x6b, 0x6d, 0xd7, 0x5d, 0xbb, 0xef, 0xda, 0xda, 0xdb, 0xad, 0xba, 
0xda, 0xd6, 0xed, 0xd6, 0xdb, 0x5d, 0xb6, 0xbb, 0xb6, 0xed, 0x5a, 0xbf, 0x6f, 0x6e, 0xd6, 0xd7, 
0xb7, 0x6b, 0x5b, 0x6d, 0xb6, 0xeb, 0x5b, 0x6d, 0x6b, 0xb7, 0xff, 0xea, 0xf5, 0xdb, 0x7b, 0x7a, 
0xda, 0xbd, 0xee, 0xdb, 0x6d, 0xbd, 0xed, 0xdb, 0xde, 0xdd, 0x55, 0x5d, 0xbe, 0xf7, 0xad, 0xd7, 
0x6f, 0xd6, 0xbb, 0x6d, 0xb6, 0xd6, 0xb7, 0x6d, 0x77, 0x77, 0xef, 0x77, 0xd5, 0xad, 0x77, 0x7a, 
0xda, 0xbb, 0xd5, 0xb7, 0x7b, 0x77, 0x6d, 0xbb, 0xdb, 0xdd, 0x5a, 0xda, 0xbf, 0x7f, 0xdd, 0xad};
static const uint8_t  PROGMEM image_data_20190410_114709[] = {0xaa, 0xaa, 0xaa, 0xaa, 0x92, 0x44, 0x92, 0xab, 0x55, 0x49, 0x49, 0x24, 0xa4, 0x92, 0x49, 0x25, 
0x55, 0x55, 0x55, 0x52, 0x49, 0x29, 0x49, 0x55, 0xb5, 0x6a, 0x2a, 0x92, 0x4a, 0x49, 0x24, 0x92, 
0xad, 0x55, 0xaa, 0xa9, 0x52, 0x44, 0x25, 0x2b, 0x6b, 0x52, 0xa4, 0x55, 0x25, 0x24, 0x92, 0x55, 
0x55, 0x56, 0xaa, 0x95, 0x09, 0x12, 0x94, 0xaa, 0x94, 0x95, 0x52, 0x88, 0x91, 0x52, 0x49, 0x48, 
0xaa, 0xb5, 0x55, 0x44, 0xa4, 0x48, 0x49, 0x56, 0xeb, 0x48, 0x89, 0x25, 0x54, 0x8a, 0xa5, 0x25, 
0xb5, 0x55, 0x54, 0x52, 0x12, 0x25, 0x24, 0xaa, 0xb5, 0x6b, 0x54, 0xaa, 0x4a, 0x51, 0x14, 0x94, 
0x55, 0xaa, 0xaa, 0x94, 0xa4, 0x90, 0x95, 0x5a, 0xdd, 0x55, 0x52, 0x41, 0x25, 0x4c, 0xa2, 0xaa, 
0xaa, 0xaa, 0x49, 0x42, 0x49, 0x0a, 0x52, 0xab, 0x6a, 0xaa, 0x95, 0x1a, 0x92, 0x22, 0x54, 0x91, 
0xad, 0x55, 0x54, 0x29, 0x10, 0x51, 0x4d, 0x55, 0x55, 0x55, 0x52, 0xa0, 0x49, 0x55, 0x0a, 0x4a, 
0x6a, 0xaa, 0x92, 0x92, 0x45, 0x25, 0x32, 0xae, 0xdd, 0xb5, 0x54, 0x55, 0x2a, 0x92, 0xa9, 0x55, 
0xaa, 0xaa, 0x49, 0x44, 0x10, 0x92, 0xaa, 0xd5, 0xb5, 0x55, 0x55, 0x4a, 0x91, 0x48, 0x92, 0x48, 
0xab, 0x55, 0x54, 0x21, 0x44, 0x48, 0x95, 0x36, 0xd6, 0xaa, 0xa5, 0x21, 0x24, 0x2a, 0x49, 0x25, 
0x5a, 0xaa, 0xa2, 0x94, 0x12, 0x95, 0x4a, 0xd5, 0x5a, 0xd5, 0x5a, 0xac, 0x92, 0x92, 0xaa, 0xaa, 
0xaa, 0xaa, 0x14, 0x42, 0xa4, 0x4a, 0x55, 0xab, 0xeb, 0x6b, 0x52, 0x92, 0x49, 0x49, 0x24, 0x49, 
0xb5, 0x55, 0x52, 0x94, 0x09, 0x25, 0x55, 0x56, 0xad, 0xb5, 0x55, 0x55, 0x24, 0x24, 0x92, 0xa4, 
0xaa, 0xaa, 0xa4, 0x41, 0x52, 0x90, 0x92, 0x6d, 0x75, 0x55, 0x6a, 0xa4, 0x92, 0x92, 0xa9, 0x2a, 
0xad, 0xaa, 0x49, 0x14, 0x04, 0x4a, 0xaa, 0xad, 0xae, 0xed, 0x95, 0x52, 0x54, 0xaa, 0x45, 0x49, 
0x6a, 0xaa, 0xa4, 0xa2, 0xa9, 0x2a, 0x4a, 0xb6, 0xd2, 0x12, 0x2a, 0x8a, 0x92, 0x45, 0x54, 0xa4, 
0xaa, 0xaa, 0x92, 0x10, 0x42, 0x45, 0x25, 0x55, 0x2d, 0xa0, 0x80, 0x54, 0xa9, 0x29, 0x2a, 0x55, 
0xb6, 0xd5, 0x54, 0xa5, 0x29, 0x28, 0xaa, 0x95, 0x64, 0x08, 0x24, 0x12, 0x92, 0x95, 0x52, 0x92, 
0xaa, 0xaa, 0x4a, 0x48, 0x84, 0x92, 0x48, 0x44, 0x90, 0xa2, 0x01, 0x00, 0x48, 0xa9, 0x6a, 0x4a, 
0xad, 0x55, 0x21, 0x25, 0x29, 0x49, 0x04, 0x90, 0x04, 0x00, 0x88, 0x42, 0x05, 0x06, 0xa9, 0x54, 
0xb5, 0xb5, 0x94, 0x90, 0x84, 0x00, 0x50, 0x02, 0x20, 0x92, 0x12, 0x10, 0x20, 0x59, 0x55, 0x22, 
0xaa, 0xd5, 0x52, 0x04, 0x20, 0x92, 0x02, 0x48, 0x00, 0x00, 0x41, 0x4a, 0x80, 0x05, 0x55, 0x5a, 
0xb7, 0x56, 0xa9, 0x40, 0x82, 0x00, 0x00, 0x00, 0x89, 0x28, 0x0a, 0x20, 0x09, 0x02, 0xaa, 0x45, 
0xaa, 0xaa, 0xaa, 0x28, 0x08, 0x09, 0x54, 0x42, 0x00, 0x00, 0x00, 0x94, 0xa4, 0x48, 0xaa, 0xa8, 
0xba, 0xda, 0xd5, 0x42, 0x20, 0x40, 0x01, 0x08, 0x08, 0x01, 0x25, 0x00, 0x08, 0x96, 0xaa, 0x25, 
0xd7, 0x6b, 0x55, 0x10, 0x01, 0x0a, 0x20, 0x20, 0x00, 0x00, 0x09, 0x55, 0x42, 0x48, 0xa9, 0x55, 
0x59, 0x55, 0x55, 0xc9, 0x22, 0x20, 0x8a, 0x00, 0x00, 0x04, 0x84, 0x90, 0x29, 0x76, 0x55, 0x24, 
0xae, 0xda, 0xb5, 0x24, 0x88, 0x84, 0x20, 0x84, 0x00, 0x00, 0x12, 0x45, 0x95, 0x55, 0x49, 0x55, 
0xeb, 0x6d, 0xad, 0xb0, 0x02, 0x11, 0x00, 0x10, 0x20, 0x10, 0x09, 0x28, 0xaa, 0xaa, 0xaa, 0x94, 
0x5a, 0xaa, 0xd5, 0x4a, 0xa8, 0x00, 0x12, 0xa0, 0x04, 0x82, 0x54, 0x92, 0xaa, 0xaa, 0x54, 0xaa, 
0xad, 0xb6, 0xb6, 0xaa, 0x01, 0x20, 0x41, 0x01, 0x00, 0x00, 0x02, 0x4a, 0xa9, 0x55, 0x4a, 0xa5, 
0xd6, 0xda, 0xd5, 0x54, 0xa2, 0x05, 0x08, 0xa0, 0x22, 0x10, 0xaa, 0xa9, 0x4a, 0xad, 0x55, 0x54, 
0x7b, 0x56, 0xaa, 0xaa, 0x08, 0x00, 0x02, 0x14, 0x00, 0x45, 0x2a, 0x94, 0xa5, 0x55, 0x54, 0xab, 
0xaa, 0xeb, 0x76, 0xd0, 0x90, 0x20, 0xa4, 0x89, 0x09, 0x08, 0xaa, 0xa5, 0x1a, 0xd5, 0x55, 0x54, 
0xad, 0x5d, 0xad, 0x20, 0x22, 0x08, 0x00, 0x40, 0xa4, 0xf3, 0x45, 0x51, 0x55, 0x55, 0x55, 0x2a, 
0xdb, 0xaa, 0xd6, 0xdf, 0x48, 0xa2, 0x04, 0x95, 0x2b, 0x0c, 0x30, 0x8a, 0x55, 0x6a, 0xaa, 0xa5, 
0x6d, 0x76, 0xbb, 0x54, 0xa0, 0x08, 0x90, 0x00, 0x48, 0xa2, 0x8a, 0x52, 0xab, 0x55, 0x55, 0x55, 
0xb6, 0xdb, 0x55, 0x6a, 0x95, 0x50, 0x01, 0x2a, 0x02, 0x29, 0x55, 0x0a, 0xad, 0x55, 0x55, 0x54, 
0xdb, 0x6d, 0xed, 0xaa, 0xd5, 0x05, 0x48, 0x00, 0xa8, 0x84, 0x08, 0xb5, 0x55, 0xaa, 0xaa, 0xab, 
0x55, 0xb5, 0x36, 0xb6, 0xa8, 0xb2, 0x22, 0xa8, 0x02, 0x2a, 0xa2, 0x4a, 0xaa, 0xad, 0xaa, 0xaa, 
0xda, 0xd6, 0xd5, 0x55, 0x56, 0x94, 0x88, 0x02, 0xa9, 0x41, 0x15, 0x55, 0x6d, 0x55, 0x55, 0x55, 
0x6f, 0x5b, 0x6d, 0xda, 0xa9, 0x52, 0xa5, 0x54, 0x84, 0x2a, 0x55, 0x5a, 0xb5, 0x6a, 0xaa, 0xaa, 
0xb5, 0x6d, 0xb6, 0xad, 0xaa, 0xa9, 0x10, 0x89, 0x25, 0x05, 0x52, 0xab, 0x55, 0xad, 0x55, 0x55, 
0xd6, 0xd6, 0xdb, 0x6a, 0xb5, 0x55, 0x4a, 0x50, 0x91, 0x69, 0x55, 0xb5, 0xaa, 0xaa, 0xda, 0xaa, 
0x5b, 0x7b, 0x6d, 0xb6, 0xd6, 0xaa, 0xaa, 0xa6, 0x4d, 0x4a, 0xaa, 0xad, 0x55, 0x55, 0x55, 0x55, 
0xad, 0xaa, 0xb6, 0xab, 0x5a, 0xd5, 0x52, 0xaa, 0xa2, 0xaa, 0xb5, 0x55, 0x5b, 0x6d, 0x55, 0x6a, 
0xf5, 0x57, 0xda, 0xfa, 0xab, 0x5a, 0xad, 0x55, 0x5a, 0xaa, 0xd7, 0x6a, 0xd5, 0x55, 0xaa, 0xaa, 
0x56, 0xed, 0x57, 0x4d, 0xed, 0x6d, 0x6a, 0xaa, 0xa6, 0xab, 0x59, 0xad, 0x6d, 0xaa, 0xaa, 0xaa, 
0xad, 0xb5, 0x7a, 0xf6, 0xb5, 0xab, 0x55, 0x5a, 0xb5, 0xb5, 0x56, 0xb5, 0xaa, 0xb6, 0xb5, 0x55, 
0xb6, 0xaf, 0xab, 0x5b, 0x56, 0xb5, 0x56, 0xd6, 0xd5, 0x55, 0xaa, 0xaa, 0xb6, 0xda, 0xaa, 0xaa, 
0xab, 0x75, 0x6d, 0xad, 0xba, 0xdb, 0xbb, 0x5a, 0xab, 0x6a, 0xda, 0xad, 0xab, 0x55, 0x55, 0xaa, 
0xb5, 0xad, 0xb6, 0xf6, 0xd7, 0x6d, 0x6a, 0xab, 0x6d, 0xae, 0xab, 0x6a, 0xda, 0xaa, 0xda, 0xaa, 
0xde, 0xd6, 0xdb, 0x55, 0x6a, 0xb5, 0xad, 0xdd, 0xb5, 0x55, 0x6d, 0xad, 0x6d, 0xb6, 0xaa, 0xaa, 
0x53, 0x7b, 0x6d, 0xbb, 0xbb, 0xad, 0x6a, 0xaa, 0xaa, 0xdb, 0x55, 0x57, 0xaa, 0xd5, 0x55, 0x55, 
0xad, 0x4d, 0xb6, 0xd6, 0xd5, 0x76, 0xb7, 0x76, 0xdb, 0x6a, 0xb6, 0xea, 0xb6, 0xaa, 0xaa, 0xaa, 
0xb6, 0xf5, 0x5b, 0x6d, 0x5e, 0xd5, 0xda, 0xab, 0x55, 0x55, 0xab, 0x3a, 0xd5, 0x55, 0x55, 0x55, 
0xdb, 0x56, 0xed, 0xb7, 0x6b, 0x5e, 0xad, 0xb5, 0x6e, 0xb6, 0xb5, 0xd7, 0x5b, 0x6d, 0xaa, 0xaa, 
0x55, 0xbb, 0x56, 0xda, 0xda, 0xea, 0xea, 0xdd, 0xb5, 0xab, 0x5d, 0x5a, 0xaa, 0xb5, 0x5a, 0xaa, 
0xad, 0x55, 0xbb, 0x6d, 0xb7, 0x5b, 0x5f, 0x6a, 0xd5, 0x6d, 0xeb, 0x6b, 0x6d, 0xaa, 0xaa, 0xaa, 
0xb6, 0xee, 0xd6, 0xb6, 0xda, 0xed, 0xb5, 0x57, 0x5b, 0x5a, 0xad, 0xad, 0xb6, 0xaa, 0xaa, 0xaa, 
0xab, 0x55, 0x7b, 0xdb, 0x6d, 0xb6, 0xd5, 0xb5, 0x6d, 0xad, 0x56, 0xb6, 0xd5, 0x56, 0xd5, 0x55, 
0xba, 0xbb, 0xad, 0x6d, 0xb6, 0xdb, 0x7e, 0xdb, 0xaa, 0xf7, 0xba, 0xda, 0xaa, 0xda, 0xaa, 0xaa};
static const uint8_t  PROGMEM image_data_20190410_114710[] = {0xff, 0xff, 0xff, 0xfb, 0x55, 0x55, 0x55, 0x55, 0x56, 0xdb, 0x6e, 0xdb, 0x7b, 0xdb, 0x55, 0x55, 
0xfe, 0xf7, 0x76, 0xd5, 0x52, 0x4a, 0xaa, 0xad, 0xbb, 0x6d, 0xfb, 0xff, 0xd6, 0xf6, 0xea, 0x8a, 
0xdb, 0xdd, 0xff, 0x55, 0xaa, 0xa9, 0x2a, 0xb7, 0xef, 0xff, 0x5e, 0xad, 0xff, 0x5f, 0xbd, 0x69, 
0xff, 0x7f, 0xaa, 0xaa, 0x49, 0x25, 0x56, 0xed, 0x7a, 0xb7, 0xf7, 0xff, 0x5b, 0xea, 0xd6, 0xaa, 
0xb5, 0xea, 0xf5, 0x55, 0x24, 0xaa, 0xfb, 0xbf, 0xaf, 0xfd, 0xdf, 0xeb, 0xfe, 0xbf, 0x75, 0x55, 
0xef, 0x7f, 0xad, 0x52, 0xb5, 0x5b, 0xae, 0xed, 0xfe, 0xdf, 0x7d, 0xbf, 0x6b, 0xeb, 0xdd, 0xaa, 
0xbb, 0xab, 0xf5, 0x55, 0x4b, 0xad, 0x7b, 0xbf, 0x77, 0xf7, 0xf7, 0xfd, 0xff, 0xbe, 0xb6, 0xa9, 
0xed, 0xfd, 0x5b, 0x5a, 0xb5, 0x77, 0xd7, 0xf7, 0xff, 0xfd, 0xdf, 0x6f, 0xda, 0xf7, 0xef, 0xed, 
0xb6, 0xab, 0x6d, 0x6b, 0x5e, 0xdd, 0x7e, 0xdd, 0xdd, 0xbf, 0xfd, 0xfd, 0x7f, 0xdd, 0x5a, 0xb6, 
0xdb, 0xb6, 0xd6, 0xad, 0xeb, 0x77, 0xff, 0xff, 0xff, 0xee, 0xf7, 0xdf, 0xd6, 0xf7, 0xbd, 0xdb, 
0x6d, 0x6d, 0xb5, 0xf6, 0xbd, 0xdd, 0xb6, 0xfe, 0xef, 0xbf, 0xbf, 0x75, 0xbd, 0xad, 0x6b, 0x6d, 
0xb5, 0xab, 0x5a, 0xad, 0xd7, 0x7f, 0xff, 0xdb, 0xfd, 0xfb, 0xf7, 0xde, 0xf7, 0x76, 0xdd, 0xb6, 
0xaa, 0xb5, 0x6f, 0x77, 0x7d, 0xf7, 0xdf, 0xff, 0xbf, 0xee, 0xdd, 0x77, 0xbb, 0xbb, 0xb6, 0xdb, 
0xb6, 0xd6, 0xb5, 0xbd, 0xef, 0xfe, 0xfb, 0x7f, 0xf6, 0xff, 0xff, 0xdd, 0xdd, 0x6d, 0x6b, 0x6d, 
0xaa, 0xab, 0xdb, 0xd7, 0xbf, 0xbf, 0xff, 0xed, 0xdf, 0xbb, 0x6b, 0x76, 0xeb, 0xb6, 0xdd, 0x55, 
0xaa, 0xbd, 0x6e, 0xfe, 0xfb, 0xed, 0xb7, 0x7f, 0x7d, 0xef, 0xfd, 0xdb, 0x5d, 0x55, 0x6a, 0xda, 
0x57, 0x66, 0xdb, 0x6f, 0xfe, 0xff, 0xfd, 0xeb, 0xf7, 0xbd, 0xaf, 0x6d, 0xaa, 0xdb, 0x55, 0x6b, 
0xea, 0xdb, 0xbf, 0xfd, 0xdf, 0xf7, 0xdf, 0xbf, 0x7e, 0xf7, 0x75, 0xb6, 0xd5, 0x55, 0x56, 0xaa, 
0x36, 0xbd, 0xeb, 0x6f, 0xf7, 0x5e, 0xfe, 0xfd, 0xdb, 0xde, 0xde, 0xdb, 0x6d, 0x55, 0x55, 0x55, 
0xd5, 0xd6, 0xbf, 0xfe, 0xff, 0xff, 0xef, 0xef, 0xff, 0x7b, 0xf5, 0xb5, 0x55, 0xaa, 0xaa, 0xaa, 
0xae, 0xbb, 0xed, 0x6f, 0xdd, 0xfb, 0x7b, 0xfe, 0xd7, 0xee, 0xae, 0xdb, 0x6a, 0xb5, 0x55, 0x55, 
0xb5, 0xd6, 0xbb, 0xfb, 0x7f, 0xdf, 0xff, 0x6b, 0xfd, 0x7b, 0xf5, 0xad, 0xad, 0x55, 0x55, 0x55, 
0xdf, 0x7b, 0xdf, 0x6f, 0xf7, 0x7f, 0xdd, 0xff, 0x6f, 0xde, 0xbe, 0xea, 0xaa, 0xaa, 0xaa, 0xaa, 
0x75, 0xad, 0x77, 0xfd, 0xdf, 0xf6, 0xf7, 0xbd, 0xfb, 0x77, 0xd5, 0xb6, 0xb5, 0xaa, 0xa9, 0x57, 
0xde, 0xd7, 0xbd, 0xb7, 0xfd, 0xdf, 0xff, 0xef, 0xaf, 0xda, 0xee, 0xda, 0xd5, 0x55, 0x55, 0x55, 
0xb7, 0x7d, 0xee, 0xff, 0x77, 0xfd, 0xb6, 0xfb, 0xfa, 0xf7, 0x5b, 0x6b, 0x55, 0x55, 0x4a, 0xaa, 
0xfb, 0xd7, 0x7b, 0xdb, 0xde, 0xdf, 0xff, 0xbe, 0xbf, 0x5d, 0xed, 0xad, 0x5a, 0xaa, 0x55, 0x5d, 
0xde, 0xff, 0xde, 0xfe, 0xfb, 0xf6, 0xd5, 0xeb, 0xeb, 0xef, 0x5b, 0x6a, 0xa5, 0x55, 0x55, 0x57, 
0xfb, 0xba, 0xeb, 0x57, 0xbf, 0x5f, 0xff, 0x7f, 0x7d, 0x75, 0xed, 0xb5, 0xba, 0xaa, 0xaa, 0xb5, 
0xbf, 0xee, 0xbf, 0xfd, 0xeb, 0xfa, 0xad, 0xd5, 0xd7, 0xbe, 0xb6, 0xdd, 0x55, 0xaa, 0x95, 0x6e, 
0xf7, 0x70, 0x0a, 0xb7, 0x7e, 0xdf, 0xfb, 0x7f, 0x7d, 0xd5, 0xb5, 0x56, 0xd6, 0x40, 0x55, 0xb7, 
0xff, 0x84, 0x81, 0xee, 0xdb, 0xb5, 0x5f, 0xd5, 0xd6, 0xbb, 0x5f, 0xb5, 0x69, 0x2b, 0x56, 0xdb, 
0xdd, 0xf5, 0x6a, 0x37, 0xf6, 0xff, 0xf5, 0x7f, 0x7d, 0xee, 0xea, 0xdd, 0xa0, 0x09, 0x5b, 0x6f, 
0xff, 0x5e, 0xa4, 0x8a, 0xbf, 0xb5, 0x5f, 0xd5, 0xd7, 0x5b, 0xbd, 0xaa, 0x09, 0x55, 0x6a, 0xf5, 
0xed, 0xf5, 0xda, 0xa4, 0x4a, 0xef, 0xf5, 0x7f, 0x7d, 0xfd, 0xd6, 0xe8, 0x24, 0xa5, 0x2d, 0xaf, 
0xbf, 0xbf, 0x6a, 0xda, 0xa5, 0x5a, 0xaf, 0xab, 0xd7, 0x56, 0xb5, 0x01, 0x02, 0x9a, 0xd7, 0xfd, 
0xfd, 0xd5, 0xb7, 0x2a, 0xa8, 0x8a, 0xda, 0xdd, 0x7d, 0xed, 0x40, 0x0a, 0x55, 0x4a, 0xaa, 0x5f, 
0xef, 0x7f, 0xfa, 0xd4, 0x95, 0x68, 0x24, 0xaa, 0xc5, 0x10, 0x11, 0x21, 0x54, 0x91, 0x5d, 0xeb, 
0xfd, 0xed, 0x5d, 0x2a, 0xa9, 0x12, 0x90, 0x10, 0x10, 0x22, 0x84, 0x48, 0x2b, 0x6f, 0xef, 0xbe, 
0xb7, 0xff, 0xf6, 0xd5, 0x55, 0x48, 0x85, 0x45, 0x4a, 0x10, 0x52, 0x25, 0x04, 0xba, 0xb5, 0xef, 
0xff, 0x6b, 0xbd, 0xb5, 0x52, 0x52, 0x50, 0x22, 0x01, 0x45, 0x04, 0x92, 0xe8, 0x07, 0xdf, 0x7b, 
0xdd, 0xfe, 0xeb, 0x7e, 0xa9, 0x4a, 0x95, 0x50, 0xa8, 0x10, 0x81, 0x04, 0x1f, 0xbd, 0x7b, 0xde, 
0xf7, 0xbb, 0xbf, 0xd7, 0x56, 0xa2, 0x20, 0x0c, 0x05, 0x42, 0x28, 0x13, 0xd1, 0x77, 0xef, 0x7b, 
0xdf, 0xef, 0xf5, 0xfd, 0xfa, 0xb9, 0x9e, 0x92, 0xa0, 0x14, 0x02, 0xc8, 0x7f, 0xbd, 0x7d, 0xef, 
0xfd, 0xfe, 0xdf, 0x6f, 0x56, 0xd6, 0xd2, 0xca, 0x5e, 0x89, 0xfa, 0x77, 0xab, 0xef, 0xdf, 0xbd, 
0xb7, 0x77, 0xf7, 0xfb, 0xff, 0x7b, 0x6d, 0x6a, 0xa2, 0xf6, 0xad, 0xba, 0xfd, 0x7d, 0xf6, 0xff, 
0xff, 0xde, 0xdd, 0x5e, 0xed, 0xee, 0xb7, 0xbb, 0xde, 0x9b, 0xf7, 0xdf, 0xaf, 0xef, 0xbf, 0xeb, 
0xdb, 0x7f, 0xff, 0xfb, 0xff, 0xbb, 0xfd, 0xee, 0xbb, 0xee, 0xbd, 0xf6, 0xfd, 0xbd, 0xed, 0xbf, 
0xff, 0xf7, 0x77, 0xdf, 0xb6, 0xff, 0xaf, 0x7b, 0xee, 0xbb, 0xdf, 0x7f, 0xf7, 0xff, 0xbf, 0xfd, 
0xad, 0xdf, 0xfe, 0xfd, 0xff, 0xed, 0xfb, 0xdf, 0x7b, 0xfe, 0xf7, 0xdb, 0x7f, 0xdb, 0xf6, 0xd7, 
0xff, 0x7d, 0xb7, 0xef, 0xdd, 0xbf, 0xbf, 0x7d, 0xef, 0xdb, 0xdd, 0xff, 0xdd, 0xfe, 0xdf, 0xff, 
0xb5, 0xf7, 0xfe, 0xfe, 0xff, 0xfd, 0xed, 0xf7, 0xfe, 0xff, 0xff, 0xbb, 0xff, 0x77, 0xfd, 0xbb, 
0xff, 0xbf, 0x7b, 0xdb, 0xef, 0xef, 0xff, 0xff, 0x77, 0xdd, 0xbe, 0xff, 0x77, 0xdf, 0xbf, 0xfe, 
0xad, 0xfb, 0xef, 0xff, 0xba, 0xfe, 0xde, 0xdd, 0xdf, 0x7f, 0xf7, 0xef, 0xfd, 0xfe, 0xf6, 0xd7, 
0xfb, 0xbf, 0xbf, 0x7e, 0xff, 0xbb, 0xfb, 0xf7, 0xfd, 0xf6, 0xff, 0xfd, 0xb7, 0xf7, 0xff, 0xfd, 
0xb7, 0xed, 0xfd, 0xef, 0xff, 0xff, 0xef, 0xdf, 0xf7, 0xdf, 0xdb, 0x77, 0xff, 0x7f, 0x6d, 0xbf, 
0xfe, 0xdf, 0x6f, 0xfb, 0xdb, 0xde, 0xff, 0x7e, 0xdf, 0xfd, 0xff, 0xdf, 0xff, 0xdb, 0xff, 0xeb, 
0xad, 0xfb, 0xff, 0x7f, 0x7e, 0xf7, 0xbd, 0xfb, 0xfe, 0xef, 0xbd, 0xfe, 0xdb, 0x7f, 0x6d, 0xbf, 
0xff, 0x6f, 0x77, 0xdd, 0xff, 0xfe, 0xf7, 0xef, 0xf7, 0xbf, 0xf7, 0xfb, 0xff, 0xfd, 0xff, 0xfb, 
0xb5, 0xfd, 0xfd, 0xff, 0xf7, 0xbb, 0xff, 0xbf, 0x7f, 0xfd, 0xdf, 0x6f, 0xee, 0xef, 0xed, 0x6e, 
0xff, 0xb7, 0xdf, 0xb7, 0xde, 0xff, 0xde, 0xfd, 0xdd, 0xf7, 0x7f, 0xff, 0x7f, 0xfb, 0x7f, 0xfb, 
0xab, 0x7e, 0xf6, 0xff, 0x7f, 0xef, 0x7b, 0xf7, 0xff, 0x7f, 0xfb, 0xbd, 0xf7, 0x6f, 0xdb, 0x5f, 
0xfe, 0xeb, 0xdf, 0xfd, 0xfb, 0xbd, 0xff, 0xdf, 0xed, 0xef, 0xde, 0xf7, 0xdf, 0xfe, 0xff, 0xf5, 
0xb7, 0xff, 0x7f, 0xdf, 0xff, 0xff, 0xee, 0xfe, 0xff, 0xfd, 0x7f, 0xff, 0xfd, 0xb7, 0xb5, 0x5f};
void setup() {
  Serial.begin(115200);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pause for 2 seconds
 
  // Clear the buffer.
 
  
  // Draw bitmap on the screen
 
}
 
void loop() {
   display.drawBitmap(0, 0, image_data_20190410_114707, 128, 64, 1);
  display.display();
  delay(1500);
  display.drawBitmap(0, 0, image_data_20190410_114708, 128, 64, 1);
  display.display();
  delay(1000);
  display.drawBitmap(0, 0, image_data_20190410_114709, 128, 64, 1);
  display.display();
  delay(1000);
  display.drawBitmap(0, 0, image_data_20190410_114710, 128, 64, 1);
  display.display();
  delay(700);
   display.clearDisplay();
}
