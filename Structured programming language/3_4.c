#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if((i%3!=0 && i%5!=0) || (i%3==0 && i%5==0))
        {
            printf("%d ",i);
        }
    }
    return 0;
}