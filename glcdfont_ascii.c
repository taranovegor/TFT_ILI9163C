#if !defined(_ILI9163_NEWFONTRENDER)
#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#else
 #define PROGMEM
#endif

// Standard ASCII 5x7 font
// printable ACII characters only

const unsigned char glcdFont_ascii[] PROGMEM = {
    0x05,0x08,0x20,0x5E,
    0x0,0x0,0x0,0x0,0x0,
    0x21,0x8,0x42,0x0,0x80,
    0x52,0x94,0x0,0x0,0x0,
    0x52,0xBE,0xAF,0xA9,0x40,
    0x23,0xE8,0xE2,0xF8,0x80,
    0xC6,0x44,0x44,0x4C,0x60,
    0x45,0x28,0x8A,0xC9,0xA0,
    0x31,0x88,0x80,0x0,0x0,
    0x11,0x10,0x84,0x10,0x40,
    0x41,0x4,0x21,0x11,0x0,
    0x25,0x5D,0xF7,0x54,0x80,
    0x1,0x9,0xF2,0x10,0x0,
    0x0,0x0,0x3,0x18,0x88,
    0x0,0x1,0xF0,0x0,0x0,
    0x0,0x0,0x0,0x18,0xC0,
    0x0,0x44,0x44,0x40,0x0,
    0x74,0x67,0x5C,0xC5,0xC0,
    0x23,0x8,0x42,0x11,0xC0,
    0x74,0x42,0xE8,0x43,0xE0,
    0xF8,0x44,0x60,0xC5,0xC0,
    0x11,0x95,0x2F,0x88,0x40,
    0xFC,0x3C,0x10,0xC5,0xC0,
    0x3A,0x21,0xE8,0xC5,0xC0,
    0xF8,0x42,0x22,0x22,0x0,
    0x74,0x62,0xE8,0xC5,0xC0,
    0x74,0x62,0xF0,0x8B,0x80,
    0x0,0x8,0x2,0x0,0x0,
    0x0,0x8,0x2,0x11,0x0,
    0x8,0x88,0x82,0x8,0x20,
    0x0,0x3E,0xF,0x80,0x0,
    0x41,0x4,0x11,0x11,0x0,
    0x74,0x42,0x62,0x0,0x80,
    0x74,0x6B,0x7B,0x41,0xE0,
    0x22,0xA3,0x1F,0xC6,0x20,
    0xF4,0x63,0xE8,0xC7,0xC0,
    0x74,0x61,0x8,0x45,0xC0,
    0xF4,0x63,0x18,0xC7,0xC0,
    0xFC,0x21,0xE8,0x43,0xE0,
    0xFC,0x21,0xE8,0x42,0x0,
    0x7C,0x61,0x9,0xC5,0xE0,
    0x8C,0x63,0xF8,0xC6,0x20,
    0x71,0x8,0x42,0x11,0xC0,
    0x38,0x84,0x21,0x49,0x80,
    0x8C,0xA9,0x8A,0x4A,0x20,
    0x84,0x21,0x8,0x43,0xE0,
    0x8E,0xEB,0x5A,0xC6,0x20,
    0x8C,0x73,0x59,0xC6,0x20,
    0x74,0x63,0x18,0xC5,0xC0,
    0xF4,0x63,0xE8,0x42,0x0,
    0x74,0x63,0x1A,0xC9,0xA0,
    0xF4,0x63,0xEA,0x4A,0x20,
    0x74,0x60,0xE0,0xC5,0xC0,
    0xFD,0x48,0x42,0x10,0x80,
    0x8C,0x63,0x18,0xC5,0xC0,
    0x8C,0x63,0x18,0xA8,0x80,
    0x8C,0x63,0x5A,0xD5,0x40,
    0x8C,0x54,0x45,0x46,0x20,
    0x8C,0x54,0x42,0x10,0x80,
    0xF8,0x44,0xE4,0x43,0xE0,
    0x7A,0x10,0x84,0x21,0xE0,
    0x4,0x10,0x41,0x4,0x0,
    0x78,0x42,0x10,0x85,0xE0,
    0x22,0xA2,0x0,0x0,0x0,
    0x0,0x0,0x0,0x3,0xE0,
    0x63,0x8,0x20,0x0,0x0,
    0x0,0x18,0x27,0x49,0xE0,
    0x84,0x2D,0x98,0xE6,0xC0,
    0x0,0x1D,0x18,0x45,0xC0,
    0x8,0x5B,0x38,0xCD,0xA0,
    0x0,0x1D,0x1F,0xC1,0xC0,
    0x11,0x48,0xE2,0x10,0x80,
    0x0,0x1D,0x39,0xB4,0x2E,
    0x84,0x2D,0x98,0xC6,0x20,
    0x20,0x18,0x42,0x11,0xC0,
    0x10,0x4,0x21,0x49,0x80,
    0x84,0x25,0x4C,0x52,0x40,
    0x61,0x8,0x42,0x11,0xC0,
    0x0,0x35,0x5A,0xD6,0xA0,
    0x0,0x2D,0x98,0xC6,0x20,
    0x0,0x1D,0x18,0xC5,0xC0,
    0x0,0x2D,0x9C,0xDA,0x10,
    0x0,0x1B,0x39,0xB4,0x21,
    0x0,0x2D,0x98,0x42,0x0,
    0x0,0x1F,0x7,0x7,0xC0,
    0x21,0x3E,0x42,0x14,0x40,
    0x0,0x23,0x18,0xCD,0xA0,
    0x0,0x23,0x18,0xA8,0x80,
    0x0,0x23,0x1A,0xD5,0x40,
    0x0,0x22,0xA2,0x2A,0x20,
    0x0,0x23,0x17,0x86,0x2E,
    0x0,0x3E,0x22,0x23,0xE0,
    0x11,0x8,0x82,0x10,0x40,
    0x21,0x8,0x2,0x10,0x80,
    0x41,0x8,0x22,0x11,0x0,
    0x45,0x44,0x0,0x0,0x0,
};
#endif // FONT5X7_H
#endif