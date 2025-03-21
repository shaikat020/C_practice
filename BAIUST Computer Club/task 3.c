#include<stdio.h>

int main()

{
    int A,B,value;
    scanf("%d %d",&A,&B);
    for(value=A;value<=B;++value)
    {
        printf("%d ", value*value);
    }
    return 0;
}
