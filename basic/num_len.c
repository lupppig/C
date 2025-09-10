#include <stdio.h>

// Use i f statements to test the number
int main() {

  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num <= 9)
    printf("The number %d has 1 digits", num);
  else if (num >= 10 && num < 100)
    printf("The number %d has 2 digits", num);
  else if (num >= 100 && num < 1000)
    printf("The number %d has 3 digits", num);
  else
    printf("The number %d has 4 digits", num);
  return 0;
}
