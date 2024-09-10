#include <stdio.h>

int main() {
    int num, reversed;

    printf("Enter a four-digit integer: ");
    scanf("%d", &num);

    if (num < 999 || num > 9999) {
    printf("Invalid number, thus number must consist of 4 digits");
    return 1;
    } else {
    reversed = (num % 10) * 1000 + ((num / 10) % 10) * 100 + ((num / 100) % 10) * 10 + (num / 1000);
    printf("The reversed number is: %d\n", reversed);
}; 
    return 0;
}