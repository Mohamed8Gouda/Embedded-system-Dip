#include<stdio.h>

/*
    #########Console_output######
    Enter a character: G
    ASCII value of G = 71
    #############################
*/
int main ()
    {
    char Character ; 
    printf("Enter a character: ");
    scanf("%c", &Character);
    printf("ASCII value of %c = %d" , Character, Character);
    return 0;
    } 