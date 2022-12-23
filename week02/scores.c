#include <stdio.h>

int main(void)
{
    int n;
    printf("How many scores? ");
    scanf("%i", &n);

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        printf("Scores: ");
        scanf("%i", &scores[i]);
    }

    printf("avarage: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}