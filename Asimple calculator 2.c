#include <stdio.h>
#include <stdlib.h>

int main()
{
   char operator;
   double first;
   double second;

   printf("enter operator sign ( +, -, *, / ): ");
   scanf("%c", &operator);

   printf("Enter first number: ");
   scanf(" %lf",&first );
   printf("Enter second number: ");
   scanf("%lf", &second );

   switch (operator){


    case '+':
    printf("%f + %f = %lf",first,second,(first+second));
    break;

    case '-':
    printf("%f - %f = %f",first,second,(first-second));
    break;

    case '*':
    printf("%f * %f = %f",first,second,(first*second));
    break;

    case '/':
    if(second!=0)
    printf("%f / %f = %f",first,second,(first/second));
    else
    printf("math error");
    break;
   }
    return 0;
}
