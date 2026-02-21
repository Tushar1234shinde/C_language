// 9. Converging Series (Example Program Template)

// Since question does not clearly show series in PDF image,
// Below is generic converging series template (modify formula if needed)

#include <stdio.h>
#include <math.h>

int main() {
    double sum = 0.0, prevSum = 0.0;
    int n = 1;

    while(1) {
        sum += 1.0 / (n * n);   // Example series 1/n²

        if(fabs(sum - prevSum) < 0.0001)
            break;

        prevSum = sum;
        n++;
    }

    printf("Terms required = %d\n", n);
    printf("Sum (4 decimal accuracy) = %.4lf\n", sum);

    return 0;
}


//  Replace 1.0 / (n * n) with your actual series formula.