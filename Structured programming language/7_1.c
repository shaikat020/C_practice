/**1. Write a program to calculate the sum of each row and column of a 2-D array.
Sample Execution:
The matrix elements are:
3 5 9
8 3 0
6 8 5
Sum of row 1: 17
Sum of row 2: 11
Sum of row 3: 19
Sum of column 1: 17
Sum of column 2: 16
Sum of column 3: 14**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int matrix[3][3];//Declare matrix with 2D array for matrix formas integer data type
    printf("The matrix elements are :\n");
    for(int i=0;i<3;i++)//Putting for loop and initializing i for row
    {
        for(int j=0;j<3;j++)//Putting for loop and initializing i for column
        {
            scanf("%d",&matrix[i][j]);//Taking input for matrix
        }
    }
    for(int i=0;i<3;i++)//Putting for loop and initializing i
    {
        int rsum=0;//Declaring rsum as 0 as integer data type
        for(int j=0;j<3;j++)
        {
            rsum=rsum+matrix[i][j];//Putting this formula for adding all row
        }
        printf("Sum of row %d : %d\n",i+1,rsum);//Printing the sum of row
    }
    for(int i=0;i<3;i++)
    {
        int csum=0;//Declaring rcolumn as 0 as integer data type
        for(int j=0;j<3;j++)
        {
            csum=csum+matrix[j][i];//Putting this formula for adding all column
        }
        printf("Sum of column %d : %d\n",i+1,csum);//Printing the sum of column
    }
    return 0;//Returning '0' at the end of the program execution.
}