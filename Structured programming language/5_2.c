/**2. Write a program that will declare a 10-element integer array. The array will be filled up by
random integers in the range [0, 100]. Use the library functions rand() and srand()
defined in stdlib.h to perform the task. After that, determine the maximum element,
minimum element and the average of the numbers.
Sample Output:
The array is:
52 88 17 23 58 36 24 93 15 62
Maximum: 93
Minimum: 15
Average: 46.80
**/
#include<stdio.h>//Including Header file-Standard input output
#include<stdlib.h>//Including Header file-Standard library function
int main()
{
    int arr[10];//Declare a with array as integer data type
    float sum=0;//Declare sum with 0 as data type
    srand(10);
    for(int i=0;i<10;i++)//Using for loop and initializing i
    {
        arr[i]=rand()%100;
        sum=sum+arr[i];//Adding sum with arr[i]
    }
    for(int i=0;i<10;i++)//Using 'for' loop for random number
    {
        printf("%d ",arr[i]);//Printing the random number
    }
    int max=arr[0], min=arr[0];
    for(int i=0;i<10;i++)//Using 'for' loop for max & min
    {
        if(arr[i]>max)//Using if statement for maximum number
        {
            max=arr[i];
        }
        if(arr[i]<min)//Using if statement for minimum number
        {
            min=arr[i];
        }
    }
    printf("\nMaximum: %d\n",max);//Printing maximum number
    printf("Minimum: %d\n",min);//Printing minimum number
    printf("Average: %f\n",sum/10);//Printing average number
}