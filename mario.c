#include <stdio.h>

int main(void)
{
  // make this loop while the user input is than of 1;
  int n;
  do
  {
    printf("width: ");
    scanf("%i", &n);
  } while (n < 1);

  for (int i = 0; i < n; i++)
  {
    printf("?");
  }
}