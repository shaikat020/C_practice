/**4. Write a program to print the numbers from 1 to 100 on the screen. Skip those numbers which
are divisible by 3 or 5 but not by both.(For loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n;//Declare n varriable as integer data type
    printf("Enter the number : ");
    scanf("%d",&n);//Taking input for n
    for(int i=1;i<=n;i++)//Using for loop & initializing i varriable also putting condition 
    {
        if((i%3!=0 && i%5!=0) || (i%3==0 && i%5==0))//Using if else condition 
        {
            printf("%d ",i);//Printing output i if the condition is true
        }
    }
    return 0;//Returning '0' at the end of the program execution.
}