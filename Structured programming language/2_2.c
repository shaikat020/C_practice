/**Write a program which will take a character input and output whether the character is Vowel or Consonant.**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    char c;//Declare c(character) as character data type
    printf("Enter a character (case insensitive) : ");
    scanf("%c",&c);//Taking input for character
    if((c>=65 && c<=90) || (c>=97 && c<=122))//Using if else condition for limiting ASCII value so that it will only take character in input
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')//Using nested if else and putting statement for vowel character
        {
            printf("\nYou have pressed a Vowel character.\n");
        }
        else
        {
            printf("\nYou have pressed a Consonant character.\n");//Printing consonant if user put the consonant character
        }
    }
    else
    {
        printf("\nYou have pressed an Unidentified Alphabet.\n");//Output will show this if we put non character 
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}