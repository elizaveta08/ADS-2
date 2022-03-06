// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

double pown(double value, uint16_t n) {
  return pow (value, n);
}

uint64_t fact(uint16_t n) {
  uint16_t f = 1;
  if (n > 1) {
    for (int i = 1; i <= n; i++)
      f = f * i;
    return f;
  } else {
    return 1;
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
double n = 1;
  for (int i = 1; i <= count; i++) {
    n += calcItem(x, i);
  }
  return n;
}

double sinn(double x, uint16_t count) {
double n = 0;
    for (uint16_t c = 1; c <= count; c++) {
        n += pown(-1, c-1) * (pown(x, (2 * c)-1) / fact((2 * c) - 1));
    }
    return  n;
}

double cosn(double x, uint16_t count) {
double n = 0;
    uint64_t c = 1;
    while (c <= count) {
        n += pown(-1, c - 1) * pown(x, (2 * c) - 2) / fact((2 * c) - 2);
        c += 1;
    }
    return  n;
}

