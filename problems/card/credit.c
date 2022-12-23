#include <stdio.h>

int main(void)
{
    long number, sum = 0;
    printf("Type card number: ");
    scanf("%li", &number);

    while (number != 0)
    {
        sum += number % 10;
        number -= number % 10;
        number = (int)(number / 10);
    }

    printf("%li %li", number, sum);
}