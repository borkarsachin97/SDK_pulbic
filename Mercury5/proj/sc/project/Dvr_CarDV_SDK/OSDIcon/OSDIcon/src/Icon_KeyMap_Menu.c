/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V3.96.
*        Compiled Jul 19 2005, 13:50:35
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: Icon_KeyMap_Menu
* Dimensions:  80 * 32
* NumColors:   3
*
**********************************************************************
*/

#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_KeyMap_Menu[] = {
     0xFFFFFF,0x808080,0x101010
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_KeyMap_Menu = {
  3,	/* number of entries */
  0, 	/* No transparency */
  &ColorsIcon_KeyMap_Menu[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_KeyMap_Menu[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x25, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x25, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x25, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6A, 0xA9, 0xAA, 0xAA, 0xAA, 0xAA, 0xA9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5A, 0xA5, 0x6A, 0xAA, 0xAA, 0xAA, 0xA9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_KeyMap_Menu = {
  80, /* XSize */
  32, /* YSize */
  20, /* BytesPerLine */
  2, /* BitsPerPixel */
  acIcon_KeyMap_Menu,  /* Pointer to picture data (indices) */
  &PalIcon_KeyMap_Menu  /* Pointer to palette */
};

/* *** End of file *** */