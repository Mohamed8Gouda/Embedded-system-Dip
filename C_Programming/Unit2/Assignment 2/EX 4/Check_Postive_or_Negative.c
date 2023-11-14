#include<stdio.h>

/* 
    ##########Console-output###
    #Output 1 
    Enter a number: 12.3
    12.30 is postive.
    #Output 2
    Enter a number: 0
    You entered zero.
    ###########################
*/
int main ()
{
    float Number = 0 ; 
    
    //Data input 
    printf("Enter a number: "); 
    scanf ("%f",&Number);
    
    //Logic
    if (Number > 0)
    {
        printf("%0.2f is postive.",Number);
    }
    else if (Number < 0)
    {
        printf("%0.2f is negative.",Number);
    }
    else  
    {
        printf("You entered zero");
    }
    
    return 0;
}