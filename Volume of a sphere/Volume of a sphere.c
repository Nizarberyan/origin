#include <stdio.h>
#include <math.h>

int main() {
    float r, V;
    const float Pi = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    V = (4.0 / 3.0) * Pi * pow(r, 3);

    printf("The volume of the sphere is: %.2f cubic units\n", V);

    return 0;
}