#include<stdio.h>

/* 
    ##########Console-output###
    #Output 
    Enter an integer: 100
    sum = 5050
    ###########################
*/
int main ()
{
    unsigned char Number = 0 ; 
    unsigned int Sum = 0;
    
    //Data input 
    printf("Enter an integer: "); 
    scanf ("%d",&Number);
    
    //Logic
    for (int Counter = 1 ; Counter <= Number; Counter++ )
    {
        Sum += Counter ;
    }

    printf ("sum = %d",Sum);

    return 0;
}