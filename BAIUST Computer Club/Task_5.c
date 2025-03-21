/**#include <stdio.h>

int main(){
    int num_1, num_2, exist = 0;
    scanf("%d",&num_1);
    int array_1[num_1];
    for(int i=0; i<num_1; i++)
    {
        scanf("%d",&array_1[i]);
    }
    scanf("%d",&num_2);
    int array_2[num_2];
    for(int i=0; i<num_2; i++)
    {
        scanf("%d",&array_2[i]);
    }
    for(int i=0; i<num_1; i++)
    {
        for(int j=0; j<num_2; j++)
        {
            if(array_1[i]==array_2[j])
            {
                exist = 1;
            }
        }
        if (exist == 0)
        {
            printf("%d ",array_1[i]);
        }
        exist=0;
    }
    return 0;
}**/
#include<stdio.h>
int main()
{
    int size_1,size_2;
    scanf("%d",&size_1);
    int array1[size_1];
    for(int i=0;i<size_1;i++)
    {
        scanf("%d",&array1[i]);
    }
    scanf("%d",&size_2);
    int array2[size_2];
    for(int i=0;i<size_2;i++)
    {
        scanf("%d",&array2[i]);
    }
    int new_array[size_1+size_2];
    for(int i=0;i<size_1;i++)
    {
        new_array[i]=array1[size_1-1-i];
    }
    for(int i=size_1;i<(size_1+size_2);i++)
    {
        new_array[i]=array2[(size_1+size_2)-1-i];
    }
    for(int i=0;i<(size_1+size_2);i++)
    {
        printf("%d\t",new_array[i]);
    }
    return 0;
}
/**#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int min=num[0];
    for(int i=0;i<n;i++)
    {
        if(min>num[i])
        {
            min=num[i];
        }
    }
    printf("Minimum number is %d",min);
    return 0;
}
**/
/**#include<stdio.h>
int main()
{
    int arr[5]={7,5,1,9,3};
    int number;
    scanf("%d",&number);
    int output=0;
    for(int i=0;i<5;i++)
    {
        if(number==arr[i])
        {
            output=1;
        }
    }
    if(output==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}**/
/**#include<stdio.h>
int main()
{
    float num[5]={1.2,2.6,3.9,4.1,5.9};
    for(int i=0;i<5;i++)
    {
        printf("%f\n",num[i]);
    }
    return 0;
}**/
/**#include<stdio.h>
int main()
{
    char vowel[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++)
    {
        printf("%c\n",vowel[i]);
    }
    return 0;
}**/
