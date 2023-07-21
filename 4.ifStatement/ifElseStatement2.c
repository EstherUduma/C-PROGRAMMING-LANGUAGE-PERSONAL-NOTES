#include <stdio.h>
#include <stdlib.h>

int main() {
    char myChar;
    int i = 6;
    printf("Please enter a character: ");
    scanf("%c", &myChar);
    if (myChar == 'A' && i == 10)
        printf("Hello\n");
    else
        printf("You entered an invalid character.\n");
    
    return (0);
}