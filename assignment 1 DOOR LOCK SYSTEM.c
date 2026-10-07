#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int correctpin = 9999 ;
    int pin ;
    int choice;
    int attempts;

    for(attempts = 1; attempts <= 3; attempts++)

    {

    printf("Please enter your 4 digit pin : ");
    scanf("%d", &pin);
    if (pin==correctpin)
    {
    printf(" Access granted. \n ");

    printf(" \n===DEVICE MENU=== \n");
    printf("1. OPEN DOOR. \n");
    printf("2. CHANGE USERNAME. \n");
    printf("3. CHANGE PIN. \n");
    printf("4. EXIT. \n");

    scanf("%d", &choice);



    switch (choice) {

    case 1 :
    printf("Access granted. Door unlocked\n");
    break;

    case 2 :
    printf(" Change username feature coming soon. \n");
    break;

    case 3 :
    printf("Change PIN feature coming soon. \n" );
    break;

    case 4 :
    printf("Exiting system. \n");
    break;

    default :
    printf(" Invalid option, please try again. \n");
    break;

    }
    break;}

    else if(pin > 9999)
    printf("PIN is too long (must be four digits)");
    else if(pin<999)
    printf("PIN is too short (must be four digits)");
    else
    printf("wrong pin");
     if ( attempts < 3 ){
        printf(" Try again. \n");
     }
    }

    if (attempts>3)
    {
        printf(" \n System locked!Wait for 5 seconds.\n");
        for (int seconds = 5; seconds >= 1; seconds --)
        {


        printf("\n %d", seconds );
        Sleep(1000);}

        printf(" \n You can try again now.");

    }

    return 0;
}
