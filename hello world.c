#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare varibale
    //dataType variableName
    char userName[50];

    printf("Please enter username:\n "); //output
    scanf("%s", &userName);  //input
    printf("Hello %s", userName);//output
    return 0;
}
