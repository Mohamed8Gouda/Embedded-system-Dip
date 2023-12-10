#include <stdio.h>
/*
Enter rows and column of matrix: 2
    3
    Enter a11:1
    Enter a12:2
    Enter a13:9
    Enter a21:0
    Enter a22:4
    Enter a23:7
    Entered Matrix:  
    1  2  9          
    0  4  7          
    Transpose Matrix:
    Entered Matrix:  
    1  0  
    2  4  
    9  7
*/
void MatrixInput    (char  Matrix[][10],int Row,int Column);
void MatrixPrint    (char  Matrix[][10],int Row,int Column);
void MatrixTranspose(char  Matrix[][10],int Row,int Column);
int main()
{
    char  Matrix [10][10];
    int Row , Column ; 
    printf("Enter rows and column of matrix: ");
    scanf("%d",&Row);
    scanf("%d",&Column);
    MatrixInput(Matrix,Row,Column);
    MatrixPrint(Matrix,Row,Column);
    MatrixTranspose(Matrix,Row,Column);
    return 0;
}
void MatrixInput(char  Matrix[][10],int Row,int Column)
{
    for (int RowIndex = 0 ; RowIndex<Row ;RowIndex++)
    {
        for (int ColumnIndex=0; ColumnIndex<Column;ColumnIndex++)
        {
            printf("Enter a%d%d:" ,RowIndex+1,ColumnIndex+1);
            scanf("%d",&Matrix[RowIndex][ColumnIndex]);
        }
    }
}
void MatrixPrint(char  Matrix[][10],int Row,int Column)
{
    printf ("Entered Matrix:\n");
    for (int RowIndex = 0 ; RowIndex<Row ;RowIndex++)
    {
        for (int ColumnIndex=0; ColumnIndex<Column;ColumnIndex++)
        {
            printf ("%d",Matrix[RowIndex][ColumnIndex]);
            if (ColumnIndex==Column)
            continue;
            printf("  ");
        }
        printf("\n");
    }
}
void MatrixTranspose(char  Matrix[][10],int Row,int Column)
{
    char  TempMatrix [10][10];
    printf ("Transpose Matrix:\n");
    for (int RowIndex = 0 ; RowIndex<Row ;RowIndex++)
    {
        for (int ColumnIndex=0; ColumnIndex<Column;ColumnIndex++)
        {
            TempMatrix[ColumnIndex][RowIndex]=Matrix[RowIndex][ColumnIndex];
        }
    }
    MatrixPrint(TempMatrix,Column,Row);
}