#include<stdio.h>

void TryToModify(int ,char[]);


void main ()
{
    int v = 5 ; 
    char Name [5] = "Good" ;
    printf("v = %d , Name = %s\n",v, Name ); 
    TryToModify(v,Name);
    printf("v = %d , Name = %s\n",v, Name ); 
}
void TryToModify(int x ,char text [])
{
    x++;
    text[0]--;
}