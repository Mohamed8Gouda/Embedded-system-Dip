#include<stdio.h>

/* 
    ##########Console-output###
    #Output 1 
    Enter an alaphbet: i
    i is a vowel.
    #Output 2
    Enter an alaphbet: G 
    G is a consonant.
    ###########################
*/
int main ()
{
    char Character = 0 ;
    char condetion=0; 
    printf("Enter an alaphbet: "); 
    scanf ("%c",&Character);
    condetion = (Character=='a'||Character=='A'||Character=='e'||Character=='E'||Character=='o'||Character=='O'||Character=='i'||Character=='I'||Character=='u'||Character=='U');
    if (condetion)
    {
        printf("%c is a vowel.",Character);
    }
    else 
    {
        printf("%c is a consonant.",Character);       
    }
    return 0;
}