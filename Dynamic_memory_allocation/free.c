#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int num;
    printf("Enter a number for malloc memory :");
    scanf("%d",&num);
    ptr = (int *)malloc(num*sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    *ptr = 50;
    printf("Value before free: %d\n", *ptr);

    // Free allocated memory
    free(ptr);

    printf("Memory freed successfully.\n");

    return 0;
}