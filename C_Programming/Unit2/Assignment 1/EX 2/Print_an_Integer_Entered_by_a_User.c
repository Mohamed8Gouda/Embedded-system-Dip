#include<stdio.h>

/*
    ##########Console-output###
    Enter a integer: 25
    You entered: 25 
    ###########################
*/
int main ()
{
    signed int Number = 0; 
    printf("Enter a integer: ");
    scanf("%d", &Number);
    printf("You entered: %d",Number);
    return 0;
}