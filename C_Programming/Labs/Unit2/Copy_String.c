#include<stdio.h>
#include<string.h>

void main ()
{
    char Name1[20] = "Ahmed Ali" ;
    char Name2[20] ;

    // logic
    char index = 0;
    while (Name1[index] != 0)
    {
        Name2 [index] = Name1 [index] ;
        index++;
    }
    Name2[index] = 0 ;
    /*
        anther solution
        strcpy(Name1,Name2);
    */
    printf("%s",Name2);
    
}