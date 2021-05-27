#include "csmith.h"
struct a {
  int16_t b;
};
union c {
  uint8_t d;
};
static int *e(union c);
static int64_t f(uint16_t);
static int8_t g(int32_t *, int32_t);
static int8_t h(void) {
  union c a;
  e(a);
}
int *e(union c k) { l(f(k.d), k.d); }
int64_t f(uint16_t m) {
  int32_t n = 0;
  int32_t *o = &n;
  for (; m != 8; m++)
    g(o, p());
}
int8_t g(int32_t *q, int32_t) {
  int32_t r[0];
  int i, j;
  for (; i < 7; i++)
    ;
  if (*q) {
    int32_t s;
    struct a t[180] = {};
    struct a *u = t, *v = &u;
    int w;
    int *b;
    for (; i < 3; i++)
      for (; j;)
        b[i] = w;
    if (s) {
      uint16_t c[1];
    }
  } else
    for (;;)
      *q ^= r[0];
}
int main(void) { h(); }
