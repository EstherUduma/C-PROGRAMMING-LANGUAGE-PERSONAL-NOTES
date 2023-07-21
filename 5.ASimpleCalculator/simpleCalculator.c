#include <stdio.h>
#include <stdlib.h>

int main() {
    char letter;
    float num1, num2, num3, num4, num5, num6;
    printf("What operation do you want to perform?\n\tA) Addition\n\tB) Subtraction\n\tC) Multiplication\n\tD) Division\n");
    scanf("%c", &letter);
    printf("Please enter a number: ");
    scanf("%f", &num1);
    printf("Please enter a second number: ");
    scanf("%f", &num2);
    if (letter == 'A' || letter == 'a') 
    {
        num3 = num1 + num2;
        printf("The sum of %f and %f is %f\n", num1, num2, num3);
    }
    else if (letter == 'B' || letter == 'b')
    {
        num4 = num1 - num2;
        printf("The subtraction of %f and %f is %f\n", num1, num2, num4);
    }
    else if (letter == 'C' || letter == 'c')
    {
        num5 = num1 * num2;
        printf("The multiplication of %f and %f is %f\n", num1, num2, num5);
    }
    else if (letter == 'D' || letter == 'd')
    {
        if (num2 != 0) {
            num6 = num1 / num2;
            printf("The division of %f by %f is %f\n", num1, num2, num6);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operation selected.\n");
    }

    return (0);
}