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
// I think you can understand these simple code.
// So I needn't write comments.
// If you can't, you can just rewrite a better one.
// Trust me, it's very very easy.
#include "nhclock.h"
void clear(struct CHARS *chars) {
  chars->line0[0] = '\000';
  chars->line1[0] = '\000';
  chars->line2[0] = '\000';
  chars->line3[0] = '\000';
  chars->line4[0] = '\000';
}
void add_hash(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, hash0);
  strcat(chars->line1, " ");
  strcat(chars->line1, hash1);
  strcat(chars->line2, " ");
  strcat(chars->line2, hash2);
  strcat(chars->line3, " ");
  strcat(chars->line3, hash3);
  strcat(chars->line4, " ");
  strcat(chars->line4, hash4);
}
void add_zero(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, zero0);
  strcat(chars->line1, " ");
  strcat(chars->line1, zero1);
  strcat(chars->line2, " ");
  strcat(chars->line2, zero2);
  strcat(chars->line3, " ");
  strcat(chars->line3, zero3);
  strcat(chars->line4, " ");
  strcat(chars->line4, zero4);
}
void add_one(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, one0);
  strcat(chars->line1, " ");
  strcat(chars->line1, one1);
  strcat(chars->line2, " ");
  strcat(chars->line2, one2);
  strcat(chars->line3, " ");
  strcat(chars->line3, one3);
  strcat(chars->line4, " ");
  strcat(chars->line4, one4);
}
void add_two(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, two0);
  strcat(chars->line1, " ");
  strcat(chars->line1, two1);
  strcat(chars->line2, " ");
  strcat(chars->line2, two2);
  strcat(chars->line3, " ");
  strcat(chars->line3, two3);
  strcat(chars->line4, " ");
  strcat(chars->line4, two4);
}
void add_three(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, three0);
  strcat(chars->line1, " ");
  strcat(chars->line1, three1);
  strcat(chars->line2, " ");
  strcat(chars->line2, three2);
  strcat(chars->line3, " ");
  strcat(chars->line3, three3);
  strcat(chars->line4, " ");
  strcat(chars->line4, three4);
}
void add_four(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, four0);
  strcat(chars->line1, " ");
  strcat(chars->line1, four1);
  strcat(chars->line2, " ");
  strcat(chars->line2, four2);
  strcat(chars->line3, " ");
  strcat(chars->line3, four3);
  strcat(chars->line4, " ");
  strcat(chars->line4, four4);
}
void add_five(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, five0);
  strcat(chars->line1, " ");
  strcat(chars->line1, five1);
  strcat(chars->line2, " ");
  strcat(chars->line2, five2);
  strcat(chars->line3, " ");
  strcat(chars->line3, five3);
  strcat(chars->line4, " ");
  strcat(chars->line4, five4);
}
void add_six(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, six0);
  strcat(chars->line1, " ");
  strcat(chars->line1, six1);
  strcat(chars->line2, " ");
  strcat(chars->line2, six2);
  strcat(chars->line3, " ");
  strcat(chars->line3, six3);
  strcat(chars->line4, " ");
  strcat(chars->line4, six4);
}
void add_seven(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, seven0);
  strcat(chars->line1, " ");
  strcat(chars->line1, seven1);
  strcat(chars->line2, " ");
  strcat(chars->line2, seven2);
  strcat(chars->line3, " ");
  strcat(chars->line3, seven3);
  strcat(chars->line4, " ");
  strcat(chars->line4, seven4);
}
void add_eight(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, eight0);
  strcat(chars->line1, " ");
  strcat(chars->line1, eight1);
  strcat(chars->line2, " ");
  strcat(chars->line2, eight2);
  strcat(chars->line3, " ");
  strcat(chars->line3, eight3);
  strcat(chars->line4, " ");
  strcat(chars->line4, eight4);
}
void add_nine(struct CHARS *chars) {
  strcat(chars->line0, " ");
  strcat(chars->line0, nine0);
  strcat(chars->line1, " ");
  strcat(chars->line1, nine1);
  strcat(chars->line2, " ");
  strcat(chars->line2, nine2);
  strcat(chars->line3, " ");
  strcat(chars->line3, nine3);
  strcat(chars->line4, " ");
  strcat(chars->line4, nine4);
}
void add_number(struct CHARS *chars, int num) {
  switch (num) {
  case 0:
    add_zero(chars);
    break;
  case 1:
    add_one(chars);
    break;
  case 2:
    add_two(chars);
    break;
  case 3:
    add_three(chars);
    break;
  case 4:
    add_four(chars);
    break;
  case 5:
    add_five(chars);
    break;
  case 6:
    add_six(chars);
    break;
  case 7:
    add_seven(chars);
    break;
  case 8:
    add_eight(chars);
    break;
  case 9:
    add_nine(chars);
    break;
  }
}
void print_chars(struct CHARS *chars) {
  printf("\ec\033[?25l");
  printf("%s", chars->space);
  printf("%s", chars->init);
  printf("%s\n", chars->line0);
  printf("%s", chars->init);
  printf("%s\n", chars->line1);
  printf("%s", chars->init);
  printf("%s\n", chars->line2);
  printf("%s", chars->init);
  printf("%s\n", chars->line3);
  printf("%s", chars->init);
  printf("%s\n", chars->line4);
}
void init_chars(struct CHARS *chars, struct tm *now) {
  char buf[128] = {0};
  int tmp = 0;
  strcpy(chars->init, "\033[1;38;2;");
  tmp = now->tm_hour % 10;
  tmp += (now->tm_hour / 10) * 16;
  buf[0] = 0;
  sprintf(buf, "%d", tmp);
  strcat(chars->init, buf);
  strcat(chars->init, ";");
  tmp = now->tm_min % 10;
  tmp += (now->tm_min / 10) * 16;
  buf[0] = 0;
  sprintf(buf, "%d", tmp);
  strcat(chars->init, buf);
  strcat(chars->init, ";");
  tmp = now->tm_sec % 10;
  tmp += (now->tm_sec / 10) * 16;
  buf[0] = 0;
  sprintf(buf, "%d", tmp);
  strcat(chars->init, buf);
  strcat(chars->init, "m");
  struct winsize size;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  unsigned short col = size.ws_col;
  col /= 2;
  col -= 21;
  strcat(chars->init, "\033[");
  buf[0] = 0;
  sprintf(buf, "%d", col);
  strcat(chars->init, buf);
  strcat(chars->init, "G");
  unsigned short row = size.ws_row;
  row /= 2;
  row -= 3;
  chars->space[0] = 0;
  for (unsigned short i = 0; i < row; i++) {
    strcat(chars->space, "\n");
  }
}
int main(int argc, char **argv) {
  struct winsize size;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  if (size.ws_col < 42 || size.ws_row < 6) {
    fprintf(stderr, "\033[31mWindow size too small!\033[0m\n");
    exit(1);
  }
  struct CHARS chars;
  time_t timer;
  struct tm *now;
  while (true) {
    time(&timer);
    now = localtime(&timer);
    sleep(1);
    clear(&chars);
    init_chars(&chars, now);
    add_hash(&chars);
    add_number(&chars, now->tm_hour / 10);
    add_number(&chars, now->tm_hour % 10);
    add_number(&chars, now->tm_min / 10);
    add_number(&chars, now->tm_min % 10);
    add_number(&chars, now->tm_sec / 10);
    add_number(&chars, now->tm_sec % 10);
    print_chars(&chars);
  }
}
