#include <stdio.h>
#include <math.h>

int main(void)
{
    float AB;
    float BC;

    printf("Quel est la longueur de AB en cm : ");
    scanf("%f", &AB);

    printf("Quel est la longueur de BC en cm : ");
    scanf("%f", &BC);

    printf("Voici la longueur de hypothenuse : %f en cm", sqrt(AB * AB + BC * BC));


}