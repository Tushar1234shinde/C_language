//user define d function example
#include <stdio.h>
void greet(){
    printf("Hello, welcome to the program!\n");
}   
void add(){
    int a=5, b=3;
    printf("Addition: %d + %d = %d\n", a, b, a+b);
}
void sub(){
    int a=5, b=3;
    printf("Subtraction: %d - %d = %d\n", a, b, a-b);
}
void div(){
    int a=6, b=3;
    printf("Division: %d / %d = %d\n", a, b, a/b);
}
void mul(){
    int a=5, b=3;
    printf("Multiplication: %d * %d = %d\n", a, b, a*b);
}
void main(){
    greet();
    add();
    sub();
    div();
    mul();
}