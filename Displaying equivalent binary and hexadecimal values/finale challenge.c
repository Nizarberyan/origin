#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary: ");

    if (num == 0) {
        printf("0\n");
        printf("Hexadecimal: 0\n");
        return 0;
    }

    while (num > 0) {
        printf("%d", num % 2);
        num /= 2;
    }

    printf("\n");
    printf("Hexadecimal: %X\n", num);

    return 0;
}