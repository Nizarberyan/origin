#include <stdio.h>
int C;

int main() {
    printf("enter the temperature of the water in celsius:");
    scanf("%d", &C);

    if (C < 0) {
        printf("the water is in a solid state");
    } else if (C >= 0 && C <= 100) {
        printf("the water is in a liquid state");
    } else {
        printf("the water is  in a gas state");
    }

    return 0;
}






