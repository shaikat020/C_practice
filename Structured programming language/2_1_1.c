/**Write a program which will take three number input and output the maximum number(Only if statement)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num1,num2,num3;//Declare num1,num2 & num3 as integer data type
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);//Taking input for three numbers
    if(num1>num2 && num1>num3)
    {
        printf("\n%d is the largest number\n",num1);//Using only if condition and printing a statement if the condition is true(similarly the others statement)
    }
    if(num2>num1 && num2>num3)
    {
        printf("\n%d is the largest number\n",num2);
    }
    if(num3>num1 && num3>num2)
    {
        printf("\n%d is the largest number\n",num3);
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}