#include <immintrin.h>
#include <math.h>


void slow_performance1(double *x, double* re, double* im, int N) {
  int k = 0;
  for (int i = 0; i < N; i+=2) { // N is divisible by 2
    re[k] = x[i];
    im[k] = x[i+1];
    k++;
  }
}
