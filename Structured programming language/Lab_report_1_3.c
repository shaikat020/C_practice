/**Write a program that asks the user to enter two numbers, obtains the two numbers from the
user and prints the sum, product, difference and quotient of the two numbers.
Sample output:
Enter 1 st number: 25
Enter 2 nd number: 5
Sum: 30
Product: 125
Difference: 20
Quotient: 5**/
#include<stdio.h>//Including Header file-Standard input output
int main()//The function returns some integer even '0' at the end of the program execution.
{
    int num1, num2;//Declare num1, num2 as integer data type
    printf("Enter 1 st number: ");
    scanf("%d",&num1);//Taking input for num1
    printf("Enter 2 nd number: ");
    scanf("%d",&num2);//Taking input for num2
    printf("Sum: %d\n",num1+num2);//Printing sum for num1 & num2
    printf("Product: %d\n",num1*num2);//Printing product for num1 & num2
    printf("Difference: %d\n",num1-num2);//Printing difference for num1 & num2
    printf("Quotient: %d\n",num1/num2);//Printing quotient for num1 & num2
    return 0;
}