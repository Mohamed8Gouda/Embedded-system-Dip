#include<stdio.h>

/*
    ##########Console-output###
    Enter two integers: 12
    11
    Sum: 23
    ###########################
*/
int main ()
{
    signed int Number1 = 0;
    signed int Number2 = 0; 
    signed int Sum = 0;  
    printf("Enter two integers: ");
    scanf("%d", &Number1);
    scanf("%d", &Number2);
    Sum = Number1 + Number2; 
    printf("You entered: %d",Sum);
    return 0;
}