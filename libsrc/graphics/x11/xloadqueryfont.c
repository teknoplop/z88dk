/*
	Minimal Xlib port
	Stefano Bodrato, 5/3/2007
	
	$Id: xloadqueryfont.c,v 1.1 2007/12/21 08:04:24 stefano Exp $
*/

#ifdef _DEBUG_
  #include <stdio.h>
#endif

#define __HAVESEED
#include <stdlib.h>

#define _BUILDING_X
#include <X11/Xlib.h>

char _Xsmallfont[] = {
3, 1, 0,
2, 6, 0x80 , 0x80 , 0x80 , 0x80 , 0x00 , 0x80 ,
4, 2, 0xA0 , 0xA0 ,
7, 6, 0x48 , 0xFC , 0x48 , 0x48 , 0xFC , 0x48 ,
6, 6, 0x70 , 0xA0 , 0x70 , 0x28 , 0xF0 , 0x20 ,
5, 5, 0x00 , 0x90 , 0x20 , 0x40 , 0x90 ,
7, 6, 0x20 , 0x50 , 0x20 , 0x54 , 0x88 , 0x74 ,
2, 2, 0x80 , 0x80 ,
3, 6, 0x40 , 0x80 , 0x80 , 0x80 , 0x80 , 0x40 ,
4, 6, 0x40 , 0x20 , 0x20 , 0x20 , 0x20 , 0x40 ,
4, 5, 0x00 , 0x40 , 0xE0 , 0x40 , 0xA0 ,
4, 4, 0x00 , 0x40 , 0xE0 , 0x40 ,
3, 7, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x40 , 0x80 ,
4, 3, 0x00 , 0x00 , 0xE0 ,
2, 6, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x80 ,
5, 5, 0x00 , 0x10 , 0x20 , 0x40 , 0x80 ,
// Numbers
5, 6, 0x60 , 0x90 , 0x90 , 0x90 , 0x90 , 0x60  ,
4, 6, 0x40 , 0xC0 , 0x40 , 0x40 , 0x40 , 0xE0  ,
5, 6, 0x60 , 0x90 , 0x10 , 0x60 , 0x80 , 0xF0  ,
5, 6, 0x60 , 0x90 , 0x20 , 0x10 , 0x90 , 0x60  ,
6, 6, 0x10 , 0x30 , 0x50 , 0x90 , 0xF8 , 0x10  ,
5, 6, 0xF0 , 0x80 , 0xE0 , 0x10 , 0x90 , 0x60  ,
5, 6, 0x70 , 0x80 , 0xE0 , 0x90 , 0x90 , 0x60  ,
5, 6, 0xF0 , 0x10 , 0x20 , 0x20 , 0x40 , 0x40  ,
5, 6, 0x60 , 0x90 , 0x60 , 0x90 , 0x90 , 0x60  ,
5, 6, 0x60 , 0x90 , 0x90 , 0x70 , 0x10 , 0xE0  ,
// Symbols
//2, 5, 0x00 , 0x80 , 0x00 , 0x00 , 0x80  ,
//3, 7, 0x00 , 0x40 , 0x00 , 0x00 , 0x00 , 0x40  , 0x80  ,
2, 6, 0x00 , 0x00 , 0x80 , 0x00 , 0x00 , 0x80  ,
3, 7, 0x00 , 0x00 , 0x40 , 0x00 , 0x00 , 0x40  , 0x80  ,
4, 6, 0x00 , 0x20 , 0x40 , 0x80 , 0x40 , 0x20  ,
4, 5, 0x00 , 0x00 , 0xE0 , 0x00 , 0xE0 ,
4, 6, 0x00 , 0x80 , 0x40 , 0x20 , 0x40 , 0x80  ,
5, 6, 0x60 , 0x90 , 0x20 , 0x40 , 0x00 , 0x40  ,
7, 6, 0x78 , 0x84 , 0x34 , 0x54 , 0x54 , 0x38  ,
// Upper Case
5, 6, 0x60 , 0x90 , 0x90 , 0xF0 , 0x90 , 0x90  ,
5, 6, 0xE0 , 0x90 , 0xE0 , 0x90 , 0x90 , 0xE0  ,
5, 6, 0x70 , 0x80 , 0x80 , 0x80 , 0x80 , 0x70  ,
5, 6, 0xC0 , 0xA0 , 0x90 , 0x90 , 0x90 , 0xE0  ,
5, 6, 0xF0 , 0x80 , 0xE0 , 0x80 , 0x80 , 0xF0  ,
5, 6, 0xF0 , 0x80 , 0xE0 , 0x80 , 0x80 , 0x80  ,
5, 6, 0x70 , 0x80 , 0x80 , 0xB0 , 0x90 , 0x60  ,
5, 6, 0x90 , 0x90 , 0xF0 , 0x90 , 0x90 , 0x90  ,

4, 6, 0xE0 , 0x40 , 0x40 , 0x40 , 0x40 , 0xE0  ,
//2, 6, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80  ,

5, 6, 0x10 , 0x10 , 0x10 , 0x90 , 0x90 , 0x60  ,
5, 6, 0x90 , 0xA0 , 0xC0 , 0xA0 , 0x90 , 0x90  ,
5, 6, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0xF0  ,
6, 6, 0x88 , 0xD8 , 0xA8 , 0x88 , 0x88 , 0x88  ,
//6, 6, 0x88 , 0xC8 , 0xA8 , 0x98 , 0x88 , 0x88  ,
5, 6, 0x90 , 0xD0 , 0xB0 , 0x90 , 0x90 , 0x90  ,
5, 6, 0x60 , 0x90 , 0x90 , 0x90 , 0x90 , 0x60  ,
5, 6, 0xE0 , 0x90 , 0x90 , 0xE0 , 0x80 , 0x80  ,
6, 6, 0x70 , 0x88 , 0x88 , 0xA8 , 0x90 , 0x68  ,
5, 6, 0xE0 , 0x90 , 0x90 , 0xE0 , 0x90 , 0x90  ,
5, 6, 0x60 , 0x80 , 0x60 , 0x10 , 0x10 , 0xE0  ,
6, 6, 0xF8 , 0x20 , 0x20 , 0x20 , 0x20 , 0x20  ,
5, 6, 0x90 , 0x90 , 0x90 , 0x90 , 0x90 , 0x60  ,
6, 6, 0x88 , 0x88 , 0x50 , 0x50 , 0x20 , 0x20 ,
8, 6, 0x82 , 0x82 , 0x54 , 0x54 , 0x28 , 0x28 ,
//6, 6, 0x88 , 0x50 , 0x20 , 0x20 , 0x50 , 0x88 ,
//6, 6, 0x88 , 0x50 , 0x20 , 0x20 , 0x40 , 0x80 ,
//6, 6, 0xF8 , 0x10 , 0x20 , 0x20 , 0x40 , 0xF8 ,
5, 6, 0x90 , 0x90 , 0x20 , 0x40 , 0x90 , 0x90 ,
5, 6, 0x90 , 0x90 , 0x50 , 0x20 , 0x40 , 0x80 ,
5, 6, 0xF0 , 0x10 , 0x20 , 0x40 , 0x80 , 0xF0 ,

// Symbols
3, 6, 0xC0 , 0x80 , 0x80 , 0x80 , 0x80 , 0xC0 ,
5, 5, 0x00 , 0x80 , 0x40 , 0x20 , 0x10 ,
4, 6, 0x60 , 0x20 , 0x20 , 0x20 , 0x20 , 0x60 ,
4, 2, 0x40 , 0xA0 ,
4, 7, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0xF0 ,
3, 2, 0x80 , 0x40 ,
// Lower Case
3, 6, 0x00 , 0x00 , 0x80 , 0x40 , 0xC0 , 0xC0  ,
4, 6, 0x80 , 0x80 , 0xC0 , 0xA0 , 0xA0 , 0x40  ,
3, 6, 0x00 , 0x00 , 0x40 , 0x80 , 0x80 , 0x40  ,
4, 6, 0x20 , 0x20 , 0x60 , 0xA0 , 0xA0 , 0x40  ,
4, 6, 0x00 , 0x00 , 0x40 , 0xE0 , 0x80 , 0x40  ,
3, 6, 0x40 , 0x80 , 0xC0 , 0x80 , 0x80 , 0x80  ,
4, 7, 0x00 , 0x00 , 0x40 , 0xA0 , 0x60 , 0x20  , 0xC0  ,
4, 6, 0x80 , 0x80 , 0x80 , 0xC0 , 0xA0 , 0xA0  ,
2, 6, 0x00 , 0x80 , 0x00 , 0x80 , 0x80 , 0x80  ,
//3, 7, 0x00 , 0x00 , 0x40 , 0x00 , 0x40 , 0x40  , 0x80  ,  // smaller 'I'
3, 7, 0x00 , 0x40 , 0x00 , 0x40 , 0x40 , 0x40  , 0x80  ,
4, 6, 0x80 , 0x80 , 0xA0 , 0xC0 , 0xA0 , 0xA0  ,
2, 6, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80  ,
6, 6, 0x00 , 0x00 , 0xD0 , 0xA8 , 0xA8 , 0xA8  ,
4, 6, 0x00 , 0x00 , 0xC0 , 0xA0 , 0xA0 , 0xA0  ,
4, 6, 0x00 , 0x00 , 0x40 , 0xA0 , 0xA0 , 0x40  ,
4, 7, 0x00 , 0x00 , 0xC0 , 0xA0 , 0xC0 , 0x80  , 0x80  ,
4, 7, 0x00 , 0x00 , 0x60 , 0xA0 , 0x60 , 0x20  , 0x20  ,
4, 6, 0x00 , 0x00 , 0xC0 , 0xA0 , 0x80 , 0x80  ,
4, 6, 0x00 , 0x00 , 0x60 , 0x80 , 0x20 , 0xC0  ,
3, 6, 0x80 , 0xC0 , 0x80 , 0x80 , 0x80 , 0x40  ,
4, 6, 0x00 , 0x00 , 0xA0 , 0xA0 , 0xA0 , 0x60  ,
4, 6, 0x00 , 0x00 , 0xA0 , 0xA0 , 0x40 , 0x40  ,
6, 6, 0x00 , 0x00 , 0x88 , 0x88 , 0xA8 , 0x50  ,
4, 6, 0x00 , 0x00 , 0xA0 , 0x40 , 0x40 , 0xA0  ,
5, 7, 0x00 , 0x00 , 0x90 , 0x50 , 0x20 , 0x40  , 0x80  ,
4, 6, 0x00 , 0x00 , 0xE0 , 0x20 , 0x80 , 0xE0  ,
// Symbols
4, 6, 0x60 , 0x40 , 0x80 , 0x40 , 0x40 , 0x60  ,
3, 6, 0x40 , 0x40 , 0x40 , 0x40 , 0x40 , 0x40  ,
5, 6, 0x60 , 0x20 , 0x10 , 0x20 , 0x20 , 0x60  ,
5, 2, 0x50 , 0xA0 ,
0
};


