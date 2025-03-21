/**1. Write a program that will read the marks of 40 students in an array and determine the
frequency of grades. The marks will be in the range [25, 99].
Sample output:
The marks are:
96 44 48 26 62 91 99 30
49 71 84 41 84 68 28 32
89 38 34 34 43 45 99 29
47 96 60 93 77 43 26 54
61 43 93 92 69 60 97 68
GRADE FREQUENCY
===== =========
A+ 12
A 1
A- 1
B+ 3
B 4
B- 0
C+ 1
C 4
D 5
F 9**/
#include<stdio.h>//Including Header file-Standard input output
#include<stdlib.h>//Including Header file-Standard input output
#include<time.h>//Including Header file-Standard input output
int main()
{
    int marks[40];//Declare marks with array as integer data type
    int frequency[10]={0};//Declare frequency with array as integer data type
    srand(time(NULL));//Using to seed the random number generator in the C standard library
    printf("The marks are: ");
    for(int i=0;i<40;i++)//Putting 'for' loop and initializing i for random number
    {
        marks[i]=rand()%100+25;//Putting this formula for random number
        printf("%d\n",marks[i]);//Printing the random number
    }
    printf("\n");//Printing new line
    for(int i=0;i<40;i++)//Putting 'for' loop and intializing i for grade
    {
        if(marks[i]>=90 && marks[i]<=100)//Using if else condition and putting this condition if the statement is true
        {
            frequency[0]++;
        }
        else if(marks[i]>=90 && marks[i]<=100)//Using else if condition for having more than two condition
        {
            frequency[0]++;
        }
        else if(marks[i]>=85 && marks[i]<=90)
        {
            frequency[1]++;
        }
        else if(marks[i]>=80 && marks[i]<=85)
        {
            frequency[2]++;
        }
        else if(marks[i]>=75 && marks[i]<=80)
        {
            frequency[3]++;
        }
        else if(marks[i]>=70 && marks[i]<=75)
        {
            frequency[4]++;
        }
        else if(marks[i]>=65 && marks[i]<=70)
        {
            frequency[5]++;
        }
        else if(marks[i]>=60 && marks[i]<=65)
        {
            frequency[6]++;
        }
        else if(marks[i]>=55 && marks[i]<=60)
        {
            frequency[7]++;
        }
        else if(marks[i]>=50 && marks[i]<=55)
        {
            frequency[8]++;
        }
        else
        {
            frequency[9]++;
        }
    }
    printf("GRADE\tFREQUENCY\n=====\t=======\n");//Printing these amount of grades for output
    printf("A+\t%d\n",frequency[0]);
    printf("A\t%d\n",frequency[1]);
    printf("A-\t%d\n",frequency[2]);
    printf("B+\t%d\n",frequency[3]);
    printf("B\t%d\n",frequency[4]);
    printf("B-\t%d\n",frequency[5]);
    printf("C\t%d\n",frequency[6]);
    printf("D\t%d\n",frequency[7]);
    printf("F\t%d\n",frequency[8]);
    return 0;//Returning '0' at the end of the program execution.
}