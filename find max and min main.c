#include <stdio.h>
#include <stdlib.h>

int main()
{
int num [3]={45, 25, 21};
int n = 3;
int max = 0;
int min = num[0];


for (int i=0; i<n; i++)
{
    if (num[i] > max)
    {
        max = num[i];
    }
    else if (num[i] < min)
    {
        min = num[i];
    }
}
printf("Max = %d\n", max);
printf("Min = %d\n", min);
    return 0;
}
