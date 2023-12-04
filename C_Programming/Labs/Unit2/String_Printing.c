#include<stdio.h>

/*  
    the string is printing until Null  = '\0' char = abs zero 
*/
void main ()
{
    char x[7]  ;
    x[0] = 'h' ;
    x[1] = 'e' ;
    x[2] = 'l' ;
    x[3] = 'l' ;
    x[4] ='\0' ;    //Equivalent to  x[4] = NULL ; and  x[4] =  0 ;
    x[5] = 'o' ;
    
    printf ("%s", &x[0]);   //Equivalent to printf ("%s",x);
    
}