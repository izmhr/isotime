#pragma once

#include <pebble.h>
#include "pge/pge.h"
#include "isometric/isometric.h"

// #define DRAW_BG
// #define BENCHMARK

extern GColor g_fg_color;
extern GColor g_bg_color;

#include "drawable/segment.h"
#include "drawable/digit.h"
  
  

#define FRAME_RATE_HIGH 30

#define HOURS_OFFSET 40
#define MINS_OFFSET 25

#define COLOR_SET_YELLOW 0
#define COLOR_SET_RED 1
#define COLOR_SET_BLUE 2
#define COLOR_SET_GREEN 3
#define NUM_COLOR_SETS 4

#define FG_COL_YELLOW GColorOrange
#define BG_COL_YELLOW GColorYellow
#define FG_COL_RED GColorDarkCandyAppleRed
#define BG_COL_RED GColorOrange
#define FG_COL_BLUE GColorBlue
#define BG_COL_BLUE GColorVeryLightBlue
#define FG_COL_GREEN GColorDarkGreen
#define BG_COL_GREEN GColorGreen
