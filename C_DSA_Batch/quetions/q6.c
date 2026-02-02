#include <stdio.h>
int main()
{
    int temp = 0;

    for (int i = 1; i > 0; i++)
    {
    as:
        printf("Enter your choice: \n1.start\n2.stop\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Starting the process...\n");
            printf("Enter a number to add to temp: ");
            int input;
            scanf("%d", &input);

            temp += input;
            goto as;

        case 2:
            printf("Stopping the process. Final value of temp: %d\n", temp);
            return 0;
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            goto as;
        }
    }
}