#include <stdio.h>

int main() {
  float amount, interest, payment, balance;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  interest = 1 + (interest / 100 / 12);
  balance = (amount * interest) - payment;
  printf("Balance remaining after first payment: $%.2f\n", balance);

  balance = (balance * interest) - payment;
  printf("Balance remaining after second payment: $%.2f\n", balance);

  balance = (balance * interest) - payment;
  printf("Balance remaining after third payment: $%.2f\n", balance);

  return 0;
}
