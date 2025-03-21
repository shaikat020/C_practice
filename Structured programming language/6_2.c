/**2. Write a program to sort an array of 20 integers using the Bubble Sort algorithm.
Sample output:
Original array is:
62 45 34 88 59 85 33 45 9 34 62 11 36 90 30 65 65 81 39 61
Sorted array is:
9 11 30 33 34 34 36 39 45 45 59 61 62 62 65 65 81 85 88 90**/
#include <stdio.h>//Including Header file-Standard input output
int main()
{
    int array[100], swap;//Declare 'array' with array as integer data type and swap as integer data type

    printf("Original array is:\n");//Printing the output

    for (int i = 0; i < 20; i++)//Putting for loop and initializing i
    {
        scanf("%d", &array[i]);//Taking input number of array
    }
    for (int i = 0 ; i < 19; i++)//Putting for loop and initializing i
    {
        for (int j = 0 ; j < 20 - i - 1; j++)//Putting for loop and initializing j
        {
            if (array[j] > array[j+1]) // For decreasing order use '<' instead of '>' 
            {
                swap       = array[j];//Putting these formula for swiping
                array[j]   = array[j+1];
                array[j+1] = swap;
            }
        }
    }
    printf("Sorted array is:\n");

    for (int i = 0; i < 20; i++)//Putting for loop and initializing i
    {
        printf("%d ", array[i]);//Printing the sorted array
    }
    return 0;//Returning '0' at the end of the program execution.
}