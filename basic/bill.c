#include <stdio.h>

int main() {
  int amount, result;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);
  result = amount / 20;
  amount = amount % 20;
  printf("$20 bills: %d\n", result);

  result = (amount) / 10;
  amount = amount % 10;
  printf("$10 bills: %d\n", result);

  result = (amount) / 5;
  amount = amount % 5;
  printf("$5 bills: %d\n", result);

  result = (amount) / 1;
  printf("$1 bills: %d\n", result);
  return 0;
}
