#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char myChar;
    printf("Please enter a charcter: ");
    scanf("%c", &myChar);

    if (myChar == 'A')
        printf("Hello\n");
    else
        printf("You entered an invalid Character.\n");

    return (0);
}