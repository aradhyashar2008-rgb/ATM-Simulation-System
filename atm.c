#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int attempts = 3;
    int choice;
    int newPin;
    int balance = 5000;
    int amount;

    int transactions[50];
    int count = 0;
    int i;

    printf("\n================================\n");
    printf("       WELCOME TO SMART ATM\n");
    printf("================================\n");

    // PIN verification
    while (attempts > 0)
    {
        printf("\nEnter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin)
        {
            printf("\nLogin Successful!\n");
            break;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN!\n");
            printf("Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0)
    {
        printf("\nAccess Denied!\n");
        return 0;
    }

    // ATM menu
    do
    {
        printf("\n========== SMART ATM ==========\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Change PIN\n");
        printf("5. Transaction History\n");
        printf("6. Exit\n");
        printf("===============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nYour Balance is: Rs. %d\n", balance);
                break;

            case 2:
                printf("\nEnter withdrawal amount: ");
                scanf("%d", &amount);

                if (amount <= 0)
                {
                    printf("Enter a valid amount!\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    balance = balance - amount;

                    transactions[count] = -amount;
                    count++;

                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance: Rs. %d\n", balance);
                }
                break;

            case 3:
                printf("\nEnter deposit amount: ");
                scanf("%d", &amount);

                if (amount <= 0)
                {
                    printf("Enter a valid amount!\n");
                }
                else
                {
                    balance = balance + amount;

                    transactions[count] = amount;
                    count++;

                    printf("Deposit Successful!\n");
                    printf("New Balance: Rs. %d\n", balance);
                }
                break;

            case 4:
                printf("\nEnter your current PIN: ");
                scanf("%d", &enteredPin);

                if (enteredPin == pin)
                {
                    printf("Enter your new PIN: ");
                    scanf("%d", &newPin);

                    if (newPin >= 1000 && newPin <= 9999
                        && newPin != pin)
                    {
                        pin = newPin;
                        printf("PIN changed successfully!\n");
                    }
                    else
                    {
                        printf("Enter a different 4-digit PIN!\n");
                    }
                }
                else
                {
                    printf("Incorrect current PIN!\n");
                }
                break;

            case 5:
                printf("\n===== TRANSACTION HISTORY =====\n");

                if (count == 0)
                {
                    printf("No transactions yet.\n");
                }
                else
                {
                    for (i = 0; i < count; i++)
                    {
                        if (transactions[i] < 0)
                        {
                            printf("Withdrawal: Rs. %d\n",
                                   -transactions[i]);
                        }
                        else
                        {
                            printf("Deposit: Rs. %d\n",
                                   transactions[i]);
                        }
                    }
                }
                break;

            case 6:
                printf("\nThank you for using Smart ATM!\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
