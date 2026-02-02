#include<stdio.h>
void passArray(int array[], int n){
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        printf("Element %d: %d\n",i,array[i]);
    }

}

void main(){
    int arr[5];
int num=5;
    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    passArray(arr,num); // Passing array to function
}