#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    printf("Please enter a number: ");
    scanf("%i", &num);
    printf("%i\n", num);

    int num2 = 0;
    printf("Please enter a second number: ");
    scanf("%i", &num2);
    printf("%i\n", num + num2);

    return (0);
}