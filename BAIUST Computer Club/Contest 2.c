/**
#include<stdio.h>

int main()

{
    char s;
    int A,B;
    while(1)
    {
    scanf("%d %c %d",&A,&s,&B);
    if(s == '+')
        printf("%d\n",A+B);
    else if(s == '-')
        printf("%d\n",A-B);
    else if(s == '*')
        printf("%d\n",A*B);
    else if(s == '/')
        printf("%d\n",A/B);
    else if(s == '?')
    break;
    }
    return 0;
}**/
/**
#include<stdio.h>
int main

{
    int n,num1,num2,num3,num4;
    int H1,L1,H2,L2;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
        if(num1>num2){
            H1 = num1;
            L1 = num2;
        }
        else{
            H1 = num2;
            L1 = num1;
        }
        if(num3>num4){
            H2 = num3;
            L2 = num4;
        }
        else{
            H2 = num4;
            L2 = num3;
        }
        if(H1<L2 || H2<L1) {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;

}

#include<stdio.h>
int main()

{
    int n , P;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b)
        {
            Q1=a;
            D1=b;
        }
        else
        {
            Q1=b;
            D1=a;
        }
        if(c>d)
        {
            Q2=c;
            D2=d;
        }
        else
        {
            Q2=d;
            D2=c;
        }
        if(Q2>D1 && Q1>D2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}**//***
#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    double sum=0;
    int ar[n];
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    sum=sum/n;
    printf("%lf",sum);
    return 0;
}
**/

#include<stdio.h>

int main()

{
    int n,a;
    scanf("%d",&n);
    int number[n];
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&number);
        number[i]=number;
    }
    int small=number[0],large=number[0];
    long int sum=number[0];
    for(int i=1;i<=0;++i)
    {
        if(number[i]>large)
        {
            large=number[i];
        }
        else if(number[i]<small)
        {
            small=number[i];
        }
        sum+=number[i];
    }
    printf("%d %d %dl",small,large,sum);
    return 0;
}
