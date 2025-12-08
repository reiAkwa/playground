#include "judge.h"

#include <cmath>

bool prime(int a) {
  for (int i = 2; i < a / 2; ++i) {
    if (a % i == 0) { return false; }
  }

  return true;
}

bool plalindrome(int a) {
  int origin = a;
  int reversed = 0;

  while (a != 0) {
    int remainder = a % 10;
    reversed = reversed * 10 + remainder;
    a /= 10;
  }

  return origin == reversed;
}
