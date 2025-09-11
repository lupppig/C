#include <stdio.h>

int main() {
  printf("Enter a message: ");
  int count = 0;
  char ch;

  while (getchar() != '\n')
    count += 1;

  printf("Your message was %d character(s) long\n", count);
  return 0;
}
