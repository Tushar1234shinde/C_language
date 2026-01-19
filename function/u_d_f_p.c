// user define function with parameters example
#include <stdio.h>
void greet(char name[]){
    printf("Hello, %s! Welcome to the program!\n", name);
}
void add(int a, int b){
    printf("Addition: %d + %d = %d\n", a, b, a+b);
}
void sub(int a, int b){
    printf("Subtraction: %d - %d = %d\n", a, b, a-b);
}
void div(int a, int b){
    if(b != 0)
        printf("Division: %d / %d = %d\n", a, b, a/b);
    else
        printf("Division by zero is not allowed.\n");
}
void mul(int a, int b){
    printf("Multiplication: %d * %d = %d\n", a, b, a*b);
}
void main(){
    char name[] = "User";
    greet(name);
    add(5, 3);
    sub(5, 3);
    div(6, 3);
    mul(5, 3);
}