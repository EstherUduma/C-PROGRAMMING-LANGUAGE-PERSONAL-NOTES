#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1 = 0;
    printf("Please enter a number: ");
    scanf("%f", &num1);
    printf("%f\n", num1);

    float num3 = 0;
    printf("Please enter a second number: ");
    scanf("%f", &num3);
    printf("%f\n", num1 + num3);

    return (0);
}