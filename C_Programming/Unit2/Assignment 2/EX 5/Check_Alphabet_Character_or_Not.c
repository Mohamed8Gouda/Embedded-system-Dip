#include<stdio.h>

/* 
    ##########Console-output###
    #Output 1 
    Enter a character: *
    * is not an alphabet
    #Output 2
    Enter a character: k
    k is  an alphabet
    ###########################
*/
int main ()
{
    char Character = 0 ; 
    
    //Data input 
    printf("Enter a character: "); 
    scanf ("%c",&Character);
    
    //Logic
    if (('a' <= Character && 'z' >= Character )||('A' <= Character && 'Z' >= Character ))
    {
        printf("%c is an alphabet",Character);
    }
    else
    {
        printf("%c is not an alphabet",Character);
    }
    
    return 0;
}