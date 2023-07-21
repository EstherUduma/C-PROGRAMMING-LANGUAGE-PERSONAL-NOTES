#include <stdio.h>
#include <stdlib.h>

int main() {
    char myChar;
    printf("Please enter a character: \n");
    scanf("%c", &myChar);
    switch (myChar)
    {
    case 'A':
        printf("Hello");
        break;
    case 'B':
        printf("Happy Birthday");
        break;
    case 'C':
        printf("Welcome");
        break;
    default:
        printf("You entered an invalid character!");
        break;
    }

    return (0);
}