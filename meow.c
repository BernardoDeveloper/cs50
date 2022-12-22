#include <stdio.h>

// define the function
void meow(int n);

int main(void)
{
  printf("While: \n");
  int counter = 0;
  while (counter < 3)
  {
    printf("meow\n");
    counter++;
  }

  // or can you make a loop in this form:
  printf("\nFor: \n");
  for (int i = 0; i < 3; i++)
  {
    printf("meow\n");
  }

  // make a function to do this;
  printf("\nFunction: \n");
  meow(3);
}

// create the function
void meow(int n)
{
  for (int i = 0; i < 3; i++)
    printf("meow\n");
}