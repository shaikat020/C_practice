/**3. Write a program that will generate the Fibonacci series of length n.
Sample execution:
Enter length: 12
0 1 1 2 3 5 8 13 21 34 55 89(For loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n,num=0,F0=0,F1=1,Fc;//Declare n, num, F0, F1, Fc varriables as integer data type
    scanf("%d",&n);//Taking input for n
    printf("%d %d ",F0,F1);//Printing F0 and F1
    for(int i=2;i<n;i++)//Using for loop & initializing i varriable also putting condition 
    {
        Fc=F1+F0;
        F0=F1;
        F1=Fc;//Using recursive method
        printf("%d ",Fc);//Printing output for Fc
    }
    return 0;//Returning '0' at the end of the program execution.
}
