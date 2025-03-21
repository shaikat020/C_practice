#include<stdio.h>

int main()
{
    int size, level;
    printf("Enter size: ");
    scanf("%d",&size);
    printf("Enter level: ");
    scanf("%d",&level);
    int space = level*size-1;

    for( int i=1; i<=level; i++ ){
        for( int j=1; j<=size; j++ ){
            for( int k=1; k<=space; k++ ){
                printf(" ");
            }
            for( int l=1; l<=i; l++){
                printf("/");
                if( j==size ){
                    for( int m=3; m<=j*2; m++ ) printf("_");
                }
                else{
                    for( int m=3; m<=j*2; m++ ){
                        printf(" ");
                    }
                }
                printf("\\");
                if(l<i){
                    for( int m=size-j; m>0; m-- ){
                        printf("  ");
                    }
                }
            }
            printf("\n");
            space--;
        }

    }

    return 0;
}