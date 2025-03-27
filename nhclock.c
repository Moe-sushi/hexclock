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
static short x = 0;
static short y = 0;
static int offset = 0;
char *hexclock = "      o   o ooooo o   o\n"
                 "      o   o o      o o\n"
                 "      ooooo oooo    o\n"
                 "      o   o o      o o\n"
                 "      o   o ooooo o   o\n"
                 "\n"
                 " ooo  o      ooo   ooo  o   o\n"
                 "o   o o     o   o o   o o  o\n"
                 "o     o     o   o o     ooo\n"
                 "o   o o     o   o o   o o  o\n"
                 " ooo  ooooo  ooo   ooo  o   o";
void __on_exit(int _unused) {
  printf("\033[0m\033[?25h\ec");
  exit(0);
}
void show_logo(void) {
  struct winsize size;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  short col = size.ws_col;
  col /= 2;
  col -= 13;
  short rol = size.ws_row;
  rol /= 2;
  rol -= 4;
  printf("\ec\033[?25l\033[1;38;2;254;228;208m");
  printf("\033[%dH\033[%dG", rol, col);
  for (size_t i = 0; i < strlen(hexclock); i++) {
    if (hexclock[i] != ' ') {
      usleep(9000);
    }
    if (hexclock[i] == '\n') {
      printf("\n\033[%dG", col);
    } else {
      printf("%c", hexclock[i]);
    }
    fflush(stdout);
  }
  sleep(1);
  printf("\033[%dH\033[%dG", rol, col);
  for (size_t i = 0; i < strlen(hexclock); i++) {
    if (hexclock[i] != ' ') {
      if (hexclock[i] == '\n') {
        printf("\n\033[%dG", col);
      } else {
        printf("%s", "x");
      }
      usleep(7000);
    } else {
      printf("%c", ' ');
    }
    fflush(stdout);
  }
  sleep(1);
  printf("\033[%dH\033[%dG", rol, col);
  for (size_t i = 0; i < strlen(hexclock); i++) {
    if (hexclock[i] != ' ') {
      usleep(3000);
    }
    if (hexclock[i] == '\n') {
      printf("\n\033[%dG", col);
    } else {
      printf("%c", hexclock[i]);
    }
    fflush(stdout);
  }
  sleep(1);
  printf("\033[%dH\033[%dG", rol, col);
  for (size_t i = 0; i < strlen(hexclock); i++) {
    if (hexclock[i] != ' ') {
      if (hexclock[i] == '\n') {
        printf("\n\033[%dG", col);
      } else {
        printf("%c", ' ');
        i++;
        i++;
      }
      usleep(7000);
    } else {
      printf("%c", ' ');
    }
    fflush(stdout);
  }
  printf("\033c\033[0m");
  fflush(stdout);
}
void move(void) {
  switch (offset) {
  case 0:
    x += 1;
    offset = 1;
    break;
  case 1:
    y += 1;
    offset = 2;
    break;
  case 2:
    x += 1;
    offset = 3;
    break;
  case 3:
    y += 1;
    offset = 4;
    break;
  case 4:
    x -= 1;
    offset = 5;
    break;
  case 5:
    y -= 1;
    offset = 6;
    break;
  case 6:
    x -= 1;
    offset = 7;
    break;
  case 7:
    y -= 1;
    offset = 0;
    break;
  }
}
void clear(struct CHARS *chars) {
  chars->line0[0] = '\000';
  chars->line1[0] = '\000';
  chars->line2[0] = '\000';
  chars->line3[0] = '\000';
  chars->line4[0] = '\000';
}
void add_number(struct CHARS *chars, int num) {
  struct character character;
  switch (num) {
  case 0:
    character = zero;
    break;
  case 1:
    character = one;
    break;
  case 2:
    character = two;
    break;
  case 3:
    character = three;
    break;
  case 4:
    character = four;
    break;
  case 5:
    character = five;
    break;
  case 6:
    character = six;
    break;
  case 7:
    character = seven;
    break;
  case 8:
    character = eight;
    break;
  case 9:
    character = nine;
    break;
  case 10:
    character = hash;
    break;
  }
  strcat(chars->line0, " ");
  strcat(chars->line0, character.line0);
  strcat(chars->line1, " ");
  strcat(chars->line1, character.line1);
  strcat(chars->line2, " ");
  strcat(chars->line2, character.line2);
  strcat(chars->line3, " ");
  strcat(chars->line3, character.line3);
  strcat(chars->line4, " ");
  strcat(chars->line4, character.line4);
}
void print_chars(struct CHARS *chars) {
  printf("%s%s\n", chars->color, chars->line0);
  printf("%s%s\n", chars->color, chars->line1);
  printf("%s%s\n", chars->color, chars->line2);
  printf("%s%s\n", chars->color, chars->line3);
  printf("%s%s\n", chars->color, chars->line4);
  fflush(stdout);
}
void init_chars(struct CHARS *chars, struct tm *now) {
  char buf[128] = {0};
  float tmp = 0;
  strcpy(chars->color, "\033[1;38;2;");
  tmp = now->tm_hour % 10 * 8 / 5;
  tmp += (now->tm_hour / 10) * 16 * 8 / 5 + 100;
  buf[0] = 0;
  sprintf(buf, "%.0f", tmp);
  strcat(chars->color, buf);
  strcat(chars->color, ";");
  tmp = now->tm_min % 10 * 8 / 5;
  tmp += (now->tm_min / 10) * 16 * 8 / 5 + 100;
  buf[0] = 0;
  sprintf(buf, "%.0f", tmp);
  strcat(chars->color, buf);
  strcat(chars->color, ";");
  tmp = now->tm_sec % 10 * 8 / 5;
  tmp += (now->tm_sec / 10) * 16 * 8 / 5 + 100;
  buf[0] = 0;
  sprintf(buf, "%.0f", tmp);
  strcat(chars->color, buf);
  strcat(chars->color, "m");
  buf[0] = 0;
  sprintf(buf, "\033[%dH\033[%dG", y, x);
  strcat(chars->line0, buf);
  sprintf(buf, "\033[%dH\033[%dG", y + 1, x);
  strcpy(chars->line1, buf);
  sprintf(buf, "\033[%dH\033[%dG", y + 2, x);
  strcpy(chars->line2, buf);
  sprintf(buf, "\033[%dH\033[%dG", y + 3, x);
  strcpy(chars->line3, buf);
  sprintf(buf, "\033[%dH\033[%dG", y + 4, x);
  strcpy(chars->line4, buf);
}
void init(void) {
  struct winsize size;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  if (size.ws_col < 42 || size.ws_row < 6) {
    fprintf(stderr, "\033[31mWindow size too small!\033[0m\n");
    exit(1);
  }
  signal(SIGINT, __on_exit);
  x = size.ws_col;
  x /= 2;
  x -= 23;
  y = size.ws_row;
  y /= 2;
  y -= 1;
  show_logo();
}
int main(int argc, char **argv) {
  init();
  struct CHARS chars;
  time_t timer;
  struct tm *now;
  while (true) {
    time(&timer);
    now = localtime(&timer);
    clear(&chars);
    init_chars(&chars, now);
    add_number(&chars, 10);
    add_number(&chars, now->tm_hour / 10);
    add_number(&chars, now->tm_hour % 10);
    add_number(&chars, now->tm_min / 10);
    add_number(&chars, now->tm_min % 10);
    add_number(&chars, now->tm_sec / 10);
    add_number(&chars, now->tm_sec % 10);
    print_chars(&chars);
    sleep(1);
    if (now->tm_sec % 10 == 0) {
      printf("\ec\033[?25l");
      move();
    }
  }
}
