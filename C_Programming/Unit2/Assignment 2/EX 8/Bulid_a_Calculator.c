#include<stdio.h>

/* 
    ##########Console-output###
    #Output 
    Enter operator either + or - or * or divide : -
    Enter two operands: 3.4
    8.4
    3.4 - 8.4 = - 5.0
    ###########################
*/
int main ()
{
    char operator = 0 ;
    float arr[2];
    float result=0;  
    
    //Data input 
    printf("Enter operator either + or - or * or divide : "); 
    scanf ("%c",&operator);
    printf("Enter two operands: ");
    scanf ("%f",&arr[0]);
    scanf ("%f",&arr[1]);

    //Logic
    switch (operator)
    {
    case '+':
        result= arr[0] + arr[1] ;
        break;
    case '-':
        result= arr[0] - arr[1] ;
        break;  
    case '*':
        result= arr[0] * arr[1] ;
        break;  
    case '/':
        result= arr[0] / arr[1] ;
        break;  
    
    default:
        printf("Error!!! invalid operator");
        break;
    }
    //output
    printf("%0.2f %c %0.2f = %0.2f",arr[0],operator,arr[1],result);
    
    return 0;
}