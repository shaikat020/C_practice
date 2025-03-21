#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i, a[105], res = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i < n; i++)
        {
            if ((a[i] % 2 == 0 && a[i - 1] % 2 == 0) || (a[i] % 2 != 0 && a[i - 1] % 2 != 0))
            {
                res++;
            }
        }
        printf("%d\n", res);
    }
}
