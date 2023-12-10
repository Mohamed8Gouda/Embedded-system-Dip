#include<stdio.h>
/*
    Output 
    Enter the elements of lst Matrix
    Enter a11: 2;
    Enter a12: 0.5;
    Enter a21: -1.1;
    Enter a22: 2;
    Enter the elements of 2nd Matrix
    Enter a11: 0.2; 
    Enter a12: 0;
    Enter a21: 0.23;
    Enter a22: 23;
    Sum of Matrix :
    2.2     0.5
    -0.9    25.0
*/
void Array_Input(float Matrix_A[2][2],char   );
void Sum_Of_The_Matrices(float Matrix[2][2],float Matrix_A[2][2],float Matrix_B[2][2]);
void Print_Matrix(float Matrix [2][2]);

int main()
{
    float Matrix_A[2][2]= {{0.0,0.0},{0.0,0.0}}; 
    float Matrix_B[2][2]= {{0.0,0.0},{0.0,0.0}};
    float   Matrix[2][2]= {{0.0,0.0},{0.0,0.0}};
    char   Order = 0;
    Array_Input(Matrix_A,Order=1);
    Array_Input(Matrix_B,Order=0);
    Sum_Of_The_Matrices(Matrix,Matrix_A,Matrix_B);
    Print_Matrix(Matrix);
    return 0 ;
}

void Array_Input(float Matrix[2][2],char   Order)
{
    if (Order==1)
        {
            printf("Enter the elements of lst Matrix\n");
        }
    else 
        {
            printf("Enter the elements of 2nd Matrix\n");
        } 
    for (int Row = 0 ; Row<2 ;Row++)
    {
        for (int Colum=0; Colum<2;Colum++)
        {
            printf("Enter a%d%d:" ,Row,Colum);
            scanf("%f",&Matrix[Row][Colum]);
        }
    }
}
void Sum_Of_The_Matrices(float Matrix[2][2],float Matrix_A[2][2],float Matrix_B[2][2])
{
    for (int Row = 0 ; Row<2 ;Row++)
    {
        for (int Colum=0; Colum<2;Colum++)
        {
            Matrix[Row][Colum]=Matrix_A[Row][Colum]+Matrix_B[Row][Colum];
        }
    }
}
void Print_Matrix(float Matrix[2][2])
{
    printf("Sum of Matrix :\n");
    for (int Row = 0 ; Row<2 ;Row++)
    {
        for (int Colum=0; Colum<2;Colum++)
        {
            printf ("%0.2f",Matrix[Row][Colum]);
            if (Colum==1)
            continue;
            printf("\t");
        }
        printf("\n");
    }
}