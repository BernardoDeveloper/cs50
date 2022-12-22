#include <stdio.h>

int main(void)
{
  int counter = 0;
  while (counter < 3)
  {
    printf("meow\n");
    counter++;
  }

  printf("---\n");

  // or can you make a loop in this form:
  for (int i = 0; i < 3; i++)
  {
    printf("meow\n");
  }
}