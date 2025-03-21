/**1. Write a program to add the digits of a number.
Sample execution:
Enter a number: 69837
The sum of the digits of this number is: 33(For loop)**/
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=0;i=num%10;i++)
    {
        sum=sum+i;
        num=num/10;
    }
    printf("The sum of the digits of this number is : %d",sum);
    return 0;
}
