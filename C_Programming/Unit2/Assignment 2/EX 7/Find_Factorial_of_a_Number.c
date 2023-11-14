#include<stdio.h>

/* 
    ##########Console-output###
    #Output 1
    Enter an integer: -5
    Error!!! Factorial of negative number doesn't exist.
    #Output 2
    Enter an integer: 10
    Factorial = 3628800
    ###########################
*/
int main ()
{
    char Number = 0 ; 
    unsigned int Factorial = 1;
    
    //Data input 
    printf("Enter an integer: "); 
    scanf ("%d",&Number);
    
    //Logic
    if (Number>0)
    {
        for (int Counter = Number ; Counter > 1; Counter-- )
        {
            Factorial *= Counter ;
        }

        printf ("Factorial = %d",Factorial);
    }
    else if (Number==0)
    {
        printf ("Factorial = 1");
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn't exist.");
    }

    return 0;
}