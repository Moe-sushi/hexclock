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
struct character {
  char line0[16];
  char line1[16];
  char line2[16];
  char line3[16];
  char line4[16];
};
struct character hash = {
    .line0 = "  ● ●",
    .line1 = "●●●●●",
    .line2 = " ● ● ",
    .line3 = "●●●●●",
    .line4 = "● ●  ",
};
struct character zero = {
    .line0 = " ●●● ",
    .line1 = "●   ●",
    .line2 = "●   ●",
    .line3 = "●   ●",
    .line4 = " ●●● ",
};
struct character one = {
    .line0 = "  ●  ",
    .line1 = " ●●  ",
    .line2 = "  ●  ",
    .line3 = "  ●  ",
    .line4 = "  ●  ",
};
struct character two = {
    .line0 = " ●●● ",
    .line1 = "●   ●",
    .line2 = "  ●● ",
    .line3 = " ●   ",
    .line4 = "●●●●●",
};
struct character three = {
    .line0 = "●●●●●",
    .line1 = "   ● ",
    .line2 = "  ●● ",
    .line3 = "●   ●",
    .line4 = " ●●● ",
};
struct character four = {
    .line0 = "  ●● ",
    .line1 = " ● ● ",
    .line2 = "●  ● ",
    .line3 = "●●●●●",
    .line4 = "   ● ",
};
struct character five = {
    .line0 = "●●●●●",
    .line1 = "●    ",
    .line2 = "●●●● ",
    .line3 = "    ●",
    .line4 = "●●●● ",
};
struct character six = {
    .line0 = "  ●● ",
    .line1 = " ●   ",
    .line2 = "●●●● ",
    .line3 = "●   ●",
    .line4 = " ●●● ",
};
struct character seven = {
    .line0 = "●●●●●",
    .line1 = "   ● ",
    .line2 = "  ●  ",
    .line3 = " ●   ",
    .line4 = " ●   ",
};
struct character eight = {
    .line0 = " ●●● ",
    .line1 = "●   ●",
    .line2 = " ●●● ",
    .line3 = "●   ●",
    .line4 = " ●●● ",
};
struct character nine = {
    .line0 = " ●●● ",
    .line1 = "●   ●",
    .line2 = " ●●●●",
    .line3 = "   ● ",
    .line4 = " ●●  ",
};
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>
struct CHARS {
  char init[256];
  char line0[1024];
  char line1[1024];
  char line2[1024];
  char line3[1024];
  char line4[1024];
};
