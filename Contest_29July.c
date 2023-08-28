#include <stdio.h>

int main()
{
    int n, a, count = 0, countmax = 0;
    scanf("%d", &n);
    int list1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        for (int j = 1; j <= a; j++)
        {
            if (a % j == 0)
            {
                count++;
                if (count > countmax)
                {
                    countmax = count;
                }
            }
            else
            {
                count = 0;
                countmax = 0;
            }
        }
        list1[i] = countmax;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", list1[i]);
    }
    return 0;
}