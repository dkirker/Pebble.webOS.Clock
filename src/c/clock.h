#pragma once
#include <pebble.h>
#include "global.h"

///////
#if PBL_DISPLAY_WIDTH == 200
/////// 200 x 228

///////
#else
/////// 144 x 168

///////
#endif
///////

bool is_X_in_range( int a, int b, int x );
void draw_clock( void );
void clock_init( Window* window );
void clock_deinit( void );
