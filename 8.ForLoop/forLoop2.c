#include <stdio.h>
#include <stdlib.h>

/*
* This program prints odd numbers between two numbers provided by the user.
*/
int main() {
    int a, b;
    
    printf("This program prints odd numbers between two numbers provided by you. Lets begin!\nEnter your smallest number: \n");
    scanf("%d", &a);
    printf("Enter your largest number: \n");
    scanf("%d", &b);
    
    if (a % 2 == 0) 
        a++; // Increment a by 1 to make it odd
    
    for (int i = a; i <= b; i += 2)
        printf("%i\n", i);
    
    return (0);
}