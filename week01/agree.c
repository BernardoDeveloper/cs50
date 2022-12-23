#include <stdio.h>

int main(void)
{
  char c;
  printf("Do you agree? ");
  char agree = scanf("%c", &c);

  if (c == 'y' || c == 'Y')
  {
    printf("agree\n");
  }
  else if (c == 'n' || c == 'N')
  {
    printf("Not agree\n");
  }
}