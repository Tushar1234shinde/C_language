#include <stdio.h>

int main() {
    int a[100], n, key, low = 0, high, mid, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        printf("Element not found\n");

    return 0;
}
// Time complexity: O(log n)