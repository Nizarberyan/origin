#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);

    printf("Binary: ");

    while (num > 0) {
        printf("%d", num % 2);
        num /= 2;
    }
    
    return 0;
}