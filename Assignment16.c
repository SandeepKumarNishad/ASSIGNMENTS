/*//1. Write a program to calculate the sum of two matrices each of order 3X3
#include<stdio.h>
void sum_of_Matrix(void);
int main()
{
     sum_of_Matrix();
     return 0;
}
void sum_of_Matrix(void)
{
    int A[3][3]={1,2,5,3,7,8,9,4,6},B[3][3]={8,6,5,4,3,5,6,5,4},C[3][3]={0},i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<=2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];   //addition of matrix A and Matrix B
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
//3.Write a program in c to find the transpose of a given matrix.
#include<stdio.h>
void transpose(void);
int main()
{
    transpose();
    return 0;
}
void transpose(void)
{
    int A[2][2]={1,2,3,4},B[2][2]={0},i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}
//4.Write a program in c to find the sum of right diagonals of a matrix.
#include<stdio.h>
void sum_of_rightdiagonal(void)
{
    int rde=0,A[3][3]={1,2,3,6,8,10,21,29,32},sum=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i;j++)
        {
            rde=A[i][j];
        }
        sum=sum+rde;
    }
    printf("sum of right diagonal elements is %d ",sum);
}
int main()
{
    sum_of_rightdiagonal();
    return 0;
}
//5.Write a program in c to find the sum of left diagonals of a matrix.
#include<stdio.h>
void sum_of_leftdiagonal(void)
{
    int A[3][3]={1,2,3,6,8,10,21,29,32},sum=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            sum=sum+A[i][j];
        }
    }
    printf("sum of left diagonal elements is %d ",sum);
}
int main()
{
    sum_of_leftdiagonal();
    return 0;
}
//6.Write a program in c to find the sum of rows and columns of a matrix.
#include<stdio.h>
int row_add_column(int A[3][3],int size);
int main()
{
    int A[3][3]={1,3,5,2,4,6,7,3,11},i,j;
    printf("sum of row and column is %d ",row_add_column(A,3));
    return 0;
}
int row_add_column(int A[3][3],int size)
{
    int i,j,sumrow=0,sumcolumn=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sumrow=sumrow+A[i][j];                   //sum of row and column
            sumcolumn=sumcolumn+A[j][i];
        }
    }
    return(sumrow+sumcolumn);
}
//7.Write a program in c to  print or display the lower triangular of a given matrix.
#include<stdio.h>
void lower_triangular(void);
int main()
{
    lower_triangular();
    return 0;
}
void lower_triangular(void)
{
    int i,j,Arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<=i)
            printf("%d ",Arr[i][j]);
            else
              {
                Arr[i][j]=0;
                printf("%d ",Arr[i][j]);
              }
        }
        printf("\n");
    }
}
//8.Write a program in c to  print or display the lower triangular of a given matrix.
#include<stdio.h>
void upper_triangular(void);
int main()
{
    upper_triangular();
    return 0;
}
void upper_triangular(void)
{
    int i,j,Arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            printf("%d ",Arr[i][j]);
            else
              {
                Arr[i][j]=0;
                printf("%d ",Arr[i][j])
              }
        }
        printf("\n");
    }
}
//9.Write a program in c to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
#define R 3
#define C 3
int main()
{
   int Arr[3][3]={1,2,0,0,0,5,0,7,0},i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(Arr[i][j]==0)
            count++;
        }
    }
    if(count>(R*C)/2)
     printf("sparce matrix\n");
     else
      printf("matrix is not sparse matrix");
      return 0;
}*/
