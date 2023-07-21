#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1 = 2.7;
    float num2 = 5.2;
    float num3 = num1 / num2;
    printf("%f\n", num3);
    printf("%.0f\n", num3); //Removes the decimal points and rounds it up to the nearest whole number.

    return (0);
}