#include <stdio.h>

int main() {
  double x, polynomial;

  scanf("%lf", &x);

  polynomial = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x -
               x * x + 7 * x - 6;

  printf("%lf\n", polynomial);
  return 0;
}
