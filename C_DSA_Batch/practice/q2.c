#include <stdio.h>
int main()
{
    int id = 1;
    int pass = 1234;
    int u_id;
    int u_pass;
    printf("Enter your id: ");
    scanf("%d", &u_id);
    switch (u_id == id)
    {
    case 1:
        printf("Enter your password: ");
        scanf("%d", &u_pass);
        switch (u_pass == pass)
        {
        case 1:
            printf("Login successful!\n");
            return 0;
        case 0:
            printf("Incorrect password!\n");
            break;
        }
        break;
    case 0:
        printf("User ID not found!, Please retry again\n");
        printf("Enter your id: ");
        scanf("%d", &u_id);
        switch (u_id == id)
        {
        case 1:
            printf("Enter your password: ");
            scanf("%d", &u_pass);
            switch (u_pass == pass)
            {
            case 1:
                printf("Login successful!\n");
                return 0;
            case 0:
                printf("Incorrect password!\n");
                break;
            }
            break;
        case 0:
            printf("User ID not found!\n");
            break;
        }
        break;
    }
    return 0;
}