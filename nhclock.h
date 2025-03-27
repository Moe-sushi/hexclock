// SPDX-License-Identifier: MIT
/*
 *
 * This file is part of nothing-hexclock, with ABSOLUTELY NO WARRANTY.
 *
 * MIT License
 *
 * Copyright (c) 2023 Moe-hacker
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *
 */
#ifndef __linux__
#warning "This program is only for Linux"
#endif
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>
struct character {
  char line0[16];
  char line1[16];
  char line2[16];
  char line3[16];
  char line4[16];
};
struct character hash = {
    .line0 = "  o o",
    .line1 = "ooooo",
    .line2 = " o o ",
    .line3 = "ooooo",
    .line4 = "o o  ",
};
struct character zero = {
    .line0 = " ooo ",
    .line1 = "o   o",
    .line2 = "o   o",
    .line3 = "o   o",
    .line4 = " ooo ",
};
struct character one = {
    .line0 = "  o  ",
    .line1 = " oo  ",
    .line2 = "  o  ",
    .line3 = "  o  ",
    .line4 = "  o  ",
};
struct character two = {
    .line0 = " ooo ",
    .line1 = "o   o",
    .line2 = "  oo ",
    .line3 = " o   ",
    .line4 = "ooooo",
};
struct character three = {
    .line0 = "ooooo",
    .line1 = "   o ",
    .line2 = "  oo ",
    .line3 = "o   o",
    .line4 = " ooo ",
};
struct character four = {
    .line0 = "  oo ",
    .line1 = " o o ",
    .line2 = "o  o ",
    .line3 = "ooooo",
    .line4 = "   o ",
};
struct character five = {
    .line0 = "ooooo",
    .line1 = "o    ",
    .line2 = "oooo ",
    .line3 = "    o",
    .line4 = "oooo ",
};
struct character six = {
    .line0 = "  oo ",
    .line1 = " o   ",
    .line2 = "oooo ",
    .line3 = "o   o",
    .line4 = " ooo ",
};
struct character seven = {
    .line0 = "ooooo",
    .line1 = "   o ",
    .line2 = "  o  ",
    .line3 = " o   ",
    .line4 = " o   ",
};
struct character eight = {
    .line0 = " ooo ",
    .line1 = "o   o",
    .line2 = " ooo ",
    .line3 = "o   o",
    .line4 = " ooo ",
};
struct character nine = {
    .line0 = " ooo ",
    .line1 = "o   o",
    .line2 = " oooo",
    .line3 = "   o ",
    .line4 = " oo  ",
};
struct CHARS {
  char color[256];
  char line0[1024];
  char line1[1024];
  char line2[1024];
  char line3[1024];
  char line4[1024];
};
