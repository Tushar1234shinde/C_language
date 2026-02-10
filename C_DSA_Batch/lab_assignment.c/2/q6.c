// 6. Write a C program that prints the following pattern, accept number of rows from user: 
// Example: Rows = 4. 
//       * 
//     * * * 
//   * * * * * 
// * * * * * * *

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("  ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("* ");
        }
        printf("\n");
    }

    // for(int i=n;i>0;i--){
    //     for(int j=0;j<n-i;j++){
    //         printf("  ");
    //     }
    //     for(int k=0;k<2*i-1;k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }   

}