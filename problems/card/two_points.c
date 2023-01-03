#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("X:\n");
    float axleX[2];
    for (int i = 0; i < 2; i++)
        scanf("%f", &axleX[i]);
    
    printf("Y:\n");
    float axleY[2];
    for (int i = 0; i < 2; i++)
        scanf("%f", &axleY[i]);

    float dx = axleX[0] - axleX[1];
    float dy = axleY[0] - axleY[1];

    float distance = sqrt(dx * dx + dy * dy);
    printf("RESULT: %.4f", distance);
}