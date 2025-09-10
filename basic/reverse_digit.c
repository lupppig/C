#include <stdio.h>

int main() {
  int i;

  printf("Enter a  two-digit number: ");
  scanf("%d", &i);

  printf("The reversal is: %d%d\n", i % 10, i / 10);

  // reverse 3 digit

  printf("Enter a three-digit number: ");
  scanf("%d", &i);

  printf("The reveral is: %d%d%d\n", i % 10, (i % 100) / 10, i / 100);

  int j, k;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &i, &j, &k);

  printf("%d%d%d\n", k, j, i);
  return 0;
}
