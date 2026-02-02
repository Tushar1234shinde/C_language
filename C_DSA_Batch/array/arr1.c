#include <stdio.h>
void main()
{
    // int age[3]={123,4567,688};
    int arr[3];
    // printf("%d\n",&age);
    //  printf("%d\n",age[0]);
    //   printf("%d\n",age[1]);
    //    printf("%d\n",age[2]);
    //     printf("%d\n",&age[3]);
    //      printf("%d\n",&age[4]);
    //       printf("%d\n",&age[5]);

    for (int j = 0; j <= 2; j++)
    {
        printf("\narr[%d] = ", j);
        scanf("%d", &arr[j]);
    }

    for (int i = 0; i <= 2; i++)
    {
        printf("%d\n", arr[i]);
    }
}