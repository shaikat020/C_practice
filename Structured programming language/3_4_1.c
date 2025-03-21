/**4. Write a program to print the numbers from 1 to 100 on the screen. Skip those numbers which
are divisible by 3 or 5 but not by both.(While loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n, i=1;//Declare n & i varriable as integer data type also i as one for while loop
    printf("Enter the number : ");
    scanf("%d",&n);//Taking input for n
    while(i<=n)//Using for loop & initializing i varriable also putting condition 
    {
        if((i%3!=0 && i%5!=0) || (i%3==0 && i%5==0))//Using if else condition 
        {
            printf("%d ",i);//Printing output i if the condition is true
        }
        i++;//Incrementing i
    }
    return 0;//Returning '0' at the end of the program execution.
}