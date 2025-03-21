/**Write a program that will take a Birth Year as an  input, Calculate his/her age and print an interactive message as an output based on following condition.
(i) If age < 30 , Print " You are a Young Person "
(ii) If age >30, Print " Your Experience Matter"**/
#include<stdio.h>//Including Header file-Standard input output
int main()//The function returns some integer even '0' at the end of the program execution.
{
    int year,age;//Declare year & age as integer data type
    printf("Enter your birth year: ");
    scanf("%d",&year);//Taking input for year
    age=2023-year;//Substracting year from 2023 to get the user's present age
    if(age<30)
    {
        printf("You are a young persion\n");//Using if else condition and printing a statement if the condition is true
    }
    else
    {
        printf("Your experience matter\n");//Printing the statement if the conditon is false
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}