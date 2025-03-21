/**3. Write a program which will take upto two digit number and output the reverse value.
Input:
Enter a number up to two digit: 110
Output:
You have entered a number which is more than two digit.
Input:
Enter a number up to two digit: 13
Output:
Your desired output is : 31**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int num_1, num_2, a, b;//Declare num_1,num_2,a & b as integer data type
    printf("Enter a number up to two digit : ");
    scanf("%d",&num_1);//Taking input for num_1
    a=(num_1/10);//Dividing num_1 by 10 to get second digit value
    b=(num_1-(a*10));//Putting this equation to get first digit value
    num_2=(a+(b*10));//Multiplying 10 with b and adding with a to get the reverse value of given number
    if(num_1<=99)//Using if else condition so that it will not show more than two digit in output
    {
        printf("\nYour desired output is : %d\n",num_2);
    }
    else
    {
        printf("\nYou have entered a number which is more than two digit.\n");
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}