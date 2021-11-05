#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
Project: County library management system
Author: Kipkoech Michael Kiplangat
Date: Oct,2021
Compiler: GNU GCC
Language: C99
Licence: MIT
*/
int menu();
int main()


{
    int action;
    action = menu();
    execute_action(action);

    return 0;
}
void execute_action(int action) {
printf("You selected action %d",action);
}

int menu() // header / prototype
{
    int action;
    do {
    printf("\tCounty Library\n");
    printf("Welcome Mr. Michael.\n ");
    printf("What would you like to do?\n");
    printf("1. View Users.\n");
    printf("2. Add new user\n");
    printf("3. Edit user\n");
    printf("4. Delete user\n");
    printf("5. Change Password\n");
    printf("6. Log out\n");
    printf("7. Exit System\n");
    printf("selected action (1-7): ");
    scanf("%d",&action);
    if (action < 1 || action > 7) {
            system("cls");
        printf("Invalid action!!! Try again. \n");
    }
    } while (action < 1 || action > 7);
    return action;
    //body

}
