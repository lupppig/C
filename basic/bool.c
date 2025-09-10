#include <stdio.h>

#define TRUE 1;
#define False 0;

int main()
{
  _Bool flag;
  flag = TRUE;
  if (!flag)
    printf("not a flag\n");

  printf("%d\n", flag);
}
