#include <stdio.h>
float km;
float yard;

int main()
{

    printf("enter the distance in kilometers (km): ");
    scanf("%f", &km);

    yard = (km * 1093.61);
    printf("the distance in yard is : %.2f", yard);

    return 0;
}