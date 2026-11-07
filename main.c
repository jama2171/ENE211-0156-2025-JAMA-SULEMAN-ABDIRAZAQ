#include <stdio.h>
#include <stdlib.h>
// function declaration
int login();
void checkBalance();
void deposit(float amount);
void withdraw(float amount);

// login function
 int login () {

   int correctpin = 9999;
   int pin =0 ;
   int attempts = 0;

   for (attempts = 1; attempts <=3; attempts ++){
    printf("Please enter your 4 digit pin.\n");
    scanf("%d", &pin);

    if (pin == correctpin ){
        printf("Access granted. \n");
        return 1;
    }
    else if (pin > 9999 || pin < 999){
        printf("Pin must be 4 digits\n");
    }
    else  {
        printf("Wrong pin.\n");
    }
    if(attempts < 3){
        printf("Try again. \n");
    }

    }
    printf("Maximum attempts exceeded. Access denied. \n");
    return 0;
 }

 // starting balance
 float balance = 10000;

 // Balance inquiry function
 void checkBalance()
 {
     printf("Your balance is : %.2f\n", balance );
 }

 // Deposit function :
 void deposit(float amount)
 {
     if (amount > 0)
     {
     balance += amount ; // meaning : balance = balance + amount
     printf("Deposit successful.\n");
     printf("New balance: %.2f\n", balance);
     }
     else
     {
         printf("Invalid deposit amount.");
     }
 }

 // Withdrawal function
 void withdraw(float amount)
 {
     if(amount <= balance && amount > 0)
     {
         balance -= amount ; // meaning : balance = balance - amount
         printf("Withdrawal successful.\n");
         printf("Remaining balance is: %.2f \n", balance);
     }
     else
     {
         printf("Insufficient balance or invalid amount.\n");
     }
 }

// Main function

int main()
{
  int choice;
  float amount;

  // call login function
  if (login() == 1){
    do {
    printf("Welcome to the ATM system. \n");

    printf(" \n===ATM MENU=== \n");
    printf("1. BALANCE INQUIRY . \n");
    printf("2. DEPOSIT. \n");
    printf("3. WITHDRAW. \n");
    printf("4. EXIT. \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        checkBalance();
        break;

    case 2:
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        deposit(amount);
        break;

    case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f",&amount);
        withdraw(amount);
        break;

    case 4:
        printf("Thank you for using our ATM. \n");
        break;

    default:
        printf("Invalid choice: \n");
    }
    } while(choice != 4);

  }
  else {
    printf("Access denied. Session terminated.\n");
  }
  return 0;


    return 0;
}
