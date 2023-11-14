#include<stdio.h>

/* 
    ##########Console-output###
    #Output 1 
    Enter an integer number you want to Check :  25
    25 is odd.
    #Output 2
    Enter an integer number you want to Check :  12 
    12 is even.
    ###########################
*/
int main ()
{
    signed char Number = 0 ; 
    printf("Enter an integer number you want to Check : "); 
    scanf ("%d",&Number);
    if (Number%2==1)
    {
        printf("%d is odd.",Number);
    }
    else 
    {
        printf("%d is even.",Number);
    }
    return 0;
}