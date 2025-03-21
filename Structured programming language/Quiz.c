/**#include<stdio.h>
int main()
{
    short a;
    long b;
    long long c;
    long double d;

    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double = %d bytes\n", sizeof(d));
    return 0;
}**/
#include<stdio.h>
int main()
{
    int d, a=1, b=2;
    d = a++ + ++b;
    printf("%d %d %d", d, a, b);
}