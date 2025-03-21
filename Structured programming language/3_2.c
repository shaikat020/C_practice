/**2. Write a program to reverse a number.
Sample execution:
Enter a number: 126584
The reverse number is: 485621(For loop)**/
#include<stdio.h>
int main()
{
    int num1, reminder,reverse=0;
    printf("Enter a number : ");
    scanf("%d",&num1);
    for(int i=num1;i!=0;)
    {
        reminder=i%10;
        reverse=(reverse*10)+reminder;
        i=i/10;
    }
    printf("The reverse number is : %d",reverse);
    return 0;
}
