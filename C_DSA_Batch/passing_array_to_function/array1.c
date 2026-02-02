#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    void displayArray(int); // Function prototype

    for(int i=0;i<5;i++){
    displayArray(arr[i]); // Passing array to function
}
}

void displayArray(int a){
    printf("Element: %d\n",a);
}