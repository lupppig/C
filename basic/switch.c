#include <stdio.h>

int main() {
  int grade;

  grade = 2;

  switch (grade) {
  case 4:
  case 3:
  case 2:
  case 1:
    printf("Passing\n");
    break;
  case 0:
    printf("Passing\n");
    break;
  default:
    printf("Illegal grade\n");
    break;
  }
  switch (grade) {
  case 4:
    printf("Excellent\n");
    break;
  case 3:
    printf("Good\n");
    break;
  case 2:
    printf("Average\n");
    break;
  case 1:
    printf("Failing\n");
    break;
  default:
    printf("Illegal grade\n");
    break;
  }
}
