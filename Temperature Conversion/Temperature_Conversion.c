#include <stdio.h>

int C;
float K;

int main()
{
    printf("enter the temperature: ");
    scanf("%d", &C);
    K = (C + 273.15);

    printf("the temperature in Kelvin is: %.2f", K);
    return 0;
}
