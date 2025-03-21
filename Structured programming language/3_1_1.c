/**1. Write a program to add the digits of a number.
Sample execution:
Enter a number: 69837
The sum of the digits of this number is: 33(While loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num, sum=0,i=0;//Declare num, sum & i as integer data type also declare sum as zero and i as zero for while loop 
    printf("Enter a number : ");
    scanf("%d",&num);//Taking input for num
    while(i=num%10)//Using while loop & putting condition for i
    {
        sum=sum+i;//Adding sum with i for adding every digit given input
        num=num/10;//Taking every digit from dividing num by 10
        i++;//Incrementing i
    }
    printf("The sum of the digits of this number is : %d",sum);//Printing the output from sum
    return 0;//Returning '0' at the end of the program execution.
}
