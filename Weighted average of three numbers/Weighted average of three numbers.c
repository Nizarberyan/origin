#include<stdio.h>
float w1,w2,w3,avg;

int main() {
    printf("Enter the weights of three subjects: ");
    scanf("%f %f %f",&w1,&w2,&w3);
    avg = (w1 + w2 + w3) / 3;
    printf("The average weight is %.2f",avg);
    return 0;
}