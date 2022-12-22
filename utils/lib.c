#include "lib.h"

#include <stdio.h>

int get_int(void)
{
  int n;
  printf("number: ");
  return scanf("%i", &n);
}