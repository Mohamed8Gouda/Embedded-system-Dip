#include<stdio.h>

/*
    ##########Console-output###
    Enter two numbers: 2.4
    1.1
    Product: 2.640000
    ###########################
*/
int main ()
{
    float Number1 = 0;
    float Number2 = 0; 
    float Product = 1;  
    printf("Enter two numbers: ");
    scanf("%f", &Number1);
    scanf("%f", &Number2);
    Product = Number1 * Number2; 
    printf("Product: %f",Product);
    return 0;
}