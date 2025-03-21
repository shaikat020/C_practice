#include <stdio.h>


int main(){

    int n, index=0;
    char pname[10][20];
    int pprice[10];


    char cart[10];
    int cart_index = 0;
    int total_price[10] = {0};
    

    do{
        int m;
        Main_menu:
        printf("_____Main Menu_____\n");
        printf("1. Show product\n2. Buy Product\n3. Exit\n");
        printf("____________________\n");
        scanf("%d",&n);
        if(n==1)
        {
            Product_list:
            printf("_____Product List_____\n");
            printf("1. Show product\n2. Add new Product\n3. Back to Main menu\n");
            printf("_______________________\n");
            scanf("%d",&m);
            if(m==3) goto Main_menu;
            else if(m==1)
            {
                if(index==0)
                {
                    printf("\n\n");
                    printf("There is no Product\n");
                }
                else
                {
                    printf("\n\n");
                    printf("Products : \n");
                    for(int i=0; i<index; i++)
                    {
                        printf("%d. %s\t: ",i+1,pname[i]);
                        printf("%d TK\n",pprice[i]);
                    }
                }
                printf("\n\n\n");
                goto Product_list;
            }
            else if(m==2)
            {
                int k;
                printf("\n\n");
                printf("Enter how much product do you want to add : " );
                scanf("%d",&k);
                while(k--)
                {
                    printf("Enter product %d : ",index+1);
                    scanf("%s",pname[index]);
                    printf("Enter product %d price : ",index+1);
                    scanf("%d",&pprice[index]);
                    index++;
                }
                printf("\n\n\n");
                goto Product_list;
            }
            else
            {
                printf("\n\nInvalid input !!!\n\n");
                goto Product_list;
            }
        }
        else if(n==2)
        {
            Buy_product:
            printf("_____Buy Product_____\n");
            printf("1. Show product list\n2. Buy product\n3. Show Bill\n4. Back to main menu\n");
            printf("_____________________\n");
            scanf("%d",&m);
            if(m==4)
            {
                goto Main_menu;
            }
            else if(m==1)
            {
                if(index==0)
                {
                    printf("\n\n");
                    printf("There is no Product\n");
                }
                else
                {
                    printf("\n\n");
                    printf("Products : \n");
                    for(int i=0; i<index; i++)
                    {
                        printf("%d. %s\t: ",i+1,pname[i]);
                        printf("%d TK\n",pprice[i]);
                    }
                }
                printf("\n\n\n");
                goto Buy_product;
            }
            else if(m==2)
            {
                if(index==0)
                {
                    printf("\n\n");
                    printf("There is no Product\n");
                }
                else
                {
                    buy:
                    int product_num, quantity, exist=0, existance_index;
                    printf("\n\n");
                    printf("Products : \n");
                    for(int i=0; i<index; i++){
                        printf("%d. %s\t: ",i+1,pname[i]);
                        printf("%d TK\n",pprice[i]);
                    }
                    printf("Enter the product number for buy : ");
                    scanf("%d",&product_num);
                    printf("Enter quantity (piece) : ");
                    scanf("%d",&quantity);

                    for(int i=0; i<cart_index; i++)
                    {
                        if(cart[i] == (product_num-1))
                        {
                            exist = 1;
                            existance_index = i;
                            break;
                        }
                    }

                    if(exist)
                    {
                        total_price[existance_index] += pprice[product_num-1] * quantity;
                    }
                    else
                    {
                        cart[cart_index] = product_num-1;
                        total_price[cart_index] += pprice[product_num-1] * quantity;
                        cart_index++;
                    }
                    exist = 0;



                    int decision;
                    printf("\n\n___Buy more product?___\n1. YES\n2. NO\n");
                    printf("Enter the number : ");
                    scanf("%d",&decision);
                    printf("\n\n\n");
                    if(decision==1) goto buy;
                    else if(decision==2) goto Buy_product;

                }
            }
            else if(m==3){
                if(cart_index==0){
                    printf("\n\nPlease buy some product first !!\n\n");
                    goto Buy_product;
                }
                else
                {
                    int total_bill = 0;
                    printf("___Show bill___\n");
                    for(int i=0; i<cart_index; i++){
                        printf("%s\t",pname[cart[i]]);
                        printf("%d TK\n",total_price[i]);
                        total_bill += total_price[i];

                    }
                    printf("__________________\nTotal\t: %d\n",total_bill);
                    printf("\n");
                    goto Buy_product;
                }
            }
            else
            {
                printf("\n\nInvalid input !!!\n\n");
                goto Buy_product;
            }
        }
    }
    while(n!=3);


    return 0;
}