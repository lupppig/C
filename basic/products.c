#include <stdio.h>

int main() {
  int itemNumber, month, date, year;
  float price;
  printf("Enter item number: ");
  scanf("%d", &itemNumber);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &date, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("%d\t$%.2f\t%d/%d/%d\n", itemNumber, price, month, date, year);
  return 0;
}
