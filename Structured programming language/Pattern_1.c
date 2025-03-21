/**n = 4
        0 
      0 1 0 
    0 1 2 1 0 
  0 1 2 3 2 1 0 
0 1 2 3 4 3 2 1 0 
  0 1 2 3 2 1 0 
    0 1 2 1 0 
      0 1 0 
        0 
**/
#include <stdio.h>

int main()
{
    int n;//Declare n integer data type
    printf("n = ");
    scanf("%d",&n);//Taking input for n
    for(int i=0;i<=n;i++)//Using 'for' loop for 1st half in column for required output
    {
        for(int j=0;j<n-i;j++)//Using nested loop for space
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)//Using nested loop for 1st half number in row for required output
        {
            printf("%d ",j);
        }
        for(int j=i-1;j>=0;j--)//Using nested loop for 2nd half number in row for required output
        {
            printf("%d ",j);
        }
        printf("\n");//Printing new line
    }
    for(int i=0;i<n;i++)//Using 'for' loop for 2nd half in column for required output
    {
        for(int j=0;j<=i;j++)//Using nested loop for space
        {
            printf("  ");
        }
        for(int j=0;j<n-i;j++)//Using nested loop for 1st half number in row for required output
        {
            printf("%d ",j);
        }
        for(int j=n-i-2;j>=0;j--)//Using nested loop for 2nd half number in row for required output
        {
            printf("%d ",j);
        }
        printf("\n");//Printing new line
    }
    return 0;//Returning '0' at the end of the program execution.
}