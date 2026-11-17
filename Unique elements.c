#include <stdio.h>
#include <stdlib.h>

int main()
{
int num[4]={3, 2, 2, 5};
int n=4;
int i;
int j;
int count;

for (i=0; i<n; i++)
{
    count = 0;
    for (j=0; j<n; j++)
    {
        if(num[i]==num[j])
        {
            count++;
        }
    }
    if (count==1)
    {
        printf("%d", num[i]);
    }
}
    return 0;
}
