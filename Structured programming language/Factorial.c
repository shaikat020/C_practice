/**The factorial of a positive number n is given by:
factorial of n (n!) = 1 * 2 * 3 * 4....n


The factorial of a negative number doesn't exist. And, the factorial of 0 is 1.

Write a program which will calculate the Factorial value of a number.

Input:
Enter a number:  3

Output:
The factorial value of 3! is 6.**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n, Fc=1;//Declare n, Fc varriables as integer data type
    printf("Enter a number : ");
    scanf("%d",&n);//Taking input for n
    for(int i=n;i>0;i--)//Using for loop & initializing i varriable also putting condition 
    {
        
        Fc=Fc*i;//Multiplying Fc with i  
    }
    printf("The factorial value of %d! is %d ",n,Fc);//Printing output for Factorial
    return 0;//Returning '0' at the end of the program execution.
}
