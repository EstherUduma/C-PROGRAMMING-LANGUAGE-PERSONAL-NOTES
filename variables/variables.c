#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int myNumber = 5;
    int mySecondNumber = 7;
    int myThirdNumber = myNumber + mySecondNumber;
    int myFourthNumber = myNumber * mySecondNumber;
    int myFifthNumber =  mySecondNumber - myNumber;
/*
** This prints out the myThirdNumber, myFourthNumber and myFifthNumber
*/
    printf("The value of myThirdNumber is %i\n", myThirdNumber);
    printf("The value of myFourthNumber is %i\n", myFourthNumber);
    printf("The value of myFifthNumber is %i\n", myFifthNumber);

    return (0);
}