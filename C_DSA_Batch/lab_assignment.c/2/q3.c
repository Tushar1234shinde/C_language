// 3. Given an integer n (n > 0). Write a c program to find the sum of all the numbers of the 
// form n/p where p is a divisor of n and p ≥ 1.  
// Example: n = 20, divisors of 20 are 1, 2, 4, 5, 10, 20. So the answer would be 20/1 + 20/2 
// + 20/4 + 20/5 + 20/10 + 20/20 = 42.

#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int p;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (p = 1; p <= n; p++)
    {
        if (n % p == 0)
        {
            sum += n / p;
        }
    }

    printf("The sum is: %d\n", sum);
}