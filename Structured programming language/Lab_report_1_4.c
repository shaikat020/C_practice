/**Write a program that takes a lower-case letter from the user and convert it into an upper-case.
letter.**/
#include<stdio.h>//Including Header file-Standard input output
int main()//The function returns some integer even '0' at the end of the program execution.
{
    char low_case,upper_case;//Declare lower case and upper case as character data type
    printf("Enter the lower case letter: ");
    scanf("%c",&low_case);//Taking input for lower case
    upper_case=low_case-32;//Subtracting 32 from the lower case value to get the upper case character.
    printf("Upper case letter is: %c",upper_case);//Printing upper case for output
    return 0;
}