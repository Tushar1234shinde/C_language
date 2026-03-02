#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

void push(int x) {
    if(top == SIZE - 1)
        printf("Stack Overflow\n");
    else {
        stack[++top] = x;
        printf("%d pushed\n", x);
    }
}

void pop() {
    if(top == -1)
        printf("Stack Underflow\n");
    else
        printf("%d popped\n", stack[top--]);
}

void display() {
    if(top == -1)
        printf("Stack is empty\n");
    else {
        for(int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int ch, x;

    while(1) {
        printf("\n1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d", &ch);

        switch(ch) {
            case 1: scanf("%d", &x); push(x); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
