// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

double pown(double value, uint16_t n) {
  return pow (value, n);
}

uint64_t fact(uint16_t n) {
  double f = 1;
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
double expp = 1;
  for (int i = 1; i <= count; i++) {
    expp += calcItem(x, i);
  }
  return expp;
}
double sinn(double x, uint16_t count) {
double sine;
    if (count == 1) {
        return x;
    } else {
        sine = (pown(-1, count - 1) * calcItem(x, 2 * count - 1));
        return sine + sinn(x, count - 1);
    }
}
double cosn(double x, uint16_t count) {
 double coss;
    if (count == 1) {
        return 1;
    } else {
        coss = (pown(-1, count - 1) * calcItem(x, 2 * count - 2));
        return coss + cosn(x, count - 1);
    }
}
