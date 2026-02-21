// 10. Mutual Fund Interest Comparison

// Alice → ₹24270 at 2% compound monthly
// Bob → ₹41940 at 6% simple monthly

#include <stdio.h>
#include <math.h>

int main() {

    double A = 24270, B = 41940;
    double compound, simple;
    int month = 0;

    // Check if monthly interest of A ever exceeds B
    while(month < 200) {
        month++;
        compound = A * (pow(1.02, month) - 1);
        simple = B * 0.06 * month;

        if(A * 0.02 * pow(1.02, month-1) > B * 0.06) {
            printf("Monthly interest of A exceeds B at month %d\n", month);
            break;
        }
    }

    // Find months where total earned interest nearly equal
    month = 0;
    while(1) {
        month++;
        compound = A * (pow(1.02, month) - 1);
        simple = B * 0.06 * month;

        if(fabs(compound - simple) <= 500)
            break;
    }

    printf("Months for total interest difference <= 500 : %d\n", month);

    return 0;
}
