#include<stdio.h>
int main()
{
    int n,num=0,F0=0,F1=1,Fc;
    scanf("%d",&n);
    printf("%d %d ",F0,F1);
    for(int i=2;i<n;i++)
    {
        Fc=F1+F0;
        F0=F1;
        F1=Fc;
        printf("%d ",Fc);
    }
    return 0;
}
