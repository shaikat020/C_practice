/**1. Write a program that will declare a 10-element integer array. Fill the array with integers
taken from the user and show the sum of the integers.
Sample Output:
Enter a[ 0 ]: 25
Enter a[ 1 ]: 13
Enter a[ 2 ]: 17
Enter a[ 3 ]: 19
Enter a[ 4 ]: -5
Enter a[ 5 ]: 23
Enter a[ 6 ]: 29
Enter a[ 7 ]: 31
Enter a[ 8 ]: -12
Enter a[ 9 ]: 37
The sum is: 177**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int a[10], sum=0;//Declare a with array and sum as 0 as integer data type
    for(int i=0;i<10;i++)//Putting for loop and initializing i
    {
        printf("Enter a[ %d ] : ",i);//Printing the output
        scanf("%d",&a[i]);//Taking input for a[i]
        sum=sum+a[i];//Adding sum with a[i]
    }
    printf("The sum is : %d",sum);//Printing sum 
    return 0;//Returning '0' at the end of the program execution.
}
