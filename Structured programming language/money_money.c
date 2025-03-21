#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int m;//Declare m as integer data type
    printf("Enter a single-digit number : ");
    scanf("%d",&m);//Taking input for m
    switch (m)
    {
    case 0://By using switch case, it will check whether m is zero or not and if it is true, it will check the inner statement(similarly the rest of cases)
        printf("You have only Zero(0) taka");
        break;//Using break statement for not executing rest of cases
    case 1:
        printf("You have only One(1) taka");
        break;
    case 2:
        printf("You have only Two(2) taka");
        break;
    case 3:
        printf("You have only Three(3) taka");
        break;
    case 4:
        printf("You have only Four(4) taka");
        break;
    case 5:
        printf("You have only Five(5) taka");
        break;
    case 6:
        printf("You have only Six(6) taka");
        break;
    case 7:
        printf("You have only Seven(7) taka");
        break;
    case 8:
        printf("You have only Eight(8) taka");
        break;
    case 9:
        printf("You have only Nine(9) taka");
        break;
    
    default:// If any of the above cases does not true then default will execute.
        printf("This number doesn't contain single digit");
    }
    return 0;//The function returns some integer even '0' at the end of the program execution.
}