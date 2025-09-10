#include <inttypes.h>
#include <stdio.h>

int main() {
  int hour, min;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &min);

  printf("Equivalent 12-hour time: ");

  switch (hour) {
  case 1:
  case 13:
    if (hour == 1)
      printf("1:%d AM", min);
    else
      printf("1:%d PM", min);
    break;
  case 2:
  case 14:
    if (hour == 2)
      printf("2:%d AM", min);
    else
      printf("2:%d PM", min);
    break;
  case 3:
  case 15:
    if (hour == 3)
      printf("3:%d AM", min);
    else
      printf("3:%d PM", min);
    break;
  case 4:
  case 16:
    if (hour == 4)
      printf("4:%d AM", min);
    else
      printf("4:%d PM", min);
    break;
  case 5:
  case 17:
    if (hour == 5)
      printf("5:%d AM", min);
    else
      printf("5:%d PM", min);
    break;
  case 6:
  case 18:
    if (hour == 6)
      printf("6:%d AM", min);
    else
      printf("6:%d PM", min);
    break;
  case 7:
  case 19:
    if (hour == 7)
      printf("7:%d AM", min);
    else
      printf("7:%d PM", min);
    break;
  case 8:
  case 20:
    if (hour == 8)
      printf("8:%d AM", min);
    else
      printf("8:%d PM", min);
    break;
  case 9:
  case 21:
    if (hour == 9)
      printf("9:%d AM", min);
    else
      printf("9:%d PM", min);
    break;
  case 10:
  case 22:
    if (hour == 10)
      printf("10:%d AM", min);
    else
      printf("10:%d PM", min);
    break;
  case 11:
  case 23:
    if (hour == 11)
      printf("11:%d AM", min);
    else
      printf("11:%d PM", min);
    break;
  default:
    if (hour == 0)
      printf("0:%d AM", min);
    else if (hour == 12)
      printf("12:%d PM", min);
    printf("Illegal date format provided");
  }
  return 0;
}
