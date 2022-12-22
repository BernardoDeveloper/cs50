#include <stdio.h>

int main(void)
{
  int myNum;
  printf("number: ");
  int n = scanf("%i", &myNum);

  if (n % 2 == 0)
  {
    printf("even\n");
  }
  else
  {
    printf("odd\n");
  }
}