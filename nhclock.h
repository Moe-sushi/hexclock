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
// clang-format off
#define hash0  "  ● ●"
#define hash1  "●●●●●"
#define hash2  " ● ● "
#define hash3  "●●●●●"
#define hash4  "● ●  "
#define zero0  " ●●● "
#define zero1  "●   ●"
#define zero2  "●   ●"
#define zero3  "●   ●"
#define zero4  " ●●● "
#define one0   "  ●  "
#define one1   " ●●  "
#define one2   "  ●  "
#define one3   "  ●  "
#define one4   "  ●  "
#define two0   " ●●● "
#define two1   "●   ●"
#define two2   "  ●● "
#define two3   " ●   "
#define two4   "●●●●●"
#define three0 "●●●●●"
#define three1 "   ● "
#define three2 "  ●● "
#define three3 "●   ●"
#define three4 " ●●● "
#define four0  "  ●● "
#define four1  " ● ● "
#define four2  "●  ● "
#define four3  "●●●●●"
#define four4  "   ● "
#define five0  "●●●●●"
#define five1  "●    "
#define five2  "●●●● "
#define five3  "    ●"
#define five4  "●●●● "
#define six0   "  ●● "
#define six1   " ●   "
#define six2   "●●●● "
#define six3   "●   ●"
#define six4   " ●●● "
#define seven0 "●●●●●"
#define seven1 "   ● "
#define seven2 "  ●  "
#define seven3 " ●   "
#define seven4 " ●   "
#define eight0 " ●●● "
#define eight1 "●   ●"
#define eight2 " ●●● "
#define eight3 "●   ●"
#define eight4 " ●●● "
#define nine0  " ●●● "
#define nine1  "●   ●"
#define nine2  " ●●●●"
#define nine3  "   ● "
#define nine4  " ●●  "
// clang-format on
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>
struct CHARS {
  char space[256];
  char init[256];
  char line0[1024];
  char line1[1024];
  char line2[1024];
  char line3[1024];
  char line4[1024];
};