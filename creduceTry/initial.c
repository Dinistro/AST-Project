#include "csmith.h"
a() {
  uint32_t b[][5][5] = {0, 5, 5, 5, 0, 2, 1, 1, 2, 0, 0, 5, 0, 3, 0, 2, 2,
                        5, 1, 0, 0, 3, 5, 3, 0, 0, 1, 5, 2, 2, 0, 3, 0, 5,
                        0, 0, 2, 1, 1, 2, 0, 5, 5, 5, 0, 2, 1, 1, 2, 0, 0,
                        5, 0, 3, 0, 2, 2, 5, 1, 0, 0, 3, 5, 3, 0, 0, 1, 5,
                        2, 2, 0, 3, 0, 5, 0, 0, 2, 1, 1, 2, 0, 5, 5, 5, 0,
                        2, 1, 1, 2, 0, 0, 5, 0, 3, 0, 2, 2, 5, 1, 0};
  uint32_t *c = &b[3][4][3];
  uint32_t d = &c;
  uint32_t e = &d;
  int f, g;
h:
  if (i(b[3][4][3])) {
    ++*c;
  } else {
    int16_t j[1][1];
    j[f][g] = 0;
    goto h;
  }
}
