#include<stdio.h>

/*
    Output
    Enter the number of data: 6
    1. Enter number: 45.3
    2. Enter number: 67.5
    3. Enter number: -45.6
    4. Enter number: 20.34
    5. Enter number: 33
    6. Enter number: 45.6
    Average = 27.69
*/
void ArrayInput(float Array[],int Max);
float ArrayAverage(float Array[],int ArrayMax);
int main()
{
    float Array[20];
    float Average;
    int ArrayMax;
    printf("Enter the number of data: ");
    scanf("%d",&ArrayMax);
    ArrayInput(Array,ArrayMax);
    Average=ArrayAverage(Array,ArrayMax);
    printf("Average = %0.2f\n",Average);
    return 0 ;
}
void ArrayInput(float Array[],int Max)
{
    for (int Counter=0;Counter<Max;Counter++)
    {
        printf("Enter number: ");
        scanf("%f",&Array[Counter]);
    }
}
float ArrayAverage(float Array[],int Max)
{
    float Ave =0;
    for (int Counter=0;Counter<Max;Counter++)
    {
        Ave+=Array[Counter];
    }
    Ave/=Max;
    return Ave;
}