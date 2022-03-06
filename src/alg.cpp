// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>


double pown(double value, uint16_t n) {
  return pow (value, n);
}

uint64_t fact(uint16_t n) {
  uint64_t i = 1, hs = 1;
  for (i = 1; i<=n; i++) {
  hs = hs * i;
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
double sinn = 0;
 for (int i = count; i > 0; i--) {
   sinn += pown((-1), i-1)*(pown(x, 2*i-1)/fact(2*i-1));
 }
 return sinn;
}

double cosn(double x, uint16_t count) {
double coss = 0;
  for (int i = count; i > 0; i--) {
    coss += pown((-1), i-1)*(pown(x, 2*i-2)/fact(2*i-2));
  }
  return coss;
}
