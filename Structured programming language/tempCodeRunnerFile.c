/**3. Write a program that will generate the Fibonacci series of length n.
Sample execution:
Enter length: 12
0 1 1 2 3 5 8 13 21 34 55 89(While loop)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n,num=0,F0=0,F1=1,Fc, i=2;//Declare n, num, F0, F1, Fc & i varriables as integer data type also i as two for while loop
    scanf("%d",&n);//Taking input for n
    printf("%d %d ",F0,F1);//Printing F0 and F1
    while(i<n)//Using while loop & putting condition for i 
    {
        Fc=F1+F0;
        F0=F1;
        F1=Fc;//Using recursive method
        printf("%d ",Fc);//Printing output for Fc
        i++;//Incrementing i
    }
    return 0;//Returning '0' at the end of the program execution.
}
