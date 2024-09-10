#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Enter the speed in kilometers per hour (km/h): ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("The speed in meters per second (m/s) is: %.2f m/s\n", ms);

    return 0;
}