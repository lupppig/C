#include <stdio.h>

int main() {
  int shares;
  float price_per_shares;

  printf("Enter number of shares: ");
  scanf("%d", &shares);

  printf("Enter price per shares: ");
  scanf("%f", &price_per_shares);

  // if (value < 2500.00f)
  //   commission = 30.00f + .017f * value;
  // else if (value < 6250.00f)
  //   commission = 56.00f + .0066f * value;
  // else if (value < 20000.00f)
  //   commission = 76.00f + .0034f * value;
  // else if (value < 50000.00f)
  //   commission = 100.00f + .0022f * value;
  // else if (value < 500000.00f)
  //   commission = 155.00f + .0011f * value;
  // else
  //   commission = 255.00f + .0009f * value;
  //

  return 0;
}
