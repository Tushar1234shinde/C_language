#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Memory allocation using calloc
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Default values after calloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // All values will be 0
    }

    // Free memory
    free(arr);

    return 0;
}