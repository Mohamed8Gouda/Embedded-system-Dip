#include<stdio.h>

/*
    1- Creat array with Empty space in it 
    2- Take the Number of the elements 
    3- Add the data to the array
    4- Insert a new element in the end of the array 
    5- Swap the element to its postion 
*/


void DataInput(int DataArray[],int MaxDataPos);
void SwapToPos(int DataArray[],int MaxDataPos,int Location);
void DataPrint(int DataArray [],int MaxDataPos);
int main ()
{
    int   DataArray[20];
    int  MaxDataPos=99;
    int Location=0;
    printf("Enter no of elements: ");
    scanf("%d",&MaxDataPos);
    DataInput(DataArray,MaxDataPos);
    printf("Enter the element to be inserted: ");
    scanf("%d",&DataArray[MaxDataPos]);
    MaxDataPos+=1;
    printf("Enter the location: ");
    scanf("%d",&Location);
    SwapToPos(DataArray,MaxDataPos,Location);
    DataPrint( DataArray , MaxDataPos);
    return 0 ; 
}
void DataInput(int DataArray[], int MaxDataPos)
{
    for (int Counter=0;Counter<MaxDataPos;Counter++)
    {
        
        scanf("%d",&DataArray[Counter]);
        
    }
}
void SwapToPos(int DataArray[], int MaxDataPos, int Location)
{
    
    for (int index=MaxDataPos-1;index >=Location;index--)
    {
        DataArray[index] += DataArray[index-1];
        DataArray[index-1]  = DataArray[index] - DataArray[index-1] ;
        DataArray[index]  = DataArray[index] - DataArray[index-1] ;
    }
}
void DataPrint(int DataArray [],int MaxDataPos)
{
    printf ("Array output is :\n");
    
    for (int Counter=0;Counter<MaxDataPos;Counter++)
    {
        printf("%d ",DataArray[Counter]);
    }
    printf("\n");
}