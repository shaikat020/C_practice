/**///Write a program using C which will take a six-character password input. When you input your password it will show only the asterisk('*') symbol instead of the given character
#include<stdio.h>//Header file-Standard input output
int main()//The function returns some integer even '0' at the end of the program execution.
{
    char c;//Varriable c which is declared as character data type
    printf("Enter your password: ");
    scanf("%c",&c);//Taking input for character

    printf("Enter your password: ******\n");//Printing output and the character will show as asterisk(*)
    return 0;
}