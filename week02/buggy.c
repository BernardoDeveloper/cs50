#include <stdio.h>

int get_negative_int();

int main(void)
{
    int i = get_negative_int();
    printf("%i", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        printf("Type a negative number: ");
        scanf("%i", &n);
    } while (n > 0);
    return n;
}