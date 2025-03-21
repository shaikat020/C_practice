/*
#include<stdio.h>
int main()

{
    int num1 = 20 , num2 = 10 , output;
    output = num1 + num2 * num1;
    printf("%d\n",output);
    return 0;
}
*/
/**
#include<stdio.h>
int main()

{
    int A=5 , B=7 , C=10;
    int Parameter = A+B+C;
    printf("%d",Parameter);
    return 0;
}
**/
/**
#include<stdio.h>

int main()
{


    int num1 = 20, num2 = 10, output;

    output = num1 * num2 / num1;  ///% / *....+ -

    printf("%d\n",output);

    return 0;

}

**/

/***
#include<stdio.h>

int main()
{
    int a = 3 , b = 4 , c = 5;

    int parameter = a+b+c ;

    printf("Parameter: %d\n",parameter);

    return 0;

}


**/
/***
#include<stdio.h>

int main()
{
    int base = 5, height = 3;

    double area ;    ///int - int = int / int - float = float /int-double = double

    area = 1/2.0 * base * height;   ///1(int)/2(int)=0(int)

    printf("Area : %.2lf\n",area);  ///2.0 = double

    return 0;

}


**/
/*Sonia Akter 106410:05 PM*/
#include<stdio.h>

int main()
{
    int num1 , num2, sum;
    char ch;
    printf("Enter two numbers ");

    scanf("%d %c",&num1,&ch);  ///5   num1 = 5

    ///scanf("%d",&num2);

    sum = num1+num2;

    printf("%d %c\n",num1,ch);

    return 0;

}