char _Xmidfont[] = { 
3, 1,  0,
2, 9, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x00 , 0x00 , 0x80  ,
4, 3, 0xA0 , 0xA0 , 0xA0  ,
8, 8, 0x00 , 0x44 , 0xFE , 0x44 , 0x44 , 0x44 , 0xFE , 0x44  ,
6, 9, 0x20 , 0x70 , 0xA0 , 0xA0 , 0x70 , 0x28 , 0x28 , 0xF0 , 0x20  ,
8, 9, 0x00 , 0x44 , 0xA8 , 0x48 , 0x10 , 0x10 , 0x24 , 0x2A , 0x44  ,
10, 9, 0x18 , 0x00 , 0x24 , 0x00 , 0x28 , 0x00 , 0x10 , 0x00 , 0x2C , 0x00 , 0x42 , 0x80 , 0x81 , 0x00 , 0x42 , 0x80 , 0x3C , 0x00,
2, 2, 0x80 , 0x80 ,
5, 10, 0x30 , 0x40 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x40 , 0x30  ,
6, 10, 0x60 , 0x10 , 0x08 , 0x08 , 0x08 , 0x08 , 0x08 , 0x08 , 0x10 , 0x60  ,
8, 8, 0x00 , 0x44 , 0x28 , 0x10 , 0xFE , 0x10 , 0x28 , 0x44  ,
8, 8, 0x00 , 0x10 , 0x10 , 0x10 , 0xFE , 0x10 , 0x10 , 0x10  ,
4, 10, 0x00 , 0x00 , 0x00 , 0x00 , 0x0C , 0x00 , 0x00 , 0x40 , 0x40 , 0x80  ,
7, 8, 0x00 , 0x00 , 0x00 , 0x00 , 0xFC , 0x00 , 0x00 , 0x00  ,
3, 9, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x80  ,
8, 8, 0x00 , 0x02 , 0x04 , 0x08 , 0x10 , 0x20 , 0x40 , 0x80  ,
// Numbers
7, 9, 0x38 , 0x44 , 0x84 , 0x84 , 0x84 , 0x84 , 0x84 , 0x84 , 0x78  ,
5, 9, 0x20 , 0x60 , 0xA0 , 0x20 , 0x20 , 0x20 , 0x20 , 0x20 , 0x20  ,
7, 9, 0x78 , 0x84 , 0x04 , 0x08 , 0x10 , 0x20 , 0x40 , 0x80 , 0xFC  ,
7, 9, 0x78 , 0x84 , 0x04 , 0x08 , 0x30 , 0x08 , 0x04 , 0x84 , 0x78  ,
8, 9, 0x18 , 0x28 , 0x28 , 0x48 , 0x48 , 0x88 , 0xFE , 0x08 , 0x08  ,
7, 9, 0xFC , 0x80 , 0x80 , 0xF8 , 0x04 , 0x04 , 0x04 , 0x84 , 0x78  ,
7, 9, 0x3C , 0x40 , 0x80 , 0xB8 , 0xC4 , 0x84 , 0x84 , 0x84 , 0x78  ,
7, 9, 0xFC , 0x04 , 0x08 , 0x08 , 0x10 , 0x10 , 0x20 , 0x20 , 0x40  ,
7, 9, 0x38 , 0x44 , 0x84 , 0x84 , 0x78 , 0x84 , 0x84 , 0x84 , 0x78  ,
7, 9, 0x38 , 0x44 , 0x84 , 0x84 , 0x7C , 0x04 , 0x04 , 0x84 , 0x78  ,
// Symbols
2, 8, 0x00 , 0x00 , 0x00 , 0x80 , 0x00 , 0x00 , 0x00 , 0x80 ,
3, 9, 0x00 , 0x00 , 0x00 , 0x40 , 0x00 , 0x00 , 0x40 , 0x40 , 0x80 ,
5, 8, 0x00 , 0x10 , 0x20 , 0x40 , 0x80 , 0x40 , 0x20 , 0x10 ,
5, 7, 0x00 , 0x00 , 0xF0 , 0x00 , 0x00 , 0x00 , 0xF0 ,
5, 8, 0x00 , 0x80 , 0x40 , 0x20 , 0x10 , 0x20 , 0x40 , 0x80 ,
7, 9, 0x78 , 0x84 , 0x04 , 0x08 , 0x10 , 0x20 , 0x20 , 0x00 , 0x20 ,
11, 9, 0x1E , 0x00 , 0x21 , 0x00 , 0x40 , 0x80 , 0x80 , 0x40 , 0x86 , 0x40 , 0x8A , 0x40 , 0x92 , 0x40 , 0x92 , 0x80 , 0x4F , 0x00 ,
// Upper Case
10, 9, 0x08 , 0x00 , 0x14 , 0x00 , 0x14 , 0x00 , 0x22 , 0x00 , 0x22 , 0x00 , 0x7F , 0x00 , 0x41 , 0x00 , 0x80 , 0x80 , 0x80 , 0x80 ,
8,  9, 0xF8 , 0x84 , 0x82 , 0x82 , 0xFC , 0x82 , 0x82 , 0x82 , 0xFC ,
8,  9, 0x3C , 0x42 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x42 , 0x3C ,
8,  9, 0xF0 , 0x88 , 0x84 , 0x82 , 0x82 , 0x82 , 0x82 , 0x82 , 0xFC ,
8,  9, 0xFE , 0x80 , 0x80 , 0x80 , 0xF0 , 0x80 , 0x80 , 0x80 , 0xFE ,
8,  9, 0xFE , 0x80 , 0x80 , 0x80 , 0xF0 , 0x80 , 0x80 , 0x80 , 0x80 ,
9,  9, 0x3C , 0x00 , 0x42 , 0x00 , 0x80 , 0x00 , 0x80 , 0x00 , 0x80 , 0x00 , 0x87 , 0x00 , 0x81 , 0x00 , 0x42 , 0x00 , 0x3C , 0x00 ,
8,  9, 0x82 , 0x82 , 0x82 , 0x82 , 0xFE , 0x82 , 0x82 , 0x82 , 0x82 ,
4,  9, 0xE0 , 0x40 , 0x40 , 0x40 , 0x40 , 0x40 , 0x40 , 0x40 , 0xE0 ,
9,  9, 0x07 , 0x00 , 0x02 , 0x00 , 0x02 , 0x00 , 0x02 , 0x00 , 0x02 , 0x00 , 0x82 , 0x00 , 0x82 , 0x00 , 0x44 , 0x00 , 0x38 , 0x00 ,
8,  9, 0x82 , 0x84 , 0x88 , 0x90 , 0xE0 , 0x90 , 0x88 , 0x84 , 0x82 ,
8,  9, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0xFE ,
10, 9, 0x80 , 0x80 , 0xC1 , 0x80 , 0xA2 , 0x80 , 0x94 , 0x80 , 0x88 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 ,
8,  9, 0x82 , 0xC2 , 0xA2 , 0x92 , 0x8A , 0x86 , 0x82 , 0x82 , 0x82 ,
9,  9, 0x3C , 0x00 , 0x42 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x42 , 0x00 , 0x3C , 0x00 ,
8,  9, 0xF8 , 0x84 , 0x82 , 0x82 , 0xFC , 0x80 , 0x80 , 0x80 , 0x80 ,
9,  9, 0x3C , 0x00 , 0x42 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x99 , 0x00 , 0x85 , 0x00 , 0x42 , 0x00 , 0x3D , 0x00 ,
8,  9, 0xF8 , 0x84 , 0x82 , 0x82 , 0xE4 , 0x98 , 0x84 , 0x82 , 0x82  ,
8,  9, 0x7C , 0x80 , 0x80 , 0x78 , 0x04 , 0x02 , 0x02 , 0x04 , 0xF8  ,
8,  9, 0xFE , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10  ,
9,  9, 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x81 , 0x00 , 0x42 , 0x00 , 0x3C , 0x00 ,
10, 9, 0x80 , 0x80 , 0x80 , 0x80 , 0x41 , 0x00 , 0x41 , 0x00 , 0x22 , 0x00 , 0x22 , 0x00 , 0x14 , 0x00 , 0x14 , 0x00 , 0x08 , 0x00 ,
14, 9, 0x80 , 0x08 , 0x80 , 0x08 , 0x45 , 0x10 , 0x45 , 0x10 , 0x22 , 0x20 , 0x22 , 0x20 , 0x15 , 0x40 , 0x15 , 0x40 , 0x08 , 0x80 ,
10, 9, 0x80 , 0x80 , 0x41 , 0x00 , 0x22 , 0x00 , 0x14 , 0x00 , 0x08 , 0x00 , 0x14 , 0x00 , 0x22 , 0x00 , 0x41 , 0x00 , 0x80 , 0x80 ,
10, 9, 0x80 , 0x80 , 0x41 , 0x00 , 0x22 , 0x00 , 0x14 , 0x00 , 0x08 , 0x00 , 0x10 , 0x00 , 0x20 , 0x00 , 0x40 , 0x00 , 0x80 , 0x00 ,
10, 9, 0xFF , 0x80 , 0x01 , 0x00 , 0x02 , 0x00 , 0x04 , 0x00 , 0x08 , 0x00 , 0x10 , 0x00 , 0x20 , 0x00 , 0x40 , 0x00 , 0xFF , 0x80 ,
// Symbols
4, 10, 0xE0 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0xE0 ,
11, 10, 0x80 , 0x00 , 0x40 , 0x00 , 0x20 , 0x00 , 0x10 , 0x00 , 0x08 , 0x00 , 0x04 , 0x00 , 0x02 , 0x00 , 0x01 , 0x00 , 0x00 , 0x80 , 0x00 , 0x40 ,
5, 10, 0x70 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x10 , 0x70 ,
6, 10, 0x20 , 0x50 , 0x88 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 ,
7, 10, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0xFE ,
3, 8, 0x80 , 0x80 , 0x40 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 ,
// Lower Case
6, 9, 0x00 , 0x00 , 0x00 , 0x70 , 0x08 , 0x68 , 0x88 , 0x88 , 0x78  ,
6, 9, 0x80 , 0x80 , 0x80 , 0xB0 , 0xC8 , 0x88 , 0x88 , 0x88 , 0xF0  ,
7, 9, 0x00 , 0x00 , 0x00 , 0x38 , 0x44 , 0x80 , 0x80 , 0x84 , 0x78  ,
6, 9, 0x08 , 0x08 , 0x08 , 0x68 , 0x98 , 0x88 , 0x88 , 0x88 , 0x78  ,
6, 9, 0x00 , 0x00 , 0x00 , 0x70 , 0x88 , 0x88 , 0xF0 , 0x80 , 0x78  ,
4, 9, 0x60 , 0x80 , 0x80 , 0xC0 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80  ,
6, 12, 0x00 , 0x00 , 0x00 , 0x30 , 0x48 , 0x88 , 0x88 , 0x88 , 0x78 , 0x08 , 0x08 , 0x70  ,
6, 9, 0x80 , 0x80 , 0x80 , 0xB0 , 0xC8 , 0x88 , 0x88 , 0x88 , 0x88  ,
2, 9, 0x00 , 0x80 , 0x00 , 0xB0 , 0x88 , 0x88 , 0x88 , 0x88 , 0x88  ,
4, 11, 0x20 , 0x00 , 0x00 , 0x20 , 0x20 , 0x20 , 0x20 , 0x20 , 0x20 , 0xA0 , 0x40  ,
6, 9, 0x80 , 0x80 , 0x80 , 0x90 , 0xA0 , 0xC0 , 0xA0 , 0x90 , 0x88 ,
2, 9, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 ,
10, 9, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0xB3 , 0x00 , 0xCC , 0x80 , 0x88 , 0x80 , 0x88 , 0x80 , 0x88 , 0x80 , 0x88 , 0x80  ,
6, 9, 0x00 , 0x00 , 0x00 , 0xB0 , 0xC8 , 0x88 , 0x88 , 0x88 , 0x88  ,
7, 9, 0x00 , 0x00 , 0x00 , 0x38 , 0x44 , 0x84 , 0x84 , 0x84 , 0x78  ,
6, 13, 0x00 , 0x00 , 0x00 , 0xB0 , 0xC8 , 0x88 , 0x88 , 0x88 , 0xF0 , 0x80 , 0x80 , 0x80 , 0x80 ,
6, 13, 0x00 , 0x00 , 0x00 , 0x68 , 0x98 , 0x88 , 0x88 , 0x88 , 0x78 , 0x08 , 0x08 , 0x08 , 0x08 ,
6, 9, 0x00 , 0x00 , 0x00 , 0xB0 , 0xC8 , 0x80 , 0x80 , 0x80 , 0x80  ,
7, 9, 0x00 , 0x00 , 0x00 , 0x70 , 0x80 , 0x70 , 0x08 , 0x08 , 0xF0  ,
4, 9, 0x80 , 0x80 , 0xE0 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x60  ,
6, 9, 0x00 , 0x00 , 0x00 , 0x88 , 0x88 , 0x88 , 0x88 , 0x98 , 0x68  ,
6, 9, 0x00 , 0x00 , 0x00 , 0x88 , 0x88 , 0x88 , 0x50 , 0x50 , 0x20  ,
10, 9, 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x80 , 0x80 , 0x80 , 0x80 , 0x88 , 0x80 , 0x49 , 0x00 , 0x55 , 0x00 , 0x22 , 0x00  ,
7, 9, 0x00 , 0x00 , 0x00 , 0x84 , 0x48 , 0x20 , 0x10 , 0x48 , 0x84  ,
7, 9, 0x00 , 0x00 , 0x00 , 0x84 , 0x48 , 0x50 , 0x20 , 0x40 , 0x80  ,
7, 9, 0x00 , 0x00 , 0x00 , 0xFC , 0x08 , 0x10 , 0x20 , 0x40 , 0xFC  ,

// Symbols
5, 11, 0x30 , 0x40 , 0x40 , 0x20 , 0x20 , 0xC0 , 0x20 , 0x20 , 0x40 , 0x40 , 0x30 ,
2, 10, 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 , 0x80 ,
6, 11, 0x60 , 0x10 , 0x10 , 0x20 , 0x20 , 0x18 , 0x20 , 0x20 , 0x10 , 0x10 , 0x60 ,
7, 10, 0x00 , 0x64 , 0x98 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 ,
24, 25, 0x00 , 0x00 , 0x00 , 0x0F , 0xFF , 0xF0 , 0x08 , 0x00 , 0x10 , 0x0F , 0xFF 
, 0xF0 , 0x02 , 0x00 , 0x40 , 0x02 , 0x00 , 0x40 , 0x02 , 0x8A , 0xC0 , 0x01 
, 0x55 , 0x80 , 0x01 , 0xAA , 0x80 , 0x00 , 0xD5 , 0x00 , 0x00 , 0x6A , 0x00 
, 0x00 , 0x34 , 0x00 , 0x00 , 0x2C , 0x00 , 0x00 , 0x34 , 0x00 , 0x00 , 0x42 
, 0x00 , 0x00 , 0x91 , 0x00 , 0x01 , 0x00 , 0x80 , 0x01 , 0x10 , 0x80 , 0x02 
, 0x00 , 0x40 , 0x02 , 0x10 , 0x40 , 0x02 , 0x28 , 0x40 , 0x0F , 0xFF , 0xF0,
0
};



/*
	Ultra simplified font mgmt - we have 2 fonts only for every request
	only ASCII-7 characters are supported.
*/

XFontStruct Xcommon_myfont;

XFontStruct XLoadQueryFont(Display *display, char *fontname) {
	int fsize;
	
	fsize = atoi(fontname);


//XFontStruct *myfont;
	
	//printf (".. %u ..", XFontStruct->fid);
	//printf (".. %u ..", sizeof (myfont));
	//myfont = malloc (sizeof (struct XFontStruct));
	//if (myfont == 0) return (NULL);
	
	if ( fsize >= 12 )	{
		Xcommon_myfont->fid = _Xmidfont;
		Xcommon_myfont->max_bounds.ascent = 0;
		Xcommon_myfont->max_bounds.descent = fsize + 3;
	}
	else {
		Xcommon_myfont->fid = _Xsmallfont;
		Xcommon_myfont->max_bounds.ascent = 0;
		Xcommon_myfont->max_bounds.descent = fsize + 3;
	}
	
#ifdef _DEBUG_
	printf ("  LoadQueryFont:%u  ", Xcommon_myfont->fid);
#endif
	return Xcommon_myfont;
	
}

/*
Font XLoadFont(int display, char *name) {
}
*/

