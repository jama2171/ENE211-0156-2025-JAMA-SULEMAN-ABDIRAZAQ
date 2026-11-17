#include <stdio.h>
#include <stdlib.h>

int main()
{
int num [3]= {2, 5, 8};
int n = 3;
int sum = 0;

for(int i=0; i<n; i++){
    sum += num[i]; } // meaning sum = sum + num
    printf("Sum = %d", sum);

    return 0;
}
