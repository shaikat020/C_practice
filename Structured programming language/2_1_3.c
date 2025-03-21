/**Write a program which will take three number input and output the maximum number(Nested if-else statement)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num1,num2,num3;//Declare num1,num2 & num3 as integer data type
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);//Taking input for three numbers
    if(num1>num2)//Using if else condition for comparing between num1, num2 statement
    {
        if(num1>num3)//Using nested if else to see if num1 is larger than num3 or not
        {
            printf("\n%d is the largest number\n",num1);
        }
        else
        {
            printf("\n%d is the largest number\n",num3);
        }
    }
    else//Using else conditon if the statement is false
    {
        if(num2>num3)
        {
            printf("\n%d is the largest number\n",num2);
        }
        else
        {
            printf("\n%d is the largest number\n",num3);
        }
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}