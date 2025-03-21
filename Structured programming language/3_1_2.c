/**1. Write a program to add the digits of a number.
Sample execution:
Enter a number: 69837
The sum of the digits of this number is: 33(For loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num, sum=0;//Declare num & sum as integer data type also declare sum as zero
    printf("Enter a number : ");
    scanf("%d",&num);//Taking input for num
    for(int i=0;i=num%10;i++)//Using for loop & initializing i varriable also putting condition for i
    {
        sum=sum+i;//Adding sum with i for adding every digit given input
        num=num/10;//Taking every digit from dividing num by 10
    }
    printf("The sum of the digits of this number is : %d",sum);//Printing the output from sum
    return 0;//Returning '0' at the end of the program execution.
}
