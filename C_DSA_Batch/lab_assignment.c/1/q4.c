// 4. Write a program which the user to type his own ID, if the ID is valid it will ask him to enter 
// his password, if the password is correct the program will print the name of the user, otherwise, 
// the program will print Incorrect Password and if the ID does not exist, the program will print 
// Incorrect ID. Implement using switch case. Consider single word user name.
#include <stdio.h>

int main()
{
    int id, password;

    printf("Enter ID: ");
    scanf("%d", &id);

    switch (id)
    {
        case 101:
            printf("Enter Password: ");
            scanf("%d", &password);

            switch (password)
            {
                case 111:
                    printf("Welcome Rahul\n");
                    break;
                default:
                    printf("Incorrect Password\n");
            }
            break;

        case 102:
            printf("Enter Password: ");
            scanf("%d", &password);

            switch (password)
            {
                case 222:
                    printf("Welcome Sneha\n");
                    break;
                default:
                    printf("Incorrect Password\n");
            }
            break;

        case 103:
            printf("Enter Password: ");
            scanf("%d", &password);

            switch (password)
            {
                case 333:
                    printf("Welcome Amit\n");
                    break;
                default:
                    printf("Incorrect Password\n");
            }
            break;

        default:
            printf("Incorrect ID\n");
    }

    return 0;
}
