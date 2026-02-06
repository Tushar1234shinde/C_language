// 2. Write a program using a switch ( ) statement to print whether the steel passes the grading test. 
// Carbon content and tensile strength will be the input from user. The necessary conditions are:  
// a. Carbon content ≤ 0.7  
// b. Tensile strength ≥ 5000  
// Determine the result of the steel based on the following criteria:  
// Result = PASS, if conditions a and b are both satisfied  
// Result = FAIL, otherwise  
// Note: Do not use if-else anywhere in your program.
#include <stdio.h>

int main()
{
    float carbon;
    int tensile;

    printf("Enter carbon content: ");
    scanf("%f", &carbon);

    printf("Enter tensile strength: ");
    scanf("%d", &tensile);

    switch ((carbon <= 0.7) + (tensile >= 5000))
    {
        case 2:
            printf("Result: PASS\n");
            break;

        default:
            printf("Result: FAIL\n");
    }

    return 0;
}
