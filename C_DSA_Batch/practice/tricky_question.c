#include <stdio.h>

// Function for function pointer example
void hello() {
    printf("Hello ");
}

// Function returning dangling pointer
int* fun() {
    int x = 10;
    return &x;
}

int main() {

    printf("\n--- 1. Pointer Arithmetic Trick ---\n");
    int a[] = {10, 20, 30, 40};
    int *p = a;
    printf("%d %d %d\n", *p, *(p + 1), *(p + 3));


    printf("\n--- 2. Pre vs Post Increment (Undefined Behavior) ---\n");
    int i = 5;
    printf("%d %d %d\n", i, i++, ++i);


    printf("\n--- 3. Array vs Pointer ---\n");
    int arr[] = {1, 2, 3};
    int *ptr = arr;
    printf("%lu %lu\n", sizeof(arr), sizeof(ptr));


    printf("\n--- 4. Function Pointer ---\n");
    void (*fp)() = hello;
    (*fp)();
    fp();
    printf("\n");


    printf("\n--- 5. String Modification Trap (May Crash) ---\n");
    char *str = "Hello";
    // str[0] = 'h'; // Uncommenting this may crash
    printf("%s\n", str);


    printf("\n--- 6. Swap Without Temp ---\n");
    int x = 5, y = 10;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d\n", x, y);


    printf("\n--- 7. sizeof with Expression ---\n");
    int z = 10;
    printf("%lu\n", sizeof(z++));


    printf("\n--- 8. Dangling Pointer (Undefined Behavior) ---\n");
    int *dp = fun();
    printf("%d\n", *dp); // risky


    printf("\n--- 9. Bitwise Left Shift ---\n");
    int b = 5;
    printf("%d\n", b << 1);


    printf("\n--- 10. Comma Operator ---\n");
    int c = (1, 2, 3);
    printf("%d\n", c);

    return 0;
}