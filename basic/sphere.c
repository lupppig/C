#include <stdio.h>

#define PI 3.14159265359f

int main() {
  float radius, volume;
  scanf("%f", &radius);

  volume = (4.0f / 3.0f) * PI * (radius * radius * radius);
  printf("volume of sphere is %.2fm³\n", volume);
  return 0;
}
