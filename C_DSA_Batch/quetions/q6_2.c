#include <stdio.h>
int main()
{
    int temp = 0;
    while (1)
    {
        
        printf("You want to add a number ?\n 1.Yes\n 2.No\n");
        int choice;
        scanf("%d", &choice);
       
            if (choice == 1)
            {
                int num;
                printf("Enter a number to add : ");
                scanf("%d", &num);
                temp += num;
                printf("Current total: %d\n", temp);
            }
            else
            {
                printf("Final total: %d\n", temp);
                return 0;
            }
        }
    
    return 0;
}