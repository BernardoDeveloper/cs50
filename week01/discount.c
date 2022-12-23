#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
  // declarations
  float regular;
  printf("Regular price: ");
  scanf("%f", &regular);

  int percent_off;
  printf("Percent Off: ");
  scanf("%i", &percent_off);

  float sale = discount(regular, percent_off);

  printf("Sale price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
  return price * (100 - percentage) / 100;
}