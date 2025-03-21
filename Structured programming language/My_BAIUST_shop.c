/**Write a program which will show a menu for a Grocery Shop. User will be allowed to buy product as many times S/he wants. At the end total bill will be shown.

Input / Output:
============

MY G-Shop
============
Item                Unit                        Price (Tk)
=======             =====                      ========
1. Potato           1 Kg                          30
2. Tomato           1 Kg                          60
3. Onion            1 Kg                          80
4. Exit

Enter Your Choice: 1
How much do you want to buy: 2

Your current bill is : 60 (Tk.)

Enter Your Choice: 4
Your Final Bill is : 60 (Tk.)**/
#include<stdio.h>//Including Header file-Standard input output
int main()
{
    int potato=30, tomato=60, onion=80, choice, m, bill, total;//Declare m as integer data type
    printf("============\nMY G-Shop\n============\n");
    printf("Item                   Unit                     Price (Tk)\n");
    printf("=======                 =====                   ========\n");
    printf("1. Potato               1 Kg                     %d\n", potato);
    printf("2. Tomato               1 Kg                     %d\n", tomato);
    printf("3. Onion                1 Kg                     %d\n", onion);
    printf("4. Exit\n");
    while (choice!=4)
    {
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            
            case 1 ://By using switch case, it will check whether m is zero or not and if it is true, it will check the inner statement(similarly the rest of cases)
            {
                bill=potato;
                printf("How much do you want to buy: ");
                scanf("%d",&m);//taking input for how much the buyer want to buy
                total = total + (bill*m);//Total price from previous buying
                printf("\nYour current bill is : %d (Tk.)\n",total);
                break;//Using break statement for not executing rest of cases
            }
            case 2 :
            {
                bill=tomato;
                printf("How much do you want to buy: ");
                scanf("%d",&m);
                total = total + (bill*m);
                printf("\nYour current bill is : %d (Tk.)\n",total);
                break;
            }
            case 3 :
            {
                bill=onion;
                printf("How much do you want to buy: ");
                scanf("%d",&m);
                total = total + (bill*m);
                printf("\nYour current bill is : %d (Tk.)\n",total);
                break;
            }
            case 4 :
                printf("Your Final Bill is : %d (Tk.)\n", total);//Putting 4, it will exited the program then it will show total
                break;
        }    
    }
    return 0;//Returning '0' at the end of the program execution.
}