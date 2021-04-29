#include <iostream>
#include <stdio.h>

int main(int argc, const char **argv) {
  if(argc == 3) {
	  int sum = 0;
    for (int i = 0; i < 10; ++i) {
      sum += i;
    }
    return sum;
  } else {
    int res = 1;
    res = (res << 18) && argc;
  }
}
