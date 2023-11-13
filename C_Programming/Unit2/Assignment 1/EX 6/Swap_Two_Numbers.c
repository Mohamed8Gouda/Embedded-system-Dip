#include<stdio.h>

/*  
    #########Console_output######
    Enter value of a: 1.20
    Enter value of b: 2.45

    After swapping, value of a = 2.45
    After swapping, value of b = 1.2
    #############################
 */
int main ()
{
    float NumberA = 0;
    float NumberB = 0; 
    printf("Enter value of a: ");
    scanf("%f", &NumberA);
    printf("Enter value of b: ");
    scanf("%f", &NumberB);
    // Logic 
    NumberA += NumberB;
    NumberB  = NumberA - NumberB ;
    NumberA  = NumberA - NumberB ;
    printf("After swapping, value of a = %0.2f\n",NumberA);
    printf("After swapping, value of b = %0.2f\n",NumberB);    
    return 0;
}