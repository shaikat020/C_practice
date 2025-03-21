/**2. Write a program to reverse a number.
Sample execution:
Enter a number: 126584
The reverse number is: 485621(While loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num1, reminder,reverse=0;//Declare num1, reminder & reverse as integer data type also declare reverse as zero
    printf("Enter a number : ");
    scanf("%d",&num1);//Taking input for num1
    int i=num1;//Declare i as integer and also i as num1 for while loop
    while(i!=0)//Using for loop & putting condition for i which is not equal to zero
    {
        reminder=i%10;////Taking every digit from dividing i by 10 and putting it in reminder
        reverse=(reverse*10)+reminder;//Multiplying reverse with 10 for every loop and adding it with reminder
        i=i/10;//Dividing i by 10 every loop 
    }
    printf("The reverse number is : %d",reverse);//Printing the output from reverse
    return 0;//Returning '0' at the end of the program execution.
}
