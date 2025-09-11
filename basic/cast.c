#include <stdio.h>

int main() {
  int i;
  float f;

  f = 1.234f;
  i = (int)f;

  printf("%d\n", i);

  float quotient;
  int dividend, divisor;

  dividend = 1, divisor = 2;
  quotient = (float)dividend / divisor;

  printf("%f\n", quotient);

  // using cast to avoid overflow

  long v;
  int j = 1000;

  v = j * j;

  printf("%ld\n", v);
  return 0;
}
