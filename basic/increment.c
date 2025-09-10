#include <stdio.h>

int main() {
  int i, k, j;

  i = 1;
  printf("i is %d\n", i++);
  printf("i is %d\n", i);

  // i should be 3
  printf("i is %d\n", ++i);
  printf("i is %d\n", i);

  i = 1;
  j = 2;

  // k to be 4
  k = ++i + j++;
  printf("k is %d\n", k);

  i = 2;
  j = i * i++; // i * i++; i * (2); 3 * 2 = 6

  i = 2;

  j = i * ++i; // i * ++i; i * 3; 3 * 3 = 9

  printf("j is %d\n", j);

  return 0;
}
