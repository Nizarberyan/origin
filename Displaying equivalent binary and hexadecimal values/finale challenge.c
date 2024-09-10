#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary: ");

    while (num > 0) {
        printf("%d", num % 2);
        num /= 2;
    }

    printf("\n");
    printf("Hexadecimal: %X\n", num);

    return 0;
}