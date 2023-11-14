#include<stdio.h>

/* 
    ##########Console-output###
    Enter Three Numbers: 12.2
    13.452
    10.193
    Largest number = 13.45
    ###########################
*/
int main ()
{
    float  Arr_Number[3] ;
    float  Max= 0;

    //Data input 
    printf ("Enter three numbers:");
    scanf("%f",&Arr_Number[0]);
    scanf("%f",&Arr_Number[1]);
    scanf("%f",&Arr_Number[2]);
    Max = Arr_Number[0];

    //Logic 
    if (Max <= Arr_Number[1])
    {
        Max = Arr_Number[1];
    }
    if (Max <= Arr_Number[2])
    {
        Max = Arr_Number[2];
    }

    //printing 
    printf("Largest number = %0.2f ",Max); 

    return 0;
}