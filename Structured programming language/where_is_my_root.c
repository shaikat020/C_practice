/**The standard form of a quadratic equation is: 

 
ax^2 + bx + c = 0, where
a, b and c are real numbers and
a != 0

The term b^2;  - 4ac is known as the  of a quadratic equation. It tells the nature of the roots.
If the discriminant is greater than 0, the roots are real and different.
If the discriminant is equal to 0, the roots are real and equal.
If the discriminant is less than 0, the roots are complex and different.
Write a C Program to Find the Roots of a Quadratic Equation.


Input:
Enter coefficients a, b and c: 2.3
4
5.6 

Output:
 root1 = -0.87+1.30i and root2 = -0.87-1.30i**/
#include<stdio.h>//Including Header file-Standard input output
#include<math.h>//Including Header file for math library
int main()
{
    double a, b, c, root1, root2, real, imag, d;//Declaring these varriable as double data type
    printf("Enter coefficient : ");
    scanf("%lf %lf %lf",&a,&b,&c);//Taking numbers in input for a,b,c
    d = b*b- 4.0 * a*c ;//Putting equation for discriminant
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("root1 = %lf \nroot2 = %lf",root1,root2);//Printing roots which are real and different when discriminant is greater than 0
    }
    else if(d==0)
    {
        root1=(-b)/(2*a);
        printf("root1 = root2 = %lf",root1);//Printing roots which are real and equal when discriminant is equal to 0
    }
    else
    {
        real=(-b)/(2*a);
        imag=sqrt((-d))/(2*a);   
        printf("root1 = %.2f+%.2fi \nroot2 = %.2f-%.2fi",real,imag,real,imag);//Printing roots which are complex and different when discriminant is less than 0
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}