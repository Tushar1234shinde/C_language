#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i, n, newSize;

    printf("Enter initial size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &newSize);

    // Reallocate memory
    arr = (int *)realloc(arr, newSize * sizeof(int));

    printf("Enter %d new elements:\n", newSize - n);
    for (i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Final array:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}