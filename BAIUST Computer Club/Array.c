/**#include<stdio.h>
int main()
{
    int num[5]={20,10,5,30,80};
    printf("%d\n",num[0]);
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
    printf("%d\n",sum);

    return 0;
}**/
/**#include<stdio.h>
int main()
{
    int n;
    int num[100];
    int sum=0;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    printf("%d",sum);
    return 0;
}**/
#include<stdio.h>
int main()
{
    int n;
    int num[100];
    printf("Enter size");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        
    }
    int max = num[0];
    for(int i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("\n Maximum number is %d\n",max);
    return 0;
}
    