/**Write a program which will take three number input and output the maximum number(if—else if – else statement)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num1,num2,num3;//Declare num1,num2 & num3 as integer data type
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);//Taking input for three numbers
    if(num1>num2 && num1>num3)//Using if condition and comparing varriable num1, num2 and num1, num3
    {
        printf("\n%d is the largest number\n",num1);//Printing a statement if the condition is true
    }
    else if(num2>num1 && num2>num3)//Using else if condition for having more than two condition
    {
        printf("\n%d is the largest number\n",num2);
    }
    else
    {
        printf("\n%d is the largest number\n",num3);//Using else condition and printing a statement if the condition is false
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}