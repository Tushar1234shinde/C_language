#include <stdio.h>
void main()
{
    int a;

    for (a = 1; a <= 50; a++)
    {
        if (a % 2 == 0)
        {

            printf("\nGiven number is even");
            printf("\nNumber is %d", a);
        }
        else
        {
            printf("\nGiven number is odd");
            printf("\nNumber is %d", a);
        }
    }
}