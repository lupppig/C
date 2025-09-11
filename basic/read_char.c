#include <stdio.h>

int main() {
  char ch;

  ch = 'A';
  putchar(ch);
  putchar('\n');

  do {
    scanf("%c", &ch);
    putchar(ch);
  } while (ch != '\n');

  putchar('\n');

  while ((ch = getchar()) != '\n') {
    putchar(ch);
  }

  putchar('\n');
  return 0;
}
