/**
#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int substract(int a, int b)
{
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
float division(int a, int b)
{
    if(b!=0)
    {
        return (a/b);

    }
    else
    {
        printf("Division by zero not possible");
    }
}
int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", substract(x, y));
    printf("Product: %d\n", multiply(x, y));
    printf("Quotient: %.2f\n", division(x, y));
    return 0;
}
#include<stdio.h>
int sum_of_natural_number(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + sum_of_natural_number(n-1);
    }
}
int main()
{
    int n;
    printf("Input");
    scanf("%d",&n);
    printf("\nThe Sum of Natural Number upto %d is :%d ",n ,sum_of_natural_number(n));
    return 0;
}
#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    printf("Enter the number   ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d   ",fibonacci(i));
    }
    return 0;
}**/
#include<stdio.h>
void swap_by_value(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void swap_by_reference(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1 = 5, num2 = 10;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1,num2);
    swap_by_value(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n",num1, num2);
    num1 = 5, num2 = 10; // Reset the values
    printf("Before swapping: num1 = %d, num2 = %d\n", num1,num2);
    swap_by_reference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}