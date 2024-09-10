#include <stdio.h>

int main() {
    float a, b;

    printf("Enter the first number (a): ");
    
    
    scanf("%f", &a);
    printf("Enter the second number (b): ");
    scanf("%f", &b);


    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);


    if (b != 0.0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Error: Division by zero\n");
    }

    return 0;
}