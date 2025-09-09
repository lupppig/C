#include <stdio.h>

int main() {
  int month, date, year;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &date, &year);

  printf("You enter the date %d%.2d%.2d\n", year, month, date);
  return 0;
}
