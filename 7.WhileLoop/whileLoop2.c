#include <stdio.h>
#include <stdlib.h>

/*
* This program prints even numbers between two numbers provided by the user.
*/
int main() {
    int a, b;
    
    printf("This program prints even numbers between two numbers provided by you. Lets begin!\nEnter your smallest number: \n");
    scanf("%d", &a);
    printf("Enter your largest number: \n");
    scanf("%d", &b);
    
    if (a % 2 != 0) {
        a++; // Increment a by 1 to make it even
    }
    
    do
    {
        printf("%d\n", a);
        a += 2;
    }
    while (a <= b);
    
    return (0);
}