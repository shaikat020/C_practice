#include <stdio.h>

int main()
{

    char str1[100], str2[100];
    int i = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    if (str1[i] == str2[i])
    {
        printf("Both strings are same..\n");
    }
    else
    {
        printf("Both strings are not same\n");
    }

    return 0;

}
