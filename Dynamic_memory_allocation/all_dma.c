#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, newSize;
    int *arr;

    // Step 1: malloc()
    printf("Enter number of elements using malloc: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation using malloc failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements using malloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 2: realloc()
    printf("\n\nEnter new size using realloc: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter %d more elements:\n", newSize - n);
    for (i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements after realloc:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // Step 3: free()
    free(arr);
    printf("\n\nMemory freed successfully!\n");

    // Step 4: calloc()
    printf("\nEnter number of elements using calloc: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation using calloc failed!\n");
        return 1;
    }

    printf("Default values after calloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free again
    free(arr);
    printf("\nMemory freed again successfully!\n");

    return 0;
}