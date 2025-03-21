#include<stdio.h>
int main()
{
    int num;
    printf("Enter the marks of the subject : ");
    scanf("%d",&num);
    if (num>=40)
    {
        printf("Congratulations! You have passed in this subject");
    }
    else
    {
        printf("Sorry! You didn't passed in this subject");
    }
    return 0;
}
