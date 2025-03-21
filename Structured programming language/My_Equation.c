/**Write a program that will take a simple equation and calculate the output. The available options are: Addition, Subtraction, Division, Multiplication.

Input 
Enter your equation : (Format is a + b ) : 5 + 6


Output:

Answer is : 5+6=11

Input:
Enter your equation : (Format is a + b ) :  5*6

Output:
Answer is : 5*6=30**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int a, b;//Declare a, b as integer data type
    char c;//Declare c as character data type
    printf("Enter your equation : (Format is a + b ) : ");
    scanf("%d %c %d", &a, &c, &b);//Taking input for a, b and and for symbol c
    if(c=='+')
    {
        printf("Answer is : %d+%d=%d", a, b, a+b);//Putting if else condition & printing this output if the statement is true
    }
    else if(c=='-')
    {
        printf("Answer is : %d-%d=%d", a, b, a-b);//Putting else if condition cause this program require more than two statement
    }
    else if(c=='*')
    {
        printf("Answer is : %d*%d=%d", a, b, a*b);
    }
    else if(c=='/')
    {
        printf("Answer is : %d/%d=%d", a, b, a/b);
    }
    return 0;//Returning '0' at the end of the program execution.
}
