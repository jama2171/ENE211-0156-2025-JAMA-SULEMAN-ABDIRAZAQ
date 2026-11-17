#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5] = {2, 7, 4, 5, 9};
    int n = 5;
    int i, j, temp;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for (i = 0; i<n; i++)
    {
        printf("%d", num[i]);
    }

    return 0;
}
