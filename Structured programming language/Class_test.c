/**#include<stdio.h>
int main()
{
    int n;
    printf("Please enter the value:\n1=Air Ticket\n2=Bus Ticket\n3=Train Ticket\n\n");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            printf("Here is your Air Ticket");
            break;
        case 2:
            printf("Here is your Bus Ticket");
            break;
        case 3:
            printf("Here is your Train Ticket");
            break;
        default:
            printf("wrong input");
    }
    return 0;
}**/
#include<stdio.h>
int main()
{
    int w=0, x=2.5,y=5,z=3,r,s=4,t=5,u=-3;
    double a=2.36,b=3.19,c=3.0,d=2.91726;

    printf("Expr_1 = %d\n",(int)(c*y/z+y/z*c));
    printf("Expr_2 = %lf\n",x-s*t*-c-u);
    printf("Expr_3 = %f\n",(float)(x + y < z + w && a > b - 17 * x || ! x < 5));
    return 0;
}