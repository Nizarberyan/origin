#include <stdio.h>
#include <math.h>
float Geometric_mean, a, b, c;

int main()
{
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    Geometric_mean = powf(a * b * c, 1.0f / 3.0f);
    printf("the geometric mean of the three numbers is %.2f", Geometric_mean);
    return 0;
}
