/**3. Write a program to print the following pattern:
n=3
3 2 1
2 1
1
**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int n;//Declare n as integer data type
    printf("Enter the value of n : ");
    scanf("%d",&n);//Taking input for n

    for(int i=n;i>=1;i--)//Using for loop & initializing i varriable also putting condition for i
    {
        for(int j=i;j>=1;j--)//Using nested loop for sequence number
        {
            printf("%d ",j);//Printing the number
        }
        
        printf("\n");//Printing new line
    }

    return 0;//Returning '0' at the end of the program execution.
}
