#include <stdio.h>

int main(void) {
  long sum = 0, n;
  printf("This program sums a series of integers:\n");
  printf("Enter integers (0 to terminate): ");

  scanf("%ld", &n);

  while (n != 0) {
    sum += n;
    scanf("%ld", &n);
  }

  printf("The sum is: %ld\n", sum);
  return 0;
}
