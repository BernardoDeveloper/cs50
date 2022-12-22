#include <stdio.h>

int main(void)
{
  int myNum;
  printf("number: ");
  scanf("%i", &myNum);

  if (myNum % 2 == 0)
  {
    printf("even\n");
  }
  else
  {
    printf("odd\n");
  }
}