#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

  // Rangos de tipos signed

  printf("Rango de char signed: %d a %d\n", CHAR_MIN, CHAR_MAX);
  printf("Rango de short signed: %d a %d\n", SHRT_MIN, SHRT_MAX);
  printf("Rango de int signed: %d a %d\n", INT_MIN, INT_MAX);
  printf("Rango de long signed: %ld a %ld\n", LONG_MIN, LONG_MAX);

  // Rangos de tipos unsigned

  printf("Rango de char unsigned: 0 a %u\n", UCHAR_MAX);
  printf("Rango de short unsigned: 0 a %u\n", USHRT_MAX);
  printf("Rango de int unsigned: 0 a %u\n", UINT_MAX);
  printf("Rango de long unsigned: 0 a %lu\n", ULONG_MAX);

  // Rango de tipo de punto flotante (float)

  printf("Rango inferior de float: %e\n", FLT_MIN);
  printf("Rango superior de float: %e\n", FLT_MAX);

  return 0;
}

