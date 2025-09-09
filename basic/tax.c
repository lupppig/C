#include <stdio.h>

int main() {
  float amount, tax_added, tax_rate;

  printf("Enter an amount: ");
  scanf("%f", &amount);

  tax_rate = 0.05f;
  tax_added = amount * (1 + tax_rate);
  printf("with tax added: $%.2f\n", tax_added);

  return 0;
}
