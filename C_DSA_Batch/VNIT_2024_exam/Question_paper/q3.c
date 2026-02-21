// 3. Terms Required for Precision (5 decimal places)

// Series:(1^2/2^3)+(2^2/3^3)+(3^2/4^3)+...
#include <stdio.h>
#include <math.h>

int main() {
    double sum = 0.0, prevSum = 0.0;
    int n = 1;

    while(1) {
        sum += pow(n,2) / pow(n+1,3);

        if(fabs(sum - prevSum) < 0.00001)
            break;

        prevSum = sum;
        n++;
    }

    printf("Terms required = %d", n);
    return 0;
}
