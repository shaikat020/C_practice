///Write a program that will take some student information and display that information at the end of the program
#include<stdio.h>//Header file-Standard input output
int main()//The function returns some integer even '0' at the end of the program execution.
{
    int age;//Age varriable is declared as integer data type
    float gpa;//GPA varriable is declared as float data type
    char gender;//Gender varriable is declared as character data type
    printf("Student Age: ");
    scanf("%d",&age);//Taking user input for age
    printf("Student GPA: ");
    scanf("%f",&gpa);//Taking user input for GPA
    printf("Student gender: ");
    scanf(" %c",&gender);//Taking user input for gender
    printf("You have entered the Following Information\n================================\nAge : %d, GPA : %.2f, Gender : %c",age,gpa,gender);//Printing the output 
    return 0;
}