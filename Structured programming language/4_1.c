/**1. Write a program to print the following pattern:
n=3
  ***
 ***
***

**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n;//Declare n as integer data type 
    printf("Enter the value of n : ");
    scanf("%d",&n);//Taking input for n
    
    for(int i=1;i<=n;i++)//Using for loop & initializing i varriable also putting condition for i
    {
        for(int j=n-i;j>0;j--)//Putting nested loop for space
        {
            printf(" ");
        }
        for(int k=0;k<n;k++)//Putting another loop for asterisk
        {
            printf("* ");
        }
        printf("\n");//Putting new line
    } 
    return 0;//Returning '0' at the end of the program execution.
}