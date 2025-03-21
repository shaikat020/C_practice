/**#include<stdio.h>

int main ()

{
    long long int a, b, c;
    scanf("%lld%lld", & a, & b);
    if (a > b){
      c = a - b;
    }
    else{
      c = b - a;
    }
    printf("%lld\n", c);


  return 0;
}
**/
/**
#include<stdio.h>

int main ()

{
    long int a, b, x, y;
    while(scanf("%ld%ld", & a, & b)!=EOF){
            x = a - b;
            y = b - a;
        if (a > b){
         printf("%ld\n",x);
        }
        else{
         printf("%ld\n",y);
        }
    }

    return 0;
}
**/


#include<stdio.h>

int main()
{
    int a = (2,3,4);
   /** int b = 2,3,4;**/
    printf("%d \n",a);

    return 0;
}
