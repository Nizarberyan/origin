#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2, distance;

    printf("Enter the coordinates of the first point (x1, y1, z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Enter the coordinates of the second point (x2, y2, z2): ");
    scanf("%f %f %f", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}